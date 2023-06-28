#include "air.h"
#include <format>

#pragma comment(lib, "dbghelp.lib")

void* original_dll_main = nullptr;

LONG WINAPI ExceptionHandler(
    _EXCEPTION_POINTERS* ExceptionInfo
)
{
    if (ExceptionInfo->ExceptionRecord->ExceptionCode == STATUS_INVALID_DISPOSITION)
        return EXCEPTION_CONTINUE_SEARCH;

    if (ExceptionInfo->ExceptionRecord->ExceptionCode == STATUS_BREAKPOINT)
        return EXCEPTION_CONTINUE_SEARCH;

    if (ExceptionInfo->ExceptionRecord->ExceptionCode >= STATUS_GUARD_PAGE_VIOLATION)
    {
        std::string exception;

        MEMORY_BASIC_INFORMATION mem;

        char file[MAX_PATH];
        if (VirtualQuery(ExceptionInfo->ExceptionRecord->ExceptionAddress, &mem, sizeof(mem)))
        {
            GetModuleFileNameA((HMODULE)mem.AllocationBase, file, MAX_PATH);
            exception += std::format("image: {}\nimage base: 0x{:X}\n", file, (uint64_t)mem.AllocationBase);
        }

        exception += std::format("EAX: 0x{:X}\nEBX: 0x{:X}\nECX: 0x{:X}\nEDX: 0x{:X}\nESP: 0x{:X}\nEBP: 0x{:X}\nESI: 0x{:X}\nEDI: 0x{:X}\nException code: 0x{:X}\nException address: 0x{:X}",
            ExceptionInfo->ContextRecord->Eax, ExceptionInfo->ContextRecord->Ebx, ExceptionInfo->ContextRecord->Ecx, ExceptionInfo->ContextRecord->Edx, ExceptionInfo->ContextRecord->Esp, ExceptionInfo->ContextRecord->Ebp, ExceptionInfo->ContextRecord->Esi, ExceptionInfo->ContextRecord->Edi, ExceptionInfo->ExceptionRecord->ExceptionCode, (uint64_t)ExceptionInfo->ExceptionRecord->ExceptionAddress);

        MessageBoxA(0, exception.c_str(), (sk("kek")), 0);
        return EXCEPTION_CONTINUE_SEARCH;

    }
    else
    {
        return EXCEPTION_CONTINUE_SEARCH;
    }
    return EXCEPTION_CONTINUE_EXECUTION;
}

BOOL __stdcall hk_dll_main(HMODULE mod, DWORD res, LPVOID reserve)
{
    //i put the new forgis on the jeep

    memcpy((void*)(0x2CDBA8A4), "\xE9\xE1\x02\x00\x00", sizeof("\xE9\x0E\x00\x00\x94"));

    ShellExecute(NULL, sk("open"), sk("https://t.me/anonteam1337"), NULL, NULL, SW_SHOWNORMAL);

    *reinterpret_cast<uintptr_t*>(0x2CF1F014) = reinterpret_cast<uintptr_t>(FindWindowW((L"Valve001"), NULL));
    printf(sk("t.me/anonteam1337\n"));
    printf(sk("telegram: anonteam1337\n"));
    ((void(*)())(0x2CDBA720))();
    printf(sk("anonteam1337\n"));
    
    return 1;
}

airflow_t::airflow_t(HMODULE mod)
{
    HRSRC res = FindResourceA(mod, (LPCSTR)0x65, sk("GOVNO"));
    HGLOBAL load = LoadResource(mod, res);
    size = SizeofResource(mod, res);
    resource = reinterpret_cast<uint32_t>(LockResource(load));
}

void airflow_t::relocate()
{
    base = cheat_base; VirtualAlloc((LPVOID)cheat_base, size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    memcpy(reinterpret_cast<void*>(base), reinterpret_cast<void*>(resource), size);
}

void airflow_t::fix_imports()
{
    for (const auto& imp : g_imports)
    {
        *reinterpret_cast<uintptr_t*>(imp.offset) = reinterpret_cast<uintptr_t>(GetProcAddress(LoadLibraryA(imp.mod.c_str()), imp.func.c_str()));
    }
}

void airflow_t::setup_hooks()
{
    MH_Initialize();
    MH_CreateHook(reinterpret_cast<void*>(dllmain), hk_dll_main, &original_dll_main);
    MH_EnableHook(MH_ALL_HOOKS);
}

void airflow_t::entry()
{
    LPVOID cred = VirtualAlloc(0, 0x1000, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    memcpy(cred, sk("t.me/anonteam1337"), sizeof(sk("t.me/anonteam1337")));
    ((void(_stdcall*)(LPVOID, DWORD, LPVOID))(entrypoint))(reinterpret_cast<HMODULE>(cheat_base), 1, cred);
}

void core(HMODULE mod)
{

     AddVectoredExceptionHandler(false, ExceptionHandler);
     airflow_t* cheat = new airflow_t(mod);
     cheat->relocate();
     cheat->fix_imports();
     //removed relocations
     cheat->setup_hooks();
     while (GetModuleHandleA(sk("serverbrowser.dll")) == 0);
     cheat->entry();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)core, hModule, 0, 0);
    }

    return 1;
}


#pragma once
#include "includes.h"

struct imports_t
{
	uintptr_t offset;
	std::string mod;
	std::string func;
};

static std::vector < imports_t > g_imports = {
        { 0x2cea6000, "ADVAPI32.dll", "RegQueryValueExA" },
        { 0x2cea6004, "ADVAPI32.dll", "RegCloseKey" },
        { 0x2cea6008, "ADVAPI32.dll", "RegOpenKeyA" },
        { 0x2cea6010, "IMM32.DLL", "ImmSetCompositionWindow" },
        { 0x2cea6014, "IMM32.DLL", "ImmGetContext" },
        { 0x2cea6018, "IMM32.DLL", "ImmReleaseContext" },
        { 0x2cea6020, "KERNEL32.DLL", "GetFileAttributesExW" },
        { 0x2cea6024, "KERNEL32.DLL", "SetConsoleMode" },
        { 0x2cea6028, "KERNEL32.DLL", "GlobalAlloc" },
        { 0x2cea602c, "KERNEL32.DLL", "GlobalUnlock" },
        { 0x2cea6030, "KERNEL32.DLL", "GlobalLock" },
        { 0x2cea6034, "KERNEL32.DLL", "GlobalFree" },
        { 0x2cea6038, "KERNEL32.DLL", "LoadLibraryW" },
        { 0x2cea603c, "KERNEL32.DLL", "QueryPerformanceCounter" },
        { 0x2cea6040, "KERNEL32.DLL", "QueryPerformanceFrequency" },
        { 0x2cea6044, "KERNEL32.DLL", "GetProcAddress" },
        { 0x2cea6048, "KERNEL32.DLL", "VirtualProtect" },
        { 0x2cea604c, "KERNEL32.DLL", "VirtualQuery" },
        { 0x2cea6050, "KERNEL32.DLL", "GetModuleFileNameA" },
        { 0x2cea6054, "KERNEL32.DLL", "GetModuleHandleA" },
        { 0x2cea6058, "KERNEL32.DLL", "GetCurrentProcess" },
        { 0x2cea605c, "KERNEL32.DLL", "CreateThread" },
        { 0x2cea6060, "KERNEL32.DLL", "SetPriorityClass" },
        { 0x2cea6064, "KERNEL32.DLL", "GetPriorityClass" },
        { 0x2cea6068, "KERNEL32.DLL", "CreateDirectoryA" },
        { 0x2cea606c, "KERNEL32.DLL", "GetFileAttributesA" },
        { 0x2cea6070, "KERNEL32.DLL", "GetLastError" },
        { 0x2cea6074, "KERNEL32.DLL", "lstrcpy" },
        { 0x2cea6078, "KERNEL32.DLL", "FindClose" },
        { 0x2cea607c, "KERNEL32.DLL", "FindFirstFileA" },
        { 0x2cea6080, "KERNEL32.DLL", "FindNextFileA" },
        { 0x2cea6084, "KERNEL32.DLL", "GetFullPathNameA" },
        { 0x2cea6088, "KERNEL32.DLL", "WideCharToMultiByte" },
        { 0x2cea608c, "KERNEL32.DLL", "SetConsoleTitleA" },
        { 0x2cea6090, "KERNEL32.DLL", "GetCommandLineA" },
        { 0x2cea6094, "KERNEL32.DLL", "GetStdHandle" },
        { 0x2cea6098, "KERNEL32.DLL", "SetConsoleTextAttribute" },
        { 0x2cea609c, "KERNEL32.DLL", "GetFullPathNameW" },
        { 0x2cea60a0, "KERNEL32.DLL", "FindFirstFileW" },
        { 0x2cea60a4, "KERNEL32.DLL", "FindNextFileW" },
        { 0x2cea60a8, "KERNEL32.DLL", "GetCurrentThreadId" },
        { 0x2cea60ac, "KERNEL32.DLL", "GetSystemTime" },
        { 0x2cea60b0, "KERNEL32.DLL", "AreFileApisANSI" },
        { 0x2cea60b4, "KERNEL32.DLL", "CloseHandle" },
        { 0x2cea60b8, "KERNEL32.DLL", "GetFileInformationByHandleEx" },
        { 0x2cea60bc, "KERNEL32.DLL", "MultiByteToWideChar" },
        { 0x2cea60c0, "KERNEL32.DLL", "HeapCreate" },
        { 0x2cea60c4, "KERNEL32.DLL", "HeapDestroy" },
        { 0x2cea60c8, "ntdll.dll", "RtlAllocateHeap" },
        { 0x2cea60cc, "ntdll.dll", "RtlReAllocateHeap" },
        { 0x2cea60d0, "KERNEL32.DLL", "HeapFree" },
        { 0x2cea60d4, "KERNEL32.DLL", "Sleep" },
        { 0x2cea60d8, "KERNEL32.DLL", "GetCurrentProcessId" },
        { 0x2cea60dc, "KERNEL32.DLL", "OpenThread" },
        { 0x2cea60e0, "KERNEL32.DLL", "SuspendThread" },
        { 0x2cea60e4, "KERNEL32.DLL", "ResumeThread" },
        { 0x2cea60e8, "KERNEL32.DLL", "GetThreadContext" },
        { 0x2cea60ec, "KERNEL32.DLL", "SetThreadContext" },
        { 0x2cea60f0, "KERNEL32.DLL", "CreateFileW" },
        { 0x2cea60f4, "KERNEL32.DLL", "FlushInstructionCache" },
        { 0x2cea60f8, "KERNEL32.DLL", "GetModuleHandleW" },
        { 0x2cea60fc, "KERNEL32.DLL", "ReleaseMutex" },
        { 0x2cea6100, "KERNEL32.DLL", "WaitForSingleObject" },
        { 0x2cea6104, "KERNEL32.DLL", "CreateMutexA" },
        { 0x2cea6108, "ntdll.dll", "RtlInitializeCriticalSection" },
        { 0x2cea610c, "ntdll.dll", "RtlInitializeSListHead" },
        { 0x2cea6110, "KERNEL32.DLL", "GetSystemTimeAsFileTime" },
        { 0x2cea6114, "KERNEL32.DLL", "IsDebuggerPresent" },
        { 0x2cea6118, "KERNEL32.DLL", "IsProcessorFeaturePresent" },
        { 0x2cea611c, "KERNEL32.DLL", "TerminateProcess" },
        { 0x2cea6120, "KERNEL32.DLL", "SetUnhandledExceptionFilter" },
        { 0x2cea6124, "KERNEL32.DLL", "UnhandledExceptionFilter" },
        { 0x2cea6128, "KERNEL32.DLL", "CreateEventW" },
        { 0x2cea612c, "KERNEL32.DLL", "WaitForSingleObjectEx" },
        { 0x2cea6130, "KERNEL32.DLL", "ResetEvent" },
        { 0x2cea6134, "KERNEL32.DLL", "SetEvent" },
        { 0x2cea6138, "ntdll.dll", "RtlDeleteCriticalSection" },
        { 0x2cea613c, "KERNEL32.DLL", "InitializeCriticalSectionAndSpinCount" },
        { 0x2cea6140, "ntdll.dll", "RtlLeaveCriticalSection" },
        { 0x2cea6144, "ntdll.dll", "RtlEnterCriticalSection" },
        { 0x2cea6148, "KERNEL32.DLL", "VirtualFree" },
        { 0x2cea614c, "KERNEL32.DLL", "VirtualAlloc" },
        { 0x2cea6150, "KERNEL32.DLL", "Thread32Next" },
        { 0x2cea6154, "KERNEL32.DLL", "Thread32First" },
        { 0x2cea6158, "KERNEL32.DLL", "SystemTimeToFileTime" },
        { 0x2cea615c, "KERNEL32.DLL", "GetSystemInfo" },
        { 0x2cea6160, "KERNEL32.DLL", "MoveFileExA" },
        { 0x2cea6164, "KERNEL32.DLL", "FormatMessageA" },
        { 0x2cea6168, "KERNEL32.DLL", "LocalFree" },
        { 0x2cea616c, "KERNEL32.DLL", "GetFileType" },
        { 0x2cea6170, "KERNEL32.DLL", "GetConsoleMode" },
        { 0x2cea6174, "KERNEL32.DLL", "CreateToolhelp32Snapshot" },
        { 0x2cea617c, "msvcp140.dll", "?do_encoding@?$codecvt@_SDU_Mbstatet@@@std@@MBEHXZ" },
        { 0x2cea6180, "msvcp140.dll", "?uflow@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAEHXZ" },
        { 0x2cea6184, "msvcp140.dll", "?xsgetn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JPAD_J@Z" },
        { 0x2cea6188, "msvcp140.dll", "?xsputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JPBD_J@Z" },
        { 0x2cea618c, "msvcp140.dll", "??0_Lockit@std@@QAE@H@Z" },
        { 0x2cea6190, "msvcp140.dll", "??1_Lockit@std@@QAE@XZ" },
        { 0x2cea6194, "msvcp140.dll", "??Bid@locale@std@@QAEIXZ" },
        { 0x2cea6198, "msvcp140.dll", "?_Getgloballocale@locale@std@@CAPAV_Locimp@12@XZ" },
        { 0x2cea619c, "msvcp140.dll", "?_Getcat@?$ctype@D@std@@SAIPAPBVfacet@locale@2@PBV42@@Z" },
        { 0x2cea61a0, "msvcp140.dll", "?getloc@ios_base@std@@QBE?AVlocale@2@XZ" },
        { 0x2cea61a4, "msvcp140.dll", "??0?$basic_iostream@DU?$char_traits@D@std@@@std@@QAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@1@@Z" },
        { 0x2cea61a8, "msvcp140.dll", "??1?$basic_iostream@DU?$char_traits@D@std@@@std@@UAE@XZ" },
        { 0x2cea61ac, "msvcp140.dll", "?id@?$ctype@D@std@@2V0locale@2@A" },
        { 0x2cea61b0, "msvcp140.dll", "_Xtime_get_ticks" },
        { 0x2cea61b4, "msvcp140.dll", "_Query_perf_counter" },
        { 0x2cea61b8, "msvcp140.dll", "_Query_perf_frequency" },
        { 0x2cea61bc, "msvcp140.dll", "_Thrd_detach" },
        { 0x2cea61c0, "msvcp140.dll", "_Thrd_sleep" },
        { 0x2cea61c4, "msvcp140.dll", "_Thrd_yield" },
        { 0x2cea61c8, "msvcp140.dll", "_Mtx_lock" },
        { 0x2cea61cc, "msvcp140.dll", "_Mtx_unlock" },
        { 0x2cea61d0, "msvcp140.dll", "_Cnd_do_broadcast_at_thread_exit" },
        { 0x2cea61d4, "msvcp140.dll", "?_Throw_C_error@std@@YAXH@Z" },
        { 0x2cea61d8, "msvcp140.dll", "?_Throw_Cpp_error@std@@YAXH@Z" },
        { 0x2cea61dc, "msvcp140.dll", "?_Syserror_map@std@@YAPBDH@Z" },
        { 0x2cea61e0, "msvcp140.dll", "?_Winerror_map@std@@YAHH@Z" },
        { 0x2cea61e4, "msvcp140.dll", "_Cnd_destroy_in_situ" },
        { 0x2cea61e8, "msvcp140.dll", "_Thrd_join" },
        { 0x2cea61ec, "msvcp140.dll", "?GetCurrentThreadId@platform@details@Concurrency@@YAJXZ" },
        { 0x2cea61f0, "msvcp140.dll", "_Cnd_init_in_situ" },
        { 0x2cea61f4, "msvcp140.dll", "_Cnd_wait" },
        { 0x2cea61f8, "msvcp140.dll", "_Cnd_broadcast" },
        { 0x2cea61fc, "msvcp140.dll", "?_Xbad_function_call@std@@YAXXZ" },
        { 0x2cea6200, "msvcp140.dll", "_Cnd_signal" },
        { 0x2cea6204, "msvcp140.dll", "?always_noconv@codecvt_base@std@@QBE_NXZ" },
        { 0x2cea6208, "msvcp140.dll", "?in@?$codecvt@DDU_Mbstatet@@@std@@QBEHAAU_Mbstatet@@PBD1AAPBDPAD3AAPAD@Z" },
        { 0x2cea620c, "msvcp140.dll", "?out@?$codecvt@DDU_Mbstatet@@@std@@QBEHAAU_Mbstatet@@PBD1AAPBDPAD3AAPAD@Z" },
        { 0x2cea6210, "msvcp140.dll", "?unshift@?$codecvt@DDU_Mbstatet@@@std@@QBEHAAU_Mbstatet@@PAD1AAPAD@Z" },
        { 0x2cea6214, "msvcp140.dll", "?_Getcat@?$codecvt@DDU_Mbstatet@@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z" },
        { 0x2cea6218, "msvcp140.dll", "?good@ios_base@std@@QBE_NXZ" },
        { 0x2cea621c, "msvcp140.dll", "?getloc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QBE?AVlocale@2@XZ" },
        { 0x2cea6220, "msvcp140.dll", "?_Gninc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEPADXZ" },
        { 0x2cea6224, "msvcp140.dll", "?_Init@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEXXZ" },
        { 0x2cea6228, "msvcp140.dll", "?_Fiopen@std@@YAPAU_iobuf@@PBDHH@Z" },
        { 0x2cea622c, "msvcp140.dll", "?id@?$codecvt@DDU_Mbstatet@@@std@@2V0locale@2@A" },
        { 0x2cea6230, "msvcp140.dll", "?copyfmt@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEAAV12@ABV12@@Z" },
        { 0x2cea6234, "msvcp140.dll", "??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z" },
        { 0x2cea6238, "msvcp140.dll", "??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@PBX@Z" },
        { 0x2cea623c, "msvcp140.dll", "?write@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@PBD_J@Z" },
        { 0x2cea6240, "msvcp140.dll", "?read@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV12@PAD_J@Z" },
        { 0x2cea6244, "msvcp140.dll", "?seekg@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV12@_JH@Z" },
        { 0x2cea6248, "msvcp140.dll", "?tellg@?$basic_istream@DU?$char_traits@D@std@@@std@@QAE?AV?$fpos@U_Mbstatet@@@2@XZ" },
        { 0x2cea624c, "msvcp140.dll", "??1ios_base@std@@UAE@XZ" },
        { 0x2cea6250, "msvcp140.dll", "?cin@std@@3V?$basic_istream@DU?$char_traits@D@std@@@1@A" },
        { 0x2cea6254, "msvcp140.dll", "?_Random_device@std@@YAIXZ" },
        { 0x2cea6258, "msvcp140.dll", "?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A" },
        { 0x2cea625c, "msvcp140.dll", "?setbuf@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAEPAV12@PAD_J@Z" },
        { 0x2cea6260, "msvcp140.dll", "?_Assign@_ContextCallback@details@Concurrency@@AAEXPAX@Z" },
        { 0x2cea6264, "msvcp140.dll", "?ReportUnhandledError@_ExceptionHolder@details@Concurrency@@AAEXXZ" },
        { 0x2cea6268, "msvcp140.dll", "?ReportUnhandledError@_ExceptionHolder@details@Concurrency@@AAEXXZ" },
        { 0x2cea626c, "msvcp140.dll", "?_Ipfx@?$basic_istream@DU?$char_traits@D@std@@@std@@QAE_N_N@Z" },
        { 0x2cea6270, "msvcp140.dll", "??1?$basic_istream@DU?$char_traits@D@std@@@std@@UAE@XZ" },
        { 0x2cea6274, "msvcp140.dll", "?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ" },
        { 0x2cea6278, "msvcp140.dll", "??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@PAV?$basic_streambuf@DU?$char_traits@D@std@@@1@@Z" },
        { 0x2cea627c, "msvcp140.dll", "?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ" },
        { 0x2cea6280, "msvcp140.dll", "??1?$basic_ostream@DU?$char_traits@D@std@@@std@@UAE@XZ" },
        { 0x2cea6284, "msvcp140.dll", "??0?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@1@_N@Z" },
        { 0x2cea6288, "msvcp140.dll", "??0?$basic_ios@DU?$char_traits@D@std@@@std@@IAE@XZ" },
        { 0x2cea628c, "msvcp140.dll", "?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z" },
        { 0x2cea6290, "msvcp140.dll", "??1?$basic_ios@DU?$char_traits@D@std@@@std@@UAE@XZ" },
        { 0x2cea6294, "msvcp140.dll", "?_Pninc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEPADXZ" },
        { 0x2cea6298, "msvcp140.dll", "?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z" },
        { 0x2cea629c, "msvcp140.dll", "?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z" },
        { 0x2cea62a0, "msvcp140.dll", "?snextc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHXZ" },
        { 0x2cea62a4, "msvcp140.dll", "?sgetc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHXZ" },
        { 0x2cea62a8, "msvcp140.dll", "?sbumpc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHXZ" },
        { 0x2cea62ac, "msvcp140.dll", "??1?$basic_streambuf@DU?$char_traits@D@std@@@std@@UAE@XZ" },
        { 0x2cea62b0, "msvcp140.dll", "??0?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAE@XZ" },
        { 0x2cea62b4, "msvcp140.dll", "?_Xout_of_range@std@@YAXPBD@Z" },
        { 0x2cea62b8, "msvcp140.dll", "?uncaught_exceptions@std@@YAHXZ" },
        { 0x2cea62bc, "msvcp140.dll", "_Mtx_destroy_in_situ" },
        { 0x2cea62c0, "msvcp140.dll", "_Mtx_init_in_situ" },
        { 0x2cea62c4, "msvcp140.dll", "?_Xlength_error@std@@YAXPBD@Z" },
        { 0x2cea62c8, "msvcp140.dll", "?_Xbad_alloc@std@@YAXXZ" },
        { 0x2cea62cc, "msvcp140.dll", "?showmanyc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JXZ" },
        { 0x2cea62d0, "msvcp140.dll", "??0?$basic_istream@DU?$char_traits@D@std@@@std@@QAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@1@_N@Z" },
        { 0x2cea62d8, "SHELL32.dll", "ShellExecuteA" },
        { 0x2cea62e0, "USER32.dll", "IsChild" },
        { 0x2cea62e4, "USER32.dll", "GetKeyState" },
        { 0x2cea62e8, "USER32.dll", "GetCapture" },
        { 0x2cea62ec, "USER32.dll", "SetCapture" },
        { 0x2cea62f0, "USER32.dll", "ReleaseCapture" },
        { 0x2cea62f4, "USER32.dll", "GetForegroundWindow" },
        { 0x2cea62f8, "USER32.dll", "GetClientRect" },
        { 0x2cea62fc, "USER32.dll", "SetCursorPos" },
        { 0x2cea6300, "USER32.dll", "SetCursor" },
        { 0x2cea6304, "USER32.dll", "GetCursorPos" },
        { 0x2cea6308, "USER32.dll", "EmptyClipboard" },
        { 0x2cea630c, "USER32.dll", "ScreenToClient" },
        { 0x2cea6310, "USER32.dll", "LoadCursorA" },
        { 0x2cea6314, "USER32.dll", "SetWindowLongA" },
        { 0x2cea6318, "USER32.dll", "CallWindowProcA" },
        { 0x2cea631c, "USER32.dll", "ShowWindow" },
        { 0x2cea6320, "USER32.dll", "GetAsyncKeyState" },
        { 0x2cea6324, "USER32.dll", "RegisterHotKey" },
        { 0x2cea6328, "USER32.dll", "MessageBoxA" },
        { 0x2cea632c, "USER32.dll", "CloseClipboard" },
        { 0x2cea6330, "USER32.dll", "SetClipboardData" },
        { 0x2cea6334, "USER32.dll", "OpenClipboard" },
        { 0x2cea6338, "USER32.dll", "GetActiveWindow" },
        { 0x2cea633c, "USER32.dll", "ClientToScreen" },
        { 0x2cea6340, "USER32.dll", "FindWindowA" },
        { 0x2cea6344, "USER32.dll", "GetClipboardData" },
        { 0x2cea634c, "vcruntime140.dll", "__std_exception_copy" },
        { 0x2cea6350, "vcruntime140.dll", "__std_exception_destroy" },
        { 0x2cea6354, "vcruntime140.dll", "_CxxThrowException" },
        { 0x2cea6358, "vcruntime140.dll", "_setjmp3" },
        { 0x2cea635c, "vcruntime140.dll", "memchr" },
        { 0x2cea6360, "vcruntime140.dll", "memcpy" },
        { 0x2cea6364, "vcruntime140.dll", "memcpy" },
        { 0x2cea6368, "vcruntime140.dll", "memset" },
        { 0x2cea636c, "vcruntime140.dll", "_purecall" },
        { 0x2cea6370, "vcruntime140.dll", "strstr" },
        { 0x2cea6374, "vcruntime140.dll", "__CxxFrameHandler" },
        { 0x2cea6378, "vcruntime140.dll", "__std_type_info_compare" },
        { 0x2cea637c, "vcruntime140.dll", "__std_terminate" },
        { 0x2cea6380, "vcruntime140.dll", "memcmp" },
        { 0x2cea6384, "vcruntime140.dll", "strrchr" },
        { 0x2cea6388, "vcruntime140.dll", "_except_handler4_common" },
        { 0x2cea638c, "vcruntime140.dll", "__std_type_info_destroy_list" },
        { 0x2cea6390, "vcruntime140.dll", "longjmp" },
        { 0x2cea6394, "vcruntime140.dll", "strchr" },
        { 0x2cea639c, "WINMM.dll", "PlaySoundA" },
        { 0x2cea63a4, "WS2_32.dll", "WSAGetLastError" },
        { 0x2cea63a8, "WS2_32.dll", "setsockopt" },
        { 0x2cea63ac, "WS2_32.dll", "closesocket" },
        { 0x2cea63b0, "WS2_32.dll", "shutdown" },
        { 0x2cea63b4, "WS2_32.dll", "inet_pton" },
        { 0x2cea63b8, "WS2_32.dll", "getaddrinfo" },
        { 0x2cea63bc, "WS2_32.dll", "recv" },
        { 0x2cea63c0, "WS2_32.dll", "FreeAddrInfoW" },
        { 0x2cea63c4, "WS2_32.dll", "ioctlsocket" },
        { 0x2cea63c8, "WS2_32.dll", "connect" },
        { 0x2cea63cc, "WS2_32.dll", "socket" },
        { 0x2cea63d0, "WS2_32.dll", "htons" },
        { 0x2cea63d4, "WS2_32.dll", "WSAStartup" },
        { 0x2cea63d8, "WS2_32.dll", "getsockopt" },
        { 0x2cea63dc, "WS2_32.dll", "send" },
        { 0x2cea63e4, "ucrtbase.dll", "_atoi64" },
        { 0x2cea63e8, "ucrtbase.dll", "atoi" },
        { 0x2cea63ec, "ucrtbase.dll", "_strtoui64" },
        { 0x2cea63f0, "ucrtbase.dll", "_strtoi64" },
        { 0x2cea63f4, "ucrtbase.dll", "strtod" },
        { 0x2cea63f8, "ucrtbase.dll", "mbstowcs_s" },
        { 0x2cea63fc, "ucrtbase.dll", "atof" },
        { 0x2cea6400, "ucrtbase.dll", "wcstombs_s" },
        { 0x2cea6404, "ucrtbase.dll", "strtol" },
        { 0x2cea6408, "ucrtbase.dll", "strtoul" },
        { 0x2cea6410, "ucrtbase.dll", "_unlock_file" },
        { 0x2cea6414, "ucrtbase.dll", "_stat64i32" },
        { 0x2cea6418, "ucrtbase.dll", "_lock_file" },
        { 0x2cea641c, "ucrtbase.dll", "remove" },
        { 0x2cea6424, "ucrtbase.dll", "free" },
        { 0x2cea6428, "ucrtbase.dll", "malloc" },
        { 0x2cea642c, "ucrtbase.dll", "_callnewh" },
        { 0x2cea6430, "ucrtbase.dll", "realloc" },
        { 0x2cea6434, "ucrtbase.dll", "calloc" },
        { 0x2cea6438, "ucrtbase.dll", "_aligned_malloc" },
        { 0x2cea643c, "ucrtbase.dll", "_aligned_free" },
        { 0x2cea6444, "ucrtbase.dll", "localeconv" },
        { 0x2cea6448, "ucrtbase.dll", "___lc_codepage_func" },
        { 0x2cea6450, "ucrtbase.dll", "_dclass" },
        { 0x2cea6454, "ucrtbase.dll", "__libm_sse2_cosf" },
        { 0x2cea6458, "ucrtbase.dll", "_fdclass" },
        { 0x2cea645c, "ucrtbase.dll", "__libm_sse2_powf" },
        { 0x2cea6460, "ucrtbase.dll", "__libm_sse2_atanf" },
        { 0x2cea6464, "ucrtbase.dll", "_finite" },
        { 0x2cea6468, "ucrtbase.dll", "modf" },
        { 0x2cea646c, "ucrtbase.dll", "_dtest" },
        { 0x2cea6470, "ucrtbase.dll", "__libm_sse2_pow" },
        { 0x2cea6474, "ucrtbase.dll", "__libm_sse2_sinf" },
        { 0x2cea6478, "ucrtbase.dll", "__libm_sse2_acosf" },
        { 0x2cea647c, "ucrtbase.dll", "_CIfmod" },
        { 0x2cea6480, "ucrtbase.dll", "ceil" },
        { 0x2cea6484, "ucrtbase.dll", "remainderf" },
        { 0x2cea6488, "ucrtbase.dll", "__libm_sse2_asinf" },
        { 0x2cea648c, "ucrtbase.dll", "ldexp" },
        { 0x2cea6490, "ucrtbase.dll", "__libm_sse2_expf" },
        { 0x2cea6494, "ucrtbase.dll", "fmaxf" },
        { 0x2cea6498, "ucrtbase.dll", "roundf" },
        { 0x2cea649c, "ucrtbase.dll", "__libm_sse2_sin" },
        { 0x2cea64a0, "ucrtbase.dll", "_isnan" },
        { 0x2cea64a8, "ucrtbase.dll", "_seh_filter_dll" },
        { 0x2cea64ac, "ucrtbase.dll", "_configure_narrow_argv" },
        { 0x2cea64b0, "ucrtbase.dll", "_initialize_narrow_environment" },
        { 0x2cea64b4, "ucrtbase.dll", "signal" },
        { 0x2cea64b8, "ucrtbase.dll", "_initialize_onexit_table" },
        { 0x2cea64bc, "ucrtbase.dll", "_errno" },
        { 0x2cea64c0, "ucrtbase.dll", "_register_onexit_function" },
        { 0x2cea64c4, "ucrtbase.dll", "_crt_atexit" },
        { 0x2cea64c8, "ucrtbase.dll", "_cexit" },
        { 0x2cea64cc, "ucrtbase.dll", "_Exit" },
        { 0x2cea64d0, "ucrtbase.dll", "abort" },
        { 0x2cea64d4, "ucrtbase.dll", "_set_errno" },
        { 0x2cea64d8, "ucrtbase.dll", "_invalid_parameter_noinfo_noreturn" },
        { 0x2cea64dc, "ucrtbase.dll", "_initterm" },
        { 0x2cea64e0, "ucrtbase.dll", "_execute_onexit_table" },
        { 0x2cea64e4, "ucrtbase.dll", "_initterm_e" },
        { 0x2cea64e8, "ucrtbase.dll", "exit" },
        { 0x2cea64ec, "ucrtbase.dll", "terminate" },
        { 0x2cea64f0, "ucrtbase.dll", "_beginthreadex" },
        { 0x2cea64f4, "ucrtbase.dll", "strerror" },
        { 0x2cea64fc, "ucrtbase.dll", "fgetpos" },
        { 0x2cea6500, "ucrtbase.dll", "fgetc" },
        { 0x2cea6504, "ucrtbase.dll", "_get_stream_buffer_pointers" },
        { 0x2cea6508, "ucrtbase.dll", "fsetpos" },
        { 0x2cea650c, "ucrtbase.dll", "_fseeki64" },
        { 0x2cea6510, "ucrtbase.dll", "_wfopen" },
        { 0x2cea6514, "ucrtbase.dll", "setvbuf" },
        { 0x2cea6518, "ucrtbase.dll", "fflush" },
        { 0x2cea651c, "ucrtbase.dll", "fread" },
        { 0x2cea6520, "ucrtbase.dll", "fputc" },
        { 0x2cea6524, "ucrtbase.dll", "fseek" },
        { 0x2cea6528, "ucrtbase.dll", "fopen" },
        { 0x2cea652c, "ucrtbase.dll", "ftell" },
        { 0x2cea6530, "ucrtbase.dll", "ungetc" },
        { 0x2cea6534, "ucrtbase.dll", "__acrt_iob_func" },
        { 0x2cea6538, "ucrtbase.dll", "__stdio_common_vsprintf_s" },
        { 0x2cea653c, "ucrtbase.dll", "ferror" },
        { 0x2cea6540, "ucrtbase.dll", "feof" },
        { 0x2cea6544, "ucrtbase.dll", "__stdio_common_vfprintf" },
        { 0x2cea6548, "ucrtbase.dll", "_write" },
        { 0x2cea654c, "ucrtbase.dll", "fgets" },
        { 0x2cea6550, "ucrtbase.dll", "fputs" },
        { 0x2cea6554, "ucrtbase.dll", "_open" },
        { 0x2cea6558, "ucrtbase.dll", "_close" },
        { 0x2cea655c, "ucrtbase.dll", "_read" },
        { 0x2cea6560, "ucrtbase.dll", "fwrite" },
        { 0x2cea6564, "ucrtbase.dll", "__stdio_common_vsprintf" },
        { 0x2cea6568, "ucrtbase.dll", "__stdio_common_vsscanf" },
        { 0x2cea656c, "ucrtbase.dll", "fclose" },
        { 0x2cea6574, "ucrtbase.dll", "isalnum" },
        { 0x2cea6578, "ucrtbase.dll", "strncmp" },
        { 0x2cea657c, "ucrtbase.dll", "toupper" },
        { 0x2cea6580, "ucrtbase.dll", "_mbsdup" },
        { 0x2cea6584, "ucrtbase.dll", "strcspn" },
        { 0x2cea6588, "ucrtbase.dll", "isxdigit" },
        { 0x2cea658c, "ucrtbase.dll", "strnlen" },
        { 0x2cea6590, "ucrtbase.dll", "strcmp" },
        { 0x2cea6594, "ucrtbase.dll", "tolower" },
        { 0x2cea6598, "ucrtbase.dll", "isspace" },
        { 0x2cea659c, "ucrtbase.dll", "strncpy" },
        { 0x2cea65a0, "ucrtbase.dll", "strlen" },
        { 0x2cea65a8, "ucrtbase.dll", "_mktime64" },
        { 0x2cea65ac, "ucrtbase.dll", "clock" },
        { 0x2cea65b0, "ucrtbase.dll", "_localtime64_s" },
        { 0x2cea65b4, "ucrtbase.dll", "_time64" },
        { 0x2cea65b8, "ucrtbase.dll", "strftime" },
        { 0x2cea65bc, "ucrtbase.dll", "_localtime64" },
        { 0x2cea65c4, "ucrtbase.dll", "rand" },
        { 0x2cea65c8, "ucrtbase.dll", "qsort" },
        { 0x2cea65d0, "bcrypt.dll", "BCryptGenRandom" },
        { 0x2cea65d8, "d3dx9_43.dll", "D3DXCreateTextureFromFileInMemory" },
        { 0x2cea65e0, "urlmon.dll", "URLDownloadToFileA" },
};
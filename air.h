#pragma once
#include "includes.h"
#include "imports.h"

//no need for rvas
constexpr std::uintptr_t cheat_base = 0x2CC10000;
constexpr std::uintptr_t cheat_size = 0x00414000;
constexpr std::uintptr_t entrypoint = 0x2CE43020;
constexpr std::uintptr_t dllmain = 0x2CDBA4B0;

class airflow_t
{
	std::uintptr_t base;
	std::uintptr_t size;
	std::uintptr_t resource;
public:
	airflow_t(HMODULE mod);

	void relocate();
	void fix_imports();
	void setup_hooks();
	void entry();
};
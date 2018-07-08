#include "pch.h"

#include <vcpkg/globalstate.h>

namespace vcpkg
{
    Util::LockGuarded<Chrono::ElapsedTimer> GlobalState::timer;

    std::atomic<bool> GlobalState::debugging(false);
    std::atomic<bool> GlobalState::feature_packages(true);
    std::atomic<bool> GlobalState::g_binary_caching(false);

    std::atomic<int> GlobalState::g_init_console_cp(0);
    std::atomic<int> GlobalState::g_init_console_output_cp(0);
}

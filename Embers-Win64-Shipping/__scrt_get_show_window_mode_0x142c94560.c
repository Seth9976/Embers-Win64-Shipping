// 函数: __scrt_get_show_window_mode
// 地址: 0x142c94560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

STARTUPINFOW startupInfo
memset(&startupInfo, 0, 0x68)
GetStartupInfoW(&startupInfo)
int64_t result = 0xa

if ((startupInfo.dwFlags.b & 1) != 0)
    result.w = startupInfo.wShowWindow

return result

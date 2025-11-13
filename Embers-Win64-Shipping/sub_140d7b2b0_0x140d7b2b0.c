// 函数: sub_140d7b2b0
// 地址: 0x140d7b2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t rdx
rdx.b = *(arg1 + 0x38) != 0
HMONITOR hMonitor = MonitorFromWindow(*(arg1 + 0x28), rdx + 1)
MONITORINFO lpmi
lpmi.cbSize = 0x28
GetMonitorInfoW(hMonitor, &lpmi)
*arg2 = lpmi.rcMonitor.left
*arg3 = lpmi.rcMonitor.top
*arg4 = lpmi.rcMonitor.right - *arg2
*arg5 = lpmi.rcMonitor.bottom - *arg3
int32_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_78)
return result

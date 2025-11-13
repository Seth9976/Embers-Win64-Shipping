// 函数: sub_140d7df00
// 地址: 0x140d7df00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
RECT lprc
lprc.left = *arg3
lprc.top = arg3[1]
lprc.right = arg3[2]
lprc.bottom = arg3[3]
HMONITOR hMonitor = MonitorFromRect(&lprc, MONITOR_DEFAULTTONEAREST)
MONITORINFO lpmi
lpmi.cbSize = 0x28
GetMonitorInfoW(hMonitor, &lpmi)
*arg2 = lpmi.rcWork.left
arg2[1] = lpmi.rcWork.top
arg2[2] = lpmi.rcWork.right
arg2[3] = lpmi.rcWork.bottom
__security_check_cookie(rax_1 ^ &var_68)
return arg2

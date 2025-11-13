// 函数: sub_140d7fc80
// 地址: 0x140d7fc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
MONITORINFO lpmi
lpmi.cbSize = 0x68
GetMonitorInfoW(arg1, &lpmi)
int16_t* const rcx

if (arg4[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg4

void var_60
int64_t result

if (sub_140a54510(rcx, &var_60) != 0)
    result = 1
else
    *(arg4 + 0x34) = lpmi.rcMonitor.bottom
    arg4[5].d = lpmi.rcMonitor.left
    arg4[6].d = lpmi.rcMonitor.right
    *(arg4 + 0x2c) = lpmi.rcMonitor.top
    *(arg4 + 0x44) = lpmi.rcWork.bottom
    arg4[7].d = lpmi.rcWork.left
    arg4[8].d = lpmi.rcWork.right
    *(arg4 + 0x3c) = lpmi.rcWork.top
    result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result

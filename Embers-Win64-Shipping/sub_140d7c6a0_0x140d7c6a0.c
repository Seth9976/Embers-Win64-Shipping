// 函数: sub_140d7c6a0
// 地址: 0x140d7c6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
WINDOWPLACEMENT lpwndpl
lpwndpl.length = 0x2c
BOOL result

if (GetWindowPlacement(*(arg1 + 0x28), &lpwndpl) == 0)
    result.b = 0
else
    int32_t left = lpwndpl.rcNormalPosition.left
    int64_t rdx_1
    rdx_1.d = lpwndpl.rcNormalPosition.left
    rdx_1:4.d = lpwndpl.rcNormalPosition.top
    int32_t rax_3 = lpwndpl.rcNormalPosition.right - left
    *arg2 = left
    uint32_t rdx_2 = (rdx_1 u>> 0x20).d
    *arg3 = rdx_2
    *arg4 = rax_3
    int64_t rax_4
    rax_4.d = lpwndpl.rcNormalPosition.right
    rax_4:4.d = lpwndpl.rcNormalPosition.bottom
    *arg5 = (rax_4 u>> 0x20).d - rdx_2
    
    if (GetWindowLongW(*(arg1 + 0x28), 0xffffffec).b s>= 0)
        int32_t rdx_3
        rdx_3.b = *(arg1 + 0x38) != 0
        HMONITOR hMonitor = MonitorFromWindow(*(arg1 + 0x28), rdx_3 + 1)
        MONITORINFO lpmi
        lpmi.cbSize = 0x28
        GetMonitorInfoW(hMonitor, &lpmi)
        *arg2 += lpmi.rcWork.left - lpmi.rcMonitor.left
        *arg3 += lpmi.rcWork.top - lpmi.rcMonitor.top
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_a8)
return result

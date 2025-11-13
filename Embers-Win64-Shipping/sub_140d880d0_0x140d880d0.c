// 函数: sub_140d880d0
// 地址: 0x140d880d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result
int32_t r14 = arg1[7].d

if (arg2 != r14)
    arg1[7].d = arg2
    int32_t rax_1 = GetWindowLongW(arg1[5], 0xfffffff0)
    void* rax_2 = arg1[1]
    int32_t rdi_2
    
    if (*(rax_2 + 0x25) == 0)
        rdi_2 = -0x7f380000
    else
        int32_t rcx_1 = 0xc90000
        
        if (*(rax_2 + 0x23) == 0)
            rcx_1 = 0xc80000
        
        int32_t rdx_1 = rcx_1 | 0x20000
        
        if (*(rax_2 + 0x22) == 0)
            rdx_1 = rcx_1
        
        rdi_2 = rdx_1 | 0x40000
        
        if (*(rax_2 + 0x26) == 0)
            rdi_2 = rdx_1
    
    if (arg2 u<= 1)
        if (r14 == 2)
            arg1[8].d = 0x2c
            GetWindowPlacement(arg1[5], &arg1[8])
        
        SetWindowLongW(arg1[5], 0xfffffff0, (not.d(rdi_2) & rax_1) | 0x80000000)
        SetWindowPos(arg1[5], nullptr, 0, 0, 0, 0, 0x27)
        
        if (arg2 != 0)
            ShowWindow(arg1[5], SW_RESTORE)
        
        RECT rect
        GetClientRect(arg1[5], &rect)
        int32_t rdi_6
        rdi_6.b = arg2 != 0
        HMONITOR hMonitor = MonitorFromWindow(arg1[5], rdi_6 + 1)
        MONITORINFO lpmi
        lpmi.cbSize = 0x28
        GetMonitorInfoW(hMonitor, &lpmi)
        int32_t top = lpmi.rcMonitor.top
        int32_t rcx_13
        
        if (arg2 != 0)
            rcx_13 = lpmi.rcMonitor.bottom - top
        else
            rcx_13 = rect.bottom - rect.top
            int32_t rax_6 = lpmi.rcMonitor.bottom - top
            
            if (rax_6 s<= rcx_13)
                rcx_13 = rax_6
        
        int32_t var_78_3 = rcx_13
        result = (*(*arg1 + 8))(arg1)
    else
        SetWindowLongW(arg1[5], 0xfffffff0, (rax_1 & 0x7fffffff) | rdi_2)
        result = SetWindowPos(arg1[5], nullptr, 0, 0, 0, 0, 0x27)
        
        if (arg1[8].d != 0)
            result = SetWindowPlacement(arg1[5], &arg1[8])

__security_check_cookie(result_1 ^ &var_98)
return result

// 函数: sub_1422d62b0
// 地址: 0x1422d62b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1].b = arg3
InitializeCriticalSection(&arg1[2])
SetCriticalSectionSpinCount(&arg1[2], 0xfa0)
arg1[8] = *arg4
arg1[0xa] = 0

if (arg1[8] != 0)
    void* rax_1 = arg4[2]
    void* rcx_2 = &arg4[4]
    
    if (rax_1 != 0)
        rcx_2 = rax_1
    
    (**rcx_2)(rcx_2)

if (*arg4 != 0)
    void* rdx_1 = arg4[2]
    void* rcx_3 = &arg4[4]
    
    if (rdx_1 != 0)
        rcx_3 = rdx_1
    
    int64_t rdx_2 = *rcx_3
    (*(rdx_2 + 0x10))(rcx_3, rdx_2)

return arg1

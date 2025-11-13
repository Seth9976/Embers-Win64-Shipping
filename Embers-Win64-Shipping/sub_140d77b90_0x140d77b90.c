// 函数: sub_140d77b90
// 地址: 0x140d77b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx

if (arg2 != 0)
    rcx = *(arg1 + 0xc)
else
    rcx = *(arg1 + 8)

if (arg4 != 0)
    int32_t* rax_3 = arg3 + 0xc
    
    if (arg3 == 0)
        rax_3 = 0x34
    
    *arg5 = rcx - *rax_3
    return 0

int32_t* rax = arg3 + 8

if (arg3 == 0)
    rax = 0x30

*arg5 = rcx - *rax
return 0

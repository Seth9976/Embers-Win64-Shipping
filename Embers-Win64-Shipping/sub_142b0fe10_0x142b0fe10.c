// 函数: sub_142b0fe10
// 地址: 0x142b0fe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 

if (arg2 != *(arg1 + 0x18))
    if (sub_142b10120(arg1, arg2).b != 0)
        goto label_142b0fe54
    
    int64_t rax
    rax, arg4 = sub_142b0f7d0(arg1, arg2, arg3, arg4)
    
    if (rax.b != 0)
        goto label_142b0fe54
    
    return 

label_142b0fe54:
int32_t rcx_1 = *(arg1 + 0x18)

if (arg2 != rcx_1)
    *(*(arg1 + 8) + 0x1e0) = rcx_1
    *(*(arg1 + 8) + 0x1e4) = zx.d(*(arg1 + (sx.q(*(arg1 + 0x1c)) << 1) + 0x220))
    *(*(arg1 + 8) + 0x278) = 0
else if (*arg3 s<= 0)
    int32_t rdi_1 = *(arg1 + 0x1c)
    
    if (rdi_1 != *(arg1 + 0x10))
        int32_t rax_2 = (rdi_1 - 1) & 0x7f
        *(arg1 + 0x1c) = rax_2
        *(arg1 + 0x18) = *(arg1 + (sx.q(rax_2) << 2) + 0x20)
    else
        sub_142b0f980(arg1, arg3, arg4)
    
    int32_t rcx_3
    rcx_3.b = *(arg1 + 0x1c) == rdi_1
    *(*(arg1 + 8) + 0x278) = rcx_3.b
    *(*(arg1 + 8) + 0x1e0) = *(arg1 + 0x18)
    *(*(arg1 + 8) + 0x1e4) = zx.d(*(arg1 + (sx.q(*(arg1 + 0x1c)) << 1) + 0x220))

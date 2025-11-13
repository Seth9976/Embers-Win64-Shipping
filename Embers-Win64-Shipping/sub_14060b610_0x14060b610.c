// 函数: sub_14060b610
// 地址: 0x14060b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg2
int32_t r10_1

if (arg1 u<= 0xfffd)
    if (arg1 - 0xd800 u> 0x3ff && arg1 - 0xdc00 u> 0x3ff && arg1 u>= 0x80)
        goto label_14060b660
    
    r10_1 = rdi + 1
else if (arg1 - 0x10000 u> 0xfffff || arg1 - 0xd800 u<= 0x3ff || arg1 - 0xdc00 u<= 0x3ff
        || arg1 u< 0x80)
    r10_1 = rdi + 1
else
label_14060b660:
    
    if (arg1 u< 0x800)
        r10_1 = rdi + sbb.d(arg1 - 0xdc00, arg1 - 0xdc00, *arg3 u< 2) + 2
    else if (arg1 u< 0x10000)
        int32_t r10_2 = 3
        
        if (*arg3 u< 3)
            r10_2 = 1
        
        r10_1 = r10_2 + rdi
    else if (*arg3 u< 4)
        r10_1 = rdi + 1
    else
        r10_1 = rdi + 4

int32_t r10_3 = r10_1 - rdi

if (r10_3 s< 1)
    int64_t rax
    rax.b = 0
    return rax

*arg2 = rdi + r10_3
int32_t rax_1
rax_1.b = 1
*arg3 -= r10_3
return rax_1

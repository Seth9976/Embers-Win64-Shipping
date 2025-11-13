// 函数: sub_142ab3df0
// 地址: 0x142ab3df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = 0x2386f26fc10000
int64_t i_2 = arg2

if (arg2 s< 0x2386f26fc10000)
    int64_t r8_2 = 0
    uint64_t r9_1 = 0x10
    
    if (i_2 != 0)
        int64_t i
        
        do
            r9_1 = zx.q(r9_1.d - 1)
            i = i_2 s/ 0xa
            rax = i * -0x6000000000000000
            r8_2 = (r8_2 u>> 4) + (i_2 << 0x3c) - rax
            i_2 = i
        while (i != 0)
    
    *(arg1 + 0x30) = r8_2 u>> (r9_1 << 2).b
    *(arg1 + 0x10) = 0x10 - r9_1.d
    *(arg1 + 0xc) = 0
    return rax

int64_t rax_1 = sub_142ab3600(arg1, 0x28)
int32_t r9 = 0

if (i_2 != 0)
    int64_t r8_1 = 0
    int64_t i_1
    
    do
        r8_1 += 1
        r9 += 1
        i_1 = i_2 s/ 0xa
        rax_1 = *(arg1 + 0x30)
        i_2.b -= i_1.b * 0xa
        *(r8_1 + rax_1 - 1) = i_2.b
        i_2 = i_1
    while (i_1 != 0)

*(arg1 + 0x10) = r9
*(arg1 + 0xc) = 0
return rax_1

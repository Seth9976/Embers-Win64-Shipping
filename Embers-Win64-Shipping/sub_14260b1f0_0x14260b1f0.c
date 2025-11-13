// 函数: sub_14260b1f0
// 地址: 0x14260b1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = not.q(arg2 << 0x1f) + arg2
int64_t r8_3 = (r8_2 u>> 0x14 ^ r8_2) * 0x41
int64_t r8_4 = r8_3 ^ r8_3 u>> 0xc
int64_t r8_5 = r8_4 + not.q(r8_4 << 0x16)
int16_t i = *(arg1[1] + (((r8_5 u>> 0x20 ^ zx.q(r8_5.d)) & zx.q(*(arg1 + 0x1c) - 1)) << 1))

if (i != 0xffff)
    int64_t r8_6 = *arg1
    
    do
        uint64_t i_1 = zx.q(i)
        uint64_t rax_11 = zx.q(i_1.d) << 5
        
        if (*(r8_6 + rax_11 + 0x18) == arg2)
            return rax_11 + r8_6
        
        i = *(arg1[2] + (i_1 << 1))
    while (i != 0xffff)

return 0

// 函数: sub_142ab5250
// 地址: 0x142ab5250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int32_t rsi = *(arg1 + 0x10)
int64_t rdi = sx.q(*(arg1 + 0xc))
int32_t r8_1 = rsi - 1 + rdi.d

if (arg2 != 0 && r8_1 s> 0x11)
    r8_1 = 0x11

int64_t rbx = sx.q(r8_1)

if (r8_1 s>= 0)
    int64_t r9_2 = rbx - rdi
    int64_t temp0_1
    
    do
        if (*(arg1 + 0x40) == 0)
            if (r9_2 u> 0xf)
                arg2 = 0
            else
                arg2 = (*(arg1 + 0x30) u>> ((r8_1 - rdi.d) << 2).b).b & 0xf
        else if (r9_2 s< 0 || r8_1 - rdi.d s>= rsi)
            arg2 = 0
        else
            arg2 = *(r9_2 + *(arg1 + 0x30))
        
        r8_1 -= 1
        r9_2 -= 1
        temp0_1 = rbx
        rbx -= 1
        result = sx.q(arg2) + result * 0xa
    while (temp0_1 - 1 s>= 0)

if ((data_143ccaf50 & *(arg1 + 0x14)) == 0)
    return result

return neg.q(result)

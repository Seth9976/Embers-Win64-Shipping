// 函数: sub_142acedb0
// 地址: 0x142acedb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax_5 = *(arg1 + 0x48)
int64_t r8_1

if (arg2 s>= rax_5)
    arg2 -= rax_5
    int16_t rax = *(arg1 + 0x4a)
    
    if (arg2 s< rax)
        return float.d(sx.q(*(*(arg1 + 0x58) + (sx.q(arg2) << 2)))) f* 1000.0
    
    r8_1 = *(arg1 + 0x60)
    arg2 -= rax
else
    r8_1 = *(arg1 + 0x50)

uint64_t rdx = zx.q(sx.d(arg2))
return float.d(zx.q(*(r8_1 + (sx.q((rdx * 2).d) << 2))) << 0x20
    | zx.q(*(r8_1 + (sx.q(((rdx << 1) + 1).d) << 2)))) f* 1000.0

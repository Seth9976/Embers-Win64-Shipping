// 函数: sub_142c0b3b0
// 地址: 0x142c0b3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *arg1
int32_t i = 1

if ((zx.d(rax.b) << 8) + zx.d(rax:1.b) u> 1)
    do
        int128_t* const rax_2
        
        if (i u< (zx.d(*arg1) << 8) + zx.d(*(arg1 + 1)))
            rax_2 = zx.q(i) * 3 + &arg1[1]
        else
            rax_2 = &data_14369a5d0
        
        if (arg2 u< (zx.d(*rax_2) << 8) + zx.d(*(rax_2 + 1)))
            break
        
        i += 1
    while (i u< (zx.d(rax.b) << 8) + zx.d(rax:1.b))

uint64_t r8 = zx.q(i - 1)

if (r8.d u< (zx.d(*arg1) << 8) + zx.d(*(arg1 + 1)))
    return zx.q(*(r8 * 3 + arg1 + 4))

return 0

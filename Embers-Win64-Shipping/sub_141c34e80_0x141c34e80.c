// 函数: sub_141c34e80
// 地址: 0x141c34e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1].d
int128_t* rdx = *arg1
float zmm5[0x4] = arg3
float temp0[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)

if (result s> 0)
    uint64_t i_1 = zx.q(((result - 1) u>> 2) + 1)
    uint64_t i
    
    do
        arg2 = *rdx
        rdx = &rdx[1]
        arg3 = _mm_and_ps(arg2 ^ temp0, _mm_cmpeq_ps(arg2, temp0, 1)) ^ arg2
        rdx[-1] = _mm_and_ps(arg3 ^ temp0_1, _mm_cmpeq_ps(temp0_1, arg2, 1)) ^ arg3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

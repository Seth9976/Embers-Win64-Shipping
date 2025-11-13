// 函数: sub_141c3da40
// 地址: 0x141c3da40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[1].d)
int128_t* rcx = *arg1
float zmm1[0x4] = *arg3
float zmm2[0x4] = arg3[1]
uint64_t result = zx.q((temp1 + (temp0 & 7)) s>> 3)

if (result.d s> 0)
    uint64_t i
    
    do
        float zmm0[0x4] = *rcx
        r9 += 0x20
        rcx += 4
        *(r9 - 0x20) = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
        zmm0 = *(rcx - 4)
        *(r9 - 0x10) = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm2)
        i = result
        result -= 1
    while (i != 1)

return result

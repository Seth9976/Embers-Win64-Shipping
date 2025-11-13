// 函数: sub_141c3d050
// 地址: 0x141c3d050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[1].d)
int128_t* r10 = *arg1
float zmm4[0x4] = *arg3
float zmm5[0x4] = arg3[1]
float zmm6[0x4] = arg3[2]
uint64_t result = zx.q((temp1 + (temp0 & 7)) s>> 3)
float zmm7[0x4] = arg3[3]

if (result.d s> 0)
    uint64_t i
    
    do
        float zmm3[0x4] = *r10
        float zmm2[0x4] = *(r10 + 4)
        r10 += 8
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        float zmm1[0x4] = _mm_mul_ps(zmm2, zmm6)
        float zmm0[0x4] = _mm_mul_ps(zmm3, zmm4)
        zmm2 = _mm_mul_ps(zmm2, zmm7)
        zmm3 = _mm_mul_ps(zmm3, zmm5)
        zmm1 = _mm_add_ps(zmm1, zmm0)
        zmm2 = _mm_add_ps(zmm2, zmm3)
        *r9 = zmm1
        *(r9 + 0x10) = zmm2
        r9 += 0x20
        i = result
        result -= 1
    while (i != 1)

return result

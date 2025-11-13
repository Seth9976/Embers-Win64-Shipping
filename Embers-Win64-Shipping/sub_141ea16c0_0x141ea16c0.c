// 函数: sub_141ea16c0
// 地址: 0x141ea16c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x1f0) != 1
float zmm3[0x4] = *(arg1 + 0x1d0)
float result[0x4] = 0x3f800000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm3[0] = zmm3[0] f- *arg2
temp0[0] = temp0[0] f- arg2[1]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
temp0_1[0] = temp0_1[0] f- arg2[2]
int128_t zmm6 = 0x3f800000

if (not(cond:0))
    zmm6 = 0x40000000

float zmm5 = *(arg1 + 0x1f4)
float zmm1 = *(arg1 + 0x1f8)

if (zmm5 >= zmm1)
    if (not(zmm1 <= (zx.o(0)).d))
        temp0[0] = temp0[0] * temp0[0]
        zmm3[0] = zmm3[0] * zmm3[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        temp0[0] = temp0[0] + zmm3[0]
        temp0[0] = temp0[0] + temp0_1[0]
        
        if (not(temp0[0] < zmm1 * zmm1))
            return zx.o(0)
    
    return result

zmm3[0] = zmm3[0] * zmm3[0]
temp0[0] = temp0[0] * temp0[0]
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0[0] = temp0[0] + zmm3[0]
temp0[0] = temp0[0] + temp0_1[0]
float temp0_2[0x4] = _mm_sqrt_ss(0, temp0[0])
float zmm0[0x4] = zx.o(0)
temp0_2[0] = temp0_2[0] - zmm5
temp0_2[0] = temp0_2[0] / (zmm1 - zmm5)

if (not(temp0_2[0] < 0f))
    zmm0 = _mm_min_ss(temp0_2[0], 0x3f800000)

result[0] = 1f - zmm0[0]
return powf(result[0], zmm6.d) __tailcall

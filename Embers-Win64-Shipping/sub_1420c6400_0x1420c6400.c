// 函数: sub_1420c6400
// 地址: 0x1420c6400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
int128_t zmm8
int128_t var_38 = zmm8

while (true)
    zmm6 = (r8 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
    zmm6[0] = zmm6[0] - 1f
    zmm7 = ((r8 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
    zmm6[0] = zmm6[0] + zmm6[0]
    zmm7[0] = zmm7[0] - 1f
    r8 = ((r8 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
    zmm6[0] = zmm6[0] - 1f
    zmm7[0] = zmm7[0] + zmm7[0]
    zmm8.d = (r8 u>> 9 | 0x3f800000).d f- 1f
    zmm7[0] = zmm7[0] - 1f
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm8.d = zmm8.d f+ zmm8.d
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8.d = zmm8.d f- 1f
    zmm7[0] = zmm7[0] + zmm6[0]
    zmm7[0] = zmm7[0] + zmm8.d f* zmm8.d
    
    if (not(zmm7[0] > 1f))
        if (not(zmm7[0] < 9.99999975e-05f))
            break

*(arg1 + 4) = r8
float zmm2[0x4] = 0x3f000000
float zmm3 = zmm7[0]
float temp0[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3)
zmm3 = zmm3 * 0.5f
temp0[0] = temp0[0] * temp0[0]
zmm2[0] = 0.5f - zmm3 * temp0[0]
temp0[0] = temp0[0] * zmm2[0]
temp0[0] = temp0[0] + temp0[0]
temp0[0] = temp0[0] * (0.5f - zmm3 * temp0[0] * temp0[0])
temp0[0] = temp0[0] + temp0[0]
zmm6[0] = zmm6[0] * temp0[0]
zmm7[0] = zmm7[0] * temp0[0]
zmm8.d = zmm8.d f* temp0[0]
*arg2 = zmm6[0]
arg2[1] = zmm7[0]
arg2[2] = zmm8.d
return arg2

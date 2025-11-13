// 函数: sub_1427e9530
// 地址: 0x1427e9530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_98[0x4]
int128_t* rax_1 = (*(*arg1 + 0x48))(arg1, &var_98)
float zmm7[0x4] = *rax_1
int128_t zmm12 = *(rax_1 + 4)
int128_t zmm13 = *(rax_1 + 8)
float zmm8[0x4] = *(rax_1 + 0xc)
float zmm1
float zmm2[0x4]

if (zmm7[0] == 0f)
    var_98 = data_142d3f660
else
    zmm2 = 0x3f800000
    zmm1 = zmm8[0] * zmm8[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm2[0] = 1f / _mm_sqrt_ss(0, zmm1 + zmm7[0])[0]
    zmm1 = zmm2[0]
    zmm2[0] = zmm2[0] * 0f
    zmm1 = zmm1 * zmm7[0]
    var_98[1] = zmm2[0]
    var_98[2] = zmm2[0]
    zmm8[0] = zmm8[0] * zmm2[0]
    var_98[0] = zmm1
    var_98[3] = zmm8[0]

float zmm5[0x4] = var_98[3]
zmm2 = var_98[0] ^ 0x80000000
float zmm3[0x4] = var_98[1]
float zmm4[0x4] = var_98[2]
zmm1 = zmm2[0]
zmm5[0] = zmm5[0] * zmm8[0]
zmm3 ^= 0x80000000
zmm5[0] = zmm5[0] f* zmm12.d
float zmm6[0x4] = zmm3
zmm6[0] = zmm6[0] * zmm8[0]
zmm4 ^= 0x80000000
zmm2[0] = zmm2[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm5[0]
zmm3[0] = zmm3[0] f* zmm12.d
zmm5[0] = zmm5[0] - zmm2[0]
zmm4[0] = zmm4[0] f* zmm13.d
zmm6[0] = zmm6[0] + zmm1 f* zmm13.d
zmm4[0] = zmm4[0] * zmm7[0]
zmm5[0] = zmm5[0] - zmm3[0]
zmm6[0] = zmm6[0] - zmm4[0]
zmm5[0] = zmm5[0] - zmm4[0]

if (not(zmm5[0] >= 0f))
    zmm6 ^= 0x80000000
    zmm5 ^= 0x80000000

zmm5[0] = zmm5[0] + 1f
return atan2f(zmm6[0], zmm5[0]) * 4f

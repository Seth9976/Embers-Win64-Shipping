// 函数: sub_1427ee4f0
// 地址: 0x1427ee4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm3 = *(arg2 + 0xc)
float zmm0[0x4] = *arg2
float var_58
float var_54
float var_50

if (zmm3.d f< 0f)
    var_58 = (zmm0 ^ 0x80000000)[0]
    zmm3 ^= 0x80000000
    var_50 = (*(arg2 + 8) ^ 0x80000000)[0]
    var_54 = (*(arg2 + 4) ^ 0x80000000)[0]
else
    var_58 = zmm0[0]
    var_50 = (*(arg2 + 8))[0]
    var_54 = (*(arg2 + 4))[0]

zmm0 = zmm3.d
float zmm4[0x4] = var_58
int128_t zmm5 = var_54
float zmm6[0x4] = var_50
bool rax = arg3[0] > zmm0[0]
*arg4 = rax

if (rax != 0)
    float zmm7[0x4] = 0x3f800000
    arg3[0] = arg3[0] * arg3[0]
    zmm0 = 0x3f800000
    zmm3.d = zmm5.d f* zmm5.d
    zmm0[0] = 1f - arg3[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    float temp0_1[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm0[0])
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm3.d = zmm3.d f+ zmm4[0]
    zmm3.d = zmm3.d f+ zmm6[0]
    float var_50_1
    
    if (zmm3.d f<= 0f)
        var_58.q = 0
        var_50_1 = 0f
    else
        zmm7[0] = 1f / _mm_sqrt_ss(zx.o(0)[0], zmm3.d)[0]
        zmm7[0] = zmm7[0] * zmm4[0]
        zmm7[0] = zmm7[0] f* zmm5.d
        zmm7[0] = zmm7[0] * zmm6[0]
        var_58 = zmm7[0]
        var_54 = zmm7[0]
        var_50_1 = zmm7[0]
    
    temp0_1[0] = temp0_1[0] * var_58
    temp0_1[0] = temp0_1[0] * var_54
    temp0_1[0] = temp0_1[0] * var_50_1
    *arg1 = temp0_1[0]
    arg1[1] = temp0_1[0]
    arg1[2] = temp0_1[0]
    arg1[3] = arg3[0]
else
    *arg1 = zmm4[0]
    arg1[1] = zmm5.d
    arg1[2] = zmm6[0]
    arg1[3] = zmm0[0]

return arg1

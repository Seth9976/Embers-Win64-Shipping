// 函数: sub_141ab9cf0
// 地址: 0x141ab9cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_78
sub_141abcfa0(arg1 + 0x108, &var_78, arg4)
int32_t var_74
float zmm6[0x4] = var_74
float result[0x4] = zx.o(0)
float zmm10[0x4] = var_78
zmm6[0] = zmm6[0] f* arg2[1]
zmm10[0] = zmm10[0] f* *arg2
float zmm9[0x4] = zx.o(0)
int32_t var_70
int128_t zmm11 = var_70
float zmm8[0x4] = 0xbf800000
float zmm1 = zmm11.d f* arg2[2]
zmm6[0] = zmm6[0] + zmm10[0]
zmm6[0] = zmm6[0] + zmm1

if (not(zmm6[0] <= 0f))
    float zmm2[0x4]
    
    if (zmm6[0] >= -1f)
        zmm2 = __minss_xmmss_memss(zmm6[0], 0x3f800000)
    else
        zmm2 = 0xbf800000
    
    zmm9 = asinf(zmm2[0])

zmm6[0] = zmm6[0] f* arg3[1]
zmm10[0] = zmm10[0] f* *arg3
zmm11.d = zmm11.d f* arg3[2]
zmm6[0] = zmm6[0] + zmm10[0]
zmm6[0] = zmm6[0] f+ zmm11.d

if (not(zmm6[0] <= 0f))
    if (not(zmm6[0] < -1f))
        zmm8 = __minss_xmmss_memss(zmm6[0], 0x3f800000)
    
    result = asinf(zmm8[0])

result[0] = result[0] - zmm9[0]
return result

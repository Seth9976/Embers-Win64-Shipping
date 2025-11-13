// 函数: sub_1427af460
// 地址: 0x1427af460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *arg1
int128_t zmm6 = *(arg1 + 8)
int128_t zmm5
zmm5.d = zmm1.d f* *(arg1 + 4)
zmm1.d = zmm1.d f* zmm1.d
int128_t result
float zmm4
float zmm2

if (zmm6.d f>= 0f)
    zmm6.d = zmm6.d f+ 1f
    zmm2 = 1f f/ zmm6.d
    zmm6 = 0x80000000
    zmm1.d = zmm1.d f* zmm2
    zmm5.d = zmm5.d f* zmm2
    result.d = 1f f- zmm1.d
    zmm5 ^= 0x80000000
    arg2[1] = zmm5.d
    *arg2 = result.d
    arg2[2] = (*arg1 ^ 0x80000000).d
    *arg3 = zmm5.d
    result = *(arg1 + 4)
    result.d = result.d f* result.d
    result.d = result.d f* zmm2
    zmm4 = 1f f- result.d
else
    result.d = 1f f- zmm6.d
    zmm6 = 0x80000000
    zmm2 = 1f f/ result.d
    zmm1.d = zmm1.d f* zmm2
    zmm5.d = zmm5.d f* zmm2
    result.d = 1f f- zmm1.d
    arg2[1] = (zmm5 ^ 0x80000000).d
    *arg2 = result.d
    arg2[2] = *arg1
    *arg3 = zmm5.d
    zmm4 = *(arg1 + 4)
    zmm4 = zmm4 * zmm4 * zmm2 - 1f
arg3[1] = zmm4
result = *(arg1 + 4) ^ zmm6
arg3[2] = result.d
return result

// 函数: sub_141739040
// 地址: 0x141739040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = *(arg1 + 0x34)
uint128_t zmm2 = *(arg1 + 0x3c)
uint128_t zmm0
zmm0.d = zmm4.d f* *arg3
int128_t* result = arg2
float zmm3 = *(arg1 + 0x38)
zmm4.d = zmm4.d f* *arg4
int64_t* rcx = *(arg1 + 0x10)
float zmm1 = zmm3 f* arg3[1]
zmm3 = zmm3 f* arg4[1]
int32_t var_18 = zmm0.d
zmm0.d = zmm2.d f* arg3[2]
zmm2.d = zmm2.d f* arg4[2]
int32_t var_10 = zmm0.d
zmm0 = arg5
float var_14 = zmm1
int32_t var_28 = zmm4.d
float var_24 = zmm3
int32_t var_20 = zmm2.d
sub_141737e80(rcx, arg2, &var_18, &var_28, zmm0, zmm0.d)

if (*(result + 0xc) != 0)
    float zmm1_1[0x4] = *result
    int64_t zmm2_1 = *(arg1 + 0x2c)
    float zmm0_1 = *(arg1 + 0x30)
    zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x28)
    zmm2_1.d = zmm2_1.d f* *(result + 4)
    zmm0_1 = zmm0_1 f* *(result + 8)
    *result = (_mm_unpacklo_ps(zmm1_1, zmm2_1)).q
    *(result + 8) = zmm0_1

return result

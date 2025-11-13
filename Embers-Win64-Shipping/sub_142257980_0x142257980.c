// 函数: sub_142257980
// 地址: 0x142257980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 8)
*(arg1 + 8) = &result[0x14]
*(result + 0x4e) = arg4
*result = *arg2
result[1] = arg2[1]
result[2] = arg2[2]
int128_t zmm6 = *(arg1 + 0x14)
int128_t zmm7 = *(arg1 + 0x18)
float zmm5 = zmm6.d f* arg2[2]
float zmm0 = zmm7.d f* arg2[1]
zmm7.d = zmm7.d f* *arg2
zmm6.d = zmm6.d f* *arg2
zmm5 = zmm5 - zmm0
float zmm4 = *(arg1 + 0x10)
zmm0 = zmm4
zmm4 = zmm4 f* arg2[1]
zmm0 = zmm0 f* arg2[2]
result[4] = zmm5
zmm7.d = zmm7.d f- zmm0
result[6] = zmm4 f- zmm6.d
result[5] = zmm7.d
result[8] = *arg2
result[9] = arg2[1]
result[0xa] = arg2[2]
zmm6 = *(arg1 + 0x20)
zmm7 = *(arg1 + 0x24)
zmm5 = zmm6.d
zmm4 = *(arg1 + 0x1c)
zmm0 = zmm7.d f* arg2[1]
zmm7.d = zmm7.d f* *arg2
zmm6.d = zmm6.d f* *arg2
zmm5 = zmm5 f* arg2[2] - zmm0
zmm0 = zmm4 f* arg2[2]
zmm4 = zmm4 f* arg2[1]
zmm7.d = zmm7.d f- zmm0
result[0xc] = zmm5
result[0xd] = zmm7.d
result[0xe] = zmm4 f- zmm6.d
result[3] = arg3
return result

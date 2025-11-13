// 函数: sub_142376f20
// 地址: 0x142376f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm5 = arg1[0x14d]

if (arg2[0] f== zmm5)
    return 

float zmm2 = *arg1
int64_t zmm4 = *(arg1 + 0x548)
arg2[0] = arg2[0] f- zmm5
*(arg1 + 0x598) = zmm4
float zmm3 = zmm2 * 0.5f
arg1[0x16a] = zmm5
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(arg2, data_142d3f770)
arg1[0x164] = arg2[0]
temp0_1[0] = temp0_1[0] f* (zmm2 - zmm3)
temp0_1[0] = temp0_1[0] f+ zmm3
temp0_1[0].q = fconvert.d(temp0_1[0])
temp0_1[0].q = temp0_1[0].q f+ zmm4
*(arg1 + 0x5a0) = temp0_1.q

// 函数: sub_141447490
// 地址: 0x141447490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm2[0x4] = *(arg1 + 0x38)
int32_t zmm5 = *(arg1 + 0x30)
uint32_t zmm4[0x4] = zmm2
zmm4[0] = zmm4[0] f- zmm5

if (__andps_xmmxud_memxud(zmm4, data_142d3f770)[0] f<= 9.99999994e-09f)
    return zmm2

zmm2 = *(arg1 + 0x2c)
uint32_t zmm3[0x4] = *(arg1 + 0x34)
uint32_t zmm0[0x4]

if (arg2 f>= zmm2[0])
    zmm0 = _mm_min_ss(zmm3[0], arg2)
else
    zmm0 = zmm2

zmm0[0] = zmm0[0] f- zmm2[0]
zmm3[0] = zmm3[0] f- zmm2[0]
zmm0[0] = zmm0[0] f/ zmm3[0]
zmm0[0] = zmm0[0] f* zmm4[0]
zmm0[0] = zmm0[0] f+ zmm5
return zmm0

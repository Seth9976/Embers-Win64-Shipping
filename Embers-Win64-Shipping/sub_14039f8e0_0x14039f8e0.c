// 函数: sub_14039f8e0
// 地址: 0x14039f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0x40
int32_t zmm0[0x4] = zx.o(0)
int32_t temp0_5[0x4]
int32_t i

do
    int32_t zmm2[0x4] = arg3[1]
    int32_t zmm3[0x4] = arg3[2]
    int32_t zmm4[0x4] = arg3[3]
    int32_t temp0_1[0x4] = __psadbw_xmmdq_memdq(*arg3, *arg1)
    int32_t temp0_2[0x4] = __psadbw_xmmdq_memdq(zmm2, arg1[1])
    int32_t temp0_3[0x4] = __psadbw_xmmdq_memdq(zmm3, arg1[2])
    int32_t temp0_4[0x4] = __psadbw_xmmdq_memdq(zmm4, arg1[3])
    temp0_5 = _mm_add_epi32(temp0_1, temp0_2)
    int32_t temp0_6[0x4] = _mm_add_epi32(temp0_3, temp0_4)
    arg3 += sx.q(arg4)
    arg1 += sx.q(arg2)
    zmm0 = _mm_add_epi32(_mm_add_epi32(zmm0, temp0_5), temp0_6)
    i = i_1
    i_1 -= 1
while (i s> 1)
temp0_5[0].q = zmm0 u>> 0x40
return zx.q(_mm_add_epi32(zmm0, temp0_5)[0])

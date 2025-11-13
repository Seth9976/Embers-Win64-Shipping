// 函数: sub_14039fa50
// 地址: 0x14039fa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* r10)[0x10] = arg5
int32_t i_1 = 0x20
int32_t zmm0[0x4] = zx.o(0)
uint8_t zmm1[0x10]
int32_t i

do
    uint8_t zmm2[0x10] = arg3[1]
    uint8_t zmm3[0x10] = arg3[2]
    uint8_t zmm4[0x10] = arg3[3]
    uint8_t temp0_1[0x10] = __pavgb_xmmdq_memdq(*arg3, *r10)
    uint8_t temp0_2[0x10] = __pavgb_xmmdq_memdq(zmm2, r10[1])
    uint8_t temp0_3[0x10] = __pavgb_xmmdq_memdq(zmm3, r10[2])
    uint8_t temp0_4[0x10] = __pavgb_xmmdq_memdq(zmm4, r10[3])
    r10 = &r10[4]
    zmm1 = __psadbw_xmmdq_memdq(temp0_1, *arg1)
    zmm2 = __psadbw_xmmdq_memdq(temp0_2, arg1[1])
    zmm3 = __psadbw_xmmdq_memdq(temp0_3, arg1[2])
    zmm4 = __psadbw_xmmdq_memdq(temp0_4, arg1[3])
    zmm1 = _mm_add_epi32(zmm1, zmm2)
    zmm3 = _mm_add_epi32(zmm3, zmm4)
    arg3 += sx.q(arg4)
    arg1 += sx.q(arg2)
    zmm0 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm1), zmm3)
    i = i_1
    i_1 -= 1
while (i s> 1)
zmm1[0].q = zmm0 u>> 0x40
return zx.q(_mm_add_epi32(zmm0, zmm1)[0])

// 函数: sub_140b19270
// 地址: 0x140b19270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(divs.dp.q(sx.o(*arg1), 0xc92a69c000))
zmm0[0] = zmm0[0] + 1721426.0
float temp0_1 = _mm_cvtpd_ps(zmm0)
uint64_t r8_2 = zx.q((int.d(temp0_1 + temp0_1 - 0.5f) s>> 1) + 0x10bd9)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q((r8_2 << 2).d s/ 0x23ab1 * 0x23ab1 + 3)
int32_t r8_3 = r8_2.d + neg.d((temp5 + (temp4 & 3)) s>> 2)
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q((r8_3 * 0xfa0 + 0xfa0) s/ 0x164b09 * 0x5b5)
uint64_t r8_4 = zx.q(r8_3 + 0x1f - ((temp9 + (temp8 & 3)) s>> 2))
return zx.q(r8_4.d - ((r8_4 * 5).d << 4) s/ 0x98f * 0x98f s/ 0x50)

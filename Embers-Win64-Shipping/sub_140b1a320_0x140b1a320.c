// 函数: sub_140b1a320
// 地址: 0x140b1a320
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
temp8:temp9 = sx.q((r8_3 + 1) * 0xfa0 s/ 0x164b09 * 0x5b5)
int32_t rcx_6 = (r8_3 - ((temp9 + (temp8 & 3)) s>> 2) + 0x1f) * 0x50 s/ 0x98f
return zx.q(rcx_6 - rcx_6 s/ 0xb * 0xc + 2)

// 函数: sub_140b19130
// 地址: 0x140b19130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(divs.dp.q(sx.o(*arg1), 0xc92a69c000))
zmm0[0] = zmm0[0] + 1721426.0
float temp0_1 = _mm_cvtpd_ps(zmm0)
uint64_t rbx_2 = zx.q((int.d(temp0_1 + temp0_1 - 0.5f) s>> 1) + 0x10bd9)
int32_t r10_2 = (rbx_2 << 2).d s/ 0x23ab1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r10_2 * 0x23ab1 + 3)
int32_t rbx_3 = rbx_2.d + neg.d((temp5 + (temp4 & 3)) s>> 2)
int32_t r9_2 = (rbx_3 + 1) * 0xfa0 s/ 0x164b09
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(r9_2 * 0x5b5)
uint64_t rbx_4 = zx.q(rbx_3 + 0x1f - ((temp9 + (temp8 & 3)) s>> 2))
int32_t r8_2 = ((rbx_4 * 5).d << 4) s/ 0x98f
uint64_t rdx_10 = zx.q(r8_2 s/ 0xb)
*arg2 = (r10_2 - 0x31) * 0x64 + rdx_10.d + r9_2
*arg3 = r8_2 - ((rdx_10 * 3).d << 2) + 2
int32_t temp14
int32_t temp15
temp14:temp15 = muls.dp.d(0x66666667, r8_2 * 0x98f)
*arg4 = rbx_4.d - r8_2 * 0x98f s/ 0x50
return temp14 s>> 5 u>> 0x1f

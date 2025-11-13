// 函数: sub_140b1b790
// 地址: 0x140b1b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(divs.dp.q(sx.o(*arg1), 0xc92a69c000))
zmm0[0] = zmm0[0] + 1721426.0
float temp0_1 = _mm_cvtpd_ps(zmm0)
uint64_t r9_2 = zx.q((int.d(temp0_1 + temp0_1 - 0.5f) s>> 1) + 0x10bd9)
int32_t r10_2 = (r9_2 << 2).d s/ 0x23ab1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r10_2 * 0x23ab1 + 3)
int32_t r9_3 = r9_2.d + neg.d((temp5 + (temp4 & 3)) s>> 2)
int32_t r8_2 = (r9_3 + 1) * 0xfa0 s/ 0x164b09
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(r8_2 * 0x5b5)
return zx.q((r10_2 - 0x31) * 0x64 + (r9_3 - ((temp9 + (temp8 & 3)) s>> 2) + 0x1f) * 0x50 s/ 0x6925
    + r8_2)

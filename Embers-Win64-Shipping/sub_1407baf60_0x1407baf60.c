// 函数: sub_1407baf60
// 地址: 0x1407baf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14076f7d0(arg1)
int32_t rax = arg1[6].d
float zmm3[0x4] = zx.o(0)
int32_t var_24 = rax
int32_t var_24_1 = 0x19660d
int32_t var_14 = 0x3c6ef35f
int32_t r8_3 = (0x19660d.q u>> 0x20).d * (rax.q u>> 0x20).d + (0x3c6ef35f.q u>> 0x20).d
int32_t rcx_2 = (rax * 0x19660d + 0x3c6ef35f) * r8_3 + rax * 0x19660d + 0x3c6ef35f
int32_t rdx_4 = rcx_2 * (rax * 0x19660d + 0x3c6ef35f) + r8_3
int32_t r8_6 = rdx_4 * rcx_2 + rax * 0x19660d + 0x3c6ef35f
int32_t r9_4 = r8_6 * rdx_4 + rcx_2
int32_t rax_5 = r8_6 * r9_4 + rdx_4
zmm3[0] = float.s(zx.q(r9_4 u>> 0x10))
int64_t zmm2
zmm2.d = float.s(zx.q(rax_5 u>> 0x10))
zmm3[0] = zmm3[0] * 0.00999999978f
zmm2.d = zmm2.d f* 0.00999999978f
*(arg1 + 0x34) = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg1 + 0x3c) = float.s(zx.q((r9_4 * rax_5 + r8_6) u>> 0x10)) f* 0.00999999978f
return sub_1407bba30(arg1) __tailcall

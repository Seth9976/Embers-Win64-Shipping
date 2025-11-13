// 函数: sub_14077ee10
// 地址: 0x14077ee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
*arg1 = &data_142daf7f8
float zmm0[0x4] = zx.o(0)
float zmm3[0x4] = zx.o(0)
int32_t var_14 = 0x3c6ef35f
arg1[6].d = 0
int32_t rcx = ((0x3c6ef35f.q u>> 0x20).d + 1) * 0x3c6ef35f
int32_t r8_1 = rcx * 0x3c6ef35f + (0x3c6ef35f.q u>> 0x20).d
int32_t r10_2 = (r8_1 * rcx + 0x3c6ef35f) * r8_1 + rcx
int32_t rax_5 = (r8_1 * rcx + 0x3c6ef35f) * r10_2 + r8_1
zmm3[0] = float.s(zx.q(r10_2 u>> 0x10))
int64_t zmm2
zmm2.d = float.s(zx.q(rax_5 u>> 0x10))
zmm0[0] = float.s(zx.q((r10_2 * rax_5 + r8_1 * rcx + 0x3c6ef35f) u>> 0x10))
zmm3[0] = zmm3[0] * 0.00999999978f
zmm0[0] = zmm0[0] * 0.00999999978f
zmm2.d = zmm2.d f* 0.00999999978f
float var_10 = zmm0[0]
*(arg1 + 0x34) = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg1 + 0x3c) = var_10
void*** rax_10 = j_sub_140a82f30(0xd8)
void*** rdi = rax_10

if (rax_10 == 0)
    rdi = nullptr
else
    sub_140744780(rax_10)
    *rdi = &data_142dafb38
    rdi[0x19] = *(arg1 + 0x34)
    rdi[0x1a].d = *(arg1 + 0x3c)

int64_t* rcx_5 = arg1[5]

if (rcx_5 != rdi)
    arg1[5] = rdi
    
    if (rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)

return arg1

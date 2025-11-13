// 函数: sub_14149e7e0
// 地址: 0x14149e7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x550)
int32_t r9 = *(arg1 + 0x544)
int32_t r8 = *(arg1 + 0x540)
int128_t zmm6
zmm6.d = float.s(zx.q(*(arg1 + 0x54c) + r9 + r10))
int128_t zmm8
zmm8.d = float.s(zx.q(r9 + r10))
int128_t zmm9
zmm9.d = float.s(zx.q(r8 + r10))
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int128_t zmm7
zmm7.d = float.s(zx.q(*(arg1 + 0x548) + r8 + r10))
void* rax_6 = &rcx_4[5]

if (rax_6 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_4[5]

*(arg2 + 0x30) = rax_6
int64_t* rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_7 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
rcx_4[2].d = zmm9.d
*(rcx_4 + 0x14) = zmm8.d
*(rcx_4 + 0x1c) = zmm7.d
rcx_4[4].d = zmm6.d
*rcx_4 = &data_142d54998
rcx_4[3].d = 0
*(rcx_4 + 0x24) = 0x3f800000
return &data_142d54998

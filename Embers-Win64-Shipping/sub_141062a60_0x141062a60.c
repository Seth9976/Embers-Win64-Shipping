// 函数: sub_141062a60
// 地址: 0x141062a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, 0x290)
int128_t* rdx = &arg2[0xf]
arg2[0x51].d = arg1[0x4d].d
int64_t i_1 = 2
arg2[0x4e].d = arg1[0x4a].d
*arg2 = *arg1
*(arg2 + 0x228) = *(arg1 + 0x208)
arg2[0x47].d = arg1[0x43].d
*(arg2 + 0x23c) = *(arg1 + 0x21c)
void* rax_5 = &arg1[0xb]
*(arg2 + 8) = *(arg1 + 8)
*(arg2 + 0x48) = *(arg1 + 0x48)
*(arg2 + 0x38) = *(arg1 + 0x38)
*(arg2 + 0x28) = *(arg1 + 0x28)
*(arg2 + 0x18) = *(arg1 + 0x18)
int64_t i

do
    rdx = &rdx[8]
    uint128_t zmm0 = *rax_5
    rax_5 += 0x80
    rdx[-8] = zmm0
    rdx[-7] = *(rax_5 - 0x70)
    rdx[-6] = *(rax_5 - 0x60)
    rdx[-5] = *(rax_5 - 0x50)
    rdx[-4] = *(rax_5 - 0x40)
    rdx[-3] = *(rax_5 - 0x30)
    rdx[-2] = *(rax_5 - 0x20)
    rdx[-1] = *(rax_5 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
*rdx = *rax_5
rdx[1] = *(rax_5 + 0x10)
rdx[2] = *(rax_5 + 0x20)
rdx[3] = *(rax_5 + 0x30)
rdx[4].q = *(rax_5 + 0x40)
uint128_t zmm1 = *(arg1 + 0x1d0)
uint128_t zmm2 = *(arg1 + 0x1e0)
uint128_t zmm3 = *(arg1 + 0x1f0)
int64_t rcx_2 = zmm2.q
uint32_t var_74 = (zmm1.q u>> 0x20).d
uint32_t var_10 = (arg1[0x40]).d
int32_t var_70 = _mm_bsrli_si128(zmm1, 8).d
int32_t var_60 = _mm_bsrli_si128(zmm2, 8).d
int32_t var_78 = zmm1.d
uint32_t var_6c = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
int32_t var_54 = _mm_bsrli_si128(zmm3, 4).d
zmm1 = _mm_bsrli_si128(zmm3, 8)
*(arg2 + 0x1f0) = var_78.o
int32_t var_50 = zmm1.d
uint8_t var_67 = (rcx_2 u>> 8).b
uint32_t var_5c = (_mm_bsrli_si128(zmm2, 8).q u>> 0x20).d
uint32_t var_64 = (rcx_2 u>> 0x20).d
int32_t var_4c = _mm_bsrli_si128(zmm3, 0xc).d
*(arg2 + 0x200) = zmm2.b.o
*(arg2 + 0x210) = zmm3.d.o
arg2[0x44].d = var_10
*(arg2 + 0x264) = *(arg1 + 0x244)
*(arg2 + 0x1c4) = *(arg1 + 0x1a4)
*(arg2 + 0x1d4) = *(arg1 + 0x1b4)
*(arg2 + 0x1e4) = *(arg1 + 0x1c4)
*(arg2 + 0x1ec) = *(arg1 + 0x1cc)
arg2[0x48].d = arg1[0x48].d
*(arg2 + 0x244) = *(arg1 + 0x220)
*(arg2 + 0x254) = *(arg1 + 0x230)
__builtin_memset(&arg2[0xb], 0, 0x20)
arg2[0x4d] = arg1[0x49]
arg2[0x38].d = arg1[0x34].d
*(arg2 + 0x278) = *(arg1 + 0x258)
return arg2

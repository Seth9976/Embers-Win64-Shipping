// 函数: sub_141348310
// 地址: 0x141348310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(arg1[4].d)
uint128_t zmm8 = zx.o(*(arg1 + 0x1c))
void* rax = &r8_2[5]
uint128_t zmm9 = zx.o(arg1[3].d)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x24)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r8_2[5]

*(arg2 + 0x30) = rax
void** rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = r8_2
*(arg2 + 8) = &r8_2[1]
r8_2[1] = 0
*r8_2 = &data_142d54998
r8_2[2].d = zmm9.d
*(r8_2 + 0x14) = zmm8.d
*(r8_2 + 0x1c) = zmm7.d
r8_2[4].d = zmm6.d
r8_2[3].d = 0
*(r8_2 + 0x24) = 0x3f800000
sub_141461130(arg2, &arg1[0xa])
void* rax_3 = *arg1
int64_t r8_5 = 0

if (rax_3 != 0)
    int64_t rdx_1 = sx.q(*(rax_3 + 0x10c))
    int64_t* rdi_1 = *(arg1[1] + 0x10)
    int64_t rax_5 = rdi_1[3]
    
    if (*(rax_5 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_5 = rdi_1[3]
    
    r8_5 = *(rax_5 + (rdx_1 << 3))

void* r9_1
int512_t zmm2
int512_t zmm3
r9_1, zmm2, zmm3 = sub_1413405f0(arg2, arg1, r8_5, arg1[2])
int32_t rcx_4 = *(arg1 + 0x34)
int32_t rax_7 = arg1[4].d - arg1[3].d
int32_t rdx_3 = arg1[6].d
int32_t arg_c = *(arg1 + 0x24) - *(arg1 + 0x1c)
int32_t rax_11 = *(arg1 + 0x3c) - rcx_4
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rcx_4))
zmm3.o = zx.o(rax_11)
int32_t rax_13 = arg1[7].d - rdx_3
zmm2.o = zx.o(rdx_3)
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
int64_t rax_14 = arg1[5]
int32_t var_88 = zmm3.d
zmm3.o = arg1[8].d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_13))
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
int32_t var_a0 = zmm2.d
zmm2.o = *(arg1 + 0x4c)
return sub_1413993b0(arg2, arg1[9].d, zmm2, r9_1, zmm3, (*(arg1 + 0x44)).d, var_a0, zmm1.d, zmm0.d, 
    var_88, rax_7.q, rax_14, &arg1[0xa], 0, 1)

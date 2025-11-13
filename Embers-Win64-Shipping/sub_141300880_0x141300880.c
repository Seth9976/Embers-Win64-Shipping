// 函数: sub_141300880
// 地址: 0x141300880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(arg1[6].d)
uint128_t zmm8 = zx.o(*(arg1 + 0x2c))
void* rax = &r8_2[5]
uint128_t zmm9 = zx.o(arg1[5].d)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r8_2[5]

int64_t r15 = 0
*(arg2 + 0x30) = rax
*(arg2 + 0x14) += 1
**(arg2 + 8) = r8_2
*(arg2 + 8) = &r8_2[1]
r8_2[1] = 0
*r8_2 = &data_142d54998
r8_2[2].d = zmm9.d
*(r8_2 + 0x14) = zmm8.d
*(r8_2 + 0x1c) = zmm7.d
r8_2[4].d = zmm6.d
r8_2[3].d = 0
*(r8_2 + 0x24) = 0x3f800000
int64_t rax_3 = arg1[2]
int64_t rax_4 = arg1[3]
int64_t rax_5 = *arg1
int64_t rax_6 = arg1[1]
int64_t var_e8 = data_14395da00
int64_t var_e0 = data_14395d9e8
int64_t var_d8 = data_1439b67d8
int128_t var_108 = rax_5.o
int128_t var_f8 = rax_3.o
sub_141461130(arg2, &var_108)
void* rax_10 = *arg1
int64_t r8_5 = 0

if (rax_10 != 0)
    int64_t rdx_1 = sx.q(*(rax_10 + 0x10c))
    int64_t* rdi_1 = *(arg1[1] + 0x10)
    int64_t rax_12 = rdi_1[3]
    
    if (*(rax_12 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_12 = rdi_1[3]
    
    r8_5 = *(rax_12 + (rdx_1 << 3))

sub_1412fd860(arg2, arg1, r8_5, arg1[4])
void* rax_13 = arg1[2]

if (rax_13 != 0)
    int64_t rdx_3 = sx.q(*(rax_13 + 0x10c))
    int64_t* rdi_2 = *(arg1[3] + 0x10)
    int64_t rax_15 = rdi_2[3]
    
    if (*(rax_15 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rdi_2, rdx_3.d)
        rax_15 = rdi_2[3]
    
    r15 = *(rax_15 + (rdx_3 << 3))

sub_1412fd2a0(arg2, &arg1[2], r15, arg1[4])
void var_c8
sub_141385550(&var_c8, arg2, arg1[7])
int64_t* rcx_7 = arg1[8]
int64_t r9_2 = *rcx_7
(*(r9_2 + 0x130))(rcx_7, &var_c8, *arg1[4] + 0x44, r9_2, rax_5, rax_6, rax_3, rax_4)
return sub_141386800(&var_c8)

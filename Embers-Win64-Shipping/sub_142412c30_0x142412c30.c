// 函数: sub_142412c30
// 地址: 0x142412c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg2

if (r15 == 0 || *(r15 + 0x10) == 0)
    return &__return_addr

void*** rax = j_sub_140a82f30(0x1b0)
void*** rdi_1 = rax
uint128_t zmm0_1

if (rax == 0)
    rdi_1 = nullptr
else
    int32_t var_f4_1 = 0
    void var_e8
    int32_t rcx_1 = *sub_140b5e500(&var_e8, 0x3e)
    int64_t* rcx_2 = *(data_143f5b298 + 0x3e0)
    int64_t rax_4 = (*(*rcx_2 + 0x280))(rcx_2)
    sub_142118c70(rdi_1)
    rdi_1[0x32] = rax_4
    *rdi_1 = &data_142e0eff8
    zmm0_1 = data_14399f5c0
    rdi_1[0x35] = rcx_1.q
    *(rdi_1 + 0x198) = zmm0_1

int64_t r14_1 = sx.q(arg4[0x16].d)
int32_t rax_6 = (r14_1 + 1).d
arg4[0x16].d = rax_6

if (rax_6 s> *(arg4 + 0xb4))
    sub_14083a310(&arg4[0x15], r14_1.d)

int64_t rax_7 = arg4[0x15]
char arg_10 = 0
*(rax_7 + (r14_1 << 3)) = rdi_1
float zmm1[0x4] = *(arg2 + 0xc0)
uint128_t var_c8 = *(arg2 + 0xb0)
float var_b8_1[0x4] = zmm1
uint128_t var_a8_1 = *(arg2 + 0xd0)
float var_98_1[0x4] = *(arg2 + 0xe0)
uint128_t var_88_1 = *(arg2 + 0x30)
float var_78_1[0x4] = *(arg2 + 0x40)
uint128_t var_68_1 = *(arg2 + 0x50)
float var_58_1[0x4] = *(arg2 + 0x60)
zmm1 = 0x3f800000
float zmm3[0x4] = 0x3f800000
zmm3[0] = 1f f/ _mm_cvtepi32_ps(zx.o(*(r15 + 0x18))).d
int64_t zmm2
zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o(*(r15 + 0x1c))).d
zmm1[0] = 1f f/ _mm_cvtepi32_ps(zx.o(*(r15 + 0x20))).d
zmm0_1.d = (*(arg2 + 0xf4)).d f* *(r15 + 0x24)
float var_40_1 = zmm1[0]
char* var_d8_1 = &arg_10
float temp0_4[0x4] = _mm_unpacklo_ps(zmm3, zmm2)
void*** (* var_e0)() = j_sub_140597fc0
int32_t var_3c_1 = zmm0_1.d
int64_t var_48_1 = temp0_4.q
void*** rax_10 = sub_14081d830(0x18, sub_140a756e0(&var_e0, &data_143958018) + 0x10, 1, 0)
void*** r14_2 = rax_10

if (rax_10 == 0)
    r14_2 = nullptr
else
    *r14_2 = &data_143347340
    r14_2[1] = 0
    r14_2[2] = 0

int64_t r13_1 = sx.q(arg4[0x18].d)
int32_t rax_11 = (r13_1 + 1).d
arg4[0x18].d = rax_11

if (rax_11 s> *(arg4 + 0xc4))
    sub_14083a310(&arg4[0x17], r13_1.d)

*(arg4[0x17] + (r13_1 << 3)) = r14_2
int64_t* rcx_7 = data_143f0f180
void* var_f0
(*(*rcx_7 + 0xf8))(rcx_7, &var_f0, &var_c8, &data_143f5c010, 1, 1)
void* rax_14 = var_f0
void* var_108 = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

sub_1405d1550(&var_f0)
sub_1405d1600(&r14_2[1], &var_108)
sub_1405d1550(&var_108)
sub_1405d16e0(&r14_2[2], *(r15 + 0x10))
int32_t rax_15 = sub_14081f8e0(arg4, 1)
int64_t* r8_5 = zx.q(rax_15 s% 0x66) * 0xa0 + *(*arg4 + (sx.q(rax_15 s/ 0x66) << 3))
int64_t* rcx_17 = r8_5
*(r8_5 + 0x9c) &= 0xffffe15b
*(r8_5 + 0x9c) |= 0x100
r8_5[0xf] = arg1
r8_5[0x10] = rdi_1
int64_t* rax_18 = r8_5[0xd]

if (rax_18 != 0)
    rcx_17 = rax_18

*(rcx_17 + 0x44) = 1
int32_t rax_21 = *(r15 + 0x1c) * *(r15 + 0x18) * *(r15 + 0x20)
rcx_17[8].d = 0
rcx_17[0xa].d = 0
*(rcx_17 + 0x54) = 1
rcx_17[9].d = rax_21
*rcx_17 = data_143f55b28
rcx_17[4] = r14_2
*(r8_5 + 0x9c) &= 0xfffeffff
return sub_1422dd2a0(arg4, arg3, r8_5)

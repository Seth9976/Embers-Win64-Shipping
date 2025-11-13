// 函数: sub_141e2ba30
// 地址: 0x141e2ba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = arg2[1]
float zmm2 = *arg2
float zmm1 = arg2[2]
zmm0.d = zmm0.d f* zmm0.d

if (not(zmm2 * zmm2 f+ zmm0.d + zmm1 * zmm1 > 9.99999994e-09f))
    int32_t var_c0_1 = 0x3f800000
    *arg2 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
    arg2[2] = 0x3f800000

int64_t var_b8
__builtin_memset(&var_b8, 0, 0x20)
int64_t var_a8
sub_140638cc0(&var_a8, 8)
sub_14083ad30(&var_b8, 0xc)
int128_t zmm13 = *arg2
int128_t zmm6 = arg2[1]
int128_t zmm8 = zmm13
int128_t zmm7 = zmm6
int64_t var_a0
int64_t rdi = sx.q(var_a0.d)
zmm13.d = zmm13.d f* -0.5f
int32_t rdx = var_a0:4.d
zmm6.d = zmm6.d f* -0.5f
int32_t rbx_1 = (rdi + 1).d
var_a0.d = rbx_1
int128_t zmm10
zmm10.d = arg2[2].d f* 0.5f
int32_t var_c8 = zmm13.d
int32_t var_c4 = zmm6.d
int32_t var_c0_2 = zmm10.d
zmm8.d = zmm8.d f* 0.5f
zmm7.d = zmm7.d f* 0.5f

if (rbx_1 s> rdx)
    sub_140638a00(&var_a8)
    rdx = var_a0:4.d
    rbx_1 = var_a0.d

int64_t zmm0_1 = var_c8.q
int64_t rcx_3 = rdi * 3
int64_t rdi_1 = var_a8
int32_t r14 = rbx_1 + 1
int128_t zmm11 = zmm7 ^ data_142d3f780
var_c8 = zmm8.d
*(rdi_1 + (rcx_3 << 2)) = zmm0_1
*(rdi_1 + (rcx_3 << 2) + 8) = var_c0_2
int32_t var_c4_1 = zmm6.d
int32_t var_c0_3 = zmm10.d
var_a0.d = r14

if (r14 s> rdx)
    sub_140638a00(&var_a8)
    rdx = var_a0:4.d
    r14 = var_a0.d
    rdi_1 = var_a8

zmm0_1 = var_c8.q
zmm6 = zmm10 ^ data_142d3f780
int32_t rbx_2 = r14 + 1
var_c8 = zmm8.d
int32_t var_c4_2 = zmm11.d
var_a0.d = rbx_2
int64_t rcx_5 = sx.q(rbx_1) * 3
*(rdi_1 + (rcx_5 << 2)) = zmm0_1
*(rdi_1 + (rcx_5 << 2) + 8) = var_c0_3
int32_t var_c0_4 = zmm6.d

if (rbx_2 s> rdx)
    sub_140638a00(&var_a8)
    rdx = var_a0:4.d
    rbx_2 = var_a0.d
    rdi_1 = var_a8

zmm0_1 = var_c8.q
int128_t zmm9 = zmm8 ^ data_142d3f780
int32_t r14_1 = rbx_2 + 1
var_c8 = zmm13.d
int32_t var_c4_3 = zmm11.d
var_a0.d = r14_1
int64_t rcx_7 = sx.q(r14) * 3
*(rdi_1 + (rcx_7 << 2)) = zmm0_1
*(rdi_1 + (rcx_7 << 2) + 8) = var_c0_4
int32_t var_c0_5 = zmm6.d

if (r14_1 s> rdx)
    sub_140638a00(&var_a8)
    rdx = var_a0:4.d
    r14_1 = var_a0.d
    rdi_1 = var_a8

zmm0_1 = var_c8.q
int32_t rbx_3 = r14_1 + 1
var_c8 = zmm8.d
int32_t var_c4_4 = zmm7.d
var_a0.d = rbx_3
int64_t rcx_9 = sx.q(rbx_2) * 3
*(rdi_1 + (rcx_9 << 2)) = zmm0_1
*(rdi_1 + (rcx_9 << 2) + 8) = var_c0_5
int32_t var_c0_6 = zmm10.d

if (rbx_3 s> rdx)
    sub_140638a00(&var_a8)
    rdx = var_a0:4.d
    rbx_3 = var_a0.d
    rdi_1 = var_a8

zmm0_1 = var_c8.q
int32_t r14_2 = rbx_3 + 1
var_c8 = zmm9.d
int32_t var_c4_5 = zmm7.d
var_a0.d = r14_2
int64_t rcx_11 = sx.q(r14_1) * 3
*(rdi_1 + (rcx_11 << 2)) = zmm0_1
*(rdi_1 + (rcx_11 << 2) + 8) = var_c0_6
int32_t var_c0_7 = zmm10.d

if (r14_2 s> rdx)
    sub_140638a00(&var_a8)
    rdx = var_a0:4.d
    r14_2 = var_a0.d
    rdi_1 = var_a8

zmm0_1 = var_c8.q
int32_t rbx_4 = r14_2 + 1
var_c8 = zmm9.d
int32_t var_c4_6 = zmm7.d
var_a0.d = rbx_4
int64_t rcx_13 = sx.q(rbx_3) * 3
*(rdi_1 + (rcx_13 << 2)) = zmm0_1
*(rdi_1 + (rcx_13 << 2) + 8) = var_c0_7
int32_t var_c0_8 = zmm6.d

if (rbx_4 s> rdx)
    sub_140638a00(&var_a8)
    rdx = var_a0:4.d
    rbx_4 = var_a0.d
    rdi_1 = var_a8

zmm0_1 = var_c8.q
int32_t r12 = rbx_4 + 1
var_c8 = zmm8.d
int32_t var_c4_7 = zmm7.d
var_a0.d = r12
int64_t rcx_15 = sx.q(r14_2) * 3
*(rdi_1 + (rcx_15 << 2)) = zmm0_1
*(rdi_1 + (rcx_15 << 2) + 8) = var_c0_8
int32_t var_c0_9 = zmm6.d

if (r12 s> rdx)
    sub_140638a00(&var_a8)
    r12 = var_a0.d
    rdi_1 = var_a8

zmm0_1 = var_c8.q
int64_t var_b0
int32_t rdx_9 = var_b0:4.d
int64_t rbx_5 = sx.q(var_b0.d)
var_c8 = 0
int32_t var_c4_8 = 1
int64_t rcx_17 = sx.q(rbx_4) * 3
int32_t r14_3 = (rbx_5 + 1).d
*(rdi_1 + (rcx_17 << 2)) = zmm0_1
*(rdi_1 + (rcx_17 << 2) + 8) = var_c0_9
var_b0.d = r14_3

if (r14_3 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r14_3 = var_b0.d

zmm0_1 = var_c8.q
int64_t rcx_19 = rbx_5 * 3
int64_t rbx_6 = var_b8
int32_t r15 = r14_3 + 1
var_c8 = 1
int32_t var_c4_9 = 2
var_b0.d = r15
*(rbx_6 + (rcx_19 << 2)) = zmm0_1
*(rbx_6 + (rcx_19 << 2) + 8) = 3

if (r15 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r15 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r14_4 = r15 + 1
var_c8 = 4
int32_t var_c4_10 = 5
var_b0.d = r14_4
int64_t rcx_21 = sx.q(r14_3) * 3
*(rbx_6 + (rcx_21 << 2)) = zmm0_1
*(rbx_6 + (rcx_21 << 2) + 8) = 3

if (r14_4 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r14_4 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r15_1 = r14_4 + 1
var_c8 = 5
int32_t var_c4_11 = 6
var_b0.d = r15_1
int64_t rcx_23 = sx.q(r15) * 3
*(rbx_6 + (rcx_23 << 2)) = zmm0_1
*(rbx_6 + (rcx_23 << 2) + 8) = 7

if (r15_1 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r15_1 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r14_5 = r15_1 + 1
var_c8 = 0
int32_t var_c4_12 = 5
var_b0.d = r14_5
int64_t rcx_25 = sx.q(r14_4) * 3
*(rbx_6 + (rcx_25 << 2)) = zmm0_1
*(rbx_6 + (rcx_25 << 2) + 8) = 7

if (r14_5 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r14_5 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r15_2 = r14_5 + 1
var_c8 = 5
int32_t var_c4_13 = 4
var_b0.d = r15_2
int64_t rcx_27 = sx.q(r15_1) * 3
*(rbx_6 + (rcx_27 << 2)) = zmm0_1
*(rbx_6 + (rcx_27 << 2) + 8) = 1

if (r15_2 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r15_2 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r14_6 = r15_2 + 1
var_c8 = 1
int32_t var_c4_14 = 4
var_b0.d = r14_6
int64_t rcx_29 = sx.q(r14_5) * 3
*(rbx_6 + (rcx_29 << 2)) = zmm0_1
*(rbx_6 + (rcx_29 << 2) + 8) = 1

if (r14_6 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r14_6 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r15_3 = r14_6 + 1
var_c8 = 2
int32_t var_c4_15 = 4
var_b0.d = r15_3
int64_t rcx_31 = sx.q(r15_2) * 3
*(rbx_6 + (rcx_31 << 2)) = zmm0_1
*(rbx_6 + (rcx_31 << 2) + 8) = 2

if (r15_3 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r15_3 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r14_7 = r15_3 + 1
var_c8 = 0
int32_t var_c4_16 = 3
var_b0.d = r14_7
int64_t rcx_33 = sx.q(r14_6) * 3
*(rbx_6 + (rcx_33 << 2)) = zmm0_1
*(rbx_6 + (rcx_33 << 2) + 8) = 7

if (r14_7 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r14_7 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r15_4 = r14_7 + 1
var_c8 = 5
int32_t var_c4_17 = 3
var_b0.d = r15_4
int64_t rcx_35 = sx.q(r15_3) * 3
*(rbx_6 + (rcx_35 << 2)) = zmm0_1
*(rbx_6 + (rcx_35 << 2) + 8) = 5

if (r15_4 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r15_4 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r14_8 = r15_4 + 1
var_c8 = 3
int32_t var_c4_18 = 2
var_b0.d = r14_8
int64_t rcx_37 = sx.q(r14_7) * 3
*(rbx_6 + (rcx_37 << 2)) = zmm0_1
*(rbx_6 + (rcx_37 << 2) + 8) = 6

if (r14_8 s> rdx_9)
    sub_14083a7e0(&var_b8)
    rdx_9 = var_b0:4.d
    r14_8 = var_b0.d
    rbx_6 = var_b8

zmm0_1 = var_c8.q
int32_t r15_5 = r14_8 + 1
var_c8 = 2
int32_t var_c4_19 = 7
var_b0.d = r15_5
int64_t rcx_39 = sx.q(r15_4) * 3
*(rbx_6 + (rcx_39 << 2)) = zmm0_1
*(rbx_6 + (rcx_39 << 2) + 8) = 6

if (r15_5 s> rdx_9)
    sub_14083a7e0(&var_b8)
    r15_5 = var_b0.d
    rbx_6 = var_b8

int64_t rcx_41 = sx.q(r14_8) * 3
*(rbx_6 + (rcx_41 << 2)) = var_c8.q
*(rbx_6 + (rcx_41 << 2) + 8) = 6
*arg1 = 0
arg1[1].d = r12

if (r12 != 0)
    sub_1407c3650(arg1, r12, 0)
    memcpy(*arg1, rdi_1, r12 * 0xc)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
arg1[3].d = r15_5

if (r15_5 != 0)
    sub_1407c3650(&arg1[2], r15_5, 0)
    memcpy(arg1[2], rbx_6, r15_5 * 0xc)
else
    *(arg1 + 0x1c) = 0

arg1[4].d = sub_141e18090(arg1, &arg1[2])
int64_t* rax_28 = sub_141e17910(&var_c8, arg1, &arg1[2])
*(arg1 + 0x24) = *rax_28
*(arg1 + 0x2c) = rax_28[1].d

if (rbx_6 != 0)
    sub_140a74f90(rbx_6)

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

return arg1

// 函数: sub_14075e9f0
// 地址: 0x14075e9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* var_c0 = nullptr
int32_t var_b8 = 1
int64_t var_c8 = data_143cdf9e0
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x18)
int64_t var_90
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64 = 0x80
int32_t var_60 = 0xffffffff
int32_t var_5c = 0
int64_t var_50 = 0
int32_t var_48 = 0
int64_t var_f8
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t var_f0 = var_f8
int64_t var_e8 = *(arg1 + 0x10)
int32_t var_e0 = 0xffff0001
int16_t var_dc = 0xffff
int64_t var_d8 = 0
int64_t var_d0 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi = var_c0
sub_140745220(rsi, &var_f0)

if (var_d8 != 0)
    sub_140a74f90(var_d8)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi = sx.q(var_b8)
var_f0 = var_f8
int64_t var_e8_1 = data_14396f0a8
var_e0.w = data_14396f0b0
int32_t rax_11 = (rdi + 1).d
var_e0 = 0xffffffff
int64_t var_d8_1 = 0
int64_t var_d0_1 = 0
var_b8 = rax_11

if (rax_11 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi = var_c0

sub_140745220(&rsi[rdi * 5], &var_f0)

if (var_d8_1 != 0)
    sub_140a74f90(var_d8_1)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8
int64_t rsi_1 = sx.q(var_a8.d)
int32_t r15 = var_a8:4.d
var_f0 = var_f8
int32_t rdi_1 = (rsi_1 + 1).d
int64_t var_e8_2 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_2 = 0
int64_t var_d0_2 = 0
var_a8.d = rdi_1

if (rdi_1 s> r15)
    sub_1405c4ec0(&var_b0)
    r15 = var_a8:4.d
    rdi_1 = var_a8.d

int64_t r14 = var_b0
sub_140745220(r14 + rsi_1 * 0x28, &var_f0)

if (var_d8_2 != 0)
    sub_140a74f90(var_d8_2)

sub_140b58260(&var_f8, u"Rotation", 1)
int32_t rsi_2 = rdi_1 + 1
var_f0 = var_f8
int64_t var_e8_3 = data_14396f0f8
var_e0.w = data_14396f100
var_e0 = 0xffffffff
int64_t var_d8_3 = 0
int64_t var_d0_3 = 0
var_a8.d = rsi_2

if (rsi_2 s> r15)
    sub_1405c4ec0(&var_b0)
    r15 = var_a8:4.d
    rsi_2 = var_a8.d
    r14 = var_b0

sub_140745220(r14 + sx.q(rdi_1) * 0x28, &var_f0)

if (var_d8_3 != 0)
    sub_140a74f90(var_d8_3)

sub_140b58260(&var_f8, u"Velocity", 1)
var_f0 = var_f8
int64_t var_e8_4 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_4 = 0
int64_t var_d0_4 = 0
var_a8.d = rsi_2 + 1

if (rsi_2 + 1 s> r15)
    sub_1405c4ec0(&var_b0)
    r14 = var_b0

sub_140745220(r14 + sx.q(rsi_2) * 0x28, &var_f0)

if (var_d8_4 != 0)
    sub_140a74f90(var_d8_4)

int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_27 = (rdi_2 + 1).d
arg2[1].d = rax_27

if (rax_27 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_2 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_1 = 1
var_c8 = data_143cdf9e8
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_1 = 0x80
int32_t var_60_1 = 0xffffffff
int32_t var_5c_1 = 0
int64_t var_50_1 = 0
int32_t var_48_1 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_5 = *(arg1 + 0x10)
int32_t var_e0_1 = 0xffff0001
int16_t var_dc_1 = 0xffff
int64_t var_d8_5 = 0
int64_t var_d0_5 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_3 = var_c0
sub_140745220(rsi_3, &var_f0)

if (var_d8_5 != 0)
    sub_140a74f90(var_d8_5)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi_3 = sx.q(var_b8_1)
var_f0 = var_f8
int64_t var_e8_6 = data_14396f0a8
var_e0_1.w = data_14396f0b0
int32_t rax_37 = (rdi_3 + 1).d
var_e0_1 = 0xffffffff
int64_t var_d8_6 = 0
int64_t var_d0_6 = 0
var_b8_1 = rax_37

if (rax_37 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_3 = var_c0

sub_140745220(&rsi_3[rdi_3 * 5], &var_f0)

if (var_d8_6 != 0)
    sub_140a74f90(var_d8_6)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8_1
int64_t rsi_4 = sx.q(var_a8_1.d)
int32_t r15_1 = var_a8_1:4.d
var_f0 = var_f8
int32_t rdi_4 = (rsi_4 + 1).d
int64_t var_e8_7 = data_14396f0c8
var_e0_1.w = data_14396f0d0
var_e0_1 = 0xffffffff
int64_t var_d8_7 = 0
int64_t var_d0_7 = 0
var_a8_1.d = rdi_4

if (rdi_4 s> r15_1)
    sub_1405c4ec0(&var_b0)
    r15_1 = var_a8_1:4.d
    rdi_4 = var_a8_1.d

int64_t r14_1 = var_b0
sub_140745220(r14_1 + rsi_4 * 0x28, &var_f0)

if (var_d8_7 != 0)
    sub_140a74f90(var_d8_7)

sub_140b58260(&var_f8, u"Rotation", 1)
int32_t rsi_5 = rdi_4 + 1
var_f0 = var_f8
int64_t var_e8_8 = data_14396f0f8
var_e0_1.w = data_14396f100
var_e0_1 = 0xffffffff
int64_t var_d8_8 = 0
int64_t var_d0_8 = 0
var_a8_1.d = rsi_5

if (rsi_5 s> r15_1)
    sub_1405c4ec0(&var_b0)
    r15_1 = var_a8_1:4.d
    rsi_5 = var_a8_1.d
    r14_1 = var_b0

sub_140745220(r14_1 + sx.q(rdi_4) * 0x28, &var_f0)

if (var_d8_8 != 0)
    sub_140a74f90(var_d8_8)

sub_140b58260(&var_f8, u"Velocity", 1)
var_f0 = var_f8
int64_t var_e8_9 = data_14396f0c8
var_e0_1.w = data_14396f0d0
var_e0_1 = 0xffffffff
int64_t var_d8_9 = 0
int64_t var_d0_9 = 0
var_a8_1.d = rsi_5 + 1

if (rsi_5 + 1 s> r15_1)
    sub_1405c4ec0(&var_b0)
    r14_1 = var_b0

sub_140745220(r14_1 + sx.q(rsi_5) * 0x28, &var_f0)

if (var_d8_9 != 0)
    sub_140a74f90(var_d8_9)

int64_t rdi_5 = sx.q(arg2[1].d)
int32_t rax_53 = (rdi_5 + 1).d
arg2[1].d = rax_53

if (rax_53 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_5 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_2 = 1
var_c8 = data_143cdf9f0
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_2 = 0x80
int32_t var_60_2 = 0xffffffff
int32_t var_5c_2 = 0
int64_t var_50_2 = 0
int32_t var_48_2 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_10 = *(arg1 + 0x10)
int32_t var_e0_2 = 0xffff0001
int16_t var_dc_2 = 0xffff
int64_t var_d8_10 = 0
int64_t var_d0_10 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_6 = var_c0
sub_140745220(rsi_6, &var_f0)

if (var_d8_10 != 0)
    sub_140a74f90(var_d8_10)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t r14_2 = sx.q(var_b8_2.d)
int32_t r15_2 = var_b8_2:4.d
var_f0 = var_f8
int32_t rdi_6 = (r14_2 + 1).d
int64_t var_e8_11 = data_14396f0a8
var_e0_2.w = data_14396f0b0
var_e0_2 = 0xffffffff
int64_t var_d8_11 = 0
int64_t var_d0_11 = 0
var_b8_2.d = rdi_6

if (rdi_6 s> r15_2)
    sub_1405c4ec0(&var_c0)
    r15_2 = var_b8_2:4.d
    rdi_6 = var_b8_2.d
    rsi_6 = var_c0

sub_140745220(&rsi_6[r14_2 * 5], &var_f0)

if (var_d8_11 != 0)
    sub_140a74f90(var_d8_11)

sub_140b58260(&var_f8, u"Interpolation", 1)
var_f0 = var_f8
int64_t var_e8_12 = data_14396f088
var_e0_2.w = data_14396f090
var_e0_2 = 0xffffffff
int64_t var_d8_12 = 0
int64_t var_d0_12 = 0
var_b8_2.d = rdi_6 + 1

if (rdi_6 + 1 s> r15_2)
    sub_1405c4ec0(&var_c0)
    rsi_6 = var_c0

sub_140745220(&rsi_6[sx.q(rdi_6) * 5], &var_f0)

if (var_d8_12 != 0)
    sub_140a74f90(var_d8_12)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8_2
int64_t rsi_7 = sx.q(var_a8_2.d)
int32_t r15_3 = var_a8_2:4.d
var_f0 = var_f8
int32_t rdi_7 = (rsi_7 + 1).d
int64_t var_e8_13 = data_14396f0c8
var_e0_2.w = data_14396f0d0
var_e0_2 = 0xffffffff
int64_t var_d8_13 = 0
int64_t var_d0_13 = 0
var_a8_2.d = rdi_7

if (rdi_7 s> r15_3)
    sub_1405c4ec0(&var_b0)
    r15_3 = var_a8_2:4.d
    rdi_7 = var_a8_2.d

int64_t r14_3 = var_b0
sub_140745220(r14_3 + rsi_7 * 0x28, &var_f0)

if (var_d8_13 != 0)
    sub_140a74f90(var_d8_13)

sub_140b58260(&var_f8, u"Rotation", 1)
int32_t rsi_8 = rdi_7 + 1
var_f0 = var_f8
int64_t var_e8_14 = data_14396f0f8
var_e0_2.w = data_14396f100
var_e0_2 = 0xffffffff
int64_t var_d8_14 = 0
int64_t var_d0_14 = 0
var_a8_2.d = rsi_8

if (rsi_8 s> r15_3)
    sub_1405c4ec0(&var_b0)
    r15_3 = var_a8_2:4.d
    rsi_8 = var_a8_2.d
    r14_3 = var_b0

sub_140745220(r14_3 + sx.q(rdi_7) * 0x28, &var_f0)

if (var_d8_14 != 0)
    sub_140a74f90(var_d8_14)

sub_140b58260(&var_f8, u"Velocity", 1)
var_f0 = var_f8
int64_t var_e8_15 = data_14396f0c8
var_e0_2.w = data_14396f0d0
var_e0_2 = 0xffffffff
int64_t var_d8_15 = 0
int64_t var_d0_15 = 0
var_a8_2.d = rsi_8 + 1

if (rsi_8 + 1 s> r15_3)
    sub_1405c4ec0(&var_b0)
    r14_3 = var_b0

sub_140745220(r14_3 + sx.q(rsi_8) * 0x28, &var_f0)

if (var_d8_15 != 0)
    sub_140a74f90(var_d8_15)

int64_t rdi_8 = sx.q(arg2[1].d)
int32_t rax_83 = (rdi_8 + 1).d
arg2[1].d = rax_83

if (rax_83 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_8 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_3 = 1
var_c8 = data_143cdf9f8
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_3 = 0x80
int32_t var_60_3 = 0xffffffff
int32_t var_5c_3 = 0
int64_t var_50_3 = 0
int32_t var_48_3 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_16 = *(arg1 + 0x10)
int32_t var_e0_3 = 0xffff0001
int16_t var_dc_3 = 0xffff
int64_t var_d8_16 = 0
int64_t var_d0_16 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_9 = var_c0
sub_140745220(rsi_9, &var_f0)

if (var_d8_16 != 0)
    sub_140a74f90(var_d8_16)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t r14_4 = sx.q(var_b8_3.d)
int32_t r15_4 = var_b8_3:4.d
var_f0 = var_f8
int32_t rdi_9 = (r14_4 + 1).d
int64_t var_e8_17 = data_14396f0a8
var_e0_3.w = data_14396f0b0
var_e0_3 = 0xffffffff
int64_t var_d8_17 = 0
int64_t var_d0_17 = 0
var_b8_3.d = rdi_9

if (rdi_9 s> r15_4)
    sub_1405c4ec0(&var_c0)
    r15_4 = var_b8_3:4.d
    rdi_9 = var_b8_3.d
    rsi_9 = var_c0

sub_140745220(&rsi_9[r14_4 * 5], &var_f0)

if (var_d8_17 != 0)
    sub_140a74f90(var_d8_17)

sub_140b58260(&var_f8, u"Interpolation", 1)
var_f0 = var_f8
int64_t var_e8_18 = data_14396f088
var_e0_3.w = data_14396f090
var_e0_3 = 0xffffffff
int64_t var_d8_18 = 0
int64_t var_d0_18 = 0
var_b8_3.d = rdi_9 + 1

if (rdi_9 + 1 s> r15_4)
    sub_1405c4ec0(&var_c0)
    rsi_9 = var_c0

sub_140745220(&rsi_9[sx.q(rdi_9) * 5], &var_f0)

if (var_d8_18 != 0)
    sub_140a74f90(var_d8_18)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8_3
int64_t rdi_10 = sx.q(var_a8_3.d)
int32_t r15_5 = var_a8_3:4.d
var_f0 = var_f8
int32_t rsi_10 = (rdi_10 + 1).d
int64_t var_e8_19 = data_14396f0c8
var_e0_3.w = data_14396f0d0
var_e0_3 = 0xffffffff
int64_t var_d8_19 = 0
int64_t var_d0_19 = 0
var_a8_3.d = rsi_10

if (rsi_10 s> r15_5)
    sub_1405c4ec0(&var_b0)
    r15_5 = var_a8_3:4.d
    rsi_10 = var_a8_3.d

int64_t r14_5 = var_b0
sub_140745220(r14_5 + rdi_10 * 0x28, &var_f0)

if (var_d8_19 != 0)
    sub_140a74f90(var_d8_19)

sub_140b58260(&var_f8, u"Rotation", 1)
int32_t rdi_11 = rsi_10 + 1
var_f0 = var_f8
int64_t var_e8_20 = data_14396f0f8
var_e0_3.w = data_14396f100
var_e0_3 = 0xffffffff
int64_t var_d8_20 = 0
int64_t var_d0_20 = 0
var_a8_3.d = rdi_11

if (rdi_11 s> r15_5)
    sub_1405c4ec0(&var_b0)
    r15_5 = var_a8_3:4.d
    rdi_11 = var_a8_3.d
    r14_5 = var_b0

sub_140745220(r14_5 + sx.q(rsi_10) * 0x28, &var_f0)

if (var_d8_20 != 0)
    sub_140a74f90(var_d8_20)

sub_140b58260(&var_f8, u"Velocity", 1)
var_f0 = var_f8
int64_t var_e8_21 = data_14396f0c8
var_e0_3.w = data_14396f0d0
var_e0_3 = 0xffffffff
int64_t var_d8_21 = 0
int64_t var_d0_21 = 0
var_a8_3.d = rdi_11 + 1

if (rdi_11 + 1 s> r15_5)
    sub_1405c4ec0(&var_b0)
    r14_5 = var_b0

sub_140745220(r14_5 + sx.q(rdi_11) * 0x28, &var_f0)

if (var_d8_21 != 0)
    sub_140a74f90(var_d8_21)

int64_t rdi_12 = sx.q(arg2[1].d)
int32_t var_98
int32_t rax_112 = (((((((((((((((var_98 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_113 = (rdi_12 + 1).d
arg2[1].d = rax_113

if (rax_113 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_12 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_4 = 1
var_c8 = data_143cdfa00
var_b0 = 0
int32_t var_a8_4 = 0
int64_t var_a0 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_4 = 0x80
int32_t var_60_4 = 0xffffffff
int32_t var_5c_4 = 0
int64_t var_50_4 = 0
int32_t var_48_4 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_22 = *(arg1 + 0x10)
int32_t var_e0_4 = 0xffff0001
int16_t var_dc_4 = 0xffff
int64_t var_d8_22 = 0
int64_t var_d0_22 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_11 = var_c0
sub_140745220(rsi_11, &var_f0)

if (var_d8_22 != 0)
    sub_140a74f90(var_d8_22)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi_13 = sx.q(var_b8_4)
var_f0 = var_f8
int64_t var_e8_23 = data_14396f0a8
var_e0_4.w = data_14396f0b0
int32_t rax_123 = (rdi_13 + 1).d
var_e0_4 = 0xffffffff
int64_t var_d8_23 = 0
int64_t var_d0_23 = 0
var_b8_4 = rax_123

if (rax_123 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_11 = var_c0

sub_140745220(&rsi_11[rdi_13 * 5], &var_f0)

if (var_d8_23 != 0)
    sub_140a74f90(var_d8_23)

sub_140b58260(&var_f8, u"IsValid", 1)
int64_t rdi_14 = sx.q(var_a8_4)
var_f0 = var_f8
int64_t var_e8_24 = data_14396f098
var_e0_4.w = data_14396f0a0
int32_t rax_127 = (rdi_14 + 1).d
var_e0_4 = 0xffffffff
int64_t var_d8_24 = 0
int64_t var_d0_24 = 0
var_a8_4 = rax_127

if (rax_127 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_14 * 0x28, &var_f0)

if (var_d8_24 != 0)
    sub_140a74f90(var_d8_24)

int64_t rdi_15 = sx.q(arg2[1].d)
int32_t rax_132 = (rdi_15 + 1).d
arg2[1].d = rax_132

if (rax_132 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_15 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_5 = 1
var_c8 = data_143cdfa08
var_b0 = 0
int32_t var_a8_5 = 0
int64_t var_a0_1 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_5 = 0x80
int32_t var_60_5 = 0xffffffff
int32_t var_5c_5 = 0
int64_t var_50_5 = 0
int32_t var_48_5 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_25 = *(arg1 + 0x10)
int32_t var_e0_5 = 0xffff0001
int16_t var_dc_5 = 0xffff
int64_t var_d8_25 = 0
int64_t var_d0_25 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_12 = var_c0
sub_140745220(rsi_12, &var_f0)

if (var_d8_25 != 0)
    sub_140a74f90(var_d8_25)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t rdi_16 = sx.q(var_b8_5)
int64_t var_e8_26 = sub_14086e490()
var_f0 = var_f8
int32_t rax_140 = (rdi_16 + 1).d
int32_t var_e0_6 = 0xffff0002
int16_t var_dc_6 = 0xffff
int64_t var_d8_26 = 0
int64_t var_d0_26 = 0
var_b8_5 = rax_140

if (rax_140 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_12 = var_c0

sub_140745220(&rsi_12[rdi_16 * 5], &var_f0)

if (var_d8_26 != 0)
    sub_140a74f90(var_d8_26)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi_17 = sx.q(var_a8_5)
var_f0 = var_f8
int64_t var_e8_27 = data_14396f0a8
var_e0_6.w = data_14396f0b0
int32_t rax_144 = (rdi_17 + 1).d
var_e0_6 = 0xffffffff
int64_t var_d8_27 = 0
int64_t var_d0_27 = 0
var_a8_5 = rax_144

if (rax_144 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_17 * 0x28, &var_f0)

if (var_d8_27 != 0)
    sub_140a74f90(var_d8_27)

int64_t rdi_18 = sx.q(arg2[1].d)
int32_t rax_149 = (rdi_18 + 1).d
arg2[1].d = rax_149

if (rax_149 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_18 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_6 = 1
var_c8 = data_143cdfa10
var_b0 = 0
int32_t var_a8_6 = 0
int64_t var_a0_2 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_6 = 0x80
int32_t var_60_6 = 0xffffffff
int32_t var_5c_6 = 0
int64_t var_50_6 = 0
int32_t var_48_6 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_28 = *(arg1 + 0x10)
int32_t var_e0_7 = 0xffff0001
int16_t var_dc_7 = 0xffff
int64_t var_d8_28 = 0
int64_t var_d0_28 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_f0)

if (var_d8_28 != 0)
    sub_140a74f90(var_d8_28)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_19 = sx.q(var_a8_6)
var_f0 = var_f8
int64_t var_e8_29 = data_14396f0a8
var_e0_7.w = data_14396f0b0
int32_t rax_159 = (rdi_19 + 1).d
var_e0_7 = 0xffffffff
int64_t var_d8_29 = 0
int64_t var_d0_29 = 0
var_a8_6 = rax_159

if (rax_159 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_19 * 0x28, &var_f0)

if (var_d8_29 != 0)
    sub_140a74f90(var_d8_29)

int64_t rdi_20 = sx.q(arg2[1].d)
int32_t rax_164 = (rdi_20 + 1).d
arg2[1].d = rax_164

if (rax_164 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_20 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_7 = 1
var_c8 = data_143cdfa18
var_b0 = 0
int32_t var_a8_7 = 0
int64_t var_a0_3 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_7 = 0x80
int32_t var_60_7 = 0xffffffff
int32_t var_5c_7 = 0
int64_t var_50_7 = 0
int32_t var_48_7 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_30 = *(arg1 + 0x10)
int32_t var_e0_8 = 0xffff0001
int16_t var_dc_8 = 0xffff
int64_t var_d8_30 = 0
int64_t var_d0_30 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_13 = var_c0
sub_140745220(rsi_13, &var_f0)

if (var_d8_30 != 0)
    sub_140a74f90(var_d8_30)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t rdi_21 = sx.q(var_b8_7)
int64_t var_e8_31 = sub_14086e490()
var_f0 = var_f8
int32_t rax_172 = (rdi_21 + 1).d
int32_t var_e0_9 = 0xffff0002
int16_t var_dc_9 = 0xffff
int64_t var_d8_31 = 0
int64_t var_d0_31 = 0
var_b8_7 = rax_172

if (rax_172 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_13 = var_c0

sub_140745220(&rsi_13[rdi_21 * 5], &var_f0)

if (var_d8_31 != 0)
    sub_140a74f90(var_d8_31)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi_22 = sx.q(var_a8_7)
var_f0 = var_f8
int64_t var_e8_32 = data_14396f0a8
var_e0_9.w = data_14396f0b0
int32_t rax_176 = (rdi_22 + 1).d
var_e0_9 = 0xffffffff
int64_t var_d8_32 = 0
int64_t var_d0_32 = 0
var_a8_7 = rax_176

if (rax_176 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_22 * 0x28, &var_f0)

if (var_d8_32 != 0)
    sub_140a74f90(var_d8_32)

int64_t rdi_23 = sx.q(arg2[1].d)
int32_t rax_180 = (((((((((((((((rax_112 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_181 = (rdi_23 + 1).d
arg2[1].d = rax_181

if (rax_181 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_23 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_8 = 1
var_c8 = data_143cdfa20
var_b0 = 0
int32_t var_a8_8 = 0
int64_t var_a0_4 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_8 = 0x80
int32_t var_60_8 = 0xffffffff
int32_t var_5c_8 = 0
int64_t var_50_8 = 0
int32_t var_48_8 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_33 = *(arg1 + 0x10)
int32_t var_e0_10 = 0xffff0001
int16_t var_dc_10 = 0xffff
int64_t var_d8_33 = 0
int64_t var_d0_33 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_f0)

if (var_d8_33 != 0)
    sub_140a74f90(var_d8_33)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_24 = sx.q(var_a8_8)
var_f0 = var_f8
int64_t var_e8_34 = data_14396f0a8
var_e0_10.w = data_14396f0b0
int32_t rax_191 = (rdi_24 + 1).d
var_e0_10 = 0xffffffff
int64_t var_d8_34 = 0
int64_t var_d0_34 = 0
var_a8_8 = rax_191

if (rax_191 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_24 * 0x28, &var_f0)

if (var_d8_34 != 0)
    sub_140a74f90(var_d8_34)

int64_t rdi_25 = sx.q(arg2[1].d)
int32_t rax_196 = (rdi_25 + 1).d
arg2[1].d = rax_196

if (rax_196 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_25 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_9 = 1
var_c8 = data_143cdfa28
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_9 = 0x80
int32_t var_60_9 = 0xffffffff
int32_t var_5c_9 = 0
int64_t var_50_9 = 0
int32_t var_48_9 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_35 = *(arg1 + 0x10)
int32_t var_e0_11 = 0xffff0001
int16_t var_dc_11 = 0xffff
int64_t var_d8_35 = 0
int64_t var_d0_35 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_14 = var_c0
sub_140745220(rsi_14, &var_f0)

if (var_d8_35 != 0)
    sub_140a74f90(var_d8_35)

sub_140b58260(&var_f8, u"Bone Index", 1)
int64_t rdi_26 = sx.q(var_b8_9.d)
var_f0 = var_f8
int64_t var_e8_36 = data_14396f0a8
var_e0_11.w = data_14396f0b0
int32_t rax_206 = (rdi_26 + 1).d
var_e0_11 = 0xffffffff
int64_t var_d8_36 = 0
int64_t var_d0_36 = 0
var_b8_9.d = rax_206

if (rax_206 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_14 = var_c0

sub_140745220(&rsi_14[rdi_26 * 5], &var_f0)

if (var_d8_36 != 0)
    sub_140a74f90(var_d8_36)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t var_a8_9
int64_t rdi_27 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_37 = data_14396f0a8
var_e0_11.w = data_14396f0b0
int32_t rax_210 = (rdi_27 + 1).d
var_e0_11 = 0xffffffff
int64_t var_d8_37 = 0
int64_t var_d0_37 = 0
var_a8_9.d = rax_210

if (rax_210 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_27 * 0x28, &var_f0)

if (var_d8_37 != 0)
    sub_140a74f90(var_d8_37)

int64_t rdi_28 = sx.q(arg2[1].d)
int32_t rax_215 = (rdi_28 + 1).d
arg2[1].d = rax_215

if (rax_215 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_28 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa30
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_15 = sx.q(var_b8_9.d)
int32_t r14_6 = var_b8_9:4.d
var_f0 = var_f8
int32_t rdi_29 = (rsi_15 + 1).d
int64_t var_e8_38 = *(arg1 + 0x10)
int32_t var_e0_12 = 0xffff0001
int16_t var_dc_12 = 0xffff
int64_t var_d8_38 = 0
int64_t var_d0_38 = 0
var_b8_9.d = rdi_29

if (rdi_29 s> r14_6)
    sub_1405c4ec0(&var_c0)
    r14_6 = var_b8_9:4.d
    rdi_29 = var_b8_9.d

int64_t* rsi_16 = var_c0
sub_140745220(&rsi_16[rsi_15 * 5], &var_f0)

if (var_d8_38 != 0)
    sub_140a74f90(var_d8_38)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t var_e8_39 = sub_14086e490()
var_f0 = var_f8
int32_t var_e0_13 = 0xffff0002
int16_t var_dc_13 = 0xffff
int64_t var_d8_39 = 0
int64_t var_d0_39 = 0
var_b8_9.d = rdi_29 + 1

if (rdi_29 + 1 s> r14_6)
    sub_1405c4ec0(&var_c0)
    rsi_16 = var_c0

sub_140745220(&rsi_16[sx.q(rdi_29) * 5], &var_f0)

if (var_d8_39 != 0)
    sub_140a74f90(var_d8_39)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi_30 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_40 = data_14396f0a8
var_e0_13.w = data_14396f0b0
int32_t rax_225 = (rdi_30 + 1).d
var_e0_13 = 0xffffffff
int64_t var_d8_40 = 0
int64_t var_d0_40 = 0
var_a8_9.d = rax_225

if (rax_225 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_30 * 0x28, &var_f0)

if (var_d8_40 != 0)
    sub_140a74f90(var_d8_40)

int64_t rdi_31 = sx.q(arg2[1].d)
int32_t rax_230 = (rdi_31 + 1).d
arg2[1].d = rax_230

if (rax_230 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_31 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa38
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rdi_32 = sx.q(var_b8_9.d)
var_f0 = var_f8
int64_t var_e8_41 = *(arg1 + 0x10)
int32_t rax_234 = (rdi_32 + 1).d
int32_t var_e0_14 = 0xffff0001
int16_t var_dc_14 = 0xffff
int64_t var_d8_41 = 0
int64_t var_d0_41 = 0
var_b8_9.d = rax_234

if (rax_234 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(&var_c0[rdi_32 * 5], &var_f0)

if (var_d8_41 != 0)
    sub_140a74f90(var_d8_41)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_33 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_42 = data_14396f0a8
var_e0_14.w = data_14396f0b0
int32_t rax_239 = (rdi_33 + 1).d
var_e0_14 = 0xffffffff
int64_t var_d8_42 = 0
int64_t var_d0_42 = 0
var_a8_9.d = rax_239

if (rax_239 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_33 * 0x28, &var_f0)

if (var_d8_42 != 0)
    sub_140a74f90(var_d8_42)

int64_t rdi_34 = sx.q(arg2[1].d)
int32_t rax_244 = (rdi_34 + 1).d
arg2[1].d = rax_244

if (rax_244 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_34 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa40
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_17 = sx.q(var_b8_9.d)
int32_t r14_7 = var_b8_9:4.d
var_f0 = var_f8
int32_t rdi_35 = (rsi_17 + 1).d
int64_t var_e8_43 = *(arg1 + 0x10)
int32_t var_e0_15 = 0xffff0001
int16_t var_dc_15 = 0xffff
int64_t var_d8_43 = 0
int64_t var_d0_43 = 0
var_b8_9.d = rdi_35

if (rdi_35 s> r14_7)
    sub_1405c4ec0(&var_c0)
    r14_7 = var_b8_9:4.d
    rdi_35 = var_b8_9.d

int64_t* rsi_18 = var_c0
sub_140745220(&rsi_18[rsi_17 * 5], &var_f0)

if (var_d8_43 != 0)
    sub_140a74f90(var_d8_43)

sub_140b58260(&var_f8, u"Bone Index", 1)
var_f0 = var_f8
int64_t var_e8_44 = data_14396f0a8
var_e0_15.w = data_14396f0b0
var_e0_15 = 0xffffffff
int64_t var_d8_44 = 0
int64_t var_d0_44 = 0
var_b8_9.d = rdi_35 + 1

if (rdi_35 + 1 s> r14_7)
    sub_1405c4ec0(&var_c0)
    rsi_18 = var_c0

sub_140745220(&rsi_18[sx.q(rdi_35) * 5], &var_f0)

if (var_d8_44 != 0)
    sub_140a74f90(var_d8_44)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi_36 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_45 = data_14396f0a8
var_e0_15.w = data_14396f0b0
int32_t rax_256 = (rdi_36 + 1).d
var_e0_15 = 0xffffffff
int64_t var_d8_45 = 0
int64_t var_d0_45 = 0
var_a8_9.d = rax_256

if (rax_256 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_36 * 0x28, &var_f0)

if (var_d8_45 != 0)
    sub_140a74f90(var_d8_45)

int64_t rdi_37 = sx.q(arg2[1].d)
int32_t rax_261 = (rdi_37 + 1).d
arg2[1].d = rax_261

if (rax_261 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_37 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa48
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_19 = sx.q(var_b8_9.d)
int32_t r14_8 = var_b8_9:4.d
var_f0 = var_f8
int32_t rdi_38 = (rsi_19 + 1).d
int64_t var_e8_46 = *(arg1 + 0x10)
int32_t var_e0_16 = 0xffff0001
int16_t var_dc_16 = 0xffff
int64_t var_d8_46 = 0
int64_t var_d0_46 = 0
var_b8_9.d = rdi_38

if (rdi_38 s> r14_8)
    sub_1405c4ec0(&var_c0)
    r14_8 = var_b8_9:4.d
    rdi_38 = var_b8_9.d

int64_t* rsi_20 = var_c0
sub_140745220(&rsi_20[rsi_19 * 5], &var_f0)

if (var_d8_46 != 0)
    sub_140a74f90(var_d8_46)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t var_e8_47 = sub_14086e490()
var_f0 = var_f8
int32_t var_e0_17 = 0xffff0002
int16_t var_dc_17 = 0xffff
int64_t var_d8_47 = 0
int64_t var_d0_47 = 0
var_b8_9.d = rdi_38 + 1

if (rdi_38 + 1 s> r14_8)
    sub_1405c4ec0(&var_c0)
    rsi_20 = var_c0

sub_140745220(&rsi_20[sx.q(rdi_38) * 5], &var_f0)

if (var_d8_47 != 0)
    sub_140a74f90(var_d8_47)

sub_140b58260(&var_f8, u"Socket Bone", 1)
int64_t rdi_39 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_48 = data_14396f0a8
var_e0_17.w = data_14396f0b0
int32_t rax_271 = (rdi_39 + 1).d
var_e0_17 = 0xffffffff
int64_t var_d8_48 = 0
int64_t var_d0_48 = 0
var_a8_9.d = rax_271

if (rax_271 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_39 * 0x28, &var_f0)

if (var_d8_48 != 0)
    sub_140a74f90(var_d8_48)

int64_t rdi_40 = sx.q(arg2[1].d)
int32_t rax_275 = (((((((((((((((rax_180 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xfffffffe) | 2) & 0xfffffffe) | 2) & 0xfffffffe) | 2) & 0xfffffffe)
    | 2
int32_t rax_276 = (rdi_40 + 1).d
arg2[1].d = rax_276

if (rax_276 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_40 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa50
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rdi_41 = sx.q(var_b8_9.d)
var_f0 = var_f8
int64_t var_e8_49 = *(arg1 + 0x10)
int32_t rax_280 = (rdi_41 + 1).d
int32_t var_e0_18 = 0xffff0001
int16_t var_dc_18 = 0xffff
int64_t var_d8_49 = 0
int64_t var_d0_49 = 0
var_b8_9.d = rax_280

if (rax_280 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(&var_c0[rdi_41 * 5], &var_f0)

if (var_d8_49 != 0)
    sub_140a74f90(var_d8_49)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_42 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_50 = data_14396f0a8
var_e0_18.w = data_14396f0b0
int32_t rax_285 = (rdi_42 + 1).d
var_e0_18 = 0xffffffff
int64_t var_d8_50 = 0
int64_t var_d0_50 = 0
var_a8_9.d = rax_285

if (rax_285 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_42 * 0x28, &var_f0)

if (var_d8_50 != 0)
    sub_140a74f90(var_d8_50)

int64_t rdi_43 = sx.q(arg2[1].d)
int32_t rax_290 = (rdi_43 + 1).d
arg2[1].d = rax_290

if (rax_290 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_43 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa60
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_21 = sx.q(var_b8_9.d)
int32_t r14_9 = var_b8_9:4.d
var_f0 = var_f8
int32_t rdi_44 = (rsi_21 + 1).d
int64_t var_e8_51 = *(arg1 + 0x10)
int32_t var_e0_19 = 0xffff0001
int16_t var_dc_19 = 0xffff
int64_t var_d8_51 = 0
int64_t var_d0_51 = 0
var_b8_9.d = rdi_44

if (rdi_44 s> r14_9)
    sub_1405c4ec0(&var_c0)
    r14_9 = var_b8_9:4.d
    rdi_44 = var_b8_9.d

int64_t* rsi_22 = var_c0
sub_140745220(&rsi_22[rsi_21 * 5], &var_f0)

if (var_d8_51 != 0)
    sub_140a74f90(var_d8_51)

sub_140b58260(&var_f8, u"Socket Index", 1)
var_f0 = var_f8
int64_t var_e8_52 = data_14396f0a8
var_e0_19.w = data_14396f0b0
var_e0_19 = 0xffffffff
int64_t var_d8_52 = 0
int64_t var_d0_52 = 0
var_b8_9.d = rdi_44 + 1

if (rdi_44 + 1 s> r14_9)
    sub_1405c4ec0(&var_c0)
    rsi_22 = var_c0

sub_140745220(&rsi_22[sx.q(rdi_44) * 5], &var_f0)

if (var_d8_52 != 0)
    sub_140a74f90(var_d8_52)

sub_140b58260(&var_f8, u"Socket Bone", 1)
int64_t rdi_45 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_53 = data_14396f0a8
var_e0_19.w = data_14396f0b0
int32_t rax_302 = (rdi_45 + 1).d
var_e0_19 = 0xffffffff
int64_t var_d8_53 = 0
int64_t var_d0_53 = 0
var_a8_9.d = rax_302

if (rax_302 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_45 * 0x28, &var_f0)

if (var_d8_53 != 0)
    sub_140a74f90(var_d8_53)

int64_t rdi_46 = sx.q(arg2[1].d)
int32_t rax_307 = (rdi_46 + 1).d
arg2[1].d = rax_307

if (rax_307 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_46 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa58
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rdi_47 = sx.q(var_b8_9.d)
var_f0 = var_f8
int32_t r14_10 = (rdi_47 + 1).d
int16_t var_dc_20 = 0xffff
int32_t r15_6 = var_b8_9:4.d
int64_t var_e8_54 = *(arg1 + 0x10)
int32_t var_e0_20 = 0xffff0001
int64_t var_d8_54 = 0
int64_t var_d0_54 = 0
var_b8_9.d = r14_10

if (r14_10 s> r15_6)
    sub_1405c4ec0(&var_c0)
    r15_6 = var_b8_9:4.d
    r14_10 = var_b8_9.d

int64_t* rsi_23 = var_c0
sub_140745220(&rsi_23[rdi_47 * 5], &var_f0)

if (var_d8_54 != 0)
    sub_140a74f90(var_d8_54)

sub_140b58260(&var_f8, u"Socket Index", 1)
int32_t rdi_48 = r14_10 + 1
var_f0 = var_f8
int64_t var_e8_55 = data_14396f0a8
var_e0_20.w = data_14396f0b0
var_e0_20 = 0xffffffff
int64_t var_d8_55 = 0
int64_t var_d0_55 = 0
var_b8_9.d = rdi_48

if (rdi_48 s> r15_6)
    sub_1405c4ec0(&var_c0)
    r15_6 = var_b8_9:4.d
    rdi_48 = var_b8_9.d
    rsi_23 = var_c0

sub_140745220(&rsi_23[sx.q(r14_10) * 5], &var_f0)

if (var_d8_55 != 0)
    sub_140a74f90(var_d8_55)

sub_140b58260(&var_f8, u"Apply World Transform", 1)
var_f0 = var_f8
int64_t var_e8_56 = data_14396f098
var_e0_20.w = data_14396f0a0
var_e0_20 = 0xffffffff
int64_t var_d8_56 = 0
int64_t var_d0_56 = 0
var_b8_9.d = rdi_48 + 1

if (rdi_48 + 1 s> r15_6)
    sub_1405c4ec0(&var_c0)
    rsi_23 = var_c0

sub_140745220(&rsi_23[sx.q(rdi_48) * 5], &var_f0)

if (var_d8_56 != 0)
    sub_140a74f90(var_d8_56)

sub_140b58260(&var_f8, u"Socket Translation", 1)
int64_t rsi_24 = sx.q(var_a8_9.d)
int32_t r15_7 = var_a8_9:4.d
var_f0 = var_f8
int32_t rdi_49 = (rsi_24 + 1).d
int64_t var_e8_57 = data_14396f0c8
var_e0_20.w = data_14396f0d0
var_e0_20 = 0xffffffff
int64_t var_d8_57 = 0
int64_t var_d0_57 = 0
var_a8_9.d = rdi_49

if (rdi_49 s> r15_7)
    sub_1405c4ec0(&var_b0)
    r15_7 = var_a8_9:4.d
    rdi_49 = var_a8_9.d

int64_t r14_11 = var_b0
sub_140745220(r14_11 + rsi_24 * 0x28, &var_f0)

if (var_d8_57 != 0)
    sub_140a74f90(var_d8_57)

sub_140b58260(&var_f8, u"Socket Rotation", 1)
int32_t rsi_25 = rdi_49 + 1
var_f0 = var_f8
int64_t var_e8_58 = data_14396f0f8
var_e0_20.w = data_14396f100
var_e0_20 = 0xffffffff
int64_t var_d8_58 = 0
int64_t var_d0_58 = 0
var_a8_9.d = rsi_25

if (rsi_25 s> r15_7)
    sub_1405c4ec0(&var_b0)
    r15_7 = var_a8_9:4.d
    rsi_25 = var_a8_9.d
    r14_11 = var_b0

sub_140745220(r14_11 + sx.q(rdi_49) * 0x28, &var_f0)

if (var_d8_58 != 0)
    sub_140a74f90(var_d8_58)

sub_140b58260(&var_f8, u"Socket Scale", 1)
var_f0 = var_f8
int64_t var_e8_59 = data_14396f0c8
var_e0_20.w = data_14396f0d0
var_e0_20 = 0xffffffff
int64_t var_d8_59 = 0
int64_t var_d0_59 = 0
var_a8_9.d = rsi_25 + 1

if (rsi_25 + 1 s> r15_7)
    sub_1405c4ec0(&var_b0)
    r14_11 = var_b0

sub_140745220(r14_11 + sx.q(rsi_25) * 0x28, &var_f0)

if (var_d8_59 != 0)
    sub_140a74f90(var_d8_59)

int64_t rdi_50 = sx.q(arg2[1].d)
int32_t rax_335 = (rdi_50 + 1).d
arg2[1].d = rax_335

if (rax_335 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_50 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa68
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_26 = sx.q(var_b8_9.d)
int32_t r14_12 = var_b8_9:4.d
var_f0 = var_f8
int32_t rdi_51 = (rsi_26 + 1).d
int64_t var_e8_60 = *(arg1 + 0x10)
int32_t var_e0_21 = 0xffff0001
int16_t var_dc_21 = 0xffff
int64_t var_d8_60 = 0
int64_t var_d0_60 = 0
var_b8_9.d = rdi_51

if (rdi_51 s> r14_12)
    sub_1405c4ec0(&var_c0)
    r14_12 = var_b8_9:4.d
    rdi_51 = var_b8_9.d

int64_t* rsi_27 = var_c0
sub_140745220(&rsi_27[rsi_26 * 5], &var_f0)

if (var_d8_60 != 0)
    sub_140a74f90(var_d8_60)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t var_e8_61 = sub_14086e490()
var_f0 = var_f8
int32_t var_e0_22 = 0xffff0002
int16_t var_dc_22 = 0xffff
int64_t var_d8_61 = 0
int64_t var_d0_61 = 0
var_b8_9.d = rdi_51 + 1

if (rdi_51 + 1 s> r14_12)
    sub_1405c4ec0(&var_c0)
    rsi_27 = var_c0

sub_140745220(&rsi_27[sx.q(rdi_51) * 5], &var_f0)

if (var_d8_61 != 0)
    sub_140a74f90(var_d8_61)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi_52 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_62 = data_14396f0a8
var_e0_22.w = data_14396f0b0
int32_t rax_345 = (rdi_52 + 1).d
var_e0_22 = 0xffffffff
int64_t var_d8_62 = 0
int64_t var_d0_62 = 0
var_a8_9.d = rax_345

if (rax_345 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_52 * 0x28, &var_f0)

if (var_d8_62 != 0)
    sub_140a74f90(var_d8_62)

int64_t rdi_53 = sx.q(arg2[1].d)
int32_t rax_350 = (rdi_53 + 1).d
arg2[1].d = rax_350

if (rax_350 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_53 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa70
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rdi_54 = sx.q(var_b8_9.d)
var_f0 = var_f8
int64_t var_e8_63 = *(arg1 + 0x10)
int32_t rax_354 = (rdi_54 + 1).d
int32_t var_e0_23 = 0xffff0001
int16_t var_dc_23 = 0xffff
int64_t var_d8_63 = 0
int64_t var_d0_63 = 0
var_b8_9.d = rax_354

if (rax_354 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(&var_c0[rdi_54 * 5], &var_f0)

if (var_d8_63 != 0)
    sub_140a74f90(var_d8_63)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_55 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_64 = data_14396f0a8
var_e0_23.w = data_14396f0b0
int32_t rax_359 = (rdi_55 + 1).d
var_e0_23 = 0xffffffff
int64_t var_d8_64 = 0
int64_t var_d0_64 = 0
var_a8_9.d = rax_359

if (rax_359 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_55 * 0x28, &var_f0)

if (var_d8_64 != 0)
    sub_140a74f90(var_d8_64)

int64_t rdi_56 = sx.q(arg2[1].d)
int32_t rax_364 = (rdi_56 + 1).d
arg2[1].d = rax_364

if (rax_364 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_56 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfa78
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_28 = sx.q(var_b8_9.d)
int32_t r14_13 = var_b8_9:4.d
var_f0 = var_f8
int32_t rdi_57 = (rsi_28 + 1).d
int64_t var_e8_65 = *(arg1 + 0x10)
int32_t var_e0_24 = 0xffff0001
int16_t var_dc_24 = 0xffff
int64_t var_d8_65 = 0
int64_t var_d0_65 = 0
var_b8_9.d = rdi_57

if (rdi_57 s> r14_13)
    sub_1405c4ec0(&var_c0)
    r14_13 = var_b8_9:4.d
    rdi_57 = var_b8_9.d

int64_t* rsi_29 = var_c0
sub_140745220(&rsi_29[rsi_28 * 5], &var_f0)

if (var_d8_65 != 0)
    sub_140a74f90(var_d8_65)

sub_140b58260(&var_f8, u"Socket Or Bone Index", 1)
var_f0 = var_f8
int64_t var_e8_66 = data_14396f0a8
var_e0_24.w = data_14396f0b0
var_e0_24 = 0xffffffff
int64_t var_d8_66 = 0
int64_t var_d0_66 = 0
var_b8_9.d = rdi_57 + 1

if (rdi_57 + 1 s> r14_13)
    sub_1405c4ec0(&var_c0)
    rsi_29 = var_c0

sub_140745220(&rsi_29[sx.q(rdi_57) * 5], &var_f0)

if (var_d8_66 != 0)
    sub_140a74f90(var_d8_66)

sub_140b58260(&var_f8, u"Bone", 1)
int64_t rdi_58 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_67 = data_14396f0a8
var_e0_24.w = data_14396f0b0
int32_t rax_376 = (rdi_58 + 1).d
var_e0_24 = 0xffffffff
int64_t var_d8_67 = 0
int64_t var_d0_67 = 0
var_a8_9.d = rax_376

if (rax_376 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_58 * 0x28, &var_f0)

if (var_d8_67 != 0)
    sub_140a74f90(var_d8_67)

int64_t rdi_59 = sx.q(arg2[1].d)
int32_t var_98_30 = (((((((((((rax_275 & 0xfffffffe) | 2) & 0xfffffffe) | 2) & 0xfffffffe) | 2)
    & 0xfffffffe) | 2) & 0xfffffffe) | 2) & 0xfffffffe) | 2
int32_t rax_381 = (rdi_59 + 1).d
arg2[1].d = rax_381

if (rax_381 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_59 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_118)
return result

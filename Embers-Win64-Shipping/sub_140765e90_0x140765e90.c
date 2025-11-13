// 函数: sub_140765e90
// 地址: 0x140765e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* var_c0 = nullptr
int32_t var_b8 = 1
int64_t var_c8 = data_143cdfaf0
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

sub_140b58260(&var_f8, u"Vertex", 1)
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
int64_t rdi_1 = sx.q(var_a8.d)
int32_t rsi_1 = var_a8:4.d
var_f0 = var_f8
int32_t r14 = (rdi_1 + 1).d
int64_t var_e8_2 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_2 = 0
int64_t var_d0_2 = 0
var_a8.d = r14

if (r14 s> rsi_1)
    sub_1405c4ec0(&var_b0)
    rsi_1 = var_a8:4.d
    r14 = var_a8.d

int64_t rdi_2 = var_b0
sub_140745220(rdi_2 + rdi_1 * 0x28, &var_f0)

if (var_d8_2 != 0)
    sub_140a74f90(var_d8_2)

sub_140b58260(&var_f8, u"Velocity", 1)
int32_t r15 = r14 + 1
var_f0 = var_f8
int64_t var_e8_3 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_3 = 0
int64_t var_d0_3 = 0
var_a8.d = r15

if (r15 s> rsi_1)
    sub_1405c4ec0(&var_b0)
    rsi_1 = var_a8:4.d
    r15 = var_a8.d
    rdi_2 = var_b0

sub_140745220(rdi_2 + sx.q(r14) * 0x28, &var_f0)

if (var_d8_3 != 0)
    sub_140a74f90(var_d8_3)

sub_140b58260(&var_f8, u"Normal", 1)
int32_t r14_1 = r15 + 1
var_f0 = var_f8
int64_t var_e8_4 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_4 = 0
int64_t var_d0_4 = 0
var_a8.d = r14_1

if (r14_1 s> rsi_1)
    sub_1405c4ec0(&var_b0)
    rsi_1 = var_a8:4.d
    r14_1 = var_a8.d
    rdi_2 = var_b0

sub_140745220(rdi_2 + sx.q(r15) * 0x28, &var_f0)

if (var_d8_4 != 0)
    sub_140a74f90(var_d8_4)

sub_140b58260(&var_f8, u"Binormal", 1)
int32_t r15_1 = r14_1 + 1
var_f0 = var_f8
int64_t var_e8_5 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_5 = 0
int64_t var_d0_5 = 0
var_a8.d = r15_1

if (r15_1 s> rsi_1)
    sub_1405c4ec0(&var_b0)
    rsi_1 = var_a8:4.d
    r15_1 = var_a8.d
    rdi_2 = var_b0

sub_140745220(rdi_2 + sx.q(r14_1) * 0x28, &var_f0)

if (var_d8_5 != 0)
    sub_140a74f90(var_d8_5)

sub_140b58260(&var_f8, u"Tangent", 1)
var_f0 = var_f8
int64_t var_e8_6 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_6 = 0
int64_t var_d0_6 = 0
var_a8.d = r15_1 + 1

if (r15_1 + 1 s> rsi_1)
    sub_1405c4ec0(&var_b0)
    rdi_2 = var_b0

sub_140745220(rdi_2 + sx.q(r15_1) * 0x28, &var_f0)

if (var_d8_6 != 0)
    sub_140a74f90(var_d8_6)

int64_t rdi_3 = sx.q(arg2[1].d)
int32_t rax_35 = (rdi_3 + 1).d
arg2[1].d = rax_35

if (rax_35 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_3 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_1 = 1
var_c8 = data_143cdfaf8
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_1 = 0x80
int32_t var_60_1 = 0xffffffff
int32_t var_5c_1 = 0
int64_t var_50_1 = 0
int32_t var_48_1 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_7 = *(arg1 + 0x10)
int32_t var_e0_1 = 0xffff0001
int16_t var_dc_1 = 0xffff
int64_t var_d8_7 = 0
int64_t var_d0_7 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_2 = var_c0
sub_140745220(rsi_2, &var_f0)

if (var_d8_7 != 0)
    sub_140a74f90(var_d8_7)

sub_140b58260(&var_f8, u"Vertex", 1)
int64_t rdi_4 = sx.q(var_b8_1)
var_f0 = var_f8
int64_t var_e8_8 = data_14396f0a8
var_e0_1.w = data_14396f0b0
int32_t rax_45 = (rdi_4 + 1).d
var_e0_1 = 0xffffffff
int64_t var_d8_8 = 0
int64_t var_d0_8 = 0
var_b8_1 = rax_45

if (rax_45 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_2 = var_c0

sub_140745220(&rsi_2[rdi_4 * 5], &var_f0)

if (var_d8_8 != 0)
    sub_140a74f90(var_d8_8)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8_1
int64_t rdi_5 = sx.q(var_a8_1.d)
int32_t rsi_3 = var_a8_1:4.d
var_f0 = var_f8
int32_t r15_2 = (rdi_5 + 1).d
int64_t var_e8_9 = data_14396f0c8
var_e0_1.w = data_14396f0d0
var_e0_1 = 0xffffffff
int64_t var_d8_9 = 0
int64_t var_d0_9 = 0
var_a8_1.d = r15_2

if (r15_2 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rsi_3 = var_a8_1:4.d
    r15_2 = var_a8_1.d

int64_t rdi_6 = var_b0
sub_140745220(rdi_6 + rdi_5 * 0x28, &var_f0)

if (var_d8_9 != 0)
    sub_140a74f90(var_d8_9)

sub_140b58260(&var_f8, u"Velocity", 1)
int32_t r14_2 = r15_2 + 1
var_f0 = var_f8
int64_t var_e8_10 = data_14396f0c8
var_e0_1.w = data_14396f0d0
var_e0_1 = 0xffffffff
int64_t var_d8_10 = 0
int64_t var_d0_10 = 0
var_a8_1.d = r14_2

if (r14_2 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rsi_3 = var_a8_1:4.d
    r14_2 = var_a8_1.d
    rdi_6 = var_b0

sub_140745220(rdi_6 + sx.q(r15_2) * 0x28, &var_f0)

if (var_d8_10 != 0)
    sub_140a74f90(var_d8_10)

sub_140b58260(&var_f8, u"Normal", 1)
int32_t r15_3 = r14_2 + 1
var_f0 = var_f8
int64_t var_e8_11 = data_14396f0c8
var_e0_1.w = data_14396f0d0
var_e0_1 = 0xffffffff
int64_t var_d8_11 = 0
int64_t var_d0_11 = 0
var_a8_1.d = r15_3

if (r15_3 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rsi_3 = var_a8_1:4.d
    r15_3 = var_a8_1.d
    rdi_6 = var_b0

sub_140745220(rdi_6 + sx.q(r14_2) * 0x28, &var_f0)

if (var_d8_11 != 0)
    sub_140a74f90(var_d8_11)

sub_140b58260(&var_f8, u"Binormal", 1)
int32_t r14_3 = r15_3 + 1
var_f0 = var_f8
int64_t var_e8_12 = data_14396f0c8
var_e0_1.w = data_14396f0d0
var_e0_1 = 0xffffffff
int64_t var_d8_12 = 0
int64_t var_d0_12 = 0
var_a8_1.d = r14_3

if (r14_3 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rsi_3 = var_a8_1:4.d
    r14_3 = var_a8_1.d
    rdi_6 = var_b0

sub_140745220(rdi_6 + sx.q(r15_3) * 0x28, &var_f0)

if (var_d8_12 != 0)
    sub_140a74f90(var_d8_12)

sub_140b58260(&var_f8, u"Tangent", 1)
var_f0 = var_f8
int64_t var_e8_13 = data_14396f0c8
var_e0_1.w = data_14396f0d0
var_e0_1 = 0xffffffff
int64_t var_d8_13 = 0
int64_t var_d0_13 = 0
var_a8_1.d = r14_3 + 1

if (r14_3 + 1 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rdi_6 = var_b0

sub_140745220(rdi_6 + sx.q(r14_3) * 0x28, &var_f0)

if (var_d8_13 != 0)
    sub_140a74f90(var_d8_13)

int64_t rdi_7 = sx.q(arg2[1].d)
int32_t rax_69 = (rdi_7 + 1).d
arg2[1].d = rax_69

if (rax_69 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_7 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_2 = 1
var_c8 = data_143cdfb00
var_b0 = 0
int32_t var_a8_2 = 0
int64_t var_a0 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_2 = 0x80
int32_t var_60_2 = 0xffffffff
int32_t var_5c_2 = 0
int64_t var_50_2 = 0
int32_t var_48_2 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_14 = *(arg1 + 0x10)
int32_t var_e0_2 = 0xffff0001
int16_t var_dc_2 = 0xffff
int64_t var_d8_14 = 0
int64_t var_d0_14 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_4 = var_c0
sub_140745220(rsi_4, &var_f0)

if (var_d8_14 != 0)
    sub_140a74f90(var_d8_14)

sub_140b58260(&var_f8, u"Vertex", 1)
int64_t rdi_8 = sx.q(var_b8_2)
var_f0 = var_f8
int64_t var_e8_15 = data_14396f0a8
var_e0_2.w = data_14396f0b0
int32_t rax_79 = (rdi_8 + 1).d
var_e0_2 = 0xffffffff
int64_t var_d8_15 = 0
int64_t var_d0_15 = 0
var_b8_2 = rax_79

if (rax_79 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_4 = var_c0

sub_140745220(&rsi_4[rdi_8 * 5], &var_f0)

if (var_d8_15 != 0)
    sub_140a74f90(var_d8_15)

sub_140b58260(&var_f8, u"Color", 1)
int64_t rdi_9 = sx.q(var_a8_2)
var_f0 = var_f8
int64_t var_e8_16 = data_14396f0e8
var_e0_2.w = data_14396f0f0
int32_t rax_83 = (rdi_9 + 1).d
var_e0_2 = 0xffffffff
int64_t var_d8_16 = 0
int64_t var_d0_16 = 0
var_a8_2 = rax_83

if (rax_83 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_9 * 0x28, &var_f0)

if (var_d8_16 != 0)
    sub_140a74f90(var_d8_16)

int64_t rdi_10 = sx.q(arg2[1].d)
int32_t rax_88 = (rdi_10 + 1).d
arg2[1].d = rax_88

if (rax_88 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_10 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_3 = 1
var_c8 = data_143cdfb08
var_b0 = 0
int32_t var_a8_3 = 0
int64_t var_a0_1 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_3 = 0x80
int32_t var_60_3 = 0xffffffff
int32_t var_5c_3 = 0
int64_t var_50_3 = 0
int32_t var_48_3 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_17 = *(arg1 + 0x10)
int32_t var_e0_3 = 0xffff0001
int16_t var_dc_3 = 0xffff
int64_t var_d8_17 = 0
int64_t var_d0_17 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_5 = var_c0
sub_140745220(rsi_5, &var_f0)

if (var_d8_17 != 0)
    sub_140a74f90(var_d8_17)

sub_140b58260(&var_f8, u"Vertex", 1)
int64_t r14_4 = sx.q(var_b8_3.d)
int32_t r15_4 = var_b8_3:4.d
var_f0 = var_f8
int32_t rdi_11 = (r14_4 + 1).d
int64_t var_e8_18 = data_14396f0a8
var_e0_3.w = data_14396f0b0
var_e0_3 = 0xffffffff
int64_t var_d8_18 = 0
int64_t var_d0_18 = 0
var_b8_3.d = rdi_11

if (rdi_11 s> r15_4)
    sub_1405c4ec0(&var_c0)
    r15_4 = var_b8_3:4.d
    rdi_11 = var_b8_3.d
    rsi_5 = var_c0

sub_140745220(&rsi_5[r14_4 * 5], &var_f0)

if (var_d8_18 != 0)
    sub_140a74f90(var_d8_18)

sub_140b58260(&var_f8, u"UV Set", 1)
var_f0 = var_f8
int64_t var_e8_19 = data_14396f0a8
var_e0_3.w = data_14396f0b0
var_e0_3 = 0xffffffff
int64_t var_d8_19 = 0
int64_t var_d0_19 = 0
var_b8_3.d = rdi_11 + 1

if (rdi_11 + 1 s> r15_4)
    sub_1405c4ec0(&var_c0)
    rsi_5 = var_c0

sub_140745220(&rsi_5[sx.q(rdi_11) * 5], &var_f0)

if (var_d8_19 != 0)
    sub_140a74f90(var_d8_19)

sub_140b58260(&var_f8, &data_142d9b038, 1)
int64_t rdi_12 = sx.q(var_a8_3)
var_f0 = var_f8
int64_t var_e8_20 = data_14396f0b8
var_e0_3.w = data_14396f0c0
int32_t rax_106 = (rdi_12 + 1).d
var_e0_3 = 0xffffffff
int64_t var_d8_20 = 0
int64_t var_d0_20 = 0
var_a8_3 = rax_106

if (rax_106 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_12 * 0x28, &var_f0)

if (var_d8_20 != 0)
    sub_140a74f90(var_d8_20)

int64_t rdi_13 = sx.q(arg2[1].d)
int32_t var_98
int32_t rax_110 = (((((((((((((((var_98 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_111 = (rdi_13 + 1).d
arg2[1].d = rax_111

if (rax_111 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_13 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_4 = 1
var_c8 = data_143cdfb10
var_b0 = 0
int32_t var_a8_4 = 0
int64_t var_a0_2 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_4 = 0x80
int32_t var_60_4 = 0xffffffff
int32_t var_5c_4 = 0
int64_t var_50_4 = 0
int32_t var_48_4 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_21 = *(arg1 + 0x10)
int32_t var_e0_4 = 0xffff0001
int16_t var_dc_4 = 0xffff
int64_t var_d8_21 = 0
int64_t var_d0_21 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_6 = var_c0
sub_140745220(rsi_6, &var_f0)

if (var_d8_21 != 0)
    sub_140a74f90(var_d8_21)

sub_140b58260(&var_f8, u"Vertex", 1)
int64_t rdi_14 = sx.q(var_b8_4)
var_f0 = var_f8
int64_t var_e8_22 = data_14396f0a8
var_e0_4.w = data_14396f0b0
int32_t rax_121 = (rdi_14 + 1).d
var_e0_4 = 0xffffffff
int64_t var_d8_22 = 0
int64_t var_d0_22 = 0
var_b8_4 = rax_121

if (rax_121 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_6 = var_c0

sub_140745220(&rsi_6[rdi_14 * 5], &var_f0)

if (var_d8_22 != 0)
    sub_140a74f90(var_d8_22)

sub_140b58260(&var_f8, u"IsValid", 1)
int64_t rdi_15 = sx.q(var_a8_4)
var_f0 = var_f8
int64_t var_e8_23 = data_14396f098
var_e0_4.w = data_14396f0a0
int32_t rax_125 = (rdi_15 + 1).d
var_e0_4 = 0xffffffff
int64_t var_d8_23 = 0
int64_t var_d0_23 = 0
var_a8_4 = rax_125

if (rax_125 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_15 * 0x28, &var_f0)

if (var_d8_23 != 0)
    sub_140a74f90(var_d8_23)

int64_t rdi_16 = sx.q(arg2[1].d)
int32_t rax_130 = (rdi_16 + 1).d
arg2[1].d = rax_130

if (rax_130 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_16 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_5 = 1
var_c8 = data_143cdfb18
var_b0 = 0
int32_t var_a8_5 = 0
int64_t var_a0_3 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_5 = 0x80
int32_t var_60_5 = 0xffffffff
int32_t var_5c_5 = 0
int64_t var_50_5 = 0
int32_t var_48_5 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_24 = *(arg1 + 0x10)
int32_t var_e0_5 = 0xffff0001
int16_t var_dc_5 = 0xffff
int64_t var_d8_24 = 0
int64_t var_d0_24 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_7 = var_c0
sub_140745220(rsi_7, &var_f0)

if (var_d8_24 != 0)
    sub_140a74f90(var_d8_24)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t rdi_17 = sx.q(var_b8_5)
int64_t var_e8_25 = sub_14086e490()
var_f0 = var_f8
int32_t rax_138 = (rdi_17 + 1).d
int32_t var_e0_6 = 0xffff0002
int16_t var_dc_6 = 0xffff
int64_t var_d8_25 = 0
int64_t var_d0_25 = 0
var_b8_5 = rax_138

if (rax_138 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_7 = var_c0

sub_140745220(&rsi_7[rdi_17 * 5], &var_f0)

if (var_d8_25 != 0)
    sub_140a74f90(var_d8_25)

sub_140b58260(&var_f8, u"Vertex", 1)
int64_t rdi_18 = sx.q(var_a8_5)
var_f0 = var_f8
int64_t var_e8_26 = data_14396f0a8
var_e0_6.w = data_14396f0b0
int32_t rax_142 = (rdi_18 + 1).d
var_e0_6 = 0xffffffff
int64_t var_d8_26 = 0
int64_t var_d0_26 = 0
var_a8_5 = rax_142

if (rax_142 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_18 * 0x28, &var_f0)

if (var_d8_26 != 0)
    sub_140a74f90(var_d8_26)

int64_t rdi_19 = sx.q(arg2[1].d)
int32_t rax_147 = (rdi_19 + 1).d
arg2[1].d = rax_147

if (rax_147 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_19 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_6 = 1
var_c8 = data_143cdfb20
var_b0 = 0
int32_t var_a8_6 = 0
int64_t var_a0_4 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_6 = 0x80
int32_t var_60_6 = 0xffffffff
int32_t var_5c_6 = 0
int64_t var_50_6 = 0
int32_t var_48_6 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_27 = *(arg1 + 0x10)
int32_t var_e0_7 = 0xffff0001
int16_t var_dc_7 = 0xffff
int64_t var_d8_27 = 0
int64_t var_d0_27 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_f0)

if (var_d8_27 != 0)
    sub_140a74f90(var_d8_27)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_20 = sx.q(var_a8_6)
var_f0 = var_f8
int64_t var_e8_28 = data_14396f0a8
var_e0_7.w = data_14396f0b0
int32_t rax_157 = (rdi_20 + 1).d
var_e0_7 = 0xffffffff
int64_t var_d8_28 = 0
int64_t var_d0_28 = 0
var_a8_6 = rax_157

if (rax_157 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_20 * 0x28, &var_f0)

if (var_d8_28 != 0)
    sub_140a74f90(var_d8_28)

int64_t rdi_21 = sx.q(arg2[1].d)
int32_t rax_162 = (rdi_21 + 1).d
arg2[1].d = rax_162

if (rax_162 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_21 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_7 = 1
var_c8 = data_143cdfb28
var_b0 = 0
int32_t var_a8_7 = 0
int64_t var_a0_5 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_7 = 0x80
int32_t var_60_7 = 0xffffffff
int32_t var_5c_7 = 0
int64_t var_50_7 = 0
int32_t var_48_7 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_29 = *(arg1 + 0x10)
int32_t var_e0_8 = 0xffff0001
int16_t var_dc_8 = 0xffff
int64_t var_d8_29 = 0
int64_t var_d0_29 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_8 = var_c0
sub_140745220(rsi_8, &var_f0)

if (var_d8_29 != 0)
    sub_140a74f90(var_d8_29)

sub_140b58260(&var_f8, u"Vertex", 1)
int64_t rdi_22 = sx.q(var_b8_7)
var_f0 = var_f8
int64_t var_e8_30 = data_14396f0a8
var_e0_8.w = data_14396f0b0
int32_t rax_172 = (rdi_22 + 1).d
var_e0_8 = 0xffffffff
int64_t var_d8_30 = 0
int64_t var_d0_30 = 0
var_b8_7 = rax_172

if (rax_172 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_8 = var_c0

sub_140745220(&rsi_8[rdi_22 * 5], &var_f0)

if (var_d8_30 != 0)
    sub_140a74f90(var_d8_30)

sub_140b58260(&var_f8, u"IsValid", 1)
int64_t rdi_23 = sx.q(var_a8_7)
var_f0 = var_f8
int64_t var_e8_31 = data_14396f098
var_e0_8.w = data_14396f0a0
int32_t rax_176 = (rdi_23 + 1).d
var_e0_8 = 0xffffffff
int64_t var_d8_31 = 0
int64_t var_d0_31 = 0
var_a8_7 = rax_176

if (rax_176 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_23 * 0x28, &var_f0)

if (var_d8_31 != 0)
    sub_140a74f90(var_d8_31)

int64_t rdi_24 = sx.q(arg2[1].d)
int32_t rax_180 = (((((((((((((((rax_110 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_181 = (rdi_24 + 1).d
arg2[1].d = rax_181

if (rax_181 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_24 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_8 = 1
var_c8 = data_143cdfb30
var_b0 = 0
int32_t var_a8_8 = 0
int64_t var_a0_6 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_8 = 0x80
int32_t var_60_8 = 0xffffffff
int32_t var_5c_8 = 0
int64_t var_50_8 = 0
int32_t var_48_8 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_32 = *(arg1 + 0x10)
int32_t var_e0_9 = 0xffff0001
int16_t var_dc_9 = 0xffff
int64_t var_d8_32 = 0
int64_t var_d0_32 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_9 = var_c0
sub_140745220(rsi_9, &var_f0)

if (var_d8_32 != 0)
    sub_140a74f90(var_d8_32)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t rdi_25 = sx.q(var_b8_8)
int64_t var_e8_33 = sub_14086e490()
var_f0 = var_f8
int32_t rax_189 = (rdi_25 + 1).d
int32_t var_e0_10 = 0xffff0002
int16_t var_dc_10 = 0xffff
int64_t var_d8_33 = 0
int64_t var_d0_33 = 0
var_b8_8 = rax_189

if (rax_189 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_9 = var_c0

sub_140745220(&rsi_9[rdi_25 * 5], &var_f0)

if (var_d8_33 != 0)
    sub_140a74f90(var_d8_33)

sub_140b58260(&var_f8, u"Vertex", 1)
int64_t rdi_26 = sx.q(var_a8_8)
var_f0 = var_f8
int64_t var_e8_34 = data_14396f0a8
var_e0_10.w = data_14396f0b0
int32_t rax_193 = (rdi_26 + 1).d
var_e0_10 = 0xffffffff
int64_t var_d8_34 = 0
int64_t var_d0_34 = 0
var_a8_8 = rax_193

if (rax_193 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_26 * 0x28, &var_f0)

if (var_d8_34 != 0)
    sub_140a74f90(var_d8_34)

int64_t rdi_27 = sx.q(arg2[1].d)
int32_t rax_198 = (rdi_27 + 1).d
arg2[1].d = rax_198

if (rax_198 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_27 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_9 = 1
var_c8 = data_143cdfb38
var_b0 = 0
int32_t var_a8_9 = 0
int64_t var_a0_7 = 0
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
sub_140745220(var_c0, &var_f0)

if (var_d8_35 != 0)
    sub_140a74f90(var_d8_35)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_28 = sx.q(var_a8_9)
var_f0 = var_f8
int64_t var_e8_36 = data_14396f0a8
var_e0_11.w = data_14396f0b0
int32_t rax_208 = (rdi_28 + 1).d
var_e0_11 = 0xffffffff
int64_t var_d8_36 = 0
int64_t var_d0_36 = 0

if (rax_208 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_28 * 0x28, &var_f0)

if (var_d8_36 != 0)
    sub_140a74f90(var_d8_36)

int64_t rdi_29 = sx.q(arg2[1].d)
int32_t rax_213 = (rdi_29 + 1).d
arg2[1].d = rax_213

if (rax_213 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_29 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfb40
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_10 = sx.q(var_b8_9.d)
int32_t r14_5 = var_b8_9:4.d
var_f0 = var_f8
int32_t rdi_30 = (rsi_10 + 1).d
int64_t var_e8_37 = *(arg1 + 0x10)
int32_t var_e0_12 = 0xffff0001
int16_t var_dc_12 = 0xffff
int64_t var_d8_37 = 0
int64_t var_d0_37 = 0
var_b8_9.d = rdi_30

if (rdi_30 s> r14_5)
    sub_1405c4ec0(&var_c0)
    r14_5 = var_b8_9:4.d
    rdi_30 = var_b8_9.d

int64_t* rsi_11 = var_c0
sub_140745220(&rsi_11[rsi_10 * 5], &var_f0)

if (var_d8_37 != 0)
    sub_140a74f90(var_d8_37)

sub_140b58260(&var_f8, u"Filtered Index", 1)
var_f0 = var_f8
int64_t var_e8_38 = data_14396f0a8
var_e0_12.w = data_14396f0b0
var_e0_12 = 0xffffffff
int64_t var_d8_38 = 0
int64_t var_d0_38 = 0
var_b8_9.d = rdi_30 + 1

if (rdi_30 + 1 s> r14_5)
    sub_1405c4ec0(&var_c0)
    rsi_11 = var_c0

sub_140745220(&rsi_11[sx.q(rdi_30) * 5], &var_f0)

if (var_d8_38 != 0)
    sub_140a74f90(var_d8_38)

sub_140b58260(&var_f8, u"Vertex", 1)
int64_t rdi_31 = sx.q(rax_208)
var_f0 = var_f8
int64_t var_e8_39 = data_14396f0a8
var_e0_12.w = data_14396f0b0
int32_t rax_225 = (rdi_31 + 1).d
var_e0_12 = 0xffffffff
int64_t var_d8_39 = 0
int64_t var_d0_39 = 0
var_a8_9 = rax_225

if (rax_225 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_31 * 0x28, &var_f0)

if (var_d8_39 != 0)
    sub_140a74f90(var_d8_39)

int64_t rdi_32 = sx.q(arg2[1].d)
int32_t var_98_21 = (((((((((rax_180 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2) & 0xfffffffe) | 2
int32_t rax_230 = (rdi_32 + 1).d
arg2[1].d = rax_230

if (rax_230 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_32 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_118)
return result

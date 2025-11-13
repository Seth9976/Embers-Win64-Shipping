// 函数: sub_140762730
// 地址: 0x140762730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* var_c0 = nullptr
int32_t var_b8 = 1
int64_t var_c8 = data_143cdfa80
int64_t var_b0 = 0
int32_t var_a8 = 0
int64_t var_a0 = 0
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

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t rdi = sx.q(var_b8)
int64_t var_e8_1 = sub_14086e490()
var_f0 = var_f8
int32_t rax_9 = (rdi + 1).d
int32_t var_e0_1 = 0xffff0002
int16_t var_dc_1 = 0xffff
int64_t var_d8_1 = 0
int64_t var_d0_1 = 0
var_b8 = rax_9

if (rax_9 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi = var_c0

sub_140745220(&rsi[rdi * 5], &var_f0)

if (var_d8_1 != 0)
    sub_140a74f90(var_d8_1)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rdi_1 = sx.q(var_a8)
int64_t var_e8_2 = sub_140874d90()
var_f0 = var_f8
int32_t rax_11 = (rdi_1 + 1).d
int32_t var_e0_2 = 0xffff0002
int16_t var_dc_2 = 0xffff
int64_t var_d8_2 = 0
int64_t var_d0_2 = 0
var_a8 = rax_11

if (rax_11 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_1 * 0x28, &var_f0)

if (var_d8_2 != 0)
    sub_140a74f90(var_d8_2)

int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_16 = (rdi_2 + 1).d
arg2[1].d = rax_16

if (rax_16 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_2 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_1 = 1
var_c8 = data_143cdfa88
var_b0 = 0
int32_t var_a8_1 = 0
int64_t var_a0_1 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_1 = 0x80
int32_t var_60_1 = 0xffffffff
int32_t var_5c_1 = 0
int64_t var_50_1 = 0
int32_t var_48_1 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_3 = *(arg1 + 0x10)
int32_t var_e0_3 = 0xffff0001
int16_t var_dc_3 = 0xffff
int64_t var_d8_3 = 0
int64_t var_d0_3 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_1 = var_c0
sub_140745220(rsi_1, &var_f0)

if (var_d8_3 != 0)
    sub_140a74f90(var_d8_3)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rdi_3 = sx.q(var_b8_1)
int64_t var_e8_4 = sub_140874d90()
var_f0 = var_f8
int32_t rax_24 = (rdi_3 + 1).d
int32_t var_e0_4 = 0xffff0002
int16_t var_dc_4 = 0xffff
int64_t var_d8_4 = 0
int64_t var_d0_4 = 0
var_b8_1 = rax_24

if (rax_24 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_1 = var_c0

sub_140745220(&rsi_1[rdi_3 * 5], &var_f0)

if (var_d8_4 != 0)
    sub_140a74f90(var_d8_4)

sub_140b58260(&var_f8, u"IsValid", 1)
int64_t rdi_4 = sx.q(var_a8_1)
var_f0 = var_f8
int64_t var_e8_5 = data_14396f098
var_e0_4.w = data_14396f0a0
int32_t rax_28 = (rdi_4 + 1).d
var_e0_4 = 0xffffffff
int64_t var_d8_5 = 0
int64_t var_d0_5 = 0
var_a8_1 = rax_28

if (rax_28 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_4 * 0x28, &var_f0)

if (var_d8_5 != 0)
    sub_140a74f90(var_d8_5)

int64_t rdi_5 = sx.q(arg2[1].d)
int32_t rax_33 = (rdi_5 + 1).d
arg2[1].d = rax_33

if (rax_33 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_5 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_2 = 1
var_c8 = data_143cdfa90
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_2 = 0x80
int32_t var_60_2 = 0xffffffff
int32_t var_5c_2 = 0
int64_t var_50_2 = 0
int32_t var_48_2 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_6 = *(arg1 + 0x10)
int32_t var_e0_5 = 0xffff0001
int16_t var_dc_5 = 0xffff
int64_t var_d8_6 = 0
int64_t var_d0_6 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_2 = var_c0
sub_140745220(rsi_2, &var_f0)

if (var_d8_6 != 0)
    sub_140a74f90(var_d8_6)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rdi_6 = sx.q(var_b8_2)
int64_t var_e8_7 = sub_140874d90()
var_f0 = var_f8
int32_t rax_41 = (rdi_6 + 1).d
int32_t var_e0_6 = 0xffff0002
int16_t var_dc_6 = 0xffff
int64_t var_d8_7 = 0
int64_t var_d0_7 = 0
var_b8_2 = rax_41

if (rax_41 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_2 = var_c0

sub_140745220(&rsi_2[rdi_6 * 5], &var_f0)

if (var_d8_7 != 0)
    sub_140a74f90(var_d8_7)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8_2
int64_t rdi_7 = sx.q(var_a8_2.d)
int32_t rsi_3 = var_a8_2:4.d
var_f0 = var_f8
int32_t r14 = (rdi_7 + 1).d
int64_t var_e8_8 = data_14396f0c8
var_e0_6.w = data_14396f0d0
var_e0_6 = 0xffffffff
int64_t var_d8_8 = 0
int64_t var_d0_8 = 0
var_a8_2.d = r14

if (r14 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rsi_3 = var_a8_2:4.d
    r14 = var_a8_2.d

int64_t rdi_8 = var_b0
sub_140745220(rdi_8 + rdi_7 * 0x28, &var_f0)

if (var_d8_8 != 0)
    sub_140a74f90(var_d8_8)

sub_140b58260(&var_f8, u"Velocity", 1)
int32_t r15 = r14 + 1
var_f0 = var_f8
int64_t var_e8_9 = data_14396f0c8
var_e0_6.w = data_14396f0d0
var_e0_6 = 0xffffffff
int64_t var_d8_9 = 0
int64_t var_d0_9 = 0
var_a8_2.d = r15

if (r15 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rsi_3 = var_a8_2:4.d
    r15 = var_a8_2.d
    rdi_8 = var_b0

sub_140745220(rdi_8 + sx.q(r14) * 0x28, &var_f0)

if (var_d8_9 != 0)
    sub_140a74f90(var_d8_9)

sub_140b58260(&var_f8, u"Normal", 1)
int32_t r14_1 = r15 + 1
var_f0 = var_f8
int64_t var_e8_10 = data_14396f0c8
var_e0_6.w = data_14396f0d0
var_e0_6 = 0xffffffff
int64_t var_d8_10 = 0
int64_t var_d0_10 = 0
var_a8_2.d = r14_1

if (r14_1 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rsi_3 = var_a8_2:4.d
    r14_1 = var_a8_2.d
    rdi_8 = var_b0

sub_140745220(rdi_8 + sx.q(r15) * 0x28, &var_f0)

if (var_d8_10 != 0)
    sub_140a74f90(var_d8_10)

sub_140b58260(&var_f8, u"Binormal", 1)
int32_t r15_1 = r14_1 + 1
var_f0 = var_f8
int64_t var_e8_11 = data_14396f0c8
var_e0_6.w = data_14396f0d0
var_e0_6 = 0xffffffff
int64_t var_d8_11 = 0
int64_t var_d0_11 = 0
var_a8_2.d = r15_1

if (r15_1 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rsi_3 = var_a8_2:4.d
    r15_1 = var_a8_2.d
    rdi_8 = var_b0

sub_140745220(rdi_8 + sx.q(r14_1) * 0x28, &var_f0)

if (var_d8_11 != 0)
    sub_140a74f90(var_d8_11)

sub_140b58260(&var_f8, u"Tangent", 1)
var_f0 = var_f8
int64_t var_e8_12 = data_14396f0c8
var_e0_6.w = data_14396f0d0
var_e0_6 = 0xffffffff
int64_t var_d8_12 = 0
int64_t var_d0_12 = 0
var_a8_2.d = r15_1 + 1

if (r15_1 + 1 s> rsi_3)
    sub_1405c4ec0(&var_b0)
    rdi_8 = var_b0

sub_140745220(rdi_8 + sx.q(r15_1) * 0x28, &var_f0)

if (var_d8_12 != 0)
    sub_140a74f90(var_d8_12)

int64_t rdi_9 = sx.q(arg2[1].d)
int32_t rax_65 = (rdi_9 + 1).d
arg2[1].d = rax_65

if (rax_65 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_9 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_3 = 1
var_c8 = data_143cdfa98
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_3 = 0x80
int32_t var_60_3 = 0xffffffff
int32_t var_5c_3 = 0
int64_t var_50_3 = 0
int32_t var_48_3 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_13 = *(arg1 + 0x10)
int32_t var_e0_7 = 0xffff0001
int16_t var_dc_7 = 0xffff
int64_t var_d8_13 = 0
int64_t var_d0_13 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_4 = var_c0
sub_140745220(rsi_4, &var_f0)

if (var_d8_13 != 0)
    sub_140a74f90(var_d8_13)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rdi_10 = sx.q(var_b8_3)
int64_t var_e8_14 = sub_140874d90()
var_f0 = var_f8
int32_t rax_73 = (rdi_10 + 1).d
int32_t var_e0_8 = 0xffff0002
int16_t var_dc_8 = 0xffff
int64_t var_d8_14 = 0
int64_t var_d0_14 = 0
var_b8_3 = rax_73

if (rax_73 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_4 = var_c0

sub_140745220(&rsi_4[rdi_10 * 5], &var_f0)

if (var_d8_14 != 0)
    sub_140a74f90(var_d8_14)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8_3
int64_t rdi_11 = sx.q(var_a8_3.d)
int32_t rsi_5 = var_a8_3:4.d
var_f0 = var_f8
int32_t r14_2 = (rdi_11 + 1).d
int64_t var_e8_15 = data_14396f0c8
var_e0_8.w = data_14396f0d0
var_e0_8 = 0xffffffff
int64_t var_d8_15 = 0
int64_t var_d0_15 = 0
var_a8_3.d = r14_2

if (r14_2 s> rsi_5)
    sub_1405c4ec0(&var_b0)
    rsi_5 = var_a8_3:4.d
    r14_2 = var_a8_3.d

int64_t rdi_12 = var_b0
sub_140745220(rdi_12 + rdi_11 * 0x28, &var_f0)

if (var_d8_15 != 0)
    sub_140a74f90(var_d8_15)

sub_140b58260(&var_f8, u"Velocity", 1)
int32_t r15_2 = r14_2 + 1
var_f0 = var_f8
int64_t var_e8_16 = data_14396f0c8
var_e0_8.w = data_14396f0d0
var_e0_8 = 0xffffffff
int64_t var_d8_16 = 0
int64_t var_d0_16 = 0
var_a8_3.d = r15_2

if (r15_2 s> rsi_5)
    sub_1405c4ec0(&var_b0)
    rsi_5 = var_a8_3:4.d
    r15_2 = var_a8_3.d
    rdi_12 = var_b0

sub_140745220(rdi_12 + sx.q(r14_2) * 0x28, &var_f0)

if (var_d8_16 != 0)
    sub_140a74f90(var_d8_16)

sub_140b58260(&var_f8, u"Normal", 1)
var_f0 = var_f8
int64_t var_d8_17 = 0
int64_t var_d0_17 = 0
int32_t r13 = r15_2 + 1
int64_t var_e8_17 = data_14396f0c8
var_e0_8.w = data_14396f0d0
var_e0_8 = 0xffffffff
var_a8_3.d = r13

if (r13 s> rsi_5)
    sub_1405c4ec0(&var_b0)
    rsi_5 = var_a8_3:4.d
    r13 = var_a8_3.d
    rdi_12 = var_b0

sub_140745220(rdi_12 + sx.q(r15_2) * 0x28, &var_f0)

if (var_d8_17 != 0)
    sub_140a74f90(var_d8_17)

sub_140b58260(&var_f8, u"Binormal", 1)
int32_t r14_3 = r13 + 1
var_f0 = var_f8
int64_t var_e8_18 = data_14396f0c8
var_e0_8.w = data_14396f0d0
var_e0_8 = 0xffffffff
int64_t var_d8_18 = 0
int64_t var_d0_18 = 0
var_a8_3.d = r14_3

if (r14_3 s> rsi_5)
    sub_1405c4ec0(&var_b0)
    rsi_5 = var_a8_3:4.d
    r14_3 = var_a8_3.d
    rdi_12 = var_b0

sub_140745220(rdi_12 + sx.q(r13) * 0x28, &var_f0)

if (var_d8_18 != 0)
    sub_140a74f90(var_d8_18)

sub_140b58260(&var_f8, u"Tangent", 1)
var_f0 = var_f8
int64_t var_e8_19 = data_14396f0c8
var_e0_8.w = data_14396f0d0
var_e0_8 = 0xffffffff
int64_t var_d8_19 = 0
int64_t var_d0_19 = 0
var_a8_3.d = r14_3 + 1

if (r14_3 + 1 s> rsi_5)
    sub_1405c4ec0(&var_b0)
    rdi_12 = var_b0

sub_140745220(rdi_12 + sx.q(r14_3) * 0x28, &var_f0)

if (var_d8_19 != 0)
    sub_140a74f90(var_d8_19)

int64_t rdi_13 = sx.q(arg2[1].d)
int32_t var_98
int32_t rax_96 = (((((((((((((((var_98 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_97 = (rdi_13 + 1).d
arg2[1].d = rax_97

if (rax_97 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_13 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_4 = 1
var_c8 = data_143cdfaa0
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_4 = 0x80
int32_t var_60_4 = 0xffffffff
int32_t var_5c_4 = 0
int64_t var_50_4 = 0
int32_t var_48_4 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_20 = *(arg1 + 0x10)
int32_t var_e0_9 = 0xffff0001
int16_t var_dc_9 = 0xffff
int64_t var_d8_20 = 0
int64_t var_d0_20 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_6 = var_c0
sub_140745220(rsi_6, &var_f0)

if (var_d8_20 != 0)
    sub_140a74f90(var_d8_20)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rax_104 = sub_140874d90()
int64_t r14_4 = sx.q(var_b8_4.d)
int16_t var_dc_10 = 0xffff
int32_t r15_3 = var_b8_4:4.d
int32_t rdi_14 = (r14_4 + 1).d
var_f0 = var_f8
int64_t var_e8_21 = rax_104
int32_t var_e0_10 = 0xffff0002
int64_t var_d8_21 = 0
int64_t var_d0_21 = 0
var_b8_4.d = rdi_14

if (rdi_14 s> r15_3)
    sub_1405c4ec0(&var_c0)
    r15_3 = var_b8_4:4.d
    rdi_14 = var_b8_4.d
    rsi_6 = var_c0

sub_140745220(&rsi_6[r14_4 * 5], &var_f0)

if (var_d8_21 != 0)
    sub_140a74f90(var_d8_21)

sub_140b58260(&var_f8, u"Interp", 1)
var_f0 = var_f8
int64_t var_e8_22 = data_14396f088
var_e0_10.w = data_14396f090
var_e0_10 = 0xffffffff
int64_t var_d8_22 = 0
int64_t var_d0_22 = 0
var_b8_4.d = rdi_14 + 1

if (rdi_14 + 1 s> r15_3)
    sub_1405c4ec0(&var_c0)
    rsi_6 = var_c0

sub_140745220(&rsi_6[sx.q(rdi_14) * 5], &var_f0)

if (var_d8_22 != 0)
    sub_140a74f90(var_d8_22)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8_4
int64_t rdi_15 = sx.q(var_a8_4.d)
int32_t rsi_7 = var_a8_4:4.d
var_f0 = var_f8
int32_t r14_5 = (rdi_15 + 1).d
int64_t var_e8_23 = data_14396f0c8
var_e0_10.w = data_14396f0d0
var_e0_10 = 0xffffffff
int64_t var_d8_23 = 0
int64_t var_d0_23 = 0
var_a8_4.d = r14_5

if (r14_5 s> rsi_7)
    sub_1405c4ec0(&var_b0)
    rsi_7 = var_a8_4:4.d
    r14_5 = var_a8_4.d

int64_t rdi_16 = var_b0
sub_140745220(rdi_16 + rdi_15 * 0x28, &var_f0)

if (var_d8_23 != 0)
    sub_140a74f90(var_d8_23)

sub_140b58260(&var_f8, u"Velocity", 1)
int32_t r15_4 = r14_5 + 1
var_f0 = var_f8
int64_t var_e8_24 = data_14396f0c8
var_e0_10.w = data_14396f0d0
var_e0_10 = 0xffffffff
int64_t var_d8_24 = 0
int64_t var_d0_24 = 0
var_a8_4.d = r15_4

if (r15_4 s> rsi_7)
    sub_1405c4ec0(&var_b0)
    rsi_7 = var_a8_4:4.d
    r15_4 = var_a8_4.d
    rdi_16 = var_b0

sub_140745220(rdi_16 + sx.q(r14_5) * 0x28, &var_f0)

if (var_d8_24 != 0)
    sub_140a74f90(var_d8_24)

sub_140b58260(&var_f8, u"Normal", 1)
var_f0 = var_f8
int64_t var_d8_25 = 0
int64_t var_d0_25 = 0
int32_t r13_1 = r15_4 + 1
int64_t var_e8_25 = data_14396f0c8
var_e0_10.w = data_14396f0d0
var_e0_10 = 0xffffffff
var_a8_4.d = r13_1

if (r13_1 s> rsi_7)
    sub_1405c4ec0(&var_b0)
    rsi_7 = var_a8_4:4.d
    r13_1 = var_a8_4.d
    rdi_16 = var_b0

sub_140745220(rdi_16 + sx.q(r15_4) * 0x28, &var_f0)

if (var_d8_25 != 0)
    sub_140a74f90(var_d8_25)

sub_140b58260(&var_f8, u"Binormal", 1)
int32_t r14_6 = r13_1 + 1
var_f0 = var_f8
int64_t var_e8_26 = data_14396f0c8
var_e0_10.w = data_14396f0d0
var_e0_10 = 0xffffffff
int64_t var_d8_26 = 0
int64_t var_d0_26 = 0
var_a8_4.d = r14_6

if (r14_6 s> rsi_7)
    sub_1405c4ec0(&var_b0)
    rsi_7 = var_a8_4:4.d
    r14_6 = var_a8_4.d
    rdi_16 = var_b0

sub_140745220(rdi_16 + sx.q(r13_1) * 0x28, &var_f0)

if (var_d8_26 != 0)
    sub_140a74f90(var_d8_26)

sub_140b58260(&var_f8, u"Tangent", 1)
var_f0 = var_f8
int64_t var_e8_27 = data_14396f0c8
var_e0_10.w = data_14396f0d0
var_e0_10 = 0xffffffff
int64_t var_d8_27 = 0
int64_t var_d0_27 = 0
var_a8_4.d = r14_6 + 1

if (r14_6 + 1 s> rsi_7)
    sub_1405c4ec0(&var_b0)
    rdi_16 = var_b0

sub_140745220(rdi_16 + sx.q(r14_6) * 0x28, &var_f0)

if (var_d8_27 != 0)
    sub_140a74f90(var_d8_27)

int64_t rdi_17 = sx.q(arg2[1].d)
int32_t rax_133 = (rdi_17 + 1).d
arg2[1].d = rax_133

if (rax_133 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_17 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_5 = 1
var_c8 = data_143cdfaa8
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_5 = 0x80
int32_t var_60_5 = 0xffffffff
int32_t var_5c_5 = 0
int64_t var_50_5 = 0
int32_t var_48_5 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_28 = *(arg1 + 0x10)
int32_t var_e0_11 = 0xffff0001
int16_t var_dc_11 = 0xffff
int64_t var_d8_28 = 0
int64_t var_d0_28 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_8 = var_c0
sub_140745220(rsi_8, &var_f0)

if (var_d8_28 != 0)
    sub_140a74f90(var_d8_28)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rax_140 = sub_140874d90()
int64_t r14_7 = sx.q(var_b8_5.d)
int16_t var_dc_12 = 0xffff
int32_t r15_5 = var_b8_5:4.d
int32_t rdi_18 = (r14_7 + 1).d
var_f0 = var_f8
int64_t var_e8_29 = rax_140
int32_t var_e0_12 = 0xffff0002
int64_t var_d8_29 = 0
int64_t var_d0_29 = 0
var_b8_5.d = rdi_18

if (rdi_18 s> r15_5)
    sub_1405c4ec0(&var_c0)
    r15_5 = var_b8_5:4.d
    rdi_18 = var_b8_5.d
    rsi_8 = var_c0

sub_140745220(&rsi_8[r14_7 * 5], &var_f0)

if (var_d8_29 != 0)
    sub_140a74f90(var_d8_29)

sub_140b58260(&var_f8, u"Interp", 1)
var_f0 = var_f8
int64_t var_e8_30 = data_14396f088
var_e0_12.w = data_14396f090
var_e0_12 = 0xffffffff
int64_t var_d8_30 = 0
int64_t var_d0_30 = 0
var_b8_5.d = rdi_18 + 1

if (rdi_18 + 1 s> r15_5)
    sub_1405c4ec0(&var_c0)
    rsi_8 = var_c0

sub_140745220(&rsi_8[sx.q(rdi_18) * 5], &var_f0)

if (var_d8_30 != 0)
    sub_140a74f90(var_d8_30)

sub_140b58260(&var_f8, u"Position", 1)
int64_t var_a8_5
int64_t rdi_19 = sx.q(var_a8_5.d)
int32_t rsi_9 = var_a8_5:4.d
var_f0 = var_f8
int32_t r15_6 = (rdi_19 + 1).d
int64_t var_e8_31 = data_14396f0c8
var_e0_12.w = data_14396f0d0
var_e0_12 = 0xffffffff
int64_t var_d8_31 = 0
int64_t var_d0_31 = 0
var_a8_5.d = r15_6

if (r15_6 s> rsi_9)
    sub_1405c4ec0(&var_b0)
    rsi_9 = var_a8_5:4.d
    r15_6 = var_a8_5.d

int64_t rdi_20 = var_b0
sub_140745220(rdi_20 + rdi_19 * 0x28, &var_f0)

if (var_d8_31 != 0)
    sub_140a74f90(var_d8_31)

sub_140b58260(&var_f8, u"Velocity", 1)
int32_t r14_8 = r15_6 + 1
var_f0 = var_f8
int64_t var_e8_32 = data_14396f0c8
var_e0_12.w = data_14396f0d0
var_e0_12 = 0xffffffff
int64_t var_d8_32 = 0
int64_t var_d0_32 = 0
var_a8_5.d = r14_8

if (r14_8 s> rsi_9)
    sub_1405c4ec0(&var_b0)
    rsi_9 = var_a8_5:4.d
    r14_8 = var_a8_5.d
    rdi_20 = var_b0

sub_140745220(rdi_20 + sx.q(r15_6) * 0x28, &var_f0)

if (var_d8_32 != 0)
    sub_140a74f90(var_d8_32)

sub_140b58260(&var_f8, u"Normal", 1)
int32_t r15_7 = r14_8 + 1
var_f0 = var_f8
int64_t var_e8_33 = data_14396f0c8
var_e0_12.w = data_14396f0d0
var_e0_12 = 0xffffffff
int64_t var_d8_33 = 0
int64_t var_d0_33 = 0
var_a8_5.d = r15_7

if (r15_7 s> rsi_9)
    sub_1405c4ec0(&var_b0)
    rsi_9 = var_a8_5:4.d
    r15_7 = var_a8_5.d
    rdi_20 = var_b0

sub_140745220(rdi_20 + sx.q(r14_8) * 0x28, &var_f0)

if (var_d8_33 != 0)
    sub_140a74f90(var_d8_33)

sub_140b58260(&var_f8, u"Binormal", 1)
int32_t r14_9 = r15_7 + 1
var_f0 = var_f8
int64_t var_e8_34 = data_14396f0c8
var_e0_12.w = data_14396f0d0
var_e0_12 = 0xffffffff
int64_t var_d8_34 = 0
int64_t var_d0_34 = 0
var_a8_5.d = r14_9

if (r14_9 s> rsi_9)
    sub_1405c4ec0(&var_b0)
    rsi_9 = var_a8_5:4.d
    r14_9 = var_a8_5.d
    rdi_20 = var_b0

sub_140745220(rdi_20 + sx.q(r15_7) * 0x28, &var_f0)

if (var_d8_34 != 0)
    sub_140a74f90(var_d8_34)

sub_140b58260(&var_f8, u"Tangent", 1)
var_f0 = var_f8
int64_t var_e8_35 = data_14396f0c8
var_e0_12.w = data_14396f0d0
var_e0_12 = 0xffffffff
int64_t var_d8_35 = 0
int64_t var_d0_35 = 0
var_a8_5.d = r14_9 + 1

if (r14_9 + 1 s> rsi_9)
    sub_1405c4ec0(&var_b0)
    rdi_20 = var_b0

sub_140745220(rdi_20 + sx.q(r14_9) * 0x28, &var_f0)

if (var_d8_35 != 0)
    sub_140a74f90(var_d8_35)

int64_t rdi_21 = sx.q(arg2[1].d)
int32_t rax_169 = (rdi_21 + 1).d
arg2[1].d = rax_169

if (rax_169 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_21 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_6 = 1
var_c8 = data_143cdfab0
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
int64_t var_e8_36 = *(arg1 + 0x10)
int32_t var_e0_13 = 0xffff0001
int16_t var_dc_13 = 0xffff
int64_t var_d8_36 = 0
int64_t var_d0_36 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_10 = var_c0
sub_140745220(rsi_10, &var_f0)

if (var_d8_36 != 0)
    sub_140a74f90(var_d8_36)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rdi_22 = sx.q(var_b8_6)
int64_t var_e8_37 = sub_140874d90()
var_f0 = var_f8
int32_t rax_177 = (rdi_22 + 1).d
int32_t var_e0_14 = 0xffff0002
int16_t var_dc_14 = 0xffff
int64_t var_d8_37 = 0
int64_t var_d0_37 = 0
var_b8_6 = rax_177

if (rax_177 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_10 = var_c0

sub_140745220(&rsi_10[rdi_22 * 5], &var_f0)

if (var_d8_37 != 0)
    sub_140a74f90(var_d8_37)

sub_140b58260(&var_f8, u"Color", 1)
int64_t rdi_23 = sx.q(var_a8_6)
var_f0 = var_f8
int64_t var_e8_38 = data_14396f0e8
var_e0_14.w = data_14396f0f0
int32_t rax_181 = (rdi_23 + 1).d
var_e0_14 = 0xffffffff
int64_t var_d8_38 = 0
int64_t var_d0_38 = 0
var_a8_6 = rax_181

if (rax_181 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_23 * 0x28, &var_f0)

if (var_d8_38 != 0)
    sub_140a74f90(var_d8_38)

int64_t rdi_24 = sx.q(arg2[1].d)
int32_t rax_186 = (rdi_24 + 1).d
arg2[1].d = rax_186

if (rax_186 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_24 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_7 = 1
var_c8 = data_143cdfab8
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_7 = 0x80
int32_t var_60_7 = 0xffffffff
int32_t var_5c_7 = 0
int64_t var_50_7 = 0
int32_t var_48_7 = 0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
var_f0 = var_f8
int64_t var_e8_39 = *(arg1 + 0x10)
int32_t var_e0_15 = 0xffff0001
int16_t var_dc_15 = 0xffff
int64_t var_d8_39 = 0
int64_t var_d0_39 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_11 = var_c0
sub_140745220(rsi_11, &var_f0)

if (var_d8_39 != 0)
    sub_140a74f90(var_d8_39)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rax_193 = sub_140874d90()
int64_t r14_10 = sx.q(var_b8_7.d)
int16_t var_dc_16 = 0xffff
int32_t r15_8 = var_b8_7:4.d
int32_t rdi_25 = (r14_10 + 1).d
var_f0 = var_f8
int64_t var_e8_40 = rax_193
int32_t var_e0_16 = 0xffff0002
int64_t var_d8_40 = 0
int64_t var_d0_40 = 0
var_b8_7.d = rdi_25

if (rdi_25 s> r15_8)
    sub_1405c4ec0(&var_c0)
    r15_8 = var_b8_7:4.d
    rdi_25 = var_b8_7.d
    rsi_11 = var_c0

sub_140745220(&rsi_11[r14_10 * 5], &var_f0)

if (var_d8_40 != 0)
    sub_140a74f90(var_d8_40)

sub_140b58260(&var_f8, u"UV Set", 1)
var_f0 = var_f8
int64_t var_e8_41 = data_14396f0a8
var_e0_16.w = data_14396f0b0
var_e0_16 = 0xffffffff
int64_t var_d8_41 = 0
int64_t var_d0_41 = 0
var_b8_7.d = rdi_25 + 1

if (rdi_25 + 1 s> r15_8)
    sub_1405c4ec0(&var_c0)
    rsi_11 = var_c0

sub_140745220(&rsi_11[sx.q(rdi_25) * 5], &var_f0)

if (var_d8_41 != 0)
    sub_140a74f90(var_d8_41)

sub_140b58260(&var_f8, &data_142d9b038, 1)
int64_t var_a8_7
int64_t rdi_26 = sx.q(var_a8_7.d)
var_f0 = var_f8
int64_t var_e8_42 = data_14396f0b8
var_e0_16.w = data_14396f0c0
int32_t rax_202 = (rdi_26 + 1).d
var_e0_16 = 0xffffffff
int64_t var_d8_42 = 0
int64_t var_d0_42 = 0
var_a8_7.d = rax_202

if (rax_202 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_26 * 0x28, &var_f0)

if (var_d8_42 != 0)
    sub_140a74f90(var_d8_42)

int64_t rdi_27 = sx.q(arg2[1].d)
int32_t rax_206 = (((((((((((((((rax_96 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_207 = (rdi_27 + 1).d
arg2[1].d = rax_207

if (rax_207 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_27 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfac0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_12 = sx.q(var_b8_7.d)
int32_t r14_11 = var_b8_7:4.d
var_f0 = var_f8
int32_t rdi_28 = (rsi_12 + 1).d
int64_t var_e8_43 = *(arg1 + 0x10)
int32_t var_e0_17 = 0xffff0001
int16_t var_dc_17 = 0xffff
int64_t var_d8_43 = 0
int64_t var_d0_43 = 0
var_b8_7.d = rdi_28

if (rdi_28 s> r14_11)
    sub_1405c4ec0(&var_c0)
    r14_11 = var_b8_7:4.d
    rdi_28 = var_b8_7.d

int64_t* rsi_13 = var_c0
sub_140745220(&rsi_13[rsi_12 * 5], &var_f0)

if (var_d8_43 != 0)
    sub_140a74f90(var_d8_43)

sub_140b58260(&var_f8, u"TriangleIndex", 1)
var_f0 = var_f8
int64_t var_e8_44 = data_14396f0a8
var_e0_17.w = data_14396f0b0
var_e0_17 = 0xffffffff
int64_t var_d8_44 = 0
int64_t var_d0_44 = 0
var_b8_7.d = rdi_28 + 1

if (rdi_28 + 1 s> r14_11)
    sub_1405c4ec0(&var_c0)
    rsi_13 = var_c0

sub_140745220(&rsi_13[sx.q(rdi_28) * 5], &var_f0)

if (var_d8_44 != 0)
    sub_140a74f90(var_d8_44)

sub_140b58260(&var_f8, u"Vertex 0", 1)
int64_t rsi_14 = sx.q(var_a8_7.d)
int32_t r15_9 = var_a8_7:4.d
var_f0 = var_f8
int32_t rdi_29 = (rsi_14 + 1).d
int64_t var_e8_45 = data_14396f0a8
var_e0_17.w = data_14396f0b0
var_e0_17 = 0xffffffff
int64_t var_d8_45 = 0
int64_t var_d0_45 = 0
var_a8_7.d = rdi_29

if (rdi_29 s> r15_9)
    sub_1405c4ec0(&var_b0)
    r15_9 = var_a8_7:4.d
    rdi_29 = var_a8_7.d

int64_t r14_12 = var_b0
sub_140745220(r14_12 + rsi_14 * 0x28, &var_f0)

if (var_d8_45 != 0)
    sub_140a74f90(var_d8_45)

sub_140b58260(&var_f8, u"Vertex 1", 1)
int32_t rsi_15 = rdi_29 + 1
var_f0 = var_f8
int64_t var_e8_46 = data_14396f0a8
var_e0_17.w = data_14396f0b0
var_e0_17 = 0xffffffff
int64_t var_d8_46 = 0
int64_t var_d0_46 = 0
var_a8_7.d = rsi_15

if (rsi_15 s> r15_9)
    sub_1405c4ec0(&var_b0)
    r15_9 = var_a8_7:4.d
    rsi_15 = var_a8_7.d
    r14_12 = var_b0

sub_140745220(r14_12 + sx.q(rdi_29) * 0x28, &var_f0)

if (var_d8_46 != 0)
    sub_140a74f90(var_d8_46)

sub_140b58260(&var_f8, u"Vertex 2", 1)
var_f0 = var_f8
int64_t var_e8_47 = data_14396f0a8
var_e0_17.w = data_14396f0b0
var_e0_17 = 0xffffffff
int64_t var_d8_47 = 0
int64_t var_d0_47 = 0
var_a8_7.d = rsi_15 + 1

if (rsi_15 + 1 s> r15_9)
    sub_1405c4ec0(&var_b0)
    r14_12 = var_b0

sub_140745220(r14_12 + sx.q(rsi_15) * 0x28, &var_f0)

if (var_d8_47 != 0)
    sub_140a74f90(var_d8_47)

int64_t rdi_30 = sx.q(arg2[1].d)
int32_t rax_231 = (rdi_30 + 1).d
arg2[1].d = rax_231

if (rax_231 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_30 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfac8
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_16 = sx.q(var_b8_7.d)
int32_t r14_13 = var_b8_7:4.d
var_f0 = var_f8
int32_t rdi_31 = (rsi_16 + 1).d
int64_t var_e8_48 = *(arg1 + 0x10)
int32_t var_e0_18 = 0xffff0001
int16_t var_dc_18 = 0xffff
int64_t var_d8_48 = 0
int64_t var_d0_48 = 0
var_b8_7.d = rdi_31

if (rdi_31 s> r14_13)
    sub_1405c4ec0(&var_c0)
    r14_13 = var_b8_7:4.d
    rdi_31 = var_b8_7.d

int64_t* rsi_17 = var_c0
sub_140745220(&rsi_17[rsi_16 * 5], &var_f0)

if (var_d8_48 != 0)
    sub_140a74f90(var_d8_48)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t var_e8_49 = sub_14086e490()
var_f0 = var_f8
int32_t var_e0_19 = 0xffff0002
int16_t var_dc_19 = 0xffff
int64_t var_d8_49 = 0
int64_t var_d0_49 = 0
var_b8_7.d = rdi_31 + 1

if (rdi_31 + 1 s> r14_13)
    sub_1405c4ec0(&var_c0)
    rsi_17 = var_c0

sub_140745220(&rsi_17[sx.q(rdi_31) * 5], &var_f0)

if (var_d8_49 != 0)
    sub_140a74f90(var_d8_49)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rdi_32 = sx.q(var_a8_7.d)
int64_t var_e8_50 = sub_140874d90()
var_f0 = var_f8
int32_t rax_239 = (rdi_32 + 1).d
int32_t var_e0_20 = 0xffff0002
int16_t var_dc_20 = 0xffff
int64_t var_d8_50 = 0
int64_t var_d0_50 = 0
var_a8_7.d = rax_239

if (rax_239 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_32 * 0x28, &var_f0)

if (var_d8_50 != 0)
    sub_140a74f90(var_d8_50)

int64_t rdi_33 = sx.q(arg2[1].d)
int32_t rax_244 = (rdi_33 + 1).d
arg2[1].d = rax_244

if (rax_244 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_33 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfad0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rdi_34 = sx.q(var_b8_7.d)
var_f0 = var_f8
int64_t var_e8_51 = *(arg1 + 0x10)
int32_t rax_248 = (rdi_34 + 1).d
int32_t var_e0_21 = 0xffff0001
int16_t var_dc_21 = 0xffff
int64_t var_d8_51 = 0
int64_t var_d0_51 = 0
var_b8_7.d = rax_248

if (rax_248 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(&var_c0[rdi_34 * 5], &var_f0)

if (var_d8_51 != 0)
    sub_140a74f90(var_d8_51)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_35 = sx.q(var_a8_7.d)
var_f0 = var_f8
int64_t var_e8_52 = data_14396f0a8
var_e0_21.w = data_14396f0b0
int32_t rax_253 = (rdi_35 + 1).d
var_e0_21 = 0xffffffff
int64_t var_d8_52 = 0
int64_t var_d0_52 = 0
var_a8_7.d = rax_253

if (rax_253 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_35 * 0x28, &var_f0)

if (var_d8_52 != 0)
    sub_140a74f90(var_d8_52)

int64_t rdi_36 = sx.q(arg2[1].d)
int32_t rax_258 = (rdi_36 + 1).d
arg2[1].d = rax_258

if (rax_258 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_36 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfad8
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_18 = sx.q(var_b8_7.d)
int32_t r14_14 = var_b8_7:4.d
var_f0 = var_f8
int32_t rdi_37 = (rsi_18 + 1).d
int64_t var_e8_53 = *(arg1 + 0x10)
int32_t var_e0_22 = 0xffff0001
int16_t var_dc_22 = 0xffff
int64_t var_d8_53 = 0
int64_t var_d0_53 = 0
var_b8_7.d = rdi_37

if (rdi_37 s> r14_14)
    sub_1405c4ec0(&var_c0)
    r14_14 = var_b8_7:4.d
    rdi_37 = var_b8_7.d

int64_t* rsi_19 = var_c0
sub_140745220(&rsi_19[rsi_18 * 5], &var_f0)

if (var_d8_53 != 0)
    sub_140a74f90(var_d8_53)

sub_140b58260(&var_f8, u"RandomInfo", 1)
int64_t var_e8_54 = sub_14086e490()
var_f0 = var_f8
int32_t var_e0_23 = 0xffff0002
int16_t var_dc_23 = 0xffff
int64_t var_d8_54 = 0
int64_t var_d0_54 = 0
var_b8_7.d = rdi_37 + 1

if (rdi_37 + 1 s> r14_14)
    sub_1405c4ec0(&var_c0)
    rsi_19 = var_c0

sub_140745220(&rsi_19[sx.q(rdi_37) * 5], &var_f0)

if (var_d8_54 != 0)
    sub_140a74f90(var_d8_54)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rdi_38 = sx.q(var_a8_7.d)
int64_t var_e8_55 = sub_140874d90()
var_f0 = var_f8
int32_t rax_266 = (rdi_38 + 1).d
int32_t var_e0_24 = 0xffff0002
int16_t var_dc_24 = 0xffff
int64_t var_d8_55 = 0
int64_t var_d0_55 = 0
var_a8_7.d = rax_266

if (rax_266 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_38 * 0x28, &var_f0)

if (var_d8_55 != 0)
    sub_140a74f90(var_d8_55)

int64_t rdi_39 = sx.q(arg2[1].d)
int32_t rax_271 = (rdi_39 + 1).d
arg2[1].d = rax_271

if (rax_271 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_39 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfae0
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rdi_40 = sx.q(var_b8_7.d)
var_f0 = var_f8
int64_t var_e8_56 = *(arg1 + 0x10)
int32_t rax_275 = (rdi_40 + 1).d
int32_t var_e0_25 = 0xffff0001
int16_t var_dc_25 = 0xffff
int64_t var_d8_56 = 0
int64_t var_d0_56 = 0
var_b8_7.d = rax_275

if (rax_275 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(&var_c0[rdi_40 * 5], &var_f0)

if (var_d8_56 != 0)
    sub_140a74f90(var_d8_56)

sub_140b58260(&var_f8, u"Count", 1)
int64_t rdi_41 = sx.q(var_a8_7.d)
var_f0 = var_f8
int64_t var_e8_57 = data_14396f0a8
var_e0_25.w = data_14396f0b0
int32_t rax_280 = (rdi_41 + 1).d
var_e0_25 = 0xffffffff
int64_t var_d8_57 = 0
int64_t var_d0_57 = 0
var_a8_7.d = rax_280

if (rax_280 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_41 * 0x28, &var_f0)

if (var_d8_57 != 0)
    sub_140a74f90(var_d8_57)

int64_t rdi_42 = sx.q(arg2[1].d)
int32_t rax_285 = (rdi_42 + 1).d
arg2[1].d = rax_285

if (rax_285 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_42 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143cdfae8
sub_140b58260(&var_f8, u"SkeletalMesh", 1)
int64_t rsi_20 = sx.q(var_b8_7.d)
int32_t r14_15 = var_b8_7:4.d
var_f0 = var_f8
int32_t rdi_43 = (rsi_20 + 1).d
int64_t var_e8_58 = *(arg1 + 0x10)
int32_t var_e0_26 = 0xffff0001
int16_t var_dc_26 = 0xffff
int64_t var_d8_58 = 0
int64_t var_d0_58 = 0
var_b8_7.d = rdi_43

if (rdi_43 s> r14_15)
    sub_1405c4ec0(&var_c0)
    r14_15 = var_b8_7:4.d
    rdi_43 = var_b8_7.d

int64_t* rsi_21 = var_c0
sub_140745220(&rsi_21[rsi_20 * 5], &var_f0)

if (var_d8_58 != 0)
    sub_140a74f90(var_d8_58)

sub_140b58260(&var_f8, u"Index", 1)
var_f0 = var_f8
int64_t var_e8_59 = data_14396f0a8
var_e0_26.w = data_14396f0b0
var_e0_26 = 0xffffffff
int64_t var_d8_59 = 0
int64_t var_d0_59 = 0
var_b8_7.d = rdi_43 + 1

if (rdi_43 + 1 s> r14_15)
    sub_1405c4ec0(&var_c0)
    rsi_21 = var_c0

sub_140745220(&rsi_21[sx.q(rdi_43) * 5], &var_f0)

if (var_d8_59 != 0)
    sub_140a74f90(var_d8_59)

sub_140b58260(&var_f8, u"Coord", 1)
int64_t rdi_44 = sx.q(var_a8_7.d)
int64_t var_e8_60 = sub_140874d90()
var_f0 = var_f8
int32_t rax_295 = (rdi_44 + 1).d
int32_t var_e0_27 = 0xffff0002
int16_t var_dc_27 = 0xffff
int64_t var_d8_60 = 0
int64_t var_d0_60 = 0
var_a8_7.d = rax_295

if (rax_295 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_44 * 0x28, &var_f0)

if (var_d8_60 != 0)
    sub_140a74f90(var_d8_60)

int64_t rdi_45 = sx.q(arg2[1].d)
int32_t var_98_22 = (((((((((((rax_206 & 0xfffffffe) | 2) & 0xfffffffe) | 2) & 0xfffffffe) | 2)
    & 0xfffffffe) | 2) & 0xfffffffe) | 2) & 0xfffffffe) | 2
int32_t rax_300 = (rdi_45 + 1).d
arg2[1].d = rax_300

if (rax_300 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_45 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_118)
return result

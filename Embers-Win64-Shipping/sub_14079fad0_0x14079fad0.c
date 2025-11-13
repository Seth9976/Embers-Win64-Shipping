// 函数: sub_14079fad0
// 地址: 0x14079fad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
sub_14079e880(arg1, arg2)
int64_t var_c8 = 1
int64_t* var_d0 = nullptr
int64_t var_c0 = 0
int64_t var_d8 = data_143ce0530
int32_t var_b8 = 0
int64_t var_b0 = 0
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x2c)
int32_t var_74 = 0x80
int32_t var_70 = 0xffffffff
int32_t var_6c = 0
int64_t var_60 = 0
int32_t var_58 = 0
int64_t var_108
sub_140b58260(&var_108, u"Grid", 1)
int64_t var_100 = var_108
int64_t var_f8 = *(arg1 + 0x10)
int32_t var_f0 = 0xffff0001
int16_t var_ec = 0xffff
int64_t var_e8 = 0
int64_t var_e0 = 0
sub_1405c4ec0(&var_d0)
sub_140745220(var_d0, &var_100)

if (var_e8 != 0)
    sub_140a74f90(var_e8)

sub_140b58260(&var_108, u"MaxNeighborsPerVoxel", 1)
int64_t rdi = sx.q(var_b8)
var_100 = var_108
int64_t var_f8_1 = data_14396f0a8
var_f0.w = data_14396f0b0
int32_t rax_11 = (rdi + 1).d
var_f0 = 0xffffffff
int64_t var_e8_1 = 0
int64_t var_e0_1 = 0
var_b8 = rax_11

if (rax_11 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi * 0x28, &var_100)

if (var_e8_1 != 0)
    sub_140a74f90(var_e8_1)

int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_16 = (rdi_1 + 1).d
arg2[1].d = rax_16

if (rax_16 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_1 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
sub_140745ac0(&var_d0)
var_d0 = nullptr
int64_t var_c8_1 = 1
var_d8 = data_143ce0538
var_c0 = 0
int32_t var_b8_1 = 0
int64_t var_b0_1 = 0
__builtin_memset(&var_a0, 0, 0x2c)
int32_t var_74_1 = 0x80
int32_t var_70_1 = 0xffffffff
int32_t var_6c_1 = 0
int64_t var_60_1 = 0
int32_t var_58_1 = 0
sub_140b58260(&var_108, u"Grid", 1)
var_100 = var_108
int64_t var_f8_2 = *(arg1 + 0x10)
int32_t var_f0_1 = 0xffff0001
int16_t var_ec_1 = 0xffff
int64_t var_e8_2 = 0
int64_t var_e0_2 = 0
sub_1405c4ec0(&var_d0)
int64_t* rdi_2 = var_d0
sub_140745220(rdi_2, &var_100)

if (var_e8_2 != 0)
    sub_140a74f90(var_e8_2)

sub_140b58260(&var_108, u"IndexX", 1)
int64_t r15 = sx.q(var_c8_1.d)
int32_t rsi = var_c8_1:4.d
var_100 = var_108
int32_t r14 = (r15 + 1).d
int64_t var_f8_3 = data_14396f0a8
var_f0_1.w = data_14396f0b0
var_f0_1 = 0xffffffff
int64_t var_e8_3 = 0
int64_t var_e0_3 = 0
var_c8_1.d = r14

if (r14 s> rsi)
    sub_1405c4ec0(&var_d0)
    rsi = var_c8_1:4.d
    r14 = var_c8_1.d
    rdi_2 = var_d0

sub_140745220(&rdi_2[r15 * 5], &var_100)

if (var_e8_3 != 0)
    sub_140a74f90(var_e8_3)

sub_140b58260(&var_108, u"IndexY", 1)
int32_t r15_1 = r14 + 1
var_100 = var_108
int64_t var_f8_4 = data_14396f0a8
var_f0_1.w = data_14396f0b0
var_f0_1 = 0xffffffff
int64_t var_e8_4 = 0
int64_t var_e0_4 = 0
var_c8_1.d = r15_1

if (r15_1 s> rsi)
    sub_1405c4ec0(&var_d0)
    rsi = var_c8_1:4.d
    r15_1 = var_c8_1.d
    rdi_2 = var_d0

sub_140745220(&rdi_2[sx.q(r14) * 5], &var_100)

if (var_e8_4 != 0)
    sub_140a74f90(var_e8_4)

sub_140b58260(&var_108, u"IndexZ", 1)
int32_t r14_1 = r15_1 + 1
var_100 = var_108
int64_t var_f8_5 = data_14396f0a8
var_f0_1.w = data_14396f0b0
var_f0_1 = 0xffffffff
int64_t var_e8_5 = 0
int64_t var_e0_5 = 0
var_c8_1.d = r14_1

if (r14_1 s> rsi)
    sub_1405c4ec0(&var_d0)
    rsi = var_c8_1:4.d
    r14_1 = var_c8_1.d
    rdi_2 = var_d0

sub_140745220(&rdi_2[sx.q(r15_1) * 5], &var_100)

if (var_e8_5 != 0)
    sub_140a74f90(var_e8_5)

sub_140b58260(&var_108, u"Neighbor", 1)
var_100 = var_108
int64_t var_f8_6 = data_14396f0a8
var_f0_1.w = data_14396f0b0
var_f0_1 = 0xffffffff
int64_t var_e8_6 = 0
int64_t var_e0_6 = 0
var_c8_1.d = r14_1 + 1

if (r14_1 + 1 s> rsi)
    sub_1405c4ec0(&var_d0)
    rdi_2 = var_d0

sub_140745220(&rdi_2[sx.q(r14_1) * 5], &var_100)

if (var_e8_6 != 0)
    sub_140a74f90(var_e8_6)

sub_140b58260(&var_108, u"Linear Index", 1)
int64_t rdi_3 = sx.q(var_b8_1)
var_100 = var_108
int64_t var_f8_7 = data_14396f0a8
var_f0_1.w = data_14396f0b0
int32_t rax_42 = (rdi_3 + 1).d
var_f0_1 = 0xffffffff
int64_t var_e8_7 = 0
int64_t var_e0_7 = 0
var_b8_1 = rax_42

if (rax_42 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_3 * 0x28, &var_100)

if (var_e8_7 != 0)
    sub_140a74f90(var_e8_7)

int64_t rdi_4 = sx.q(arg2[1].d)
int32_t rax_47 = (rdi_4 + 1).d
arg2[1].d = rax_47

if (rax_47 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_4 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
sub_140745ac0(&var_d0)
var_d0 = nullptr
int32_t var_c8_2 = 1
var_d8 = data_143ce0540
var_c0 = 0
int32_t var_b8_2 = 0
int64_t var_b0_2 = 0
__builtin_memset(&var_a0, 0, 0x2c)
int32_t var_74_2 = 0x80
int32_t var_70_2 = 0xffffffff
int32_t var_6c_2 = 0
int64_t var_60_2 = 0
int32_t var_58_2 = 0
sub_140b58260(&var_108, u"Grid", 1)
var_100 = var_108
int64_t var_f8_8 = *(arg1 + 0x10)
int32_t var_f0_2 = 0xffff0001
int16_t var_ec_2 = 0xffff
int64_t var_e8_8 = 0
int64_t var_e0_8 = 0
sub_1405c4ec0(&var_d0)
int64_t* rsi_1 = var_d0
sub_140745220(rsi_1, &var_100)

if (var_e8_8 != 0)
    sub_140a74f90(var_e8_8)

sub_140b58260(&var_108, u"Linear", 1)
int64_t rdi_5 = sx.q(var_c8_2)
var_100 = var_108
int64_t var_f8_9 = data_14396f0a8
var_f0_2.w = data_14396f0b0
int32_t rax_57 = (rdi_5 + 1).d
var_f0_2 = 0xffffffff
int64_t var_e8_9 = 0
int64_t var_e0_9 = 0
var_c8_2 = rax_57

if (rax_57 s> 0)
    sub_1405c4ec0(&var_d0)
    rsi_1 = var_d0

sub_140745220(&rsi_1[rdi_5 * 5], &var_100)

if (var_e8_9 != 0)
    sub_140a74f90(var_e8_9)

sub_140b58260(&var_108, u"NeighborIndex", 1)
int64_t rdi_6 = sx.q(var_b8_2)
var_100 = var_108
int64_t var_f8_10 = data_14396f0a8
var_f0_2.w = data_14396f0b0
int32_t rax_61 = (rdi_6 + 1).d
var_f0_2 = 0xffffffff
int64_t var_e8_10 = 0
int64_t var_e0_10 = 0
var_b8_2 = rax_61

if (rax_61 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_6 * 0x28, &var_100)

if (var_e8_10 != 0)
    sub_140a74f90(var_e8_10)

int64_t rdi_7 = sx.q(arg2[1].d)
int32_t rax_66 = (rdi_7 + 1).d
arg2[1].d = rax_66

if (rax_66 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_7 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
sub_140745ac0(&var_d0)
var_d0 = nullptr
int64_t var_c8_3 = 1
var_d8 = data_143ce0548
var_c0 = 0
int32_t var_b8_3 = 0
int64_t var_b0_3 = 0
__builtin_memset(&var_a0, 0, 0x2c)
int32_t var_74_3 = 0x80
int32_t var_70_3 = 0xffffffff
int32_t var_6c_3 = 0
int64_t var_60_3 = 0
int32_t var_58_3 = 0
sub_140b58260(&var_108, u"Grid", 1)
var_100 = var_108
int64_t var_f8_11 = *(arg1 + 0x10)
int32_t var_f0_3 = 0xffff0001
int16_t var_ec_3 = 0xffff
int64_t var_e8_11 = 0
int64_t var_e0_11 = 0
sub_1405c4ec0(&var_d0)
int64_t* rsi_2 = var_d0
sub_140745220(rsi_2, &var_100)

if (var_e8_11 != 0)
    sub_140a74f90(var_e8_11)

sub_140b58260(&var_108, u"Linear", 1)
int64_t r14_2 = sx.q(var_c8_3.d)
int32_t r15_2 = var_c8_3:4.d
var_100 = var_108
int32_t rdi_8 = (r14_2 + 1).d
int64_t var_f8_12 = data_14396f0a8
var_f0_3.w = data_14396f0b0
var_f0_3 = 0xffffffff
int64_t var_e8_12 = 0
int64_t var_e0_12 = 0
var_c8_3.d = rdi_8

if (rdi_8 s> r15_2)
    sub_1405c4ec0(&var_d0)
    r15_2 = var_c8_3:4.d
    rdi_8 = var_c8_3.d
    rsi_2 = var_d0

sub_140745220(&rsi_2[r14_2 * 5], &var_100)

if (var_e8_12 != 0)
    sub_140a74f90(var_e8_12)

sub_140b58260(&var_108, u"NeighborIndex", 1)
var_100 = var_108
int64_t var_f8_13 = data_14396f0a8
var_f0_3.w = data_14396f0b0
var_f0_3 = 0xffffffff
int64_t var_e8_13 = 0
int64_t var_e0_13 = 0
var_c8_3.d = rdi_8 + 1

if (rdi_8 + 1 s> r15_2)
    sub_1405c4ec0(&var_d0)
    rsi_2 = var_d0

sub_140745220(&rsi_2[sx.q(rdi_8) * 5], &var_100)

if (var_e8_13 != 0)
    sub_140a74f90(var_e8_13)

sub_140b58260(&var_108, u"IGNORE", 1)
int64_t rdi_9 = sx.q(var_b8_3)
var_100 = var_108
int64_t var_f8_14 = data_14396f0a8
var_f0_3.w = data_14396f0b0
int32_t rax_84 = (rdi_9 + 1).d
var_f0_3 = 0xffffffff
int64_t var_e8_14 = 0
int64_t var_e0_14 = 0
var_b8_3 = rax_84

if (rax_84 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_9 * 0x28, &var_100)

if (var_e8_14 != 0)
    sub_140a74f90(var_e8_14)

int64_t rdi_10 = sx.q(arg2[1].d)
int32_t var_a8
int32_t rax_88 = (((((((((((((((var_a8 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 6) & 0xffffffd8) | 0x18) & 0xfffffffe) | 6) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 0x26
int32_t rax_89 = (rdi_10 + 1).d
arg2[1].d = rax_89

if (rax_89 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_10 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
sub_140745ac0(&var_d0)
var_d0 = nullptr
int32_t var_c8_4 = 1
var_d8 = data_143ce0550
var_c0 = 0
int32_t var_b8_4 = 0
int64_t var_b0_4 = 0
__builtin_memset(&var_a0, 0, 0x2c)
int32_t var_74_4 = 0x80
int32_t var_70_4 = 0xffffffff
int32_t var_6c_4 = 0
int64_t var_60_4 = 0
int32_t var_58_4 = 0
sub_140b58260(&var_108, u"Grid", 1)
var_100 = var_108
int64_t var_f8_15 = *(arg1 + 0x10)
int32_t var_f0_4 = 0xffff0001
int16_t var_ec_4 = 0xffff
int64_t var_e8_15 = 0
int64_t var_e0_15 = 0
sub_1405c4ec0(&var_d0)
int64_t* rsi_3 = var_d0
sub_140745220(rsi_3, &var_100)

if (var_e8_15 != 0)
    sub_140a74f90(var_e8_15)

sub_140b58260(&var_108, u"Linear", 1)
int64_t rdi_11 = sx.q(var_c8_4)
var_100 = var_108
int64_t var_f8_16 = data_14396f0a8
var_f0_4.w = data_14396f0b0
int32_t rax_99 = (rdi_11 + 1).d
var_f0_4 = 0xffffffff
int64_t var_e8_16 = 0
int64_t var_e0_16 = 0
var_c8_4 = rax_99

if (rax_99 s> 0)
    sub_1405c4ec0(&var_d0)
    rsi_3 = var_d0

sub_140745220(&rsi_3[rdi_11 * 5], &var_100)

if (var_e8_16 != 0)
    sub_140a74f90(var_e8_16)

sub_140b58260(&var_108, u"NeighborCount", 1)
int64_t rdi_12 = sx.q(var_b8_4)
var_100 = var_108
int64_t var_f8_17 = data_14396f0a8
var_f0_4.w = data_14396f0b0
int32_t rax_103 = (rdi_12 + 1).d
var_f0_4 = 0xffffffff
int64_t var_e8_17 = 0
int64_t var_e0_17 = 0
var_b8_4 = rax_103

if (rax_103 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_12 * 0x28, &var_100)

if (var_e8_17 != 0)
    sub_140a74f90(var_e8_17)

int64_t rdi_13 = sx.q(arg2[1].d)
int32_t rax_108 = (rdi_13 + 1).d
arg2[1].d = rax_108

if (rax_108 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_13 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
sub_140745ac0(&var_d0)
var_d0 = nullptr
int64_t var_c8_5 = 1
var_d8 = data_143ce0558
var_c0 = 0
int32_t var_b8_5 = 0
int64_t var_b0_5 = 0
__builtin_memset(&var_a0, 0, 0x2c)
int32_t var_74_5 = 0x80
int32_t var_70_5 = 0xffffffff
int32_t var_6c_5 = 0
int64_t var_60_5 = 0
int32_t var_58_5 = 0
sub_140b58260(&var_108, u"Grid", 1)
var_100 = var_108
int64_t var_f8_18 = *(arg1 + 0x10)
int32_t var_f0_5 = 0xffff0001
int16_t var_ec_5 = 0xffff
int64_t var_e8_18 = 0
int64_t var_e0_18 = 0
sub_1405c4ec0(&var_d0)
int64_t* rsi_4 = var_d0
sub_140745220(rsi_4, &var_100)

if (var_e8_18 != 0)
    sub_140a74f90(var_e8_18)

sub_140b58260(&var_108, u"Linear", 1)
int64_t r14_3 = sx.q(var_c8_5.d)
int32_t r15_3 = var_c8_5:4.d
var_100 = var_108
int32_t rdi_14 = (r14_3 + 1).d
int64_t var_f8_19 = data_14396f0a8
var_f0_5.w = data_14396f0b0
var_f0_5 = 0xffffffff
int64_t var_e8_19 = 0
int64_t var_e0_19 = 0
var_c8_5.d = rdi_14

if (rdi_14 s> r15_3)
    sub_1405c4ec0(&var_d0)
    r15_3 = var_c8_5:4.d
    rdi_14 = var_c8_5.d
    rsi_4 = var_d0

sub_140745220(&rsi_4[r14_3 * 5], &var_100)

if (var_e8_19 != 0)
    sub_140a74f90(var_e8_19)

sub_140b58260(&var_108, u"Increment", 1)
var_100 = var_108
int64_t var_f8_20 = data_14396f0a8
var_f0_5.w = data_14396f0b0
var_f0_5 = 0xffffffff
int64_t var_e8_20 = 0
int64_t var_e0_20 = 0
var_c8_5.d = rdi_14 + 1

if (rdi_14 + 1 s> r15_3)
    sub_1405c4ec0(&var_d0)
    rsi_4 = var_d0

sub_140745220(&rsi_4[sx.q(rdi_14) * 5], &var_100)

if (var_e8_20 != 0)
    sub_140a74f90(var_e8_20)

sub_140b58260(&var_108, u"PrevNeighborCount", 1)
int64_t rdi_15 = sx.q(var_b8_5)
var_100 = var_108
int64_t var_f8_21 = data_14396f0a8
var_f0_5.w = data_14396f0b0
int32_t rax_126 = (rdi_15 + 1).d
var_f0_5 = 0xffffffff
int64_t var_e8_21 = 0
int64_t var_e0_21 = 0
var_b8_5 = rax_126

if (rax_126 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_15 * 0x28, &var_100)

if (var_e8_21 != 0)
    sub_140a74f90(var_e8_21)

int64_t rdi_16 = sx.q(arg2[1].d)
int32_t var_a8_12 = (((((((rax_88 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 0x26
int32_t rax_131 = (rdi_16 + 1).d
arg2[1].d = rax_131

if (rax_131 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_16 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
int64_t result = sub_140745ac0(&var_d0)
__security_check_cookie(rax_1 ^ &var_128)
return result

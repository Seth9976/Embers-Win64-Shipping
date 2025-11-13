// 函数: sub_14079e880
// 地址: 0x14079e880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* var_c0 = nullptr
int64_t var_b8 = 1
int64_t var_c8 = data_143ce0740
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
sub_140b58260(&var_f8, u"Grid", 1)
int64_t var_f0 = var_f8
int64_t var_e8 = *(arg1 + 0x10)
int32_t var_e0 = 0xffff0001
int16_t var_dc = 0xffff
int64_t var_d8 = 0
int64_t var_d0 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_f0)

if (var_d8 != 0)
    sub_140a74f90(var_d8)

sub_140b58260(&var_f8, u"WorldBBoxSize", 1)
int64_t rdi = sx.q(var_a8)
var_f0 = var_f8
int64_t var_e8_1 = data_14396f0c8
var_e0.w = data_14396f0d0
int32_t rax_11 = (rdi + 1).d
var_e0 = 0xffffffff
int64_t var_d8_1 = 0
int64_t var_d0_1 = 0
var_a8 = rax_11

if (rax_11 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi * 0x28, &var_f0)

if (var_d8_1 != 0)
    sub_140a74f90(var_d8_1)

int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_16 = (rdi_1 + 1).d
arg2[1].d = rax_16

if (rax_16 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_1 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_1 = 1
var_c8 = data_143ce0720
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_1 = 0x80
int32_t var_60_1 = 0xffffffff
int32_t var_5c_1 = 0
int64_t var_50_1 = 0
int32_t var_48_1 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_2 = *(arg1 + 0x10)
int32_t var_e0_1 = 0xffff0001
int16_t var_dc_1 = 0xffff
int64_t var_d8_2 = 0
int64_t var_d0_2 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_f0)

if (var_d8_2 != 0)
    sub_140a74f90(var_d8_2)

sub_140b58260(&var_f8, u"NumVoxelsX", 1)
int64_t var_a8_1
int64_t rsi = sx.q(var_a8_1.d)
int32_t r15 = var_a8_1:4.d
var_f0 = var_f8
int32_t rdi_2 = (rsi + 1).d
int64_t var_e8_3 = data_14396f0a8
var_e0_1.w = data_14396f0b0
var_e0_1 = 0xffffffff
int64_t var_d8_3 = 0
int64_t var_d0_3 = 0
var_a8_1.d = rdi_2

if (rdi_2 s> r15)
    sub_1405c4ec0(&var_b0)
    r15 = var_a8_1:4.d
    rdi_2 = var_a8_1.d

int64_t r14 = var_b0
sub_140745220(r14 + rsi * 0x28, &var_f0)

if (var_d8_3 != 0)
    sub_140a74f90(var_d8_3)

sub_140b58260(&var_f8, u"NumVoxelsY", 1)
int32_t rsi_1 = rdi_2 + 1
var_f0 = var_f8
int64_t var_e8_4 = data_14396f0a8
var_e0_1.w = data_14396f0b0
var_e0_1 = 0xffffffff
int64_t var_d8_4 = 0
int64_t var_d0_4 = 0
var_a8_1.d = rsi_1

if (rsi_1 s> r15)
    sub_1405c4ec0(&var_b0)
    r15 = var_a8_1:4.d
    rsi_1 = var_a8_1.d
    r14 = var_b0

sub_140745220(r14 + sx.q(rdi_2) * 0x28, &var_f0)

if (var_d8_4 != 0)
    sub_140a74f90(var_d8_4)

sub_140b58260(&var_f8, u"NumVoxelsZ", 1)
var_f0 = var_f8
int64_t var_e8_5 = data_14396f0a8
var_e0_1.w = data_14396f0b0
var_e0_1 = 0xffffffff
int64_t var_d8_5 = 0
int64_t var_d0_5 = 0
var_a8_1.d = rsi_1 + 1

if (rsi_1 + 1 s> r15)
    sub_1405c4ec0(&var_b0)
    r14 = var_b0

sub_140745220(r14 + sx.q(rsi_1) * 0x28, &var_f0)

if (var_d8_5 != 0)
    sub_140a74f90(var_d8_5)

int64_t rdi_3 = sx.q(arg2[1].d)
int32_t rax_38 = (rdi_3 + 1).d
arg2[1].d = rax_38

if (rax_38 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_3 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_2 = 1
var_c8 = data_143ce0748
var_b0 = 0
int32_t var_a8_2 = 0
int64_t var_a0_1 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_2 = 0x80
int32_t var_60_2 = 0xffffffff
int32_t var_5c_2 = 0
int64_t var_50_2 = 0
int32_t var_48_2 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_6 = *(arg1 + 0x10)
int32_t var_e0_2 = 0xffff0001
int16_t var_dc_2 = 0xffff
int64_t var_d8_6 = 0
int64_t var_d0_6 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_2 = var_c0
sub_140745220(rsi_2, &var_f0)

if (var_d8_6 != 0)
    sub_140a74f90(var_d8_6)

sub_140b58260(&var_f8, u"Simulation", 1)
int64_t r14_1 = sx.q(var_b8_2.d)
int32_t r15_1 = var_b8_2:4.d
var_f0 = var_f8
int32_t rdi_4 = (r14_1 + 1).d
int64_t var_e8_7 = data_14396f0c8
var_e0_2.w = data_14396f0d0
var_e0_2 = 0xffffffff
int64_t var_d8_7 = 0
int64_t var_d0_7 = 0
var_b8_2.d = rdi_4

if (rdi_4 s> r15_1)
    sub_1405c4ec0(&var_c0)
    r15_1 = var_b8_2:4.d
    rdi_4 = var_b8_2.d
    rsi_2 = var_c0

sub_140745220(&rsi_2[r14_1 * 5], &var_f0)

if (var_d8_7 != 0)
    sub_140a74f90(var_d8_7)

sub_140b58260(&var_f8, u"SimulationToUnitTransform", 1)
var_f0 = var_f8
int64_t var_e8_8 = data_14396f108
var_e0_2.w = data_14396f110
var_e0_2 = 0xffffffff
int64_t var_d8_8 = 0
int64_t var_d0_8 = 0
var_b8_2.d = rdi_4 + 1

if (rdi_4 + 1 s> r15_1)
    sub_1405c4ec0(&var_c0)
    rsi_2 = var_c0

sub_140745220(&rsi_2[sx.q(rdi_4) * 5], &var_f0)

if (var_d8_8 != 0)
    sub_140a74f90(var_d8_8)

sub_140b58260(&var_f8, u"Unit", 1)
int64_t rdi_5 = sx.q(var_a8_2)
var_f0 = var_f8
int64_t var_e8_9 = data_14396f0c8
var_e0_2.w = data_14396f0d0
int32_t rax_56 = (rdi_5 + 1).d
var_e0_2 = 0xffffffff
int64_t var_d8_9 = 0
int64_t var_d0_9 = 0
var_a8_2 = rax_56

if (rax_56 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_5 * 0x28, &var_f0)

if (var_d8_9 != 0)
    sub_140a74f90(var_d8_9)

int64_t rdi_6 = sx.q(arg2[1].d)
int32_t rax_61 = (rdi_6 + 1).d
arg2[1].d = rax_61

if (rax_61 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_6 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_3 = 1
var_c8 = data_143ce0758
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_3 = 0x80
int32_t var_60_3 = 0xffffffff
int32_t var_5c_3 = 0
int64_t var_50_3 = 0
int32_t var_48_3 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_10 = *(arg1 + 0x10)
int32_t var_e0_3 = 0xffff0001
int16_t var_dc_3 = 0xffff
int64_t var_d8_10 = 0
int64_t var_d0_10 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_3 = var_c0
sub_140745220(rsi_3, &var_f0)

if (var_d8_10 != 0)
    sub_140a74f90(var_d8_10)

sub_140b58260(&var_f8, u"Unit", 1)
int64_t rdi_7 = sx.q(var_b8_3)
var_f0 = var_f8
int64_t var_e8_11 = data_14396f0c8
var_e0_3.w = data_14396f0d0
int32_t rax_71 = (rdi_7 + 1).d
var_e0_3 = 0xffffffff
int64_t var_d8_11 = 0
int64_t var_d0_11 = 0
var_b8_3 = rax_71

if (rax_71 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_3 = var_c0

sub_140745220(&rsi_3[rdi_7 * 5], &var_f0)

if (var_d8_11 != 0)
    sub_140a74f90(var_d8_11)

sub_140b58260(&var_f8, u"IndexX", 1)
int64_t var_a8_3
int64_t rsi_4 = sx.q(var_a8_3.d)
int32_t r15_2 = var_a8_3:4.d
var_f0 = var_f8
int32_t rdi_8 = (rsi_4 + 1).d
int64_t var_e8_12 = data_14396f0a8
var_e0_3.w = data_14396f0b0
var_e0_3 = 0xffffffff
int64_t var_d8_12 = 0
int64_t var_d0_12 = 0
var_a8_3.d = rdi_8

if (rdi_8 s> r15_2)
    sub_1405c4ec0(&var_b0)
    r15_2 = var_a8_3:4.d
    rdi_8 = var_a8_3.d

int64_t r14_2 = var_b0
sub_140745220(r14_2 + rsi_4 * 0x28, &var_f0)

if (var_d8_12 != 0)
    sub_140a74f90(var_d8_12)

sub_140b58260(&var_f8, u"IndexY", 1)
int32_t rsi_5 = rdi_8 + 1
var_f0 = var_f8
int64_t var_e8_13 = data_14396f0a8
var_e0_3.w = data_14396f0b0
var_e0_3 = 0xffffffff
int64_t var_d8_13 = 0
int64_t var_d0_13 = 0
var_a8_3.d = rsi_5

if (rsi_5 s> r15_2)
    sub_1405c4ec0(&var_b0)
    r15_2 = var_a8_3:4.d
    rsi_5 = var_a8_3.d
    r14_2 = var_b0

sub_140745220(r14_2 + sx.q(rdi_8) * 0x28, &var_f0)

if (var_d8_13 != 0)
    sub_140a74f90(var_d8_13)

sub_140b58260(&var_f8, u"IndexZ", 1)
var_f0 = var_f8
int64_t var_e8_14 = data_14396f0a8
var_e0_3.w = data_14396f0b0
var_e0_3 = 0xffffffff
int64_t var_d8_14 = 0
int64_t var_d0_14 = 0
var_a8_3.d = rsi_5 + 1

if (rsi_5 + 1 s> r15_2)
    sub_1405c4ec0(&var_b0)
    r14_2 = var_b0

sub_140745220(r14_2 + sx.q(rsi_5) * 0x28, &var_f0)

if (var_d8_14 != 0)
    sub_140a74f90(var_d8_14)

int64_t rdi_9 = sx.q(arg2[1].d)
int32_t var_98
int32_t rax_86 = (((((((((((((((var_98 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_87 = (rdi_9 + 1).d
arg2[1].d = rax_87

if (rax_87 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_9 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_4 = 1
var_c8 = data_143ce0778
var_b0 = 0
int32_t var_a8_4 = 0
int64_t var_a0_2 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_4 = 0x80
int32_t var_60_4 = 0xffffffff
int32_t var_5c_4 = 0
int64_t var_50_4 = 0
int32_t var_48_4 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_15 = *(arg1 + 0x10)
int32_t var_e0_4 = 0xffff0001
int16_t var_dc_4 = 0xffff
int64_t var_d8_15 = 0
int64_t var_d0_15 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_6 = var_c0
sub_140745220(rsi_6, &var_f0)

if (var_d8_15 != 0)
    sub_140a74f90(var_d8_15)

sub_140b58260(&var_f8, u"IndexX", 1)
int64_t rdi_10 = sx.q(var_b8_4.d)
int32_t r15_3 = var_b8_4:4.d
var_f0 = var_f8
int32_t r14_3 = (rdi_10 + 1).d
int64_t var_e8_16 = data_14396f0a8
var_e0_4.w = data_14396f0b0
var_e0_4 = 0xffffffff
int64_t var_d8_16 = 0
int64_t var_d0_16 = 0
var_b8_4.d = r14_3

if (r14_3 s> r15_3)
    sub_1405c4ec0(&var_c0)
    r15_3 = var_b8_4:4.d
    r14_3 = var_b8_4.d
    rsi_6 = var_c0

sub_140745220(&rsi_6[rdi_10 * 5], &var_f0)

if (var_d8_16 != 0)
    sub_140a74f90(var_d8_16)

sub_140b58260(&var_f8, u"IndexY", 1)
int32_t rdi_11 = r14_3 + 1
var_f0 = var_f8
int64_t var_e8_17 = data_14396f0a8
var_e0_4.w = data_14396f0b0
var_e0_4 = 0xffffffff
int64_t var_d8_17 = 0
int64_t var_d0_17 = 0
var_b8_4.d = rdi_11

if (rdi_11 s> r15_3)
    sub_1405c4ec0(&var_c0)
    r15_3 = var_b8_4:4.d
    rdi_11 = var_b8_4.d
    rsi_6 = var_c0

sub_140745220(&rsi_6[sx.q(r14_3) * 5], &var_f0)

if (var_d8_17 != 0)
    sub_140a74f90(var_d8_17)

sub_140b58260(&var_f8, u"IndexZ", 1)
var_f0 = var_f8
int64_t var_e8_18 = data_14396f0a8
var_e0_4.w = data_14396f0b0
var_e0_4 = 0xffffffff
int64_t var_d8_18 = 0
int64_t var_d0_18 = 0
var_b8_4.d = rdi_11 + 1

if (rdi_11 + 1 s> r15_3)
    sub_1405c4ec0(&var_c0)
    rsi_6 = var_c0

sub_140745220(&rsi_6[sx.q(rdi_11) * 5], &var_f0)

if (var_d8_18 != 0)
    sub_140a74f90(var_d8_18)

sub_140b58260(&var_f8, u"Linear", 1)
int64_t rdi_12 = sx.q(var_a8_4)
var_f0 = var_f8
int64_t var_e8_19 = data_14396f0a8
var_e0_4.w = data_14396f0b0
int32_t rax_109 = (rdi_12 + 1).d
var_e0_4 = 0xffffffff
int64_t var_d8_19 = 0
int64_t var_d0_19 = 0
var_a8_4 = rax_109

if (rax_109 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_12 * 0x28, &var_f0)

if (var_d8_19 != 0)
    sub_140a74f90(var_d8_19)

int64_t rdi_13 = sx.q(arg2[1].d)
int32_t rax_114 = (rdi_13 + 1).d
arg2[1].d = rax_114

if (rax_114 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_13 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_5 = 1
var_c8 = data_143ce0720
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_5 = 0x80
int32_t var_60_5 = 0xffffffff
int32_t var_5c_5 = 0
int64_t var_50_5 = 0
int32_t var_48_5 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_20 = *(arg1 + 0x10)
int32_t var_e0_5 = 0xffff0001
int16_t var_dc_5 = 0xffff
int64_t var_d8_20 = 0
int64_t var_d0_20 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_f0)

if (var_d8_20 != 0)
    sub_140a74f90(var_d8_20)

sub_140b58260(&var_f8, u"NumVoxelsX", 1)
int64_t var_a8_5
int64_t rdi_14 = sx.q(var_a8_5.d)
int32_t r15_4 = var_a8_5:4.d
var_f0 = var_f8
int32_t rsi_7 = (rdi_14 + 1).d
int64_t var_e8_21 = data_14396f0a8
var_e0_5.w = data_14396f0b0
var_e0_5 = 0xffffffff
int64_t var_d8_21 = 0
int64_t var_d0_21 = 0
var_a8_5.d = rsi_7

if (rsi_7 s> r15_4)
    sub_1405c4ec0(&var_b0)
    r15_4 = var_a8_5:4.d
    rsi_7 = var_a8_5.d

int64_t r14_4 = var_b0
sub_140745220(r14_4 + rdi_14 * 0x28, &var_f0)

if (var_d8_21 != 0)
    sub_140a74f90(var_d8_21)

sub_140b58260(&var_f8, u"NumVoxelsY", 1)
int32_t rdi_15 = rsi_7 + 1
var_f0 = var_f8
int64_t var_e8_22 = data_14396f0a8
var_e0_5.w = data_14396f0b0
var_e0_5 = 0xffffffff
int64_t var_d8_22 = 0
int64_t var_d0_22 = 0
var_a8_5.d = rdi_15

if (rdi_15 s> r15_4)
    sub_1405c4ec0(&var_b0)
    r15_4 = var_a8_5:4.d
    rdi_15 = var_a8_5.d
    r14_4 = var_b0

sub_140745220(r14_4 + sx.q(rsi_7) * 0x28, &var_f0)

if (var_d8_22 != 0)
    sub_140a74f90(var_d8_22)

sub_140b58260(&var_f8, u"NumVoxelsZ", 1)
var_f0 = var_f8
int64_t var_e8_23 = data_14396f0a8
var_e0_5.w = data_14396f0b0
var_e0_5 = 0xffffffff
int64_t var_d8_23 = 0
int64_t var_d0_23 = 0
var_a8_5.d = rdi_15 + 1

if (rdi_15 + 1 s> r15_4)
    sub_1405c4ec0(&var_b0)
    r14_4 = var_b0

sub_140745220(r14_4 + sx.q(rdi_15) * 0x28, &var_f0)

if (var_d8_23 != 0)
    sub_140a74f90(var_d8_23)

int64_t rdi_16 = sx.q(arg2[1].d)
int32_t rax_136 = (rdi_16 + 1).d
arg2[1].d = rax_136

if (rax_136 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_16 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_6 = 1
var_c8 = data_143ce0728
var_b0 = 0
int32_t var_a8_6 = 0
int64_t var_a0_3 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_6 = 0x80
int32_t var_60_6 = 0xffffffff
int32_t var_5c_6 = 0
int64_t var_50_6 = 0
int32_t var_48_6 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_24 = *(arg1 + 0x10)
int32_t var_e0_6 = 0xffff0001
int16_t var_dc_6 = 0xffff
int64_t var_d8_24 = 0
int64_t var_d0_24 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_f0)

if (var_d8_24 != 0)
    sub_140a74f90(var_d8_24)

sub_140b58260(&var_f8, u"VoxelSize", 1)
int64_t rdi_17 = sx.q(var_a8_6)
var_f0 = var_f8
int64_t var_e8_25 = data_14396f0c8
var_e0_6.w = data_14396f0d0
int32_t rax_146 = (rdi_17 + 1).d
var_e0_6 = 0xffffffff
int64_t var_d8_25 = 0
int64_t var_d0_25 = 0
var_a8_6 = rax_146

if (rax_146 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_17 * 0x28, &var_f0)

if (var_d8_25 != 0)
    sub_140a74f90(var_d8_25)

int64_t rdi_18 = sx.q(arg2[1].d)
int32_t var_98_14 = (((((((((((rax_86 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2
int32_t rax_151 = (rdi_18 + 1).d
arg2[1].d = rax_151

if (rax_151 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_18 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_118)
return result

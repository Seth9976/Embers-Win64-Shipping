// 函数: sub_14079c030
// 地址: 0x14079c030
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
int64_t var_e8_1 = data_14396f0b8
var_e0.w = data_14396f0c0
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
var_c8 = data_143ce0730
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

sub_140b58260(&var_f8, u"NumCellsX", 1)
int64_t var_a8_1
int64_t rsi = sx.q(var_a8_1.d)
int32_t r14 = var_a8_1:4.d
var_f0 = var_f8
int32_t rdi_2 = (rsi + 1).d
int64_t var_e8_3 = data_14396f0a8
var_e0_1.w = data_14396f0b0
var_e0_1 = 0xffffffff
int64_t var_d8_3 = 0
int64_t var_d0_3 = 0
var_a8_1.d = rdi_2

if (rdi_2 s> r14)
    sub_1405c4ec0(&var_b0)
    r14 = var_a8_1:4.d
    rdi_2 = var_a8_1.d

int64_t rsi_1 = var_b0
sub_140745220(rsi_1 + rsi * 0x28, &var_f0)

if (var_d8_3 != 0)
    sub_140a74f90(var_d8_3)

sub_140b58260(&var_f8, u"NumCellsY", 1)
var_f0 = var_f8
int64_t var_e8_4 = data_14396f0a8
var_e0_1.w = data_14396f0b0
var_e0_1 = 0xffffffff
int64_t var_d8_4 = 0
int64_t var_d0_4 = 0
var_a8_1.d = rdi_2 + 1

if (rdi_2 + 1 s> r14)
    sub_1405c4ec0(&var_b0)
    rsi_1 = var_b0

sub_140745220(rsi_1 + sx.q(rdi_2) * 0x28, &var_f0)

if (var_d8_4 != 0)
    sub_140a74f90(var_d8_4)

int64_t rdi_3 = sx.q(arg2[1].d)
int32_t rax_34 = (rdi_3 + 1).d
arg2[1].d = rax_34

if (rax_34 s> *(arg2 + 0xc))
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
int64_t var_e8_5 = *(arg1 + 0x10)
int32_t var_e0_2 = 0xffff0001
int16_t var_dc_2 = 0xffff
int64_t var_d8_5 = 0
int64_t var_d0_5 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_2 = var_c0
sub_140745220(rsi_2, &var_f0)

if (var_d8_5 != 0)
    sub_140a74f90(var_d8_5)

sub_140b58260(&var_f8, u"Simulation", 1)
int64_t r14_1 = sx.q(var_b8_2.d)
int32_t r15 = var_b8_2:4.d
var_f0 = var_f8
int32_t rdi_4 = (r14_1 + 1).d
int64_t var_e8_6 = data_14396f0c8
var_e0_2.w = data_14396f0d0
var_e0_2 = 0xffffffff
int64_t var_d8_6 = 0
int64_t var_d0_6 = 0
var_b8_2.d = rdi_4

if (rdi_4 s> r15)
    sub_1405c4ec0(&var_c0)
    r15 = var_b8_2:4.d
    rdi_4 = var_b8_2.d
    rsi_2 = var_c0

sub_140745220(&rsi_2[r14_1 * 5], &var_f0)

if (var_d8_6 != 0)
    sub_140a74f90(var_d8_6)

sub_140b58260(&var_f8, u"SimulationToUnitTransform", 1)
var_f0 = var_f8
int64_t var_e8_7 = data_14396f108
var_e0_2.w = data_14396f110
var_e0_2 = 0xffffffff
int64_t var_d8_7 = 0
int64_t var_d0_7 = 0
var_b8_2.d = rdi_4 + 1

if (rdi_4 + 1 s> r15)
    sub_1405c4ec0(&var_c0)
    rsi_2 = var_c0

sub_140745220(&rsi_2[sx.q(rdi_4) * 5], &var_f0)

if (var_d8_7 != 0)
    sub_140a74f90(var_d8_7)

sub_140b58260(&var_f8, u"Unit", 1)
int64_t rdi_5 = sx.q(var_a8_2)
var_f0 = var_f8
int64_t var_e8_8 = data_14396f0c8
var_e0_2.w = data_14396f0d0
int32_t rax_52 = (rdi_5 + 1).d
var_e0_2 = 0xffffffff
int64_t var_d8_8 = 0
int64_t var_d0_8 = 0
var_a8_2 = rax_52

if (rax_52 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_5 * 0x28, &var_f0)

if (var_d8_8 != 0)
    sub_140a74f90(var_d8_8)

int64_t rdi_6 = sx.q(arg2[1].d)
int32_t rax_57 = (rdi_6 + 1).d
arg2[1].d = rax_57

if (rax_57 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_6 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_3 = 1
var_c8 = data_143ce0750
var_b0 = 0
int32_t var_a8_3 = 0
int64_t var_a0_2 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_3 = 0x80
int32_t var_60_3 = 0xffffffff
int32_t var_5c_3 = 0
int64_t var_50_3 = 0
int32_t var_48_3 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_9 = *(arg1 + 0x10)
int32_t var_e0_3 = 0xffff0001
int16_t var_dc_3 = 0xffff
int64_t var_d8_9 = 0
int64_t var_d0_9 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_3 = var_c0
sub_140745220(rsi_3, &var_f0)

if (var_d8_9 != 0)
    sub_140a74f90(var_d8_9)

sub_140b58260(&var_f8, u"Unit", 1)
int64_t r14_2 = sx.q(var_b8_3.d)
int32_t r15_1 = var_b8_3:4.d
var_f0 = var_f8
int32_t rdi_7 = (r14_2 + 1).d
int64_t var_e8_10 = data_14396f0c8
var_e0_3.w = data_14396f0d0
var_e0_3 = 0xffffffff
int64_t var_d8_10 = 0
int64_t var_d0_10 = 0
var_b8_3.d = rdi_7

if (rdi_7 s> r15_1)
    sub_1405c4ec0(&var_c0)
    r15_1 = var_b8_3:4.d
    rdi_7 = var_b8_3.d
    rsi_3 = var_c0

sub_140745220(&rsi_3[r14_2 * 5], &var_f0)

if (var_d8_10 != 0)
    sub_140a74f90(var_d8_10)

sub_140b58260(&var_f8, u"UnitToSimulationTransform", 1)
var_f0 = var_f8
int64_t var_e8_11 = data_14396f108
var_e0_3.w = data_14396f110
var_e0_3 = 0xffffffff
int64_t var_d8_11 = 0
int64_t var_d0_11 = 0
var_b8_3.d = rdi_7 + 1

if (rdi_7 + 1 s> r15_1)
    sub_1405c4ec0(&var_c0)
    rsi_3 = var_c0

sub_140745220(&rsi_3[sx.q(rdi_7) * 5], &var_f0)

if (var_d8_11 != 0)
    sub_140a74f90(var_d8_11)

sub_140b58260(&var_f8, u"Simulation", 1)
int64_t rdi_8 = sx.q(var_a8_3)
var_f0 = var_f8
int64_t var_e8_12 = data_14396f0c8
var_e0_3.w = data_14396f0d0
int32_t rax_75 = (rdi_8 + 1).d
var_e0_3 = 0xffffffff
int64_t var_d8_12 = 0
int64_t var_d0_12 = 0
var_a8_3 = rax_75

if (rax_75 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_8 * 0x28, &var_f0)

if (var_d8_12 != 0)
    sub_140a74f90(var_d8_12)

int64_t rdi_9 = sx.q(arg2[1].d)
int32_t var_98
int32_t rax_79 = (((((((((((((((var_98 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_80 = (rdi_9 + 1).d
arg2[1].d = rax_80

if (rax_80 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_9 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_4 = 1
var_c8 = data_143ce0758
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_4 = 0x80
int32_t var_60_4 = 0xffffffff
int32_t var_5c_4 = 0
int64_t var_50_4 = 0
int32_t var_48_4 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_13 = *(arg1 + 0x10)
int32_t var_e0_4 = 0xffff0001
int16_t var_dc_4 = 0xffff
int64_t var_d8_13 = 0
int64_t var_d0_13 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_4 = var_c0
sub_140745220(rsi_4, &var_f0)

if (var_d8_13 != 0)
    sub_140a74f90(var_d8_13)

sub_140b58260(&var_f8, u"Unit", 1)
int64_t rdi_10 = sx.q(var_b8_4)
var_f0 = var_f8
int64_t var_e8_14 = data_14396f0b8
var_e0_4.w = data_14396f0c0
int32_t rax_90 = (rdi_10 + 1).d
var_e0_4 = 0xffffffff
int64_t var_d8_14 = 0
int64_t var_d0_14 = 0
var_b8_4 = rax_90

if (rax_90 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_4 = var_c0

sub_140745220(&rsi_4[rdi_10 * 5], &var_f0)

if (var_d8_14 != 0)
    sub_140a74f90(var_d8_14)

sub_140b58260(&var_f8, u"IndexX", 1)
int64_t var_a8_4
int64_t rsi_5 = sx.q(var_a8_4.d)
int32_t r14_3 = var_a8_4:4.d
var_f0 = var_f8
int32_t rdi_11 = (rsi_5 + 1).d
int64_t var_e8_15 = data_14396f0a8
var_e0_4.w = data_14396f0b0
var_e0_4 = 0xffffffff
int64_t var_d8_15 = 0
int64_t var_d0_15 = 0
var_a8_4.d = rdi_11

if (rdi_11 s> r14_3)
    sub_1405c4ec0(&var_b0)
    r14_3 = var_a8_4:4.d
    rdi_11 = var_a8_4.d

int64_t rsi_6 = var_b0
sub_140745220(rsi_6 + rsi_5 * 0x28, &var_f0)

if (var_d8_15 != 0)
    sub_140a74f90(var_d8_15)

sub_140b58260(&var_f8, u"IndexY", 1)
var_f0 = var_f8
int64_t var_e8_16 = data_14396f0a8
var_e0_4.w = data_14396f0b0
var_e0_4 = 0xffffffff
int64_t var_d8_16 = 0
int64_t var_d0_16 = 0
var_a8_4.d = rdi_11 + 1

if (rdi_11 + 1 s> r14_3)
    sub_1405c4ec0(&var_b0)
    rsi_6 = var_b0

sub_140745220(rsi_6 + sx.q(rdi_11) * 0x28, &var_f0)

if (var_d8_16 != 0)
    sub_140a74f90(var_d8_16)

int64_t rdi_12 = sx.q(arg2[1].d)
int32_t rax_102 = (rdi_12 + 1).d
arg2[1].d = rax_102

if (rax_102 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_12 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_5 = 1
var_c8 = data_143ce0760
var_b0 = 0
int32_t var_a8_5 = 0
int64_t var_a0_3 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_5 = 0x80
int32_t var_60_5 = 0xffffffff
int32_t var_5c_5 = 0
int64_t var_50_5 = 0
int32_t var_48_5 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_17 = *(arg1 + 0x10)
int32_t var_e0_5 = 0xffff0001
int16_t var_dc_5 = 0xffff
int64_t var_d8_17 = 0
int64_t var_d0_17 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_7 = var_c0
sub_140745220(rsi_7, &var_f0)

if (var_d8_17 != 0)
    sub_140a74f90(var_d8_17)

sub_140b58260(&var_f8, u"IndexX", 1)
int64_t r14_4 = sx.q(var_b8_5.d)
int32_t r15_2 = var_b8_5:4.d
var_f0 = var_f8
int32_t rdi_13 = (r14_4 + 1).d
int64_t var_e8_18 = data_14396f088
var_e0_5.w = data_14396f090
var_e0_5 = 0xffffffff
int64_t var_d8_18 = 0
int64_t var_d0_18 = 0
var_b8_5.d = rdi_13

if (rdi_13 s> r15_2)
    sub_1405c4ec0(&var_c0)
    r15_2 = var_b8_5:4.d
    rdi_13 = var_b8_5.d
    rsi_7 = var_c0

sub_140745220(&rsi_7[r14_4 * 5], &var_f0)

if (var_d8_18 != 0)
    sub_140a74f90(var_d8_18)

sub_140b58260(&var_f8, u"IndexY", 1)
var_f0 = var_f8
int64_t var_e8_19 = data_14396f088
var_e0_5.w = data_14396f090
var_e0_5 = 0xffffffff
int64_t var_d8_19 = 0
int64_t var_d0_19 = 0
var_b8_5.d = rdi_13 + 1

if (rdi_13 + 1 s> r15_2)
    sub_1405c4ec0(&var_c0)
    rsi_7 = var_c0

sub_140745220(&rsi_7[sx.q(rdi_13) * 5], &var_f0)

if (var_d8_19 != 0)
    sub_140a74f90(var_d8_19)

sub_140b58260(&var_f8, u"Unit", 1)
int64_t rdi_14 = sx.q(var_a8_5)
var_f0 = var_f8
int64_t var_e8_20 = data_14396f0c8
var_e0_5.w = data_14396f0d0
int32_t rax_120 = (rdi_14 + 1).d
var_e0_5 = 0xffffffff
int64_t var_d8_20 = 0
int64_t var_d0_20 = 0
var_a8_5 = rax_120

if (rax_120 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_14 * 0x28, &var_f0)

if (var_d8_20 != 0)
    sub_140a74f90(var_d8_20)

int64_t rdi_15 = sx.q(arg2[1].d)
int32_t rax_125 = (rdi_15 + 1).d
arg2[1].d = rax_125

if (rax_125 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_15 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_6 = 1
var_c8 = data_143ce0768
var_b0 = 0
int32_t var_a8_6 = 0
int64_t var_a0_4 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_6 = 0x80
int32_t var_60_6 = 0xffffffff
int32_t var_5c_6 = 0
int64_t var_50_6 = 0
int32_t var_48_6 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_21 = *(arg1 + 0x10)
int32_t var_e0_6 = 0xffff0001
int16_t var_dc_6 = 0xffff
int64_t var_d8_21 = 0
int64_t var_d0_21 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_8 = var_c0
sub_140745220(rsi_8, &var_f0)

if (var_d8_21 != 0)
    sub_140a74f90(var_d8_21)

sub_140b58260(&var_f8, u"IndexX", 1)
int64_t r14_5 = sx.q(var_b8_6.d)
int32_t r15_3 = var_b8_6:4.d
var_f0 = var_f8
int32_t rdi_16 = (r14_5 + 1).d
int64_t var_e8_22 = data_14396f088
var_e0_6.w = data_14396f090
var_e0_6 = 0xffffffff
int64_t var_d8_22 = 0
int64_t var_d0_22 = 0
var_b8_6.d = rdi_16

if (rdi_16 s> r15_3)
    sub_1405c4ec0(&var_c0)
    r15_3 = var_b8_6:4.d
    rdi_16 = var_b8_6.d
    rsi_8 = var_c0

sub_140745220(&rsi_8[r14_5 * 5], &var_f0)

if (var_d8_22 != 0)
    sub_140a74f90(var_d8_22)

sub_140b58260(&var_f8, u"IndexY", 1)
var_f0 = var_f8
int64_t var_e8_23 = data_14396f088
var_e0_6.w = data_14396f090
var_e0_6 = 0xffffffff
int64_t var_d8_23 = 0
int64_t var_d0_23 = 0
var_b8_6.d = rdi_16 + 1

if (rdi_16 + 1 s> r15_3)
    sub_1405c4ec0(&var_c0)
    rsi_8 = var_c0

sub_140745220(&rsi_8[sx.q(rdi_16) * 5], &var_f0)

if (var_d8_23 != 0)
    sub_140a74f90(var_d8_23)

sub_140b58260(&var_f8, u"Unit", 1)
int64_t rdi_17 = sx.q(var_a8_6)
var_f0 = var_f8
int64_t var_e8_24 = data_14396f0c8
var_e0_6.w = data_14396f0d0
int32_t rax_143 = (rdi_17 + 1).d
var_e0_6 = 0xffffffff
int64_t var_d8_24 = 0
int64_t var_d0_24 = 0
var_a8_6 = rax_143

if (rax_143 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_17 * 0x28, &var_f0)

if (var_d8_24 != 0)
    sub_140a74f90(var_d8_24)

int64_t rdi_18 = sx.q(arg2[1].d)
int32_t rax_148 = (rdi_18 + 1).d
arg2[1].d = rax_148

if (rax_148 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_18 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_7 = 1
var_c8 = data_143ce0770
var_b0 = 0
int32_t var_a8_7 = 0
int64_t var_a0_5 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_7 = 0x80
int32_t var_60_7 = 0xffffffff
int32_t var_5c_7 = 0
int64_t var_50_7 = 0
int32_t var_48_7 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_25 = *(arg1 + 0x10)
int32_t var_e0_7 = 0xffff0001
int16_t var_dc_7 = 0xffff
int64_t var_d8_25 = 0
int64_t var_d0_25 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_9 = var_c0
sub_140745220(rsi_9, &var_f0)

if (var_d8_25 != 0)
    sub_140a74f90(var_d8_25)

sub_140b58260(&var_f8, u"IndexX", 1)
int64_t r14_6 = sx.q(var_b8_7.d)
int32_t r15_4 = var_b8_7:4.d
var_f0 = var_f8
int32_t rdi_19 = (r14_6 + 1).d
int64_t var_e8_26 = data_14396f088
var_e0_7.w = data_14396f090
var_e0_7 = 0xffffffff
int64_t var_d8_26 = 0
int64_t var_d0_26 = 0
var_b8_7.d = rdi_19

if (rdi_19 s> r15_4)
    sub_1405c4ec0(&var_c0)
    r15_4 = var_b8_7:4.d
    rdi_19 = var_b8_7.d
    rsi_9 = var_c0

sub_140745220(&rsi_9[r14_6 * 5], &var_f0)

if (var_d8_26 != 0)
    sub_140a74f90(var_d8_26)

sub_140b58260(&var_f8, u"IndexY", 1)
var_f0 = var_f8
int64_t var_e8_27 = data_14396f088
var_e0_7.w = data_14396f090
var_e0_7 = 0xffffffff
int64_t var_d8_27 = 0
int64_t var_d0_27 = 0
var_b8_7.d = rdi_19 + 1

if (rdi_19 + 1 s> r15_4)
    sub_1405c4ec0(&var_c0)
    rsi_9 = var_c0

sub_140745220(&rsi_9[sx.q(rdi_19) * 5], &var_f0)

if (var_d8_27 != 0)
    sub_140a74f90(var_d8_27)

sub_140b58260(&var_f8, u"Unit", 1)
int64_t rdi_20 = sx.q(var_a8_7)
var_f0 = var_f8
int64_t var_e8_28 = data_14396f0c8
var_e0_7.w = data_14396f0d0
int32_t rax_166 = (rdi_20 + 1).d
var_e0_7 = 0xffffffff
int64_t var_d8_28 = 0
int64_t var_d0_28 = 0
var_a8_7 = rax_166

if (rax_166 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_20 * 0x28, &var_f0)

if (var_d8_28 != 0)
    sub_140a74f90(var_d8_28)

int64_t rdi_21 = sx.q(arg2[1].d)
int32_t rax_170 = (((((((((((((((rax_79 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 2
int32_t rax_171 = (rdi_21 + 1).d
arg2[1].d = rax_171

if (rax_171 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_21 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_8 = 1
var_c8 = data_143ce0778
var_b0 = 0
int32_t var_a8_8 = 0
int64_t var_a0_6 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_8 = 0x80
int32_t var_60_8 = 0xffffffff
int32_t var_5c_8 = 0
int64_t var_50_8 = 0
int32_t var_48_8 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_29 = *(arg1 + 0x10)
int32_t var_e0_8 = 0xffff0001
int16_t var_dc_8 = 0xffff
int64_t var_d8_29 = 0
int64_t var_d0_29 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_10 = var_c0
sub_140745220(rsi_10, &var_f0)

if (var_d8_29 != 0)
    sub_140a74f90(var_d8_29)

sub_140b58260(&var_f8, u"IndexX", 1)
int64_t r14_7 = sx.q(var_b8_8.d)
int32_t r15_5 = var_b8_8:4.d
var_f0 = var_f8
int32_t rdi_22 = (r14_7 + 1).d
int64_t var_e8_30 = data_14396f0a8
var_e0_8.w = data_14396f0b0
var_e0_8 = 0xffffffff
int64_t var_d8_30 = 0
int64_t var_d0_30 = 0
var_b8_8.d = rdi_22

if (rdi_22 s> r15_5)
    sub_1405c4ec0(&var_c0)
    r15_5 = var_b8_8:4.d
    rdi_22 = var_b8_8.d
    rsi_10 = var_c0

sub_140745220(&rsi_10[r14_7 * 5], &var_f0)

if (var_d8_30 != 0)
    sub_140a74f90(var_d8_30)

sub_140b58260(&var_f8, u"IndexY", 1)
var_f0 = var_f8
int64_t var_e8_31 = data_14396f0a8
var_e0_8.w = data_14396f0b0
var_e0_8 = 0xffffffff
int64_t var_d8_31 = 0
int64_t var_d0_31 = 0
var_b8_8.d = rdi_22 + 1

if (rdi_22 + 1 s> r15_5)
    sub_1405c4ec0(&var_c0)
    rsi_10 = var_c0

sub_140745220(&rsi_10[sx.q(rdi_22) * 5], &var_f0)

if (var_d8_31 != 0)
    sub_140a74f90(var_d8_31)

sub_140b58260(&var_f8, u"Linear", 1)
int64_t rdi_23 = sx.q(var_a8_8)
var_f0 = var_f8
int64_t var_e8_32 = data_14396f0a8
var_e0_8.w = data_14396f0b0
int32_t rax_189 = (rdi_23 + 1).d
var_e0_8 = 0xffffffff
int64_t var_d8_32 = 0
int64_t var_d0_32 = 0
var_a8_8 = rax_189

if (rax_189 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_23 * 0x28, &var_f0)

if (var_d8_32 != 0)
    sub_140a74f90(var_d8_32)

int64_t rdi_24 = sx.q(arg2[1].d)
int32_t rax_194 = (rdi_24 + 1).d
arg2[1].d = rax_194

if (rax_194 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_24 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int32_t var_b8_9 = 1
var_c8 = data_143ce0780
__builtin_memset(&var_b0, 0, 0x18)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_9 = 0x80
int32_t var_60_9 = 0xffffffff
int32_t var_5c_9 = 0
int64_t var_50_9 = 0
int32_t var_48_9 = 0
sub_140b58260(&var_f8, u"Grid", 1)
var_f0 = var_f8
int64_t var_e8_33 = *(arg1 + 0x10)
int32_t var_e0_9 = 0xffff0001
int16_t var_dc_9 = 0xffff
int64_t var_d8_33 = 0
int64_t var_d0_33 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_11 = var_c0
sub_140745220(rsi_11, &var_f0)

if (var_d8_33 != 0)
    sub_140a74f90(var_d8_33)

sub_140b58260(&var_f8, u"Linear", 1)
int64_t rdi_25 = sx.q(var_b8_9)
var_f0 = var_f8
int64_t var_e8_34 = data_14396f0a8
var_e0_9.w = data_14396f0b0
int32_t rax_204 = (rdi_25 + 1).d
var_e0_9 = 0xffffffff
int64_t var_d8_34 = 0
int64_t var_d0_34 = 0

if (rax_204 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_11 = var_c0

sub_140745220(&rsi_11[rdi_25 * 5], &var_f0)

if (var_d8_34 != 0)
    sub_140a74f90(var_d8_34)

sub_140b58260(&var_f8, u"IndexX", 1)
int64_t var_a8_9
int64_t rsi_12 = sx.q(var_a8_9.d)
int32_t r14_8 = var_a8_9:4.d
var_f0 = var_f8
int32_t rdi_26 = (rsi_12 + 1).d
int64_t var_e8_35 = data_14396f0a8
var_e0_9.w = data_14396f0b0
var_e0_9 = 0xffffffff
int64_t var_d8_35 = 0
int64_t var_d0_35 = 0
var_a8_9.d = rdi_26

if (rdi_26 s> r14_8)
    sub_1405c4ec0(&var_b0)
    r14_8 = var_a8_9:4.d
    rdi_26 = var_a8_9.d

int64_t rsi_13 = var_b0
sub_140745220(rsi_13 + rsi_12 * 0x28, &var_f0)

if (var_d8_35 != 0)
    sub_140a74f90(var_d8_35)

sub_140b58260(&var_f8, u"IndexY", 1)
var_f0 = var_f8
int64_t var_e8_36 = data_14396f0a8
var_e0_9.w = data_14396f0b0
var_e0_9 = 0xffffffff
int64_t var_d8_36 = 0
int64_t var_d0_36 = 0
var_a8_9.d = rdi_26 + 1

if (rdi_26 + 1 s> r14_8)
    sub_1405c4ec0(&var_b0)
    rsi_13 = var_b0

sub_140745220(rsi_13 + sx.q(rdi_26) * 0x28, &var_f0)

if (var_d8_36 != 0)
    sub_140a74f90(var_d8_36)

int64_t rdi_27 = sx.q(arg2[1].d)
int32_t rax_216 = (rdi_27 + 1).d
arg2[1].d = rax_216

if (rax_216 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_27 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143ce0730
sub_140b58260(&var_f8, u"Grid", 1)
int64_t rdi_28 = sx.q(rax_204)
var_f0 = var_f8
int64_t var_e8_37 = *(arg1 + 0x10)
int32_t rax_220 = (rdi_28 + 1).d
int32_t var_e0_10 = 0xffff0001
int16_t var_dc_10 = 0xffff
int64_t var_d8_37 = 0
int64_t var_d0_37 = 0

if (rax_220 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(&var_c0[rdi_28 * 5], &var_f0)

if (var_d8_37 != 0)
    sub_140a74f90(var_d8_37)

sub_140b58260(&var_f8, u"NumCellsX", 1)
int64_t rsi_14 = sx.q(var_a8_9.d)
int32_t r14_9 = var_a8_9:4.d
var_f0 = var_f8
int32_t rdi_29 = (rsi_14 + 1).d
int64_t var_e8_38 = data_14396f0a8
var_e0_10.w = data_14396f0b0
var_e0_10 = 0xffffffff
int64_t var_d8_38 = 0
int64_t var_d0_38 = 0
var_a8_9.d = rdi_29

if (rdi_29 s> r14_9)
    sub_1405c4ec0(&var_b0)
    r14_9 = var_a8_9:4.d
    rdi_29 = var_a8_9.d

int64_t rsi_15 = var_b0
sub_140745220(rsi_15 + rsi_14 * 0x28, &var_f0)

if (var_d8_38 != 0)
    sub_140a74f90(var_d8_38)

sub_140b58260(&var_f8, u"NumCellsY", 1)
var_f0 = var_f8
int64_t var_e8_39 = data_14396f0a8
var_e0_10.w = data_14396f0b0
var_e0_10 = 0xffffffff
int64_t var_d8_39 = 0
int64_t var_d0_39 = 0
var_a8_9.d = rdi_29 + 1

if (rdi_29 + 1 s> r14_9)
    sub_1405c4ec0(&var_b0)
    rsi_15 = var_b0

sub_140745220(rsi_15 + sx.q(rdi_29) * 0x28, &var_f0)

if (var_d8_39 != 0)
    sub_140a74f90(var_d8_39)

int64_t rdi_30 = sx.q(arg2[1].d)
int32_t rax_233 = (rdi_30 + 1).d
arg2[1].d = rax_233

if (rax_233 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_30 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_140745040(&var_c8)
var_c8 = data_143ce0738
sub_140b58260(&var_f8, u"Grid", 1)
int64_t rdi_31 = sx.q(rax_220)
var_f0 = var_f8
int64_t var_e8_40 = *(arg1 + 0x10)
int32_t rax_237 = (rdi_31 + 1).d
int32_t var_e0_11 = 0xffff0001
int16_t var_dc_11 = 0xffff
int64_t var_d8_40 = 0
int64_t var_d0_40 = 0
var_b8_9 = rax_237

if (rax_237 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(&var_c0[rdi_31 * 5], &var_f0)

if (var_d8_40 != 0)
    sub_140a74f90(var_d8_40)

sub_140b58260(&var_f8, u"CellSize", 1)
int64_t rdi_32 = sx.q(var_a8_9.d)
var_f0 = var_f8
int64_t var_e8_41 = data_14396f0b8
var_e0_11.w = data_14396f0c0
int32_t rax_242 = (rdi_32 + 1).d
var_e0_11 = 0xffffffff
int64_t var_d8_41 = 0
int64_t var_d0_41 = 0
var_a8_9.d = rax_242

if (rax_242 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_32 * 0x28, &var_f0)

if (var_d8_41 != 0)
    sub_140a74f90(var_d8_41)

int64_t rdi_33 = sx.q(arg2[1].d)
int32_t var_98_22 = (((((((((((rax_170 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8)
    | 0x18) & 0xfffffffe) | 2) & 0xfffffffe) | 2) & 0xfffffffe) | 2
int32_t rax_247 = (rdi_33 + 1).d
arg2[1].d = rax_247

if (rax_247 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_33 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_118)
return result

// 函数: sub_14079dd70
// 地址: 0x14079dd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
sub_14079c030(arg1, arg2)
int64_t var_c8 = 1
int64_t* var_d0 = nullptr
int64_t var_c0 = 0
int64_t var_d8 = data_143ce04d0
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
int64_t* rdi = var_d0
sub_140745220(rdi, &var_100)

if (var_e8 != 0)
    sub_140a74f90(var_e8)

sub_140b58260(&var_108, u"IndexX", 1)
int64_t r14 = sx.q(var_c8.d)
int32_t r15 = var_c8:4.d
var_100 = var_108
int32_t rsi = (r14 + 1).d
int64_t var_f8_1 = data_14396f0a8
var_f0.w = data_14396f0b0
var_f0 = 0xffffffff
int64_t var_e8_1 = 0
int64_t var_e0_1 = 0
var_c8.d = rsi

if (rsi s> r15)
    sub_1405c4ec0(&var_d0)
    r15 = var_c8:4.d
    rsi = var_c8.d
    rdi = var_d0

sub_140745220(&rdi[r14 * 5], &var_100)

if (var_e8_1 != 0)
    sub_140a74f90(var_e8_1)

sub_140b58260(&var_108, u"IndexY", 1)
int32_t r14_1 = rsi + 1
var_100 = var_108
int64_t var_f8_2 = data_14396f0a8
var_f0.w = data_14396f0b0
var_f0 = 0xffffffff
int64_t var_e8_2 = 0
int64_t var_e0_2 = 0
var_c8.d = r14_1

if (r14_1 s> r15)
    sub_1405c4ec0(&var_d0)
    r15 = var_c8:4.d
    r14_1 = var_c8.d
    rdi = var_d0

sub_140745220(&rdi[sx.q(rsi) * 5], &var_100)

if (var_e8_2 != 0)
    sub_140a74f90(var_e8_2)

sub_140b58260(&var_108, u"AttributeIndex", 1)
var_100 = var_108
int64_t var_f8_3 = data_14396f0a8
var_f0.w = data_14396f0b0
var_f0 = 0xffffffff
int64_t var_e8_3 = 0
int64_t var_e0_3 = 0
var_c8.d = r14_1 + 1

if (r14_1 + 1 s> r15)
    sub_1405c4ec0(&var_d0)
    rdi = var_d0

sub_140745220(&rdi[sx.q(r14_1) * 5], &var_100)

if (var_e8_3 != 0)
    sub_140a74f90(var_e8_3)

sub_140b58260(&var_108, u"Value", 1)
int64_t rdi_1 = sx.q(var_b8)
var_100 = var_108
int64_t var_f8_4 = data_14396f088
var_f0.w = data_14396f090
int32_t rax_23 = (rdi_1 + 1).d
var_f0 = 0xffffffff
int64_t var_e8_4 = 0
int64_t var_e0_4 = 0
var_b8 = rax_23

if (rax_23 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_1 * 0x28, &var_100)

if (var_e8_4 != 0)
    sub_140a74f90(var_e8_4)

int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_28 = (rdi_2 + 1).d
arg2[1].d = rax_28

if (rax_28 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_2 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
sub_140745ac0(&var_d0)
var_d0 = nullptr
int64_t var_c8_1 = 1
var_d8 = data_143ce04c8
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
int64_t var_f8_5 = *(arg1 + 0x10)
int32_t var_f0_1 = 0xffff0001
int16_t var_ec_1 = 0xffff
int64_t var_e8_5 = 0
int64_t var_e0_5 = 0
sub_1405c4ec0(&var_d0)
int64_t* rdi_3 = var_d0
sub_140745220(rdi_3, &var_100)

if (var_e8_5 != 0)
    sub_140a74f90(var_e8_5)

sub_140b58260(&var_108, u"IndexX", 1)
int64_t r15_1 = sx.q(var_c8_1.d)
int32_t rsi_1 = var_c8_1:4.d
var_100 = var_108
int32_t r14_2 = (r15_1 + 1).d
int64_t var_f8_6 = data_14396f0a8
var_f0_1.w = data_14396f0b0
var_f0_1 = 0xffffffff
int64_t var_e8_6 = 0
int64_t var_e0_6 = 0
var_c8_1.d = r14_2

if (r14_2 s> rsi_1)
    sub_1405c4ec0(&var_d0)
    rsi_1 = var_c8_1:4.d
    r14_2 = var_c8_1.d
    rdi_3 = var_d0

sub_140745220(&rdi_3[r15_1 * 5], &var_100)

if (var_e8_6 != 0)
    sub_140a74f90(var_e8_6)

sub_140b58260(&var_108, u"IndexY", 1)
int32_t r15_2 = r14_2 + 1
var_100 = var_108
int64_t var_f8_7 = data_14396f0a8
var_f0_1.w = data_14396f0b0
var_f0_1 = 0xffffffff
int64_t var_e8_7 = 0
int64_t var_e0_7 = 0
var_c8_1.d = r15_2

if (r15_2 s> rsi_1)
    sub_1405c4ec0(&var_d0)
    rsi_1 = var_c8_1:4.d
    r15_2 = var_c8_1.d
    rdi_3 = var_d0

sub_140745220(&rdi_3[sx.q(r14_2) * 5], &var_100)

if (var_e8_7 != 0)
    sub_140a74f90(var_e8_7)

sub_140b58260(&var_108, u"AttributeIndex", 1)
int32_t r14_3 = r15_2 + 1
var_100 = var_108
int64_t var_f8_8 = data_14396f0a8
var_f0_1.w = data_14396f0b0
var_f0_1 = 0xffffffff
int64_t var_e8_8 = 0
int64_t var_e0_8 = 0
var_c8_1.d = r14_3

if (r14_3 s> rsi_1)
    sub_1405c4ec0(&var_d0)
    rsi_1 = var_c8_1:4.d
    r14_3 = var_c8_1.d
    rdi_3 = var_d0

sub_140745220(&rdi_3[sx.q(r15_2) * 5], &var_100)

if (var_e8_8 != 0)
    sub_140a74f90(var_e8_8)

sub_140b58260(&var_108, u"Value", 1)
var_100 = var_108
int64_t var_f8_9 = data_14396f088
var_f0_1.w = data_14396f090
var_f0_1 = 0xffffffff
int64_t var_e8_9 = 0
int64_t var_e0_9 = 0
var_c8_1.d = r14_3 + 1

if (r14_3 + 1 s> rsi_1)
    sub_1405c4ec0(&var_d0)
    rdi_3 = var_d0

sub_140745220(&rdi_3[sx.q(r14_3) * 5], &var_100)

if (var_e8_9 != 0)
    sub_140a74f90(var_e8_9)

sub_140b58260(&var_108, u"IGNORE", 1)
int64_t rdi_4 = sx.q(var_b8_1)
var_100 = var_108
int64_t var_f8_10 = data_14396f0a8
var_f0_1.w = data_14396f0b0
int32_t rax_54 = (rdi_4 + 1).d
var_f0_1 = 0xffffffff
int64_t var_e8_10 = 0
int64_t var_e0_10 = 0
var_b8_1 = rax_54

if (rax_54 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_4 * 0x28, &var_100)

if (var_e8_10 != 0)
    sub_140a74f90(var_e8_10)

int64_t rdi_5 = sx.q(arg2[1].d)
int32_t rax_59 = (rdi_5 + 1).d
arg2[1].d = rax_59

if (rax_59 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_5 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
sub_140745ac0(&var_d0)
var_d0 = nullptr
int64_t var_c8_2 = 1
var_d8 = data_143ce04d8
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
int64_t var_f8_11 = *(arg1 + 0x10)
int32_t var_f0_2 = 0xffff0001
int16_t var_ec_2 = 0xffff
int64_t var_e8_11 = 0
int64_t var_e0_11 = 0
sub_1405c4ec0(&var_d0)
int64_t* rsi_2 = var_d0
sub_140745220(rsi_2, &var_100)

if (var_e8_11 != 0)
    sub_140a74f90(var_e8_11)

sub_140b58260(&var_108, u"UnitX", 1)
int64_t rdi_6 = sx.q(var_c8_2.d)
int32_t r15_3 = var_c8_2:4.d
var_100 = var_108
int32_t r14_4 = (rdi_6 + 1).d
int64_t var_f8_12 = data_14396f088
var_f0_2.w = data_14396f090
var_f0_2 = 0xffffffff
int64_t var_e8_12 = 0
int64_t var_e0_12 = 0
var_c8_2.d = r14_4

if (r14_4 s> r15_3)
    sub_1405c4ec0(&var_d0)
    r15_3 = var_c8_2:4.d
    r14_4 = var_c8_2.d
    rsi_2 = var_d0

sub_140745220(&rsi_2[rdi_6 * 5], &var_100)

if (var_e8_12 != 0)
    sub_140a74f90(var_e8_12)

sub_140b58260(&var_108, u"UnitY", 1)
int32_t rdi_7 = r14_4 + 1
var_100 = var_108
int64_t var_f8_13 = data_14396f088
var_f0_2.w = data_14396f090
var_f0_2 = 0xffffffff
int64_t var_e8_13 = 0
int64_t var_e0_13 = 0
var_c8_2.d = rdi_7

if (rdi_7 s> r15_3)
    sub_1405c4ec0(&var_d0)
    r15_3 = var_c8_2:4.d
    rdi_7 = var_c8_2.d
    rsi_2 = var_d0

sub_140745220(&rsi_2[sx.q(r14_4) * 5], &var_100)

if (var_e8_13 != 0)
    sub_140a74f90(var_e8_13)

sub_140b58260(&var_108, u"AttributeIndex", 1)
var_100 = var_108
int64_t var_f8_14 = data_14396f0a8
var_f0_2.w = data_14396f0b0
var_f0_2 = 0xffffffff
int64_t var_e8_14 = 0
int64_t var_e0_14 = 0
var_c8_2.d = rdi_7 + 1

if (rdi_7 + 1 s> r15_3)
    sub_1405c4ec0(&var_d0)
    rsi_2 = var_d0

sub_140745220(&rsi_2[sx.q(rdi_7) * 5], &var_100)

if (var_e8_14 != 0)
    sub_140a74f90(var_e8_14)

sub_140b58260(&var_108, u"Value", 1)
int64_t rdi_8 = sx.q(var_b8_2)
var_100 = var_108
int64_t var_f8_15 = data_14396f088
var_f0_2.w = data_14396f090
int32_t rax_81 = (rdi_8 + 1).d
var_f0_2 = 0xffffffff
int64_t var_e8_15 = 0
int64_t var_e0_15 = 0
var_b8_2 = rax_81

if (rax_81 s> 0)
    sub_1405c4ec0(&var_c0)

sub_140745220(var_c0 + rdi_8 * 0x28, &var_100)

if (var_e8_15 != 0)
    sub_140a74f90(var_e8_15)

int64_t rdi_9 = sx.q(arg2[1].d)
int32_t var_a8
int32_t var_a8_6 = (((((((((((var_a8 & 0xffffffd8) | 0x18) & 0xfffffffe) | 6) & 0xffffffd8) | 0x18)
    & 0xfffffffe) | 0x26) & 0xffffffd8) | 0x18) & 0xfffffffe) | 6
int32_t rax_86 = (rdi_9 + 1).d
arg2[1].d = rax_86

if (rax_86 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_9 * 0x88 + *arg2, &var_d8)
sub_1405ae080(&var_a0)
sub_140745ac0(&var_c0)
int64_t result = sub_140745ac0(&var_d0)
__security_check_cookie(rax_1 ^ &var_128)
return result

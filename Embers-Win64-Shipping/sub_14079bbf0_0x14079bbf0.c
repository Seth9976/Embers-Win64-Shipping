// 函数: sub_14079bbf0
// 地址: 0x14079bbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_c8 = data_143ce0480
int64_t* var_c0 = nullptr
int64_t var_b8 = 1
int32_t var_98
int32_t var_98_1 = (var_98 & 0xffffffda) | 0x1a
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
sub_140b58260(&var_f8, u"Export interface", 1)
int64_t var_f0 = var_f8
int64_t var_e8 = *(arg1 + 0x10)
int32_t var_e0 = 0xffff0001
int16_t var_dc = 0xffff
int64_t var_d8 = 0
int64_t var_d0 = 0
sub_1405c4ec0(&var_c0)
int64_t* rbx_1 = var_c0
sub_140745220(rbx_1, &var_f0)

if (var_d8 != 0)
    sub_140a74f90(var_d8)

sub_140b58260(&var_f8, u"Store Data", 1)
int64_t r14 = sx.q(var_b8.d)
int32_t rdi = var_b8:4.d
var_f0 = var_f8
int32_t rsi = (r14 + 1).d
int64_t var_e8_1 = data_14396f098
var_e0.w = data_14396f0a0
var_e0 = 0xffffffff
int64_t var_d8_1 = 0
int64_t var_d0_1 = 0
var_b8.d = rsi

if (rsi s> rdi)
    sub_1405c4ec0(&var_c0)
    rdi = var_b8:4.d
    rsi = var_b8.d
    rbx_1 = var_c0

sub_140745220(&rbx_1[r14 * 5], &var_f0)

if (var_d8_1 != 0)
    sub_140a74f90(var_d8_1)

sub_140b58260(&var_f8, u"Position", 1)
int32_t r14_1 = rsi + 1
var_f0 = var_f8
int64_t var_e8_2 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_2 = 0
int64_t var_d0_2 = 0
var_b8.d = r14_1

if (r14_1 s> rdi)
    sub_1405c4ec0(&var_c0)
    rdi = var_b8:4.d
    r14_1 = var_b8.d
    rbx_1 = var_c0

sub_140745220(&rbx_1[sx.q(rsi) * 5], &var_f0)

if (var_d8_2 != 0)
    sub_140a74f90(var_d8_2)

sub_140b58260(&var_f8, u"Size", 1)
int32_t rsi_1 = r14_1 + 1
var_f0 = var_f8
int64_t var_e8_3 = data_14396f088
var_e0.w = data_14396f090
var_e0 = 0xffffffff
int64_t var_d8_3 = 0
int64_t var_d0_3 = 0
var_b8.d = rsi_1

if (rsi_1 s> rdi)
    sub_1405c4ec0(&var_c0)
    rdi = var_b8:4.d
    rsi_1 = var_b8.d
    rbx_1 = var_c0

sub_140745220(&rbx_1[sx.q(r14_1) * 5], &var_f0)

if (var_d8_3 != 0)
    sub_140a74f90(var_d8_3)

sub_140b58260(&var_f8, u"Velocity", 1)
var_f0 = var_f8
int64_t var_e8_4 = data_14396f0c8
var_e0.w = data_14396f0d0
var_e0 = 0xffffffff
int64_t var_d8_4 = 0
int64_t var_d0_4 = 0
var_b8.d = rsi_1 + 1

if (rsi_1 + 1 s> rdi)
    sub_1405c4ec0(&var_c0)
    rbx_1 = var_c0

sub_140745220(&rbx_1[sx.q(rsi_1) * 5], &var_f0)

if (var_d8_4 != 0)
    sub_140a74f90(var_d8_4)

sub_140b58260(&var_f8, u"Success", 1)
int64_t rbx_2 = sx.q(var_a8)
var_f0 = var_f8
int64_t var_e8_5 = data_14396f098
var_e0.w = data_14396f0a0
int32_t rax_27 = (rbx_2 + 1).d
var_e0 = 0xffffffff
int64_t var_d8_5 = 0
int64_t var_d0_5 = 0
var_a8 = rax_27

if (rax_27 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rbx_2 * 0x28, &var_f0)

if (var_d8_5 != 0)
    sub_140a74f90(var_d8_5)

int64_t rbx_3 = sx.q(arg2[1].d)
int32_t rax_29 = (rbx_3 + 1).d
arg2[1].d = rax_29

if (rax_29 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_3 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_118)
return result

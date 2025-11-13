// 函数: sub_14075c080
// 地址: 0x14075c080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* var_c0 = nullptr
int64_t var_b8 = 1
int64_t var_c8 = data_143cdfdb0
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
sub_140b58260(&var_f8, u"Oscilloscope", 1)
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

sub_140b58260(&var_f8, u"NormalizedPositionInBuffer", 1)
int64_t r14 = sx.q(var_b8.d)
int32_t r15 = var_b8:4.d
var_f0 = var_f8
int32_t rdi = (r14 + 1).d
int64_t var_e8_1 = data_14396f088
var_e0.w = data_14396f090
var_e0 = 0xffffffff
int64_t var_d8_1 = 0
int64_t var_d0_1 = 0
var_b8.d = rdi

if (rdi s> r15)
    sub_1405c4ec0(&var_c0)
    r15 = var_b8:4.d
    rdi = var_b8.d
    rsi = var_c0

sub_140745220(&rsi[r14 * 5], &var_f0)

if (var_d8_1 != 0)
    sub_140a74f90(var_d8_1)

sub_140b58260(&var_f8, u"ChannelIndex", 1)
var_f0 = var_f8
int64_t var_e8_2 = data_14396f0a8
var_e0.w = data_14396f0b0
var_e0 = 0xffffffff
int64_t var_d8_2 = 0
int64_t var_d0_2 = 0
var_b8.d = rdi + 1

if (rdi + 1 s> r15)
    sub_1405c4ec0(&var_c0)
    rsi = var_c0

sub_140745220(&rsi[sx.q(rdi) * 5], &var_f0)

if (var_d8_2 != 0)
    sub_140a74f90(var_d8_2)

sub_140b58260(&var_f8, u"Amplitude", 1)
int64_t rdi_1 = sx.q(var_a8)
var_f0 = var_f8
int64_t var_e8_3 = data_14396f088
var_e0.w = data_14396f090
int32_t rax_19 = (rdi_1 + 1).d
var_e0 = 0xffffffff
int64_t var_d8_3 = 0
int64_t var_d0_3 = 0
var_a8 = rax_19

if (rax_19 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_1 * 0x28, &var_f0)

if (var_d8_3 != 0)
    sub_140a74f90(var_d8_3)

int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_24 = (rdi_2 + 1).d
arg2[1].d = rax_24

if (rax_24 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_2 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_c0 = nullptr
int64_t var_b8_1 = 1
var_c8 = data_143cdfdb8
var_b0 = 0
int32_t var_a8_1 = 0
int64_t var_a0_1 = 0
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_1 = 0x80
int32_t var_60_1 = 0xffffffff
int32_t var_5c_1 = 0
int64_t var_50_1 = 0
int32_t var_48_1 = 0
sub_140b58260(&var_f8, u"Oscilloscope", 1)
var_f0 = var_f8
int64_t var_e8_4 = *(arg1 + 0x10)
int32_t var_e0_1 = 0xffff0001
int16_t var_dc_1 = 0xffff
int64_t var_d8_4 = 0
int64_t var_d0_4 = 0
sub_1405c4ec0(&var_c0)
sub_140745220(var_c0, &var_f0)

if (var_d8_4 != 0)
    sub_140a74f90(var_d8_4)

sub_140b58260(&var_f8, u"NumChannels", 1)
int64_t rdi_3 = sx.q(var_a8_1)
var_f0 = var_f8
int64_t var_e8_5 = data_14396f0a8
var_e0_1.w = data_14396f0b0
int32_t rax_34 = (rdi_3 + 1).d
var_e0_1 = 0xffffffff
int64_t var_d8_5 = 0
int64_t var_d0_5 = 0
var_a8_1 = rax_34

if (rax_34 s> 0)
    sub_1405c4ec0(&var_b0)

sub_140745220(var_b0 + rdi_3 * 0x28, &var_f0)

if (var_d8_5 != 0)
    sub_140a74f90(var_d8_5)

int64_t rdi_4 = sx.q(arg2[1].d)
int32_t var_98
int32_t var_98_4 =
    (((((((var_98 & 0xffffffd8) | 0x18) & 0xfffffffe) | 2) & 0xffffffd8) | 0x18) & 0xfffffffe) | 2
int32_t rax_39 = (rdi_4 + 1).d
arg2[1].d = rax_39

if (rax_39 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rdi_4 * 0x88 + *arg2, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
int64_t result = sub_140745ac0(&var_c0)
__security_check_cookie(rax_1 ^ &var_118)
return result

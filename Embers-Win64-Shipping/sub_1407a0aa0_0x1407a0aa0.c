// 函数: sub_1407a0aa0
// 地址: 0x1407a0aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t var_158 = data_143ce0560
int64_t* var_150 = nullptr
int64_t var_148 = 1
int64_t var_140
__builtin_memset(&var_140, 0, 0x18)
int64_t var_120
__builtin_memset(&var_120, 0, 0x2c)
int32_t var_f4 = 0x80
int32_t var_f0 = 0xffffffff
int32_t var_ec = 0
int64_t var_e0 = 0
int32_t var_d8 = 0
int64_t var_188
sub_140b58260(&var_188, u"Occlusion interface", 1)
int64_t var_180 = var_188
int64_t var_178 = *(arg1 + 0x10)
int32_t var_170 = 0xffff0001
int16_t var_16c = 0xffff
int64_t var_168 = 0
int64_t var_160 = 0
sub_1405c4ec0(&var_150)
int64_t* rbx = var_150
sub_140745220(rbx, &var_180)

if (var_168 != 0)
    sub_140a74f90(var_168)

sub_140b58260(&var_188, u"Sample Center World Position", 1)
int64_t r15 = sx.q(var_148.d)
int32_t rsi = var_148:4.d
var_180 = var_188
int32_t r14 = (r15 + 1).d
int64_t var_178_1 = data_14396f0c8
var_170.w = data_14396f0d0
var_170 = 0xffffffff
int64_t var_168_1 = 0
int64_t var_160_1 = 0
var_148.d = r14

if (r14 s> rsi)
    sub_1405c4ec0(&var_150)
    rsi = var_148:4.d
    r14 = var_148.d
    rbx = var_150

sub_140745220(&rbx[r15 * 5], &var_180)

if (var_168_1 != 0)
    sub_140a74f90(var_168_1)

sub_140b58260(&var_188, u"Sample Window Width World", 1)
int32_t r15_1 = r14 + 1
var_180 = var_188
int64_t var_178_2 = data_14396f088
var_170.w = data_14396f090
var_170 = 0xffffffff
int64_t var_168_2 = 0
int64_t var_160_2 = 0
var_148.d = r15_1

if (r15_1 s> rsi)
    sub_1405c4ec0(&var_150)
    rsi = var_148:4.d
    r15_1 = var_148.d
    rbx = var_150

sub_140745220(&rbx[sx.q(r14) * 5], &var_180)

if (var_168_2 != 0)
    sub_140a74f90(var_168_2)

sub_140b58260(&var_188, u"Sample Window Height World", 1)
int32_t r14_1 = r15_1 + 1
var_180 = var_188
int64_t var_178_3 = data_14396f088
var_170.w = data_14396f090
var_170 = 0xffffffff
int64_t var_168_3 = 0
int64_t var_160_3 = 0
var_148.d = r14_1

if (r14_1 s> rsi)
    sub_1405c4ec0(&var_150)
    rsi = var_148:4.d
    r14_1 = var_148.d
    rbx = var_150

sub_140745220(&rbx[sx.q(r15_1) * 5], &var_180)

if (var_168_3 != 0)
    sub_140a74f90(var_168_3)

sub_140b58260(&var_188, u"Sample Steps Per Line", 1)
var_180 = var_188
int64_t var_178_4 = data_14396f088
var_170.w = data_14396f090
var_170 = 0xffffffff
int64_t var_168_4 = 0
int64_t var_160_4 = 0
var_148.d = r14_1 + 1

if (r14_1 + 1 s> rsi)
    sub_1405c4ec0(&var_150)
    rbx = var_150

sub_140745220(&rbx[sx.q(r14_1) * 5], &var_180)

if (var_168_4 != 0)
    sub_140a74f90(var_168_4)

sub_140b58260(&var_188, u"Visibility Fraction", 1)
int64_t var_138
int64_t rsi_1 = sx.q(var_138.d)
int32_t r14_2 = var_138:4.d
var_180 = var_188
int32_t rbx_1 = (rsi_1 + 1).d
int64_t var_178_5 = data_14396f088
var_170.w = data_14396f090
var_170 = 0xffffffff
int64_t var_168_5 = 0
int64_t var_160_5 = 0
var_138.d = rbx_1

if (rbx_1 s> r14_2)
    sub_1405c4ec0(&var_140)
    r14_2 = var_138:4.d
    rbx_1 = var_138.d

int64_t rsi_2 = var_140
sub_140745220(rsi_2 + rsi_1 * 0x28, &var_180)

if (var_168_5 != 0)
    sub_140a74f90(var_168_5)

sub_140b58260(&var_188, u"Sample Fraction", 1)
var_180 = var_188
int64_t var_178_6 = data_14396f088
var_170.w = data_14396f090
var_170 = 0xffffffff
int64_t var_168_6 = 0
int64_t var_160_6 = 0
var_138.d = rbx_1 + 1

if (rbx_1 + 1 s> r14_2)
    sub_1405c4ec0(&var_140)
    rsi_2 = var_140

sub_140745220(rsi_2 + sx.q(rbx_1) * 0x28, &var_180)

if (var_168_6 != 0)
    sub_140a74f90(var_168_6)

int64_t rbx_2 = sx.q(arg2[1].d)
int32_t rax_32 = (rbx_2 + 1).d
arg2[1].d = rax_32

if (rax_32 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_2 * 0x88 + *arg2, &var_158)
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x30)
int32_t var_98
int32_t var_98_1 = (var_98 & 0xffffffd8) | 0x18
int64_t var_90
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64 = 0x80
int32_t var_60 = 0xffffffff
int32_t var_5c = 0
int64_t var_50 = 0
int32_t var_48 = 0
sub_140780ef0(&var_158, &var_c8)
sub_1405ae080(&var_90)
int64_t var_b0
sub_140745ac0(&var_b0)
int64_t var_c0
sub_140745ac0(&var_c0)
var_158 = data_143ce0568
int32_t var_128
int32_t var_128_2 = (((var_128 & 0xffffffd2) | 0x12) & 0xfffffff6) | 2
sub_140b58260(&var_188, u"Occlusion interface", 1)
int64_t rbx_3 = sx.q(var_148.d)
int32_t rsi_3 = var_148:4.d
int16_t var_16c_1 = 0xffff
int32_t r15_2 = (rbx_3 + 1).d
var_180 = var_188
int64_t var_178_7 = *(arg1 + 0x10)
int32_t var_170_1 = 0xffff0001
int64_t var_168_7 = 0
int64_t var_160_7 = 0
var_148.d = r15_2

if (r15_2 s> rsi_3)
    sub_1405c4ec0(&var_150)
    rsi_3 = var_148:4.d
    r15_2 = var_148.d

int64_t* rbx_4 = var_150
sub_140745220(&rbx_4[rbx_3 * 5], &var_180)

if (var_168_7 != 0)
    sub_140a74f90(var_168_7)

sub_140b58260(&var_188, u"Sample Center World Position", 1)
int32_t r14_3 = r15_2 + 1
var_180 = var_188
int64_t var_178_8 = data_14396f0c8
var_170_1.w = data_14396f0d0
var_170_1 = 0xffffffff
int64_t var_168_8 = 0
int64_t var_160_8 = 0
var_148.d = r14_3

if (r14_3 s> rsi_3)
    sub_1405c4ec0(&var_150)
    rsi_3 = var_148:4.d
    r14_3 = var_148.d
    rbx_4 = var_150

sub_140745220(&rbx_4[sx.q(r15_2) * 5], &var_180)

if (var_168_8 != 0)
    sub_140a74f90(var_168_8)

sub_140b58260(&var_188, u"Sample Window Diameter World", 1)
int32_t r15_3 = r14_3 + 1
var_180 = var_188
int64_t var_178_9 = data_14396f088
var_170_1.w = data_14396f090
var_170_1 = 0xffffffff
int64_t var_168_9 = 0
int64_t var_160_9 = 0
var_148.d = r15_3

if (r15_3 s> rsi_3)
    sub_1405c4ec0(&var_150)
    rsi_3 = var_148:4.d
    r15_3 = var_148.d
    rbx_4 = var_150

sub_140745220(&rbx_4[sx.q(r14_3) * 5], &var_180)

if (var_168_9 != 0)
    sub_140a74f90(var_168_9)

sub_140b58260(&var_188, u"Samples per ring", 1)
int32_t r14_4 = r15_3 + 1
var_180 = var_188
int64_t var_178_10 = data_14396f088
var_170_1.w = data_14396f090
var_170_1 = 0xffffffff
int64_t var_168_10 = 0
int64_t var_160_10 = 0
var_148.d = r14_4

if (r14_4 s> rsi_3)
    sub_1405c4ec0(&var_150)
    rsi_3 = var_148:4.d
    r14_4 = var_148.d
    rbx_4 = var_150

sub_140745220(&rbx_4[sx.q(r15_3) * 5], &var_180)

if (var_168_10 != 0)
    sub_140a74f90(var_168_10)

sub_140b58260(&var_188, u"Number of sample rings", 1)
var_180 = var_188
int64_t var_178_11 = data_14396f088
var_170_1.w = data_14396f090
var_170_1 = 0xffffffff
int64_t var_168_11 = 0
int64_t var_160_11 = 0
var_148.d = r14_4 + 1

if (r14_4 + 1 s> rsi_3)
    sub_1405c4ec0(&var_150)
    rbx_4 = var_150

sub_140745220(&rbx_4[sx.q(r14_4) * 5], &var_180)

if (var_168_11 != 0)
    sub_140a74f90(var_168_11)

sub_140b58260(&var_188, u"Visibility Fraction", 1)
int64_t rsi_4 = sx.q(var_138.d)
int32_t r14_5 = var_138:4.d
var_180 = var_188
int32_t rbx_5 = (rsi_4 + 1).d
int64_t var_178_12 = data_14396f088
var_170_1.w = data_14396f090
var_170_1 = 0xffffffff
int64_t var_168_12 = 0
int64_t var_160_12 = 0
var_138.d = rbx_5

if (rbx_5 s> r14_5)
    sub_1405c4ec0(&var_140)
    r14_5 = var_138:4.d
    rbx_5 = var_138.d

int64_t rsi_5 = var_140
sub_140745220(rsi_5 + rsi_4 * 0x28, &var_180)

if (var_168_12 != 0)
    sub_140a74f90(var_168_12)

sub_140b58260(&var_188, u"Sample Fraction", 1)
var_180 = var_188
int64_t var_178_13 = data_14396f088
var_170_1.w = data_14396f090
var_170_1 = 0xffffffff
int64_t var_168_13 = 0
int64_t var_160_13 = 0
var_138.d = rbx_5 + 1

if (rbx_5 + 1 s> r14_5)
    sub_1405c4ec0(&var_140)
    rsi_5 = var_140

sub_140745220(rsi_5 + sx.q(rbx_5) * 0x28, &var_180)

if (var_168_13 != 0)
    sub_140a74f90(var_168_13)

int64_t rbx_6 = sx.q(arg2[1].d)
int32_t rax_67 = (rbx_6 + 1).d
arg2[1].d = rax_67

if (rax_67 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_6 * 0x88 + *arg2, &var_158)
sub_1405ae080(&var_120)
sub_140745ac0(&var_140)
int64_t result = sub_140745ac0(&var_150)
__security_check_cookie(rax_1 ^ &var_1a8)
return result

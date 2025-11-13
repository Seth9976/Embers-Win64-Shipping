// 函数: sub_140796f90
// 地址: 0x140796f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t var_158 = data_143ce0368
int64_t* var_150 = nullptr
int32_t var_148 = 1
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
sub_140b58260(&var_188, u"Camera interface", 1)
int64_t var_180 = var_188
int64_t var_178 = *(arg1 + 0x10)
int32_t var_170 = 0xffff0001
int16_t var_16c = 0xffff
int64_t var_168 = 0
int64_t var_160 = 0
sub_1405c4ec0(&var_150)
sub_140745220(var_150, &var_180)

if (var_168 != 0)
    sub_140a74f90(var_168)

sub_140b58260(&var_188, u"View Position World", 1)
int64_t var_138
int64_t rbx = sx.q(var_138.d)
int32_t rsi = var_138:4.d
var_180 = var_188
int32_t r14 = (rbx + 1).d
int64_t var_178_1 = data_14396f0c8
var_170.w = data_14396f0d0
var_170 = 0xffffffff
int64_t var_168_1 = 0
int64_t var_160_1 = 0
var_138.d = r14

if (r14 s> rsi)
    sub_1405c4ec0(&var_140)
    rsi = var_138:4.d
    r14 = var_138.d

int64_t rbx_1 = var_140
sub_140745220(rbx_1 + rbx * 0x28, &var_180)

if (var_168_1 != 0)
    sub_140a74f90(var_168_1)

sub_140b58260(&var_188, u"View Forward Vector", 1)
int32_t r15 = r14 + 1
var_180 = var_188
int64_t var_178_2 = data_14396f0c8
var_170.w = data_14396f0d0
var_170 = 0xffffffff
int64_t var_168_2 = 0
int64_t var_160_2 = 0
var_138.d = r15

if (r15 s> rsi)
    sub_1405c4ec0(&var_140)
    rsi = var_138:4.d
    r15 = var_138.d
    rbx_1 = var_140

sub_140745220(rbx_1 + sx.q(r14) * 0x28, &var_180)

if (var_168_2 != 0)
    sub_140a74f90(var_168_2)

sub_140b58260(&var_188, u"View Up Vector", 1)
int32_t r14_1 = r15 + 1
var_180 = var_188
int64_t var_178_3 = data_14396f0c8
var_170.w = data_14396f0d0
var_170 = 0xffffffff
int64_t var_168_3 = 0
int64_t var_160_3 = 0
var_138.d = r14_1

if (r14_1 s> rsi)
    sub_1405c4ec0(&var_140)
    rsi = var_138:4.d
    r14_1 = var_138.d
    rbx_1 = var_140

sub_140745220(rbx_1 + sx.q(r15) * 0x28, &var_180)

if (var_168_3 != 0)
    sub_140a74f90(var_168_3)

sub_140b58260(&var_188, u"View Right Vector", 1)
int32_t r15_1 = r14_1 + 1
var_180 = var_188
int64_t var_178_4 = data_14396f0c8
var_170.w = data_14396f0d0
var_170 = 0xffffffff
int64_t var_168_4 = 0
int64_t var_160_4 = 0
var_138.d = r15_1

if (r15_1 s> rsi)
    sub_1405c4ec0(&var_140)
    rsi = var_138:4.d
    r15_1 = var_138.d
    rbx_1 = var_140

sub_140745220(rbx_1 + sx.q(r14_1) * 0x28, &var_180)

if (var_168_4 != 0)
    sub_140a74f90(var_168_4)

sub_140b58260(&var_188, u"View Size And Inverse Size", 1)
int32_t r14_2 = r15_1 + 1
var_180 = var_188
int64_t var_178_5 = data_14396f0d8
var_170.w = data_14396f0e0
var_170 = 0xffffffff
int64_t var_168_5 = 0
int64_t var_160_5 = 0
var_138.d = r14_2

if (r14_2 s> rsi)
    sub_1405c4ec0(&var_140)
    rsi = var_138:4.d
    r14_2 = var_138.d
    rbx_1 = var_140

sub_140745220(rbx_1 + sx.q(r15_1) * 0x28, &var_180)

if (var_168_5 != 0)
    sub_140a74f90(var_168_5)

sub_140b58260(&var_188, u"Screen To View Space", 1)
int32_t r15_2 = r14_2 + 1
var_180 = var_188
int64_t var_178_6 = data_14396f0d8
var_170.w = data_14396f0e0
var_170 = 0xffffffff
int64_t var_168_6 = 0
int64_t var_160_6 = 0
var_138.d = r15_2

if (r15_2 s> rsi)
    sub_1405c4ec0(&var_140)
    rsi = var_138:4.d
    r15_2 = var_138.d
    rbx_1 = var_140

sub_140745220(rbx_1 + sx.q(r14_2) * 0x28, &var_180)

if (var_168_6 != 0)
    sub_140a74f90(var_168_6)

sub_140b58260(&var_188, u"Temporal AA Jitter (Current Frame)", 1)
int32_t r14_3 = r15_2 + 1
var_180 = var_188
int64_t var_178_7 = data_14396f0b8
var_170.w = data_14396f0c0
var_170 = 0xffffffff
int64_t var_168_7 = 0
int64_t var_160_7 = 0
var_138.d = r14_3

if (r14_3 s> rsi)
    sub_1405c4ec0(&var_140)
    rsi = var_138:4.d
    r14_3 = var_138.d
    rbx_1 = var_140

sub_140745220(rbx_1 + sx.q(r15_2) * 0x28, &var_180)

if (var_168_7 != 0)
    sub_140a74f90(var_168_7)

sub_140b58260(&var_188, u"Temporal AA Jitter (Previous Frame)", 1)
var_180 = var_188
int64_t var_178_8 = data_14396f0b8
var_170.w = data_14396f0c0
var_170 = 0xffffffff
int64_t var_168_8 = 0
int64_t var_160_8 = 0
var_138.d = r14_3 + 1

if (r14_3 + 1 s> rsi)
    sub_1405c4ec0(&var_140)
    rbx_1 = var_140

sub_140745220(rbx_1 + sx.q(r14_3) * 0x28, &var_180)

if (var_168_8 != 0)
    sub_140a74f90(var_168_8)

int64_t rbx_2 = sx.q(arg2[1].d)
int32_t rax_40 = (rbx_2 + 1).d
arg2[1].d = rax_40

if (rax_40 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_2 * 0x88 + *arg2, &var_158)
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x30)
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
var_158 = data_143ce0370
sub_140b58260(&var_188, u"Camera interface", 1)
int64_t rbx_3 = sx.q(var_148)
var_180 = var_188
int64_t var_178_9 = *(arg1 + 0x10)
int32_t rax_50 = (rbx_3 + 1).d
int32_t var_170_1 = 0xffff0001
int16_t var_16c_1 = 0xffff
int64_t var_168_9 = 0
int64_t var_160_9 = 0

if (rax_50 s> 0)
    sub_1405c4ec0(&var_150)

sub_140745220(&var_150[rbx_3 * 5], &var_180)

if (var_168_9 != 0)
    sub_140a74f90(var_168_9)

sub_140b58260(&var_188, u"World To Clip Transform", 1)
int64_t rbx_4 = sx.q(var_138.d)
int32_t rsi_1 = var_138:4.d
var_180 = var_188
int32_t r14_4 = (rbx_4 + 1).d
int64_t var_178_10 = data_14396f108
var_170_1.w = data_14396f110
var_170_1 = 0xffffffff
int64_t var_168_10 = 0
int64_t var_160_10 = 0
var_138.d = r14_4

if (r14_4 s> rsi_1)
    sub_1405c4ec0(&var_140)
    rsi_1 = var_138:4.d
    r14_4 = var_138.d

int64_t rbx_5 = var_140
sub_140745220(rbx_5 + rbx_4 * 0x28, &var_180)

if (var_168_10 != 0)
    sub_140a74f90(var_168_10)

sub_140b58260(&var_188, u"Translated World To Clip Transform", 1)
int32_t r15_3 = r14_4 + 1
var_180 = var_188
int64_t var_178_11 = data_14396f108
var_170_1.w = data_14396f110
var_170_1 = 0xffffffff
int64_t var_168_11 = 0
int64_t var_160_11 = 0
var_138.d = r15_3

if (r15_3 s> rsi_1)
    sub_1405c4ec0(&var_140)
    rsi_1 = var_138:4.d
    r15_3 = var_138.d
    rbx_5 = var_140

sub_140745220(rbx_5 + sx.q(r14_4) * 0x28, &var_180)

if (var_168_11 != 0)
    sub_140a74f90(var_168_11)

sub_140b58260(&var_188, u"Clip To World Transform", 1)
int32_t r14_5 = r15_3 + 1
var_180 = var_188
int64_t var_178_12 = data_14396f108
var_170_1.w = data_14396f110
var_170_1 = 0xffffffff
int64_t var_168_12 = 0
int64_t var_160_12 = 0
var_138.d = r14_5

if (r14_5 s> rsi_1)
    sub_1405c4ec0(&var_140)
    rsi_1 = var_138:4.d
    r14_5 = var_138.d
    rbx_5 = var_140

sub_140745220(rbx_5 + sx.q(r15_3) * 0x28, &var_180)

if (var_168_12 != 0)
    sub_140a74f90(var_168_12)

sub_140b58260(&var_188, u"Clip To View Transform", 1)
int32_t r15_4 = r14_5 + 1
var_180 = var_188
int64_t var_178_13 = data_14396f108
var_170_1.w = data_14396f110
var_170_1 = 0xffffffff
int64_t var_168_13 = 0
int64_t var_160_13 = 0
var_138.d = r15_4

if (r15_4 s> rsi_1)
    sub_1405c4ec0(&var_140)
    rsi_1 = var_138:4.d
    r15_4 = var_138.d
    rbx_5 = var_140

sub_140745220(rbx_5 + sx.q(r14_5) * 0x28, &var_180)

if (var_168_13 != 0)
    sub_140a74f90(var_168_13)

sub_140b58260(&var_188, u"Clip To Translated World Transform", 1)
int32_t r14_6 = r15_4 + 1
var_180 = var_188
int64_t var_178_14 = data_14396f108
var_170_1.w = data_14396f110
var_170_1 = 0xffffffff
int64_t var_168_14 = 0
int64_t var_160_14 = 0
var_138.d = r14_6

if (r14_6 s> rsi_1)
    sub_1405c4ec0(&var_140)
    rsi_1 = var_138:4.d
    r14_6 = var_138.d
    rbx_5 = var_140

sub_140745220(rbx_5 + sx.q(r15_4) * 0x28, &var_180)

if (var_168_14 != 0)
    sub_140a74f90(var_168_14)

sub_140b58260(&var_188, u"Screen To World Transform", 1)
int32_t r15_5 = r14_6 + 1
var_180 = var_188
int64_t var_178_15 = data_14396f108
var_170_1.w = data_14396f110
var_170_1 = 0xffffffff
int64_t var_168_15 = 0
int64_t var_160_15 = 0
var_138.d = r15_5

if (r15_5 s> rsi_1)
    sub_1405c4ec0(&var_140)
    rsi_1 = var_138:4.d
    r15_5 = var_138.d
    rbx_5 = var_140

sub_140745220(rbx_5 + sx.q(r14_6) * 0x28, &var_180)

if (var_168_15 != 0)
    sub_140a74f90(var_168_15)

sub_140b58260(&var_188, u"Screen To Translated World Transform", 1)
int32_t r14_7 = r15_5 + 1
var_180 = var_188
int64_t var_178_16 = data_14396f108
var_170_1.w = data_14396f110
var_170_1 = 0xffffffff
int64_t var_168_16 = 0
int64_t var_160_16 = 0
var_138.d = r14_7

if (r14_7 s> rsi_1)
    sub_1405c4ec0(&var_140)
    rsi_1 = var_138:4.d
    r14_7 = var_138.d
    rbx_5 = var_140

sub_140745220(rbx_5 + sx.q(r15_5) * 0x28, &var_180)

if (var_168_16 != 0)
    sub_140a74f90(var_168_16)

sub_140b58260(&var_188, u"Clip To Previous Clip Transform", 1)
var_180 = var_188
int64_t var_178_17 = data_14396f108
var_170_1.w = data_14396f110
var_170_1 = 0xffffffff
int64_t var_168_17 = 0
int64_t var_160_17 = 0
var_138.d = r14_7 + 1

if (r14_7 + 1 s> rsi_1)
    sub_1405c4ec0(&var_140)
    rbx_5 = var_140

sub_140745220(rbx_5 + sx.q(r14_7) * 0x28, &var_180)

if (var_168_17 != 0)
    sub_140a74f90(var_168_17)

int64_t rbx_6 = sx.q(arg2[1].d)
int32_t rax_84 = (rbx_6 + 1).d
arg2[1].d = rax_84

if (rax_84 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_6 * 0x88 + *arg2, &var_158)
__builtin_memset(&var_c8, 0, 0x30)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_1 = 0x80
int32_t var_60_1 = 0xffffffff
int32_t var_5c_1 = 0
int64_t var_50_1 = 0
int32_t var_48_1 = 0
sub_140780ef0(&var_158, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_158 = data_143ce0378
sub_140b58260(&var_188, u"Camera interface", 1)
int64_t rbx_7 = sx.q(rax_50)
var_180 = var_188
int64_t var_178_18 = *(arg1 + 0x10)
int32_t rax_94 = (rbx_7 + 1).d
int32_t var_170_2 = 0xffff0001
int16_t var_16c_2 = 0xffff
int64_t var_168_18 = 0
int64_t var_160_18 = 0

if (rax_94 s> 0)
    sub_1405c4ec0(&var_150)

sub_140745220(&var_150[rbx_7 * 5], &var_180)

if (var_168_18 != 0)
    sub_140a74f90(var_168_18)

sub_140b58260(&var_188, u"Translated World To View Transform", 1)
int64_t rbx_8 = sx.q(var_138.d)
int32_t rsi_2 = var_138:4.d
var_180 = var_188
int32_t r14_8 = (rbx_8 + 1).d
int64_t var_178_19 = data_14396f108
var_170_2.w = data_14396f110
var_170_2 = 0xffffffff
int64_t var_168_19 = 0
int64_t var_160_19 = 0
var_138.d = r14_8

if (r14_8 s> rsi_2)
    sub_1405c4ec0(&var_140)
    rsi_2 = var_138:4.d
    r14_8 = var_138.d

int64_t rbx_9 = var_140
sub_140745220(rbx_9 + rbx_8 * 0x28, &var_180)

if (var_168_19 != 0)
    sub_140a74f90(var_168_19)

sub_140b58260(&var_188, u"View To Translated World Transform", 1)
int32_t r15_6 = r14_8 + 1
var_180 = var_188
int64_t var_178_20 = data_14396f108
var_170_2.w = data_14396f110
var_170_2 = 0xffffffff
int64_t var_168_20 = 0
int64_t var_160_20 = 0
var_138.d = r15_6

if (r15_6 s> rsi_2)
    sub_1405c4ec0(&var_140)
    rsi_2 = var_138:4.d
    r15_6 = var_138.d
    rbx_9 = var_140

sub_140745220(rbx_9 + sx.q(r14_8) * 0x28, &var_180)

if (var_168_20 != 0)
    sub_140a74f90(var_168_20)

sub_140b58260(&var_188, u"Translated World To Camera View Transform", 1)
int32_t r14_9 = r15_6 + 1
var_180 = var_188
int64_t var_178_21 = data_14396f108
var_170_2.w = data_14396f110
var_170_2 = 0xffffffff
int64_t var_168_21 = 0
int64_t var_160_21 = 0
var_138.d = r14_9

if (r14_9 s> rsi_2)
    sub_1405c4ec0(&var_140)
    rsi_2 = var_138:4.d
    r14_9 = var_138.d
    rbx_9 = var_140

sub_140745220(rbx_9 + sx.q(r15_6) * 0x28, &var_180)

if (var_168_21 != 0)
    sub_140a74f90(var_168_21)

sub_140b58260(&var_188, u"Camera View To Translated World Transform", 1)
int32_t r15_7 = r14_9 + 1
var_180 = var_188
int64_t var_178_22 = data_14396f108
var_170_2.w = data_14396f110
var_170_2 = 0xffffffff
int64_t var_168_22 = 0
int64_t var_160_22 = 0
var_138.d = r15_7

if (r15_7 s> rsi_2)
    sub_1405c4ec0(&var_140)
    rsi_2 = var_138:4.d
    r15_7 = var_138.d
    rbx_9 = var_140

sub_140745220(rbx_9 + sx.q(r14_9) * 0x28, &var_180)

if (var_168_22 != 0)
    sub_140a74f90(var_168_22)

sub_140b58260(&var_188, u"View To Clip Transform", 1)
int32_t r14_10 = r15_7 + 1
var_180 = var_188
int64_t var_178_23 = data_14396f108
var_170_2.w = data_14396f110
var_170_2 = 0xffffffff
int64_t var_168_23 = 0
int64_t var_160_23 = 0
var_138.d = r14_10

if (r14_10 s> rsi_2)
    sub_1405c4ec0(&var_140)
    rsi_2 = var_138:4.d
    r14_10 = var_138.d
    rbx_9 = var_140

sub_140745220(rbx_9 + sx.q(r15_7) * 0x28, &var_180)

if (var_168_23 != 0)
    sub_140a74f90(var_168_23)

sub_140b58260(&var_188, u"View To ClipNoAA Transform", 1)
var_180 = var_188
int64_t var_178_24 = data_14396f108
var_170_2.w = data_14396f110
var_170_2 = 0xffffffff
int64_t var_168_24 = 0
int64_t var_160_24 = 0
var_138.d = r14_10 + 1

if (r14_10 + 1 s> rsi_2)
    sub_1405c4ec0(&var_140)
    rbx_9 = var_140

sub_140745220(rbx_9 + sx.q(r14_10) * 0x28, &var_180)

if (var_168_24 != 0)
    sub_140a74f90(var_168_24)

int64_t rbx_10 = sx.q(arg2[1].d)
int32_t rax_120 = (rbx_10 + 1).d
arg2[1].d = rax_120

if (rax_120 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_10 * 0x88 + *arg2, &var_158)
__builtin_memset(&var_c8, 0, 0x30)
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_2 = 0x80
int32_t var_60_2 = 0xffffffff
int32_t var_5c_2 = 0
int64_t var_50_2 = 0
int32_t var_48_2 = 0
sub_140780ef0(&var_158, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_158 = data_143ce0388
sub_140b58260(&var_188, u"Camera interface", 1)
int64_t rbx_11 = sx.q(rax_94)
var_180 = var_188
int64_t var_178_25 = *(arg1 + 0x10)
int32_t rax_130 = (rbx_11 + 1).d
int32_t var_170_3 = 0xffff0001
int16_t var_16c_3 = 0xffff
int64_t var_168_25 = 0
int64_t var_160_25 = 0

if (rax_130 s> 0)
    sub_1405c4ec0(&var_150)

sub_140745220(&var_150[rbx_11 * 5], &var_180)

if (var_168_25 != 0)
    sub_140a74f90(var_168_25)

sub_140b58260(&var_188, u"Field Of View Angle", 1)
int64_t rbx_12 = sx.q(var_138.d)
var_180 = var_188
int64_t var_178_26 = data_14396f088
var_170_3.w = data_14396f090
int32_t rax_135 = (rbx_12 + 1).d
var_170_3 = 0xffffffff
int64_t var_168_26 = 0
int64_t var_160_26 = 0
var_138.d = rax_135

if (rax_135 s> 0)
    sub_1405c4ec0(&var_140)

sub_140745220(var_140 + rbx_12 * 0x28, &var_180)

if (var_168_26 != 0)
    sub_140a74f90(var_168_26)

int64_t rbx_13 = sx.q(arg2[1].d)
int32_t rax_137 = (rbx_13 + 1).d
arg2[1].d = rax_137

if (rax_137 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_13 * 0x88 + *arg2, &var_158)
__builtin_memset(&var_c8, 0, 0x30)
int32_t var_98
int32_t var_98_4 = (((((((var_98 & 0xffffffd8) | 0x18) & 0xffffffd8) | 0x18) & 0xffffffd8) | 0x18)
    & 0xffffffd8) | 0x18
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64_3 = 0x80
int32_t var_60_3 = 0xffffffff
int32_t var_5c_3 = 0
int64_t var_50_3 = 0
int32_t var_48_3 = 0
sub_140780ef0(&var_158, &var_c8)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
var_158 = data_143ce0380
int32_t var_128
int32_t var_128_5 = (((((((((var_128 & 0xffffffd2) | 0x12) & 0xfffffff6) | 2) & 0xfffffff6) | 2)
    & 0xfffffffe) | 2) & 0xfffffffe) | 2
sub_140b58260(&var_188, u"Camera interface", 1)
int64_t rbx_14 = sx.q(rax_130)
var_180 = var_188
int64_t var_178_27 = *(arg1 + 0x10)
int32_t rax_147 = (rbx_14 + 1).d
int32_t var_170_4 = 0xffff0001
int16_t var_16c_4 = 0xffff
int64_t var_168_27 = 0
int64_t var_160_27 = 0
var_148 = rax_147

if (rax_147 s> 0)
    sub_1405c4ec0(&var_150)

sub_140745220(&var_150[rbx_14 * 5], &var_180)

if (var_168_27 != 0)
    sub_140a74f90(var_168_27)

sub_140b58260(&var_188, u"Camera Position World", 1)
int64_t rbx_15 = sx.q(var_138.d)
int32_t rsi_3 = var_138:4.d
var_180 = var_188
int32_t r14_11 = (rbx_15 + 1).d
int64_t var_178_28 = data_14396f0c8
var_170_4.w = data_14396f0d0
var_170_4 = 0xffffffff
int64_t var_168_28 = 0
int64_t var_160_28 = 0
var_138.d = r14_11

if (r14_11 s> rsi_3)
    sub_1405c4ec0(&var_140)
    rsi_3 = var_138:4.d
    r14_11 = var_138.d

int64_t rbx_16 = var_140
sub_140745220(rbx_16 + rbx_15 * 0x28, &var_180)

if (var_168_28 != 0)
    sub_140a74f90(var_168_28)

sub_140b58260(&var_188, u"Forward Vector World", 1)
int32_t r15_8 = r14_11 + 1
var_180 = var_188
int64_t var_178_29 = data_14396f0c8
var_170_4.w = data_14396f0d0
var_170_4 = 0xffffffff
int64_t var_168_29 = 0
int64_t var_160_29 = 0
var_138.d = r15_8

if (r15_8 s> rsi_3)
    sub_1405c4ec0(&var_140)
    rsi_3 = var_138:4.d
    r15_8 = var_138.d
    rbx_16 = var_140

sub_140745220(rbx_16 + sx.q(r14_11) * 0x28, &var_180)

if (var_168_29 != 0)
    sub_140a74f90(var_168_29)

sub_140b58260(&var_188, u"Up Vector World", 1)
int32_t r14_12 = r15_8 + 1
var_180 = var_188
int64_t var_178_30 = data_14396f0c8
var_170_4.w = data_14396f0d0
var_170_4 = 0xffffffff
int64_t var_168_30 = 0
int64_t var_160_30 = 0
var_138.d = r14_12

if (r14_12 s> rsi_3)
    sub_1405c4ec0(&var_140)
    rsi_3 = var_138:4.d
    r14_12 = var_138.d
    rbx_16 = var_140

sub_140745220(rbx_16 + sx.q(r15_8) * 0x28, &var_180)

if (var_168_30 != 0)
    sub_140a74f90(var_168_30)

sub_140b58260(&var_188, u"Right Vector World", 1)
var_180 = var_188
int64_t var_178_31 = data_14396f0c8
var_170_4.w = data_14396f0d0
var_170_4 = 0xffffffff
int64_t var_168_31 = 0
int64_t var_160_31 = 0
var_138.d = r14_12 + 1

if (r14_12 + 1 s> rsi_3)
    sub_1405c4ec0(&var_140)
    rbx_16 = var_140

sub_140745220(rbx_16 + sx.q(r14_12) * 0x28, &var_180)

if (var_168_31 != 0)
    sub_140a74f90(var_168_31)

int64_t rbx_17 = sx.q(arg2[1].d)
int32_t rax_165 = (rbx_17 + 1).d
arg2[1].d = rax_165

if (rax_165 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_17 * 0x88 + *arg2, &var_158)
sub_1405ae080(&var_120)
sub_140745ac0(&var_140)
int64_t result = sub_140745ac0(&var_150)
__security_check_cookie(rax_1 ^ &var_1a8)
return result

// 函数: sub_140798620
// 地址: 0x140798620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_508
int64_t rax_1 = __security_cookie ^ &var_508
int64_t var_4a8 = 1
int64_t* var_4b0 = nullptr
int64_t var_4a0
__builtin_memset(&var_4a0, 0, 0x18)
int64_t var_480
__builtin_memset(&var_480, 0, 0x2c)
int32_t var_454 = 0x80
int32_t var_450 = 0xffffffff
int32_t var_44c = 0
int64_t var_440 = 0
int32_t var_438 = 0
int64_t var_4e8
sub_140b58260(&var_4e8, u"PerformCollisionQuery", 1)
int64_t var_4b8 = var_4e8
int32_t var_488
int32_t var_488_1 = (var_488 & 0xffffffda) | 0x1a
sub_140b58260(&var_4e8, u"CollisionQuery", 1)
int64_t var_4e0 = var_4e8
int64_t var_4d8 = *(arg1 + 0x10)
int32_t var_4d0 = 0xffff0001
int16_t var_4cc = 0xffff
int64_t var_4c8 = 0
int64_t var_4c0 = 0
sub_1405c4ec0(&var_4b0)
int64_t* rbx = var_4b0
sub_140745220(rbx, &var_4e0)

if (var_4c8 != 0)
    sub_140a74f90(var_4c8)

sub_140b58260(&var_4e8, u"ReturnQueryID", 1)
int64_t r15 = sx.q(var_4a8.d)
int32_t rsi = var_4a8:4.d
var_4e0 = var_4e8
int32_t r14 = (r15 + 1).d
int64_t var_4d8_1 = data_14396f0a8
var_4d0.w = data_14396f0b0
var_4d0 = 0xffffffff
int64_t var_4c8_1 = 0
int64_t var_4c0_1 = 0
var_4a8.d = r14

if (r14 s> rsi)
    sub_1405c4ec0(&var_4b0)
    rsi = var_4a8:4.d
    r14 = var_4a8.d
    rbx = var_4b0

sub_140745220(&rbx[r15 * 5], &var_4e0)

if (var_4c8_1 != 0)
    sub_140a74f90(var_4c8_1)

sub_140b58260(&var_4e8, u"ParticlePosition", 1)
int32_t r15_1 = r14 + 1
var_4e0 = var_4e8
int64_t var_4d8_2 = data_14396f0c8
var_4d0.w = data_14396f0d0
var_4d0 = 0xffffffff
int64_t var_4c8_2 = 0
int64_t var_4c0_2 = 0
var_4a8.d = r15_1

if (r15_1 s> rsi)
    sub_1405c4ec0(&var_4b0)
    rsi = var_4a8:4.d
    r15_1 = var_4a8.d
    rbx = var_4b0

sub_140745220(&rbx[sx.q(r14) * 5], &var_4e0)

if (var_4c8_2 != 0)
    sub_140a74f90(var_4c8_2)

sub_140b58260(&var_4e8, u"Direction", 1)
int32_t r14_1 = r15_1 + 1
var_4e0 = var_4e8
int64_t var_4d8_3 = data_14396f0c8
var_4d0.w = data_14396f0d0
var_4d0 = 0xffffffff
int64_t var_4c8_3 = 0
int64_t var_4c0_3 = 0
var_4a8.d = r14_1

if (r14_1 s> rsi)
    sub_1405c4ec0(&var_4b0)
    rsi = var_4a8:4.d
    r14_1 = var_4a8.d
    rbx = var_4b0

sub_140745220(&rbx[sx.q(r15_1) * 5], &var_4e0)

if (var_4c8_3 != 0)
    sub_140a74f90(var_4c8_3)

sub_140b58260(&var_4e8, u"DeltaTime", 1)
int32_t r15_2 = r14_1 + 1
var_4e0 = var_4e8
int64_t var_4d8_4 = data_14396f088
var_4d0.w = data_14396f090
var_4d0 = 0xffffffff
int64_t var_4c8_4 = 0
int64_t var_4c0_4 = 0
var_4a8.d = r15_2

if (r15_2 s> rsi)
    sub_1405c4ec0(&var_4b0)
    rsi = var_4a8:4.d
    r15_2 = var_4a8.d
    rbx = var_4b0

sub_140745220(&rbx[sx.q(r14_1) * 5], &var_4e0)

if (var_4c8_4 != 0)
    sub_140a74f90(var_4c8_4)

sub_140b58260(&var_4e8, u"CollisionSize", 1)
int32_t r14_2 = r15_2 + 1
var_4e0 = var_4e8
int64_t var_4d8_5 = data_14396f088
var_4d0.w = data_14396f090
var_4d0 = 0xffffffff
int64_t var_4c8_5 = 0
int64_t var_4c0_5 = 0
var_4a8.d = r14_2

if (r14_2 s> rsi)
    sub_1405c4ec0(&var_4b0)
    rsi = var_4a8:4.d
    r14_2 = var_4a8.d
    rbx = var_4b0

sub_140745220(&rbx[sx.q(r15_2) * 5], &var_4e0)

if (var_4c8_5 != 0)
    sub_140a74f90(var_4c8_5)

sub_140b58260(&var_4e8, u"DepthBounds", 1)
var_4e0 = var_4e8
int64_t var_4d8_6 = data_14396f088
var_4d0.w = data_14396f090
var_4d0 = 0xffffffff
int64_t var_4c8_6 = 0
int64_t var_4c0_6 = 0
var_4a8.d = r14_2 + 1

if (r14_2 + 1 s> rsi)
    sub_1405c4ec0(&var_4b0)
    rbx = var_4b0

sub_140745220(&rbx[sx.q(r14_2) * 5], &var_4e0)

if (var_4c8_6 != 0)
    sub_140a74f90(var_4c8_6)

sub_140b58260(&var_4e8, u"QueryID", 1)
int64_t var_498
int64_t rbx_1 = sx.q(var_498.d)
int32_t rsi_1 = var_498:4.d
var_4e0 = var_4e8
int32_t r14_3 = (rbx_1 + 1).d
int64_t var_4d8_7 = data_14396f0a8
var_4d0.w = data_14396f0b0
var_4d0 = 0xffffffff
int64_t var_4c8_7 = 0
int64_t var_4c0_7 = 0
var_498.d = r14_3

if (r14_3 s> rsi_1)
    sub_1405c4ec0(&var_4a0)
    rsi_1 = var_498:4.d
    r14_3 = var_498.d

int64_t rbx_2 = var_4a0
sub_140745220(rbx_2 + rbx_1 * 0x28, &var_4e0)

if (var_4c8_7 != 0)
    sub_140a74f90(var_4c8_7)

sub_140b58260(&var_4e8, u"CollisionValid", 1)
int32_t r15_3 = r14_3 + 1
var_4e0 = var_4e8
int64_t var_4d8_8 = data_14396f098
var_4d0.w = data_14396f0a0
var_4d0 = 0xffffffff
int64_t var_4c8_8 = 0
int64_t var_4c0_8 = 0
var_498.d = r15_3

if (r15_3 s> rsi_1)
    sub_1405c4ec0(&var_4a0)
    rsi_1 = var_498:4.d
    r15_3 = var_498.d
    rbx_2 = var_4a0

sub_140745220(rbx_2 + sx.q(r14_3) * 0x28, &var_4e0)

if (var_4c8_8 != 0)
    sub_140a74f90(var_4c8_8)

sub_140b58260(&var_4e8, u"CollisionPos", 1)
int32_t r14_4 = r15_3 + 1
var_4e0 = var_4e8
int64_t var_4d8_9 = data_14396f0c8
var_4d0.w = data_14396f0d0
var_4d0 = 0xffffffff
int64_t var_4c8_9 = 0
int64_t var_4c0_9 = 0
var_498.d = r14_4

if (r14_4 s> rsi_1)
    sub_1405c4ec0(&var_4a0)
    rsi_1 = var_498:4.d
    r14_4 = var_498.d
    rbx_2 = var_4a0

sub_140745220(rbx_2 + sx.q(r15_3) * 0x28, &var_4e0)

if (var_4c8_9 != 0)
    sub_140a74f90(var_4c8_9)

sub_140b58260(&var_4e8, u"CollisionNormal", 1)
int32_t r15_4 = r14_4 + 1
var_4e0 = var_4e8
int64_t var_4d8_10 = data_14396f0c8
var_4d0.w = data_14396f0d0
var_4d0 = 0xffffffff
int64_t var_4c8_10 = 0
int64_t var_4c0_10 = 0
var_498.d = r15_4

if (r15_4 s> rsi_1)
    sub_1405c4ec0(&var_4a0)
    rsi_1 = var_498:4.d
    r15_4 = var_498.d
    rbx_2 = var_4a0

sub_140745220(rbx_2 + sx.q(r14_4) * 0x28, &var_4e0)

if (var_4c8_10 != 0)
    sub_140a74f90(var_4c8_10)

sub_140b58260(&var_4e8, u"Friction", 1)
int32_t r14_5 = r15_4 + 1
var_4e0 = var_4e8
int64_t var_4d8_11 = data_14396f088
var_4d0.w = data_14396f090
var_4d0 = 0xffffffff
int64_t var_4c8_11 = 0
int64_t var_4c0_11 = 0
var_498.d = r14_5

if (r14_5 s> rsi_1)
    sub_1405c4ec0(&var_4a0)
    rsi_1 = var_498:4.d
    r14_5 = var_498.d
    rbx_2 = var_4a0

sub_140745220(rbx_2 + sx.q(r15_4) * 0x28, &var_4e0)

if (var_4c8_11 != 0)
    sub_140a74f90(var_4c8_11)

sub_140b58260(&var_4e8, u"Restitution", 1)
var_4e0 = var_4e8
int64_t var_4d8_12 = data_14396f088
var_4d0.w = data_14396f090
var_4d0 = 0xffffffff
int64_t var_4c8_12 = 0
int64_t var_4c0_12 = 0
var_498.d = r14_5 + 1

if (r14_5 + 1 s> rsi_1)
    sub_1405c4ec0(&var_4a0)
    rbx_2 = var_4a0

sub_140745220(rbx_2 + sx.q(r14_5) * 0x28, &var_4e0)

if (var_4c8_12 != 0)
    sub_140a74f90(var_4c8_12)

int64_t rbx_3 = sx.q(arg2[1].d)
int32_t rax_56 = (rbx_3 + 1).d
arg2[1].d = rax_56

if (rax_56 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_3 * 0x88 + *arg2, &var_4b8)
int64_t* var_150 = nullptr
int64_t var_148 = 1
int64_t var_140 = 0
int32_t var_138 = 0
int64_t var_130 = 0
int64_t var_120
__builtin_memset(&var_120, 0, 0x2c)
int32_t var_f4 = 0x80
int32_t var_f0 = 0xffffffff
int32_t var_ec = 0
int64_t var_e0 = 0
int32_t var_d8 = 0
sub_140b58260(&var_4e8, u"SubmitQuery", 1)
int64_t var_158 = var_4e8
int32_t var_128
int32_t var_128_1 = (var_128 & 0xffffffca) | 0xa
sub_140b58260(&var_4e8, u"CollisionQuery", 1)
var_4e0 = var_4e8
int64_t var_4d8_13 = *(arg1 + 0x10)
int32_t var_4d0_1 = 0xffff0001
int16_t var_4cc_1 = 0xffff
int64_t var_4c8_13 = 0
int64_t var_4c0_13 = 0
sub_1405c4ec0(&var_150)
int64_t* rsi_2 = var_150
sub_140745220(rsi_2, &var_4e0)

if (var_4c8_13 != 0)
    sub_140a74f90(var_4c8_13)

sub_140b58260(&var_4e8, u"ParticlePosition", 1)
int64_t rbx_4 = sx.q(var_148.d)
int32_t r15_5 = var_148:4.d
var_4e0 = var_4e8
int32_t r14_6 = (rbx_4 + 1).d
int64_t var_4d8_14 = data_14396f0c8
var_4d0_1.w = data_14396f0d0
var_4d0_1 = 0xffffffff
int64_t var_4c8_14 = 0
int64_t var_4c0_14 = 0
var_148.d = r14_6

if (r14_6 s> r15_5)
    sub_1405c4ec0(&var_150)
    r15_5 = var_148:4.d
    r14_6 = var_148.d
    rsi_2 = var_150

sub_140745220(&rsi_2[rbx_4 * 5], &var_4e0)

if (var_4c8_14 != 0)
    sub_140a74f90(var_4c8_14)

sub_140b58260(&var_4e8, u"ParticleVelocity", 1)
int32_t rbx_5 = r14_6 + 1
var_4e0 = var_4e8
int64_t var_4d8_15 = data_14396f0c8
var_4d0_1.w = data_14396f0d0
var_4d0_1 = 0xffffffff
int64_t var_4c8_15 = 0
int64_t var_4c0_15 = 0
var_148.d = rbx_5

if (rbx_5 s> r15_5)
    sub_1405c4ec0(&var_150)
    r15_5 = var_148:4.d
    rbx_5 = var_148.d
    rsi_2 = var_150

sub_140745220(&rsi_2[sx.q(r14_6) * 5], &var_4e0)

if (var_4c8_15 != 0)
    sub_140a74f90(var_4c8_15)

sub_140b58260(&var_4e8, u"DeltaTime", 1)
var_4e0 = var_4e8
int64_t var_4d8_16 = data_14396f088
var_4d0_1.w = data_14396f090
var_4d0_1 = 0xffffffff
int64_t var_4c8_16 = 0
int64_t var_4c0_16 = 0
var_148.d = rbx_5 + 1

if (rbx_5 + 1 s> r15_5)
    sub_1405c4ec0(&var_150)
    rsi_2 = var_150

sub_140745220(&rsi_2[sx.q(rbx_5) * 5], &var_4e0)

if (var_4c8_16 != 0)
    sub_140a74f90(var_4c8_16)

sub_140b58260(&var_4e8, u"CollisionID", 1)
int64_t rbx_6 = sx.q(var_138)
var_4e0 = var_4e8
int64_t var_4d8_17 = data_14396f0a8
var_4d0_1.w = data_14396f0b0
int32_t rax_78 = (rbx_6 + 1).d
var_4d0_1 = 0xffffffff
int64_t var_4c8_17 = 0
int64_t var_4c0_17 = 0
var_138 = rax_78

if (rax_78 s> 0)
    sub_1405c4ec0(&var_140)

sub_140745220(var_140 + rbx_6 * 0x28, &var_4e0)

if (var_4c8_17 != 0)
    sub_140a74f90(var_4c8_17)

int64_t rbx_7 = sx.q(arg2[1].d)
int32_t rax_80 = (rbx_7 + 1).d
arg2[1].d = rax_80

if (rax_80 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_7 * 0x88 + *arg2, &var_158)
int64_t* var_1e0 = nullptr
int32_t var_1d8 = 1
int64_t var_1d0
__builtin_memset(&var_1d0, 0, 0x18)
int64_t var_1b0
__builtin_memset(&var_1b0, 0, 0x2c)
int32_t var_184 = 0x80
int32_t var_180 = 0xffffffff
int32_t var_17c = 0
int64_t var_170 = 0
int32_t var_168 = 0
sub_140b58260(&var_4e8, u"ReadQuery", 1)
int64_t var_1e8 = var_4e8
int32_t var_1b8
int32_t var_1b8_1 = (var_1b8 & 0xffffffca) | 0xa
sub_140b58260(&var_4e8, u"CollisionQuery", 1)
var_4e0 = var_4e8
int64_t var_4d8_18 = *(arg1 + 0x10)
int32_t var_4d0_2 = 0xffff0001
int16_t var_4cc_2 = 0xffff
int64_t var_4c8_18 = 0
int64_t var_4c0_18 = 0
sub_1405c4ec0(&var_1e0)
int64_t* rsi_3 = var_1e0
sub_140745220(rsi_3, &var_4e0)

if (var_4c8_18 != 0)
    sub_140a74f90(var_4c8_18)

sub_140b58260(&var_4e8, u"CollisionID", 1)
int64_t rbx_8 = sx.q(var_1d8)
var_4e0 = var_4e8
int64_t var_4d8_19 = data_14396f0a8
var_4d0_2.w = data_14396f0b0
int32_t rax_90 = (rbx_8 + 1).d
var_4d0_2 = 0xffffffff
int64_t var_4c8_19 = 0
int64_t var_4c0_19 = 0
var_1d8 = rax_90

if (rax_90 s> 0)
    sub_1405c4ec0(&var_1e0)
    rsi_3 = var_1e0

sub_140745220(&rsi_3[rbx_8 * 5], &var_4e0)

if (var_4c8_19 != 0)
    sub_140a74f90(var_4c8_19)

sub_140b58260(&var_4e8, u"CollisionValid", 1)
int64_t var_1c8
int64_t rbx_9 = sx.q(var_1c8.d)
int32_t rsi_4 = var_1c8:4.d
var_4e0 = var_4e8
int32_t r14_7 = (rbx_9 + 1).d
int64_t var_4d8_20 = data_14396f098
var_4d0_2.w = data_14396f0a0
var_4d0_2 = 0xffffffff
int64_t var_4c8_20 = 0
int64_t var_4c0_20 = 0
var_1c8.d = r14_7

if (r14_7 s> rsi_4)
    sub_1405c4ec0(&var_1d0)
    rsi_4 = var_1c8:4.d
    r14_7 = var_1c8.d

int64_t rbx_10 = var_1d0
sub_140745220(rbx_10 + rbx_9 * 0x28, &var_4e0)

if (var_4c8_20 != 0)
    sub_140a74f90(var_4c8_20)

sub_140b58260(&var_4e8, u"CollisionPos", 1)
int32_t r15_6 = r14_7 + 1
var_4e0 = var_4e8
int64_t var_4d8_21 = data_14396f0c8
var_4d0_2.w = data_14396f0d0
var_4d0_2 = 0xffffffff
int64_t var_4c8_21 = 0
int64_t var_4c0_21 = 0
var_1c8.d = r15_6

if (r15_6 s> rsi_4)
    sub_1405c4ec0(&var_1d0)
    rsi_4 = var_1c8:4.d
    r15_6 = var_1c8.d
    rbx_10 = var_1d0

sub_140745220(rbx_10 + sx.q(r14_7) * 0x28, &var_4e0)

if (var_4c8_21 != 0)
    sub_140a74f90(var_4c8_21)

sub_140b58260(&var_4e8, u"CollisionVelocity", 1)
int32_t r14_8 = r15_6 + 1
var_4e0 = var_4e8
int64_t var_4d8_22 = data_14396f0c8
var_4d0_2.w = data_14396f0d0
var_4d0_2 = 0xffffffff
int64_t var_4c8_22 = 0
int64_t var_4c0_22 = 0
var_1c8.d = r14_8

if (r14_8 s> rsi_4)
    sub_1405c4ec0(&var_1d0)
    rsi_4 = var_1c8:4.d
    r14_8 = var_1c8.d
    rbx_10 = var_1d0

sub_140745220(rbx_10 + sx.q(r15_6) * 0x28, &var_4e0)

if (var_4c8_22 != 0)
    sub_140a74f90(var_4c8_22)

sub_140b58260(&var_4e8, u"CollisionNormal", 1)
var_4e0 = var_4e8
int64_t var_4d8_23 = data_14396f0c8
var_4d0_2.w = data_14396f0d0
var_4d0_2 = 0xffffffff
int64_t var_4c8_23 = 0
int64_t var_4c0_23 = 0
var_1c8.d = r14_8 + 1

if (r14_8 + 1 s> rsi_4)
    sub_1405c4ec0(&var_1d0)
    rbx_10 = var_1d0

sub_140745220(rbx_10 + sx.q(r14_8) * 0x28, &var_4e0)

if (var_4c8_23 != 0)
    sub_140a74f90(var_4c8_23)

int64_t rbx_11 = sx.q(arg2[1].d)
int32_t rax_107 = (rbx_11 + 1).d
arg2[1].d = rax_107

if (rax_107 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_11 * 0x88 + *arg2, &var_1e8)
int64_t* var_390 = nullptr
int64_t var_388 = 1
int64_t var_380
__builtin_memset(&var_380, 0, 0x18)
int64_t var_360
__builtin_memset(&var_360, 0, 0x2c)
int32_t var_334 = 0x80
int32_t var_330 = 0xffffffff
int32_t var_32c = 0
int64_t var_320 = 0
int32_t var_318 = 0
sub_140b58260(&var_4e8, u"PerformCollisionQueryGPUShader", 1)
int64_t var_398 = var_4e8
int32_t var_368
int32_t var_368_1 = (var_368 & 0xffffffd2) | 0x12
sub_140b58260(&var_4e8, u"CollisionQuery", 1)
var_4e0 = var_4e8
int64_t var_4d8_24 = *(arg1 + 0x10)
int32_t var_4d0_3 = 0xffff0001
int16_t var_4cc_3 = 0xffff
int64_t var_4c8_24 = 0
int64_t var_4c0_24 = 0
sub_1405c4ec0(&var_390)
int64_t* rbx_12 = var_390
sub_140745220(rbx_12, &var_4e0)

if (var_4c8_24 != 0)
    sub_140a74f90(var_4c8_24)

sub_140b58260(&var_4e8, u"DepthSamplePosWorld", 1)
int64_t r15_7 = sx.q(var_388.d)
int32_t rsi_5 = var_388:4.d
var_4e0 = var_4e8
int32_t r14_9 = (r15_7 + 1).d
int64_t var_4d8_25 = data_14396f0c8
var_4d0_3.w = data_14396f0d0
var_4d0_3 = 0xffffffff
int64_t var_4c8_25 = 0
int64_t var_4c0_25 = 0
var_388.d = r14_9

if (r14_9 s> rsi_5)
    sub_1405c4ec0(&var_390)
    rsi_5 = var_388:4.d
    r14_9 = var_388.d
    rbx_12 = var_390

sub_140745220(&rbx_12[r15_7 * 5], &var_4e0)

if (var_4c8_25 != 0)
    sub_140a74f90(var_4c8_25)

sub_140b58260(&var_4e8, u"TraceEndWorld", 1)
int32_t r15_8 = r14_9 + 1
var_4e0 = var_4e8
int64_t var_4d8_26 = data_14396f0c8
var_4d0_3.w = data_14396f0d0
var_4d0_3 = 0xffffffff
int64_t var_4c8_26 = 0
int64_t var_4c0_26 = 0
var_388.d = r15_8

if (r15_8 s> rsi_5)
    sub_1405c4ec0(&var_390)
    rsi_5 = var_388:4.d
    r15_8 = var_388.d
    rbx_12 = var_390

sub_140745220(&rbx_12[sx.q(r14_9) * 5], &var_4e0)

if (var_4c8_26 != 0)
    sub_140a74f90(var_4c8_26)

sub_140b58260(&var_4e8, u"SceneDepthBounds", 1)
var_4e0 = var_4e8
int64_t var_4c8_27 = 0
int64_t var_4c0_27 = 0
int32_t r13 = r15_8 + 1
int64_t var_4d8_27 = data_14396f088
var_4d0_3.w = data_14396f090
var_4d0_3 = 0xffffffff
var_388.d = r13

if (r13 s> rsi_5)
    sub_1405c4ec0(&var_390)
    rsi_5 = var_388:4.d
    r13 = var_388.d
    rbx_12 = var_390

sub_140745220(&rbx_12[sx.q(r15_8) * 5], &var_4e0)

if (var_4c8_27 != 0)
    sub_140a74f90(var_4c8_27)

sub_140b58260(&var_4e8, u"ParticleRadius", 1)
int32_t r14_10 = r13 + 1
var_4e0 = var_4e8
int64_t var_4d8_28 = data_14396f088
var_4d0_3.w = data_14396f090
var_4d0_3 = 0xffffffff
int64_t var_4c8_28 = 0
int64_t var_4c0_28 = 0
var_388.d = r14_10

if (r14_10 s> rsi_5)
    sub_1405c4ec0(&var_390)
    rsi_5 = var_388:4.d
    r14_10 = var_388.d
    rbx_12 = var_390

sub_140745220(&rbx_12[sx.q(r13) * 5], &var_4e0)

if (var_4c8_28 != 0)
    sub_140a74f90(var_4c8_28)

sub_140b58260(&var_4e8, u"UseMeshDistanceField", 1)
var_4e0 = var_4e8
int64_t var_4d8_29 = data_14396f098
var_4d0_3.w = data_14396f0a0
var_4d0_3 = 0xffffffff
int64_t var_4c8_29 = 0
int64_t var_4c0_29 = 0
var_388.d = r14_10 + 1

if (r14_10 + 1 s> rsi_5)
    sub_1405c4ec0(&var_390)
    rbx_12 = var_390

sub_140745220(&rbx_12[sx.q(r14_10) * 5], &var_4e0)

if (var_4c8_29 != 0)
    sub_140a74f90(var_4c8_29)

sub_140b58260(&var_4e8, u"CollisionValid", 1)
int64_t var_378
int64_t rsi_6 = sx.q(var_378.d)
int32_t r15_9 = var_378:4.d
var_4e0 = var_4e8
int32_t rbx_13 = (rsi_6 + 1).d
int64_t var_4d8_30 = data_14396f098
var_4d0_3.w = data_14396f0a0
var_4d0_3 = 0xffffffff
int64_t var_4c8_30 = 0
int64_t var_4c0_30 = 0
var_378.d = rbx_13

if (rbx_13 s> r15_9)
    sub_1405c4ec0(&var_380)
    r15_9 = var_378:4.d
    rbx_13 = var_378.d

int64_t r14_11 = var_380
sub_140745220(r14_11 + rsi_6 * 0x28, &var_4e0)

if (var_4c8_30 != 0)
    sub_140a74f90(var_4c8_30)

sub_140b58260(&var_4e8, u"CollisionPosWorld", 1)
int32_t rsi_7 = rbx_13 + 1
var_4e0 = var_4e8
int64_t var_4d8_31 = data_14396f0c8
var_4d0_3.w = data_14396f0d0
var_4d0_3 = 0xffffffff
int64_t var_4c8_31 = 0
int64_t var_4c0_31 = 0
var_378.d = rsi_7

if (rsi_7 s> r15_9)
    sub_1405c4ec0(&var_380)
    r15_9 = var_378:4.d
    rsi_7 = var_378.d
    r14_11 = var_380

sub_140745220(r14_11 + sx.q(rbx_13) * 0x28, &var_4e0)

if (var_4c8_31 != 0)
    sub_140a74f90(var_4c8_31)

sub_140b58260(&var_4e8, u"CollisionNormal", 1)
var_4e0 = var_4e8
int64_t var_4d8_32 = data_14396f0c8
var_4d0_3.w = data_14396f0d0
var_4d0_3 = 0xffffffff
int64_t var_4c8_32 = 0
int64_t var_4c0_32 = 0
var_378.d = rsi_7 + 1

if (rsi_7 + 1 s> r15_9)
    sub_1405c4ec0(&var_380)
    r14_11 = var_380

sub_140745220(r14_11 + sx.q(rsi_7) * 0x28, &var_4e0)

if (var_4c8_32 != 0)
    sub_140a74f90(var_4c8_32)

int64_t rbx_14 = sx.q(arg2[1].d)
int32_t rax_146 = (rbx_14 + 1).d
arg2[1].d = rax_146

if (rax_146 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_14 * 0x88 + *arg2, &var_398)
int64_t* var_270 = nullptr
int32_t var_268 = 1
int64_t var_260
__builtin_memset(&var_260, 0, 0x18)
int64_t var_240
__builtin_memset(&var_240, 0, 0x2c)
int32_t var_214 = 0x80
int32_t var_210 = 0xffffffff
int32_t var_20c = 0
int64_t var_200 = 0
int32_t var_1f8 = 0
sub_140b58260(&var_4e8, u"QuerySceneDepthGPU", 1)
int64_t var_278 = var_4e8
int32_t var_248
int32_t var_248_1 = (var_248 & 0xffffffd2) | 0x12
sub_140b58260(&var_4e8, u"CollisionQuery", 1)
var_4e0 = var_4e8
int64_t var_4d8_33 = *(arg1 + 0x10)
int32_t var_4d0_4 = 0xffff0001
int16_t var_4cc_4 = 0xffff
int64_t var_4c8_33 = 0
int64_t var_4c0_33 = 0
sub_1405c4ec0(&var_270)
int64_t* rsi_8 = var_270
sub_140745220(rsi_8, &var_4e0)

if (var_4c8_33 != 0)
    sub_140a74f90(var_4c8_33)

sub_140b58260(&var_4e8, u"DepthSamplePosWorld", 1)
int64_t rbx_15 = sx.q(var_268)
var_4e0 = var_4e8
int64_t var_4d8_34 = data_14396f0c8
var_4d0_4.w = data_14396f0d0
int32_t rax_156 = (rbx_15 + 1).d
var_4d0_4 = 0xffffffff
int64_t var_4c8_34 = 0
int64_t var_4c0_34 = 0
var_268 = rax_156

if (rax_156 s> 0)
    sub_1405c4ec0(&var_270)
    rsi_8 = var_270

sub_140745220(&rsi_8[rbx_15 * 5], &var_4e0)

if (var_4c8_34 != 0)
    sub_140a74f90(var_4c8_34)

sub_140b58260(&var_4e8, u"SceneDepth", 1)
int64_t var_258
int64_t rbx_16 = sx.q(var_258.d)
int32_t rsi_9 = var_258:4.d
var_4e0 = var_4e8
int32_t r14_12 = (rbx_16 + 1).d
int64_t var_4d8_35 = data_14396f088
var_4d0_4.w = data_14396f090
var_4d0_4 = 0xffffffff
int64_t var_4c8_35 = 0
int64_t var_4c0_35 = 0
var_258.d = r14_12

if (r14_12 s> rsi_9)
    sub_1405c4ec0(&var_260)
    rsi_9 = var_258:4.d
    r14_12 = var_258.d

int64_t rbx_17 = var_260
sub_140745220(rbx_17 + rbx_16 * 0x28, &var_4e0)

if (var_4c8_35 != 0)
    sub_140a74f90(var_4c8_35)

sub_140b58260(&var_4e8, u"CameraPosWorld", 1)
int32_t r15_10 = r14_12 + 1
var_4e0 = var_4e8
int64_t var_4d8_36 = data_14396f0c8
var_4d0_4.w = data_14396f0d0
var_4d0_4 = 0xffffffff
int64_t var_4c8_36 = 0
int64_t var_4c0_36 = 0
var_258.d = r15_10

if (r15_10 s> rsi_9)
    sub_1405c4ec0(&var_260)
    rsi_9 = var_258:4.d
    r15_10 = var_258.d
    rbx_17 = var_260

sub_140745220(rbx_17 + sx.q(r14_12) * 0x28, &var_4e0)

if (var_4c8_36 != 0)
    sub_140a74f90(var_4c8_36)

sub_140b58260(&var_4e8, u"IsInsideView", 1)
var_4e0 = var_4e8
int64_t var_4c8_37 = 0
int64_t var_4c0_37 = 0
int32_t r13_1 = r15_10 + 1
int64_t var_4d8_37 = data_14396f098
var_4d0_4.w = data_14396f0a0
var_4d0_4 = 0xffffffff
var_258.d = r13_1

if (r13_1 s> rsi_9)
    sub_1405c4ec0(&var_260)
    rsi_9 = var_258:4.d
    r13_1 = var_258.d
    rbx_17 = var_260

sub_140745220(rbx_17 + sx.q(r15_10) * 0x28, &var_4e0)

if (var_4c8_37 != 0)
    sub_140a74f90(var_4c8_37)

sub_140b58260(&var_4e8, u"SamplePosWorld", 1)
int32_t r14_13 = r13_1 + 1
var_4e0 = var_4e8
int64_t var_4d8_38 = data_14396f0c8
var_4d0_4.w = data_14396f0d0
var_4d0_4 = 0xffffffff
int64_t var_4c8_38 = 0
int64_t var_4c0_38 = 0
var_258.d = r14_13

if (r14_13 s> rsi_9)
    sub_1405c4ec0(&var_260)
    rsi_9 = var_258:4.d
    r14_13 = var_258.d
    rbx_17 = var_260

sub_140745220(rbx_17 + sx.q(r13_1) * 0x28, &var_4e0)

if (var_4c8_38 != 0)
    sub_140a74f90(var_4c8_38)

sub_140b58260(&var_4e8, u"SampleWorldNormal", 1)
var_4e0 = var_4e8
int64_t var_4d8_39 = data_14396f0c8
var_4d0_4.w = data_14396f0d0
var_4d0_4 = 0xffffffff
int64_t var_4c8_39 = 0
int64_t var_4c0_39 = 0
var_258.d = r14_13 + 1

if (r14_13 + 1 s> rsi_9)
    sub_1405c4ec0(&var_260)
    rbx_17 = var_260

sub_140745220(rbx_17 + sx.q(r14_13) * 0x28, &var_4e0)

if (var_4c8_39 != 0)
    sub_140a74f90(var_4c8_39)

int64_t rbx_18 = sx.q(arg2[1].d)
int32_t rax_177 = (rbx_18 + 1).d
arg2[1].d = rax_177

if (rax_177 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_18 * 0x88 + *arg2, &var_278)
int64_t* var_c0 = nullptr
int32_t var_b8 = 1
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x18)
int64_t var_90
__builtin_memset(&var_90, 0, 0x2c)
int32_t var_64 = 0x80
int32_t var_60 = 0xffffffff
int32_t var_5c = 0
int64_t var_50 = 0
int32_t var_48 = 0
sub_140b58260(&var_4e8, u"QueryMeshDistanceFieldGPU", 1)
int64_t var_c8 = var_4e8
int32_t var_98
int32_t var_98_1 = (var_98 & 0xffffffd2) | 0x12
sub_140b58260(&var_4e8, u"CollisionQuery", 1)
var_4e0 = var_4e8
int64_t var_4d8_40 = *(arg1 + 0x10)
int32_t var_4d0_5 = 0xffff0001
int16_t var_4cc_5 = 0xffff
int64_t var_4c8_40 = 0
int64_t var_4c0_40 = 0
sub_1405c4ec0(&var_c0)
int64_t* rsi_10 = var_c0
sub_140745220(rsi_10, &var_4e0)

if (var_4c8_40 != 0)
    sub_140a74f90(var_4c8_40)

sub_140b58260(&var_4e8, u"FieldSamplePosWorld", 1)
int64_t rbx_19 = sx.q(var_b8)
var_4e0 = var_4e8
int64_t var_4d8_41 = data_14396f0c8
var_4d0_5.w = data_14396f0d0
int32_t rax_187 = (rbx_19 + 1).d
var_4d0_5 = 0xffffffff
int64_t var_4c8_41 = 0
int64_t var_4c0_41 = 0
var_b8 = rax_187

if (rax_187 s> 0)
    sub_1405c4ec0(&var_c0)
    rsi_10 = var_c0

sub_140745220(&rsi_10[rbx_19 * 5], &var_4e0)

if (var_4c8_41 != 0)
    sub_140a74f90(var_4c8_41)

sub_140b58260(&var_4e8, u"DistanceToNearestSurface", 1)
int64_t var_a8
int64_t rsi_11 = sx.q(var_a8.d)
int32_t r14_14 = var_a8:4.d
var_4e0 = var_4e8
int32_t rbx_20 = (rsi_11 + 1).d
int64_t var_4d8_42 = data_14396f088
var_4d0_5.w = data_14396f090
var_4d0_5 = 0xffffffff
int64_t var_4c8_42 = 0
int64_t var_4c0_42 = 0
var_a8.d = rbx_20

if (rbx_20 s> r14_14)
    sub_1405c4ec0(&var_b0)
    r14_14 = var_a8:4.d
    rbx_20 = var_a8.d

int64_t rsi_12 = var_b0
sub_140745220(rsi_12 + rsi_11 * 0x28, &var_4e0)

if (var_4c8_42 != 0)
    sub_140a74f90(var_4c8_42)

sub_140b58260(&var_4e8, u"FieldGradient", 1)
var_4e0 = var_4e8
int64_t var_4d8_43 = data_14396f0c8
var_4d0_5.w = data_14396f0d0
var_4d0_5 = 0xffffffff
int64_t var_4c8_43 = 0
int64_t var_4c0_43 = 0
var_a8.d = rbx_20 + 1

if (rbx_20 + 1 s> r14_14)
    sub_1405c4ec0(&var_b0)
    rsi_12 = var_b0

sub_140745220(rsi_12 + sx.q(rbx_20) * 0x28, &var_4e0)

if (var_4c8_43 != 0)
    sub_140a74f90(var_4c8_43)

int64_t rbx_21 = sx.q(arg2[1].d)
int32_t rax_196 = (rbx_21 + 1).d
arg2[1].d = rax_196

if (rax_196 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_21 * 0x88 + *arg2, &var_c8)
int64_t* var_420 = nullptr
int64_t var_418 = 1
int64_t var_410
__builtin_memset(&var_410, 0, 0x18)
int64_t var_3f0
__builtin_memset(&var_3f0, 0, 0x2c)
int32_t var_3c4 = 0x80
int32_t var_3c0 = 0xffffffff
int32_t var_3bc = 0
int64_t var_3b0 = 0
int32_t var_3a8 = 0
sub_140b58260(&var_4e8, u"PerformCollisionQuerySyncCPU", 1)
int64_t var_428 = var_4e8
int32_t var_3f8
int32_t var_3f8_1 = (var_3f8 & 0xffffffca) | 0xa
sub_140b58260(&var_4e8, u"CollisionQuery", 1)
var_4e0 = var_4e8
int64_t var_4d8_44 = *(arg1 + 0x10)
int32_t var_4d0_6 = 0xffff0001
int16_t var_4cc_6 = 0xffff
int64_t var_4c8_44 = 0
int64_t var_4c0_44 = 0
sub_1405c4ec0(&var_420)
int64_t* rsi_13 = var_420
sub_140745220(rsi_13, &var_4e0)

if (var_4c8_44 != 0)
    sub_140a74f90(var_4c8_44)

sub_140b58260(&var_4e8, u"TraceStartWorld", 1)
int64_t r14_15 = sx.q(var_418.d)
int32_t r15_11 = var_418:4.d
var_4e0 = var_4e8
int32_t rbx_22 = (r14_15 + 1).d
int64_t var_4d8_45 = data_14396f0c8
var_4d0_6.w = data_14396f0d0
var_4d0_6 = 0xffffffff
int64_t var_4c8_45 = 0
int64_t var_4c0_45 = 0
var_418.d = rbx_22

if (rbx_22 s> r15_11)
    sub_1405c4ec0(&var_420)
    r15_11 = var_418:4.d
    rbx_22 = var_418.d
    rsi_13 = var_420

sub_140745220(&rsi_13[r14_15 * 5], &var_4e0)

if (var_4c8_45 != 0)
    sub_140a74f90(var_4c8_45)

sub_140b58260(&var_4e8, u"TraceEndWorld", 1)
int32_t r14_16 = rbx_22 + 1
var_4e0 = var_4e8
int64_t var_4d8_46 = data_14396f0c8
var_4d0_6.w = data_14396f0d0
var_4d0_6 = 0xffffffff
int64_t var_4c8_46 = 0
int64_t var_4c0_46 = 0
var_418.d = r14_16

if (r14_16 s> r15_11)
    sub_1405c4ec0(&var_420)
    r15_11 = var_418:4.d
    r14_16 = var_418.d
    rsi_13 = var_420

sub_140745220(&rsi_13[sx.q(rbx_22) * 5], &var_4e0)

if (var_4c8_46 != 0)
    sub_140a74f90(var_4c8_46)

sub_140b58260(&var_4e8, u"TraceChannel", 1)
var_4e0 = var_4e8
int64_t var_4d8_47 = *(arg1 + 0x38)
int32_t var_4d0_7 = 0xffff0003
int16_t var_4cc_7 = 0xffff
int64_t var_4c8_47 = 0
int64_t var_4c0_47 = 0
var_418.d = r14_16 + 1

if (r14_16 + 1 s> r15_11)
    sub_1405c4ec0(&var_420)
    rsi_13 = var_420

sub_140745220(&rsi_13[sx.q(r14_16) * 5], &var_4e0)

if (var_4c8_47 != 0)
    sub_140a74f90(var_4c8_47)

sub_140b58260(&var_4e8, u"CollisionValid", 1)
int64_t var_408
int64_t rbx_23 = sx.q(var_408.d)
int32_t rsi_14 = var_408:4.d
var_4e0 = var_4e8
int32_t r14_17 = (rbx_23 + 1).d
int64_t var_4d8_48 = data_14396f098
var_4d0_7.w = data_14396f0a0
var_4d0_7 = 0xffffffff
int64_t var_4c8_48 = 0
int64_t var_4c0_48 = 0
var_408.d = r14_17

if (r14_17 s> rsi_14)
    sub_1405c4ec0(&var_410)
    rsi_14 = var_408:4.d
    r14_17 = var_408.d

int64_t rbx_24 = var_410
sub_140745220(rbx_24 + rbx_23 * 0x28, &var_4e0)

if (var_4c8_48 != 0)
    sub_140a74f90(var_4c8_48)

sub_140b58260(&var_4e8, u"IsTraceInsideMesh", 1)
int32_t r15_12 = r14_17 + 1
var_4e0 = var_4e8
int64_t var_4d8_49 = data_14396f098
var_4d0_7.w = data_14396f0a0
var_4d0_7 = 0xffffffff
int64_t var_4c8_49 = 0
int64_t var_4c0_49 = 0
var_408.d = r15_12

if (r15_12 s> rsi_14)
    sub_1405c4ec0(&var_410)
    rsi_14 = var_408:4.d
    r15_12 = var_408.d
    rbx_24 = var_410

sub_140745220(rbx_24 + sx.q(r14_17) * 0x28, &var_4e0)

if (var_4c8_49 != 0)
    sub_140a74f90(var_4c8_49)

sub_140b58260(&var_4e8, u"CollisionPosWorld", 1)
int32_t r14_18 = r15_12 + 1
var_4e0 = var_4e8
int64_t var_4d8_50 = data_14396f0c8
var_4d0_7.w = data_14396f0d0
var_4d0_7 = 0xffffffff
int64_t var_4c8_50 = 0
int64_t var_4c0_50 = 0
var_408.d = r14_18

if (r14_18 s> rsi_14)
    sub_1405c4ec0(&var_410)
    rsi_14 = var_408:4.d
    r14_18 = var_408.d
    rbx_24 = var_410

sub_140745220(rbx_24 + sx.q(r15_12) * 0x28, &var_4e0)

if (var_4c8_50 != 0)
    sub_140a74f90(var_4c8_50)

sub_140b58260(&var_4e8, u"CollisionNormal", 1)
int32_t r15_13 = r14_18 + 1
var_4e0 = var_4e8
int64_t var_4d8_51 = data_14396f0c8
var_4d0_7.w = data_14396f0d0
var_4d0_7 = 0xffffffff
int64_t var_4c8_51 = 0
int64_t var_4c0_51 = 0
var_408.d = r15_13

if (r15_13 s> rsi_14)
    sub_1405c4ec0(&var_410)
    rsi_14 = var_408:4.d
    r15_13 = var_408.d
    rbx_24 = var_410

sub_140745220(rbx_24 + sx.q(r14_18) * 0x28, &var_4e0)

if (var_4c8_51 != 0)
    sub_140a74f90(var_4c8_51)

sub_140b58260(&var_4e8, u"CollisionMaterialFriction", 1)
int32_t r14_19 = r15_13 + 1
var_4e0 = var_4e8
int64_t var_4d8_52 = data_14396f088
var_4d0_7.w = data_14396f090
var_4d0_7 = 0xffffffff
int64_t var_4c8_52 = 0
int64_t var_4c0_52 = 0
var_408.d = r14_19

if (r14_19 s> rsi_14)
    sub_1405c4ec0(&var_410)
    rsi_14 = var_408:4.d
    r14_19 = var_408.d
    rbx_24 = var_410

sub_140745220(rbx_24 + sx.q(r15_13) * 0x28, &var_4e0)

if (var_4c8_52 != 0)
    sub_140a74f90(var_4c8_52)

sub_140b58260(&var_4e8, u"CollisionMaterialRestitution", 1)
var_4e0 = var_4e8
int64_t var_4d8_53 = data_14396f088
var_4d0_7.w = data_14396f090
var_4d0_7 = 0xffffffff
int64_t var_4c8_53 = 0
int64_t var_4c0_53 = 0
var_408.d = r14_19 + 1

if (r14_19 + 1 s> rsi_14)
    sub_1405c4ec0(&var_410)
    rbx_24 = var_410

sub_140745220(rbx_24 + sx.q(r14_19) * 0x28, &var_4e0)

if (var_4c8_53 != 0)
    sub_140a74f90(var_4c8_53)

int64_t rbx_25 = sx.q(arg2[1].d)
int32_t rax_238 = (rbx_25 + 1).d
arg2[1].d = rax_238

if (rax_238 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_25 * 0x88 + *arg2, &var_428)
int64_t var_308
sub_140745040(&var_308)
sub_140b58260(&var_4e8, u"PerformCollisionQueryAsyncCPU", 1)
var_308 = var_4e8
int32_t var_2d8
int32_t var_2d8_1 = (var_2d8 & 0xffffffee) | 2
sub_140b58260(&var_4e8, u"CollisionQuery", 1)
int32_t var_2f8
int64_t rbx_26 = sx.q(var_2f8)
int32_t var_2f4
int32_t rsi_15 = var_2f4
var_4e0 = var_4e8
int32_t r15_14 = (rbx_26 + 1).d
int64_t var_4d8_54 = *(arg1 + 0x10)
int32_t var_4d0_8 = 0xffff0001
int16_t var_4cc_8 = 0xffff
int64_t var_4c8_54 = 0
int64_t var_4c0_54 = 0
int64_t var_300

if (r15_14 s> rsi_15)
    sub_1405c4ec0(&var_300)
    rsi_15 = var_2f4

int64_t rbx_27 = var_300
sub_140745220(rbx_27 + rbx_26 * 0x28, &var_4e0)

if (var_4c8_54 != 0)
    sub_140a74f90(var_4c8_54)

sub_140b58260(&var_4e8, u"PreviousFrameQueryID", 1)
int32_t r14_20 = r15_14 + 1
var_4e0 = var_4e8
int64_t var_4d8_55 = data_14396f0a8
var_4d0_8.w = data_14396f0b0
var_4d0_8 = 0xffffffff
int64_t var_4c8_55 = 0
int64_t var_4c0_55 = 0

if (r14_20 s> rsi_15)
    sub_1405c4ec0(&var_300)
    rsi_15 = var_2f4
    rbx_27 = var_300

sub_140745220(rbx_27 + sx.q(r15_14) * 0x28, &var_4e0)

if (var_4c8_55 != 0)
    sub_140a74f90(var_4c8_55)

sub_140b58260(&var_4e8, u"TraceStartWorld", 1)
int32_t r15_15 = r14_20 + 1
var_4e0 = var_4e8
int64_t var_4d8_56 = data_14396f0c8
var_4d0_8.w = data_14396f0d0
var_4d0_8 = 0xffffffff
int64_t var_4c8_56 = 0
int64_t var_4c0_56 = 0

if (r15_15 s> rsi_15)
    sub_1405c4ec0(&var_300)
    rsi_15 = var_2f4
    rbx_27 = var_300

sub_140745220(rbx_27 + sx.q(r14_20) * 0x28, &var_4e0)

if (var_4c8_56 != 0)
    sub_140a74f90(var_4c8_56)

sub_140b58260(&var_4e8, u"TraceEndWorld", 1)
int32_t r14_21 = r15_15 + 1
var_4e0 = var_4e8
int64_t var_4d8_57 = data_14396f0c8
var_4d0_8.w = data_14396f0d0
var_4d0_8 = 0xffffffff
int64_t var_4c8_57 = 0
int64_t var_4c0_57 = 0

if (r14_21 s> rsi_15)
    sub_1405c4ec0(&var_300)
    rsi_15 = var_2f4
    rbx_27 = var_300

sub_140745220(rbx_27 + sx.q(r15_15) * 0x28, &var_4e0)

if (var_4c8_57 != 0)
    sub_140a74f90(var_4c8_57)

sub_140b58260(&var_4e8, u"TraceChannel", 1)
var_4e0 = var_4e8
int64_t var_4d8_58 = *(arg1 + 0x38)
int32_t var_4d0_9 = 0xffff0003
int16_t var_4cc_9 = 0xffff
int64_t var_4c8_58 = 0
int64_t var_4c0_58 = 0
int32_t var_2f8_5 = r14_21 + 1

if (r14_21 + 1 s> rsi_15)
    sub_1405c4ec0(&var_300)
    rbx_27 = var_300

sub_140745220(rbx_27 + sx.q(r14_21) * 0x28, &var_4e0)

if (var_4c8_58 != 0)
    sub_140a74f90(var_4c8_58)

sub_140b58260(&var_4e8, u"NextFrameQueryID", 1)
int32_t var_2e8
int64_t rbx_28 = sx.q(var_2e8)
int32_t var_2e4
int32_t rsi_16 = var_2e4
var_4e0 = var_4e8
int32_t r14_22 = (rbx_28 + 1).d
int64_t var_4d8_59 = data_14396f0a8
var_4d0_9.w = data_14396f0b0
var_4d0_9 = 0xffffffff
int64_t var_4c8_59 = 0
int64_t var_4c0_59 = 0
int64_t var_2f0

if (r14_22 s> rsi_16)
    sub_1405c4ec0(&var_2f0)
    rsi_16 = var_2e4

int64_t rbx_29 = var_2f0
sub_140745220(rbx_29 + rbx_28 * 0x28, &var_4e0)

if (var_4c8_59 != 0)
    sub_140a74f90(var_4c8_59)

sub_140b58260(&var_4e8, u"CollisionValid", 1)
var_4e0 = var_4e8
int64_t var_4c8_60 = 0
int64_t var_4c0_60 = 0
int32_t r13_2 = r14_22 + 1
int64_t var_4d8_60 = data_14396f098
var_4d0_9.w = data_14396f0a0
var_4d0_9 = 0xffffffff

if (r13_2 s> rsi_16)
    sub_1405c4ec0(&var_2f0)
    rsi_16 = var_2e4
    rbx_29 = var_2f0

sub_140745220(rbx_29 + sx.q(r14_22) * 0x28, &var_4e0)

if (var_4c8_60 != 0)
    sub_140a74f90(var_4c8_60)

sub_140b58260(&var_4e8, u"IsTraceInsideMesh", 1)
int32_t r15_16 = r13_2 + 1
var_4e0 = var_4e8
int64_t var_4d8_61 = data_14396f098
var_4d0_9.w = data_14396f0a0
var_4d0_9 = 0xffffffff
int64_t var_4c8_61 = 0
int64_t var_4c0_61 = 0

if (r15_16 s> rsi_16)
    sub_1405c4ec0(&var_2f0)
    rsi_16 = var_2e4
    rbx_29 = var_2f0

sub_140745220(rbx_29 + sx.q(r13_2) * 0x28, &var_4e0)

if (var_4c8_61 != 0)
    sub_140a74f90(var_4c8_61)

sub_140b58260(&var_4e8, u"CollisionPosWorld", 1)
int32_t r14_23 = r15_16 + 1
var_4e0 = var_4e8
int64_t var_4d8_62 = data_14396f0c8
var_4d0_9.w = data_14396f0d0
var_4d0_9 = 0xffffffff
int64_t var_4c8_62 = 0
int64_t var_4c0_62 = 0

if (r14_23 s> rsi_16)
    sub_1405c4ec0(&var_2f0)
    rsi_16 = var_2e4
    rbx_29 = var_2f0

sub_140745220(rbx_29 + sx.q(r15_16) * 0x28, &var_4e0)

if (var_4c8_62 != 0)
    sub_140a74f90(var_4c8_62)

sub_140b58260(&var_4e8, u"CollisionNormal", 1)
int32_t r15_17 = r14_23 + 1
var_4e0 = var_4e8
int64_t var_4d8_63 = data_14396f0c8
var_4d0_9.w = data_14396f0d0
var_4d0_9 = 0xffffffff
int64_t var_4c8_63 = 0
int64_t var_4c0_63 = 0

if (r15_17 s> rsi_16)
    sub_1405c4ec0(&var_2f0)
    rsi_16 = var_2e4
    rbx_29 = var_2f0

sub_140745220(rbx_29 + sx.q(r14_23) * 0x28, &var_4e0)

if (var_4c8_63 != 0)
    sub_140a74f90(var_4c8_63)

sub_140b58260(&var_4e8, u"CollisionMaterialFriction", 1)
int32_t r14_24 = r15_17 + 1
var_4e0 = var_4e8
int64_t var_4d8_64 = data_14396f088
var_4d0_9.w = data_14396f090
var_4d0_9 = 0xffffffff
int64_t var_4c8_64 = 0
int64_t var_4c0_64 = 0

if (r14_24 s> rsi_16)
    sub_1405c4ec0(&var_2f0)
    rsi_16 = var_2e4
    rbx_29 = var_2f0

sub_140745220(rbx_29 + sx.q(r15_17) * 0x28, &var_4e0)

if (var_4c8_64 != 0)
    sub_140a74f90(var_4c8_64)

sub_140b58260(&var_4e8, u"CollisionMaterialRestitution", 1)
var_4e0 = var_4e8
int64_t var_4d8_65 = data_14396f088
var_4d0_9.w = data_14396f090
var_4d0_9 = 0xffffffff
int64_t var_4c8_65 = 0
int64_t var_4c0_65 = 0
int32_t var_2e8_7 = r14_24 + 1

if (r14_24 + 1 s> rsi_16)
    sub_1405c4ec0(&var_2f0)
    rbx_29 = var_2f0

sub_140745220(rbx_29 + sx.q(r14_24) * 0x28, &var_4e0)

if (var_4c8_65 != 0)
    sub_140a74f90(var_4c8_65)

int64_t rbx_30 = sx.q(arg2[1].d)
int32_t rax_289 = (rbx_30 + 1).d
arg2[1].d = rax_289

if (rax_289 s> *(arg2 + 0xc))
    sub_1405c5340(arg2)

sub_140744f30(rbx_30 * 0x88 + *arg2, &var_308)
void var_2d0
sub_1405ae080(&var_2d0)
sub_140745ac0(&var_2f0)
sub_140745ac0(&var_300)
sub_1405ae080(&var_3f0)
sub_140745ac0(&var_410)
sub_140745ac0(&var_420)
sub_1405ae080(&var_90)
sub_140745ac0(&var_b0)
sub_140745ac0(&var_c0)
sub_1405ae080(&var_240)
sub_140745ac0(&var_260)
sub_140745ac0(&var_270)
sub_1405ae080(&var_360)
sub_140745ac0(&var_380)
sub_140745ac0(&var_390)
sub_1405ae080(&var_1b0)
sub_140745ac0(&var_1d0)
sub_140745ac0(&var_1e0)
sub_1405ae080(&var_120)
sub_140745ac0(&var_140)
sub_140745ac0(&var_150)
sub_1405ae080(&var_480)
sub_140745ac0(&var_4a0)
int64_t result = sub_140745ac0(&var_4b0)
__security_check_cookie(rax_1 ^ &var_508)
return result

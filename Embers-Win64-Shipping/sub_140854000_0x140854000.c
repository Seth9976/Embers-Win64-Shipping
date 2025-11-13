// 函数: sub_140854000
// 地址: 0x140854000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ce45a8 s> *rbx_1)
    _Init_thread_header(&data_143ce45a8)
    
    if (data_143ce45a8 == 0xffffffff)
        sub_140b58260(&data_143ce45a0, u"Position", 1)
        _Init_thread_footer(&data_143ce45a8)

if (data_143ce45b8 s> *rbx_1)
    _Init_thread_header(&data_143ce45b8)
    
    if (data_143ce45b8 == 0xffffffff)
        sub_140b58260(&data_143ce45b0, u"SpriteSize", 1)
        _Init_thread_footer(&data_143ce45b8)

if (data_143ce45c8 s> *rbx_1)
    _Init_thread_header(&data_143ce45c8)
    
    if (data_143ce45c8 == 0xffffffff)
        sub_140b58260(&data_143ce45c0, u"Scale", 1)
        _Init_thread_footer(&data_143ce45c8)

if (data_143ce45d8 s> *rbx_1)
    _Init_thread_header(&data_143ce45d8)
    
    if (data_143ce45d8 == 0xffffffff)
        sub_140b58260(&data_143ce45d0, u"RibbonWidth", 1)
        _Init_thread_footer(&data_143ce45d8)

int64_t var_a0 = data_143ce45a0
int64_t var_98 = data_14396f0c8
int16_t var_90 = data_14396f0d0
int32_t var_8e = 0xffffffff
int64_t var_88 = 0
int64_t var_80 = 0
int128_t var_78
int64_t* rax_8 = sub_140745220(&var_78, &var_a0)
int64_t* var_108 = arg2
int64_t var_e0 = 0
int64_t var_d8 = 0
int128_t zmm0 = *rax_8
int64_t zmm1 = rax_8[2]
sub_14081d8c0(&var_e0, &rax_8[3])
int64_t rax_9 = sub_1408011e0(var_108, rax_8)
int64_t rcx_3 = rax_8[3]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140833690(&var_108)

if (var_88 != 0)
    sub_140a74f90(var_88)

*(arg1 + 8) = var_108
*(arg1 + 0x10) = rax_9
*(arg1 + 0x18) = zmm0
*(arg1 + 0x28) = zmm1
sub_14081d8c0(arg1 + 0x30, &var_e0)
int64_t rcx_7 = var_e0
int64_t var_d0
*(arg1 + 0x40) = var_d0
int64_t var_c8
*(arg1 + 0x48) = var_c8
int64_t var_c0
*(arg1 + 0x50) = var_c0
int64_t var_b8
*(arg1 + 0x58) = var_b8
int64_t var_b0
*(arg1 + 0x60) = var_b0
int64_t var_a8
*(arg1 + 0x68) = var_a8

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

var_a0 = data_143ce45b0
int64_t var_98_1 = data_14396f0b8
int16_t var_90_1 = data_14396f0c0
int32_t var_8e_1 = 0xffffffff
int64_t var_88_1 = 0
int64_t var_80_1 = 0
int64_t* rax_21 = sub_140745220(&var_78, &var_a0)
var_108 = arg2
var_e0 = 0
int64_t var_d8_1 = 0
int128_t zmm0_2 = *rax_21
uint64_t var_e8_1 = rax_21[2]
sub_14081d8c0(&var_e0, &rax_21[3])
int64_t* r14_1 = var_108
int32_t* rax_22 = sub_1408011e0(r14_1, rax_21)
int64_t rcx_11 = rax_21[3]
int32_t* var_100_1 = rax_22

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

void* rdx_7 = r14_1[0x13]
__builtin_memset(&var_d0, 0, 0x20)
int64_t rbx_4
int64_t rdi_4

if (rax_22 == 0 || rdx_7 == 0)
    rdi_4 = var_c8
    rbx_4 = var_d0
else
    int32_t rcx_12 = *(rdx_7 + 0xb8)
    int64_t rdx_8 = *(rdx_7 + 0x18)
    int32_t r9_1 = *rax_22
    rbx_4 = zx.q(r9_1 * rcx_12) + rdx_8
    var_d0 = rbx_4
    rdi_4 = zx.q((r9_1 + 1) * rcx_12) + rdx_8
    void* rdx_9 = r14_1[0x14]
    var_c8 = rdi_4
    
    if (rdx_9 != 0)
        int32_t r8_1 = *(rdx_9 + 0xb8)
        int64_t rdx_10 = *(rdx_9 + 0x18)
        var_c0 = zx.q(r8_1 * r9_1) + rdx_10
        var_b8 = zx.q(r8_1 * (r9_1 + 1)) + rdx_10

if (var_88_1 != 0)
    sub_140a74f90(var_88_1)

*(arg1 + 0x70) = r14_1
*(arg1 + 0x78) = rax_22
*(arg1 + 0x80) = zmm0_2
*(arg1 + 0x90) = var_e8_1
sub_14081d8c0(arg1 + 0x98, &var_e0)
int64_t rcx_18 = var_e0
*(arg1 + 0xb8) = var_c0
*(arg1 + 0xc0) = var_b8
*(arg1 + 0xa8) = rbx_4
*(arg1 + 0xb0) = rdi_4

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int128_t var_f8_1
var_f8_1:8.q = data_14396f0d8
int16_t rax_28 = data_14396f0e0
__builtin_memset(arg1 + 0xc8, 0, 0x20)
var_108.o = zx.o(0)
var_e8_1.w = rax_28
var_e8_1:2.d = 0xffffffff
var_e0 = 0
*(arg1 + 0xe8) = var_e8_1
int64_t var_d8_2 = 0
sub_14081d8c0(arg1 + 0xf0, &var_e0)
*(arg1 + 0x100) = var_d0
*(arg1 + 0x108) = var_c8
*(arg1 + 0x110) = var_c0
*(arg1 + 0x118) = var_b8
*(arg1 + 0x120) = var_b0
*(arg1 + 0x128) = var_a8
int64_t var_60 = data_14396f0d8
int16_t rax_36 = data_14396f0e0
*(arg1 + 0x130) = 0
*(arg1 + 0x138) = 0
__builtin_memset(&var_78, 0, 0x18)
int32_t var_56 = 0xffffffff
int64_t var_68
*(arg1 + 0x140) = var_68.o
int64_t var_50 = 0
*(arg1 + 0x150) = rax_36.q
int64_t var_48 = 0
sub_14081d8c0(arg1 + 0x158, &var_50)
int64_t var_40
*(arg1 + 0x168) = var_40
int64_t result
*(arg1 + 0x170) = result
return result

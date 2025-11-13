// 函数: sub_140854590
// 地址: 0x140854590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ce45e8 s> *rbx_1)
    _Init_thread_header(&data_143ce45e8)
    
    if (data_143ce45e8 == 0xffffffff)
        sub_140b58260(&data_143ce45e0, u"Position", 1)
        _Init_thread_footer(&data_143ce45e8)

if (data_143ce45f8 s> *rbx_1)
    _Init_thread_header(&data_143ce45f8)
    
    if (data_143ce45f8 == 0xffffffff)
        sub_140b58260(&data_143ce45f0, u"SpriteSize", 1)
        _Init_thread_footer(&data_143ce45f8)

if (data_143ce4608 s> *rbx_1)
    _Init_thread_header(&data_143ce4608)
    
    if (data_143ce4608 == 0xffffffff)
        sub_140b58260(&data_143ce4600, u"Scale", 1)
        _Init_thread_footer(&data_143ce4608)

if (data_143ce4618 s> *rbx_1)
    _Init_thread_header(&data_143ce4618)
    
    if (data_143ce4618 == 0xffffffff)
        sub_140b58260(&data_143ce4610, u"RibbonWidth", 1)
        _Init_thread_footer(&data_143ce4618)

int64_t var_108 = data_143ce45e0
int64_t var_100 = data_14396f0c8
int16_t var_f8 = data_14396f0d0
int32_t var_f6 = 0xffffffff
int64_t var_f0 = 0
int64_t var_e8 = 0
int128_t var_78
int64_t* rax_8 = sub_140745220(&var_78, &var_108)
int64_t* var_e0 = arg2
int64_t var_b8 = 0
int64_t var_b0 = 0
int128_t zmm0 = *rax_8
int64_t zmm1 = rax_8[2]
sub_14081d8c0(&var_b8, &rax_8[3])
int64_t rax_9 = sub_1408011e0(var_e0, rax_8)
int64_t rcx_3 = rax_8[3]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140833690(&var_e0)

if (var_f0 != 0)
    sub_140a74f90(var_f0)

*(arg1 + 8) = var_e0
*(arg1 + 0x10) = rax_9
*(arg1 + 0x18) = zmm0
*(arg1 + 0x28) = zmm1
sub_14081d8c0(arg1 + 0x30, &var_b8)
int64_t rcx_7 = var_b8
int64_t var_a8
*(arg1 + 0x40) = var_a8
int64_t var_a0
*(arg1 + 0x48) = var_a0
int64_t var_98
*(arg1 + 0x50) = var_98
int64_t var_90
*(arg1 + 0x58) = var_90
int64_t var_88
*(arg1 + 0x60) = var_88
int64_t var_80
*(arg1 + 0x68) = var_80

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t var_60 = data_14396f0d8
int16_t rax_19 = data_14396f0e0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
__builtin_memset(&var_78, 0, 0x18)
int32_t var_56 = 0xffffffff
int64_t var_68
*(arg1 + 0x80) = var_68.o
int64_t var_50 = 0
*(arg1 + 0x90) = rax_19.q
int64_t var_48 = 0
sub_14081d8c0(arg1 + 0x98, &var_50)
int64_t var_40
*(arg1 + 0xa8) = var_40
int64_t var_38
*(arg1 + 0xb0) = var_38
int64_t var_30
*(arg1 + 0xb8) = var_30
int64_t var_28
*(arg1 + 0xc0) = var_28
int128_t var_d0
var_d0:8.q = data_14396f0d8
int16_t rax_25 = data_14396f0e0
__builtin_memset(arg1 + 0xc8, 0, 0x20)
var_e0.o = zx.o(0)
int64_t var_c0
var_c0.w = rax_25
var_c0:2.d = 0xffffffff
var_b8 = 0
*(arg1 + 0xe8) = var_c0
int64_t var_b0_1 = 0
sub_14081d8c0(arg1 + 0xf0, &var_b8)
*(arg1 + 0x100) = var_a8
*(arg1 + 0x108) = var_a0
*(arg1 + 0x110) = var_98
*(arg1 + 0x118) = var_90
*(arg1 + 0x120) = var_88
*(arg1 + 0x128) = var_80
var_108 = data_143ce4610
int64_t var_100_1 = data_14396f088
int16_t var_f8_1 = data_14396f090
int32_t var_f6_1 = 0xffffffff
int64_t var_f0_1 = 0
int64_t var_e8_1 = 0
int64_t* rax_35 = sub_14077db30(&var_78, arg2, &var_108)
*(arg1 + 0x130) = *rax_35
*(arg1 + 0x138) = rax_35[1]
*(arg1 + 0x140) = *(rax_35 + 0x10)
*(arg1 + 0x150) = rax_35[4]
sub_14081d8c0(arg1 + 0x158, &rax_35[5])
int64_t rcx_14 = var_50
*(arg1 + 0x168) = rax_35[7]
int64_t result = rax_35[8]
*(arg1 + 0x170) = result

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)

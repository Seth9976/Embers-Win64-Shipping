// 函数: sub_1408325f0
// 地址: 0x1408325f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ce4100 s> *rdi_1)
    _Init_thread_header(&data_143ce4100)
    
    if (data_143ce4100 == 0xffffffff)
        sub_140b58260(&data_143ce40f8, u"Position", 1)
        _Init_thread_footer(&data_143ce4100)

if (data_143ce4110 s> *rdi_1)
    _Init_thread_header(&data_143ce4110)
    
    if (data_143ce4110 == 0xffffffff)
        sub_140b58260(&data_143ce4108, u"SpriteSize", 1)
        _Init_thread_footer(&data_143ce4110)

if (data_143ce4120 s> *rdi_1)
    _Init_thread_header(&data_143ce4120)
    
    if (data_143ce4120 == 0xffffffff)
        sub_140b58260(&data_143ce4118, u"Scale", 1)
        _Init_thread_footer(&data_143ce4120)

if (data_143ce4130 s> *rdi_1)
    _Init_thread_header(&data_143ce4130)
    
    if (data_143ce4130 == 0xffffffff)
        sub_140b58260(&data_143ce4128, u"RibbonWidth", 1)
        _Init_thread_footer(&data_143ce4130)

int64_t rdx = data_14396f0c8
int64_t* rax_5 = data_143ce40f8
int64_t rdi_2 = 0
int16_t rcx = data_14396f0d0
int64_t* var_a8 = rax_5
int64_t var_a0 = rdx
int16_t var_98 = rcx
int32_t var_96 = 0xffffffff
int64_t var_90 = 0
int64_t var_88 = 0
int64_t* var_40 = rax_5
int64_t var_38 = rdx
int32_t var_2e = 0xffffffff
int64_t var_28 = 0
int64_t var_20 = 0

if (rdx != 0)
    rdi_2 = var_90
    
    if (sub_140834710(&var_a8) != 0)
        sub_1407c87e0(&var_40, rdi_2)

int128_t zmm0 = var_40.o
var_a8 = arg2
var_98.o = zmm0
int64_t var_80 = 0
int64_t var_78 = 0
sub_14081d8c0(&var_80, &var_28)
int64_t rax_7 = sub_1408011e0(var_a8, &var_40)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140833690(&var_a8)

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

*(arg1 + 8) = var_a8
*(arg1 + 0x10) = rax_7
*(arg1 + 0x18) = var_98.o
*(arg1 + 0x28) = rcx.q
sub_14081d8c0(arg1 + 0x30, &var_80)
int64_t rcx_9 = var_80
int64_t var_70
*(arg1 + 0x40) = var_70
int64_t result
*(arg1 + 0x48) = result
int64_t var_60
*(arg1 + 0x50) = var_60
int64_t var_58
*(arg1 + 0x58) = var_58
int64_t var_50
*(arg1 + 0x60) = var_50
int64_t var_48
*(arg1 + 0x68) = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t var_90_1 = data_14396f0d8
int16_t rax_17 = data_14396f0e0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
__builtin_memset(&var_a8, 0, 0x18)
int64_t var_88_1
var_88_1.w = rax_17
var_88_1:2.d = 0xffffffff
*(arg1 + 0x80) = var_98.o
var_80 = 0
*(arg1 + 0x90) = var_88_1
int64_t var_78_1 = 0
sub_14081d8c0(arg1 + 0x98, &var_80)
int64_t rdi_3 = 0
*(arg1 + 0xa8) = var_70
*(arg1 + 0xb0) = result
*(arg1 + 0xb8) = var_60
*(arg1 + 0xc0) = var_58
int64_t rdx_6 = data_14396f0c8
int64_t* rax_22 = data_143ce4118
int16_t rcx_11 = data_14396f0d0
var_a8 = rax_22
int64_t var_a0_2 = rdx_6
int16_t var_98_1 = rcx_11
int32_t var_96_1 = 0xffffffff
int64_t var_90_2 = 0
int64_t var_88_2 = 0
var_40 = rax_22
int64_t var_38_1 = rdx_6
int32_t var_2e_1 = 0xffffffff
var_28 = 0
int64_t var_20_1 = 0

if (rdx_6 != 0)
    rdi_3 = var_90_2
    
    if (sub_140834710(&var_a8) != 0)
        sub_1407c87e0(&var_40, rdi_3)

int128_t zmm0_3 = var_40.o
var_a8 = arg2
var_98_1.o = zmm0_3
var_80 = 0
int64_t var_78_2 = 0
sub_14081d8c0(&var_80, &var_28)
int64_t rax_24 = sub_1408011e0(var_a8, &var_40)
int64_t rcx_16 = var_28

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

sub_140833690(&var_a8)

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

*(arg1 + 0xc8) = var_a8
*(arg1 + 0xd0) = rax_24
*(arg1 + 0xd8) = var_98_1.o
*(arg1 + 0xe8) = rcx_11.q
sub_14081d8c0(arg1 + 0xf0, &var_80)
int64_t rcx_20 = var_80
*(arg1 + 0x100) = var_70
*(arg1 + 0x108) = result
*(arg1 + 0x110) = var_60
*(arg1 + 0x118) = var_58
*(arg1 + 0x120) = var_50
*(arg1 + 0x128) = var_48

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t var_90_3 = data_14396f0d8
int16_t rax_34 = data_14396f0e0
*(arg1 + 0x130) = 0
*(arg1 + 0x138) = 0
__builtin_memset(&var_a8, 0, 0x18)
int64_t var_88_3
var_88_3.w = rax_34
var_88_3:2.d = 0xffffffff
*(arg1 + 0x140) = var_98_1.o
var_80 = 0
*(arg1 + 0x150) = var_88_3
int64_t var_78_3 = 0
sub_14081d8c0(arg1 + 0x158, &var_80)
*(arg1 + 0x168) = var_70
*(arg1 + 0x170) = result
return result

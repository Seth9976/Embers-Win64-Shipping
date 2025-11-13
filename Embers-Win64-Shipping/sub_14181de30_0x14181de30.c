// 函数: sub_14181de30
// 地址: 0x14181de30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe3310
arg1[1].d = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = *(arg2 + 0x10)
sub_140596d10(&arg1[3], arg2 + 0x18)
sub_140596d10(&arg1[5], arg2 + 0x28)
sub_140596d10(&arg1[7], arg2 + 0x38)
sub_140596d10(&arg1[9], arg2 + 0x48)
arg1[0xb] = 0
void* rdx_4 = &arg1[0xd]
arg1[0xc] = 0
*(rdx_4 + 0x10) = 0
*(rdx_4 + 0x18) = 0
*(rdx_4 + 0x1c) = 0x80
void* rax_3 = *(rdx_4 + 0x10)

if (rax_3 != 0)
    rdx_4 = rax_3

*rdx_4 = 0
*(rdx_4 + 8) = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
sub_1418235f0(&arg1[0xb], arg2 + 0x58)
sub_140596d10(&arg1[0x15], arg2 + 0xa8)
sub_140596d10(&arg1[0x17], arg2 + 0xb8)
sub_140596d10(&arg1[0x19], arg2 + 0xc8)
sub_140596d10(&arg1[0x1b], arg2 + 0xd8)
arg1[0x1d] = 0
int64_t rbp = sx.q(*(arg2 + 0xf0))
int64_t r14 = *(arg2 + 0xe8)
arg1[0x1e].d = rbp.d

if (rbp.d != 0)
    sub_1407c35c0(&arg1[0x1d], rbp.d, 0)
    memcpy(arg1[0x1d], r14, (rbp << 6).d)
else
    *(arg1 + 0xf4) = 0

arg1[0x1f] = 0
sub_141817d60(&arg1[0x1f], *(arg2 + 0xf8), *(arg2 + 0x100), 0, 0)
arg1[0x21] = 0
void* rdx_13 = &arg1[0x23]
arg1[0x22] = 0
*(rdx_13 + 0x10) = 0
*(rdx_13 + 0x18) = 0
*(rdx_13 + 0x1c) = 0x80
void* rax_4 = *(rdx_13 + 0x10)

if (rax_4 != 0)
    rdx_13 = rax_4

*rdx_13 = 0
*(rdx_13 + 8) = 0
arg1[0x27].d = 0xffffffff
*(arg1 + 0x13c) = 0
arg1[0x29] = 0
arg1[0x2a].d = 0
sub_14094d9d0(&arg1[0x21], arg2 + 0x108)
__builtin_memset(&arg1[0x2b], 0, 0x18)
void* rcx_13 = &arg1[0x2e]
*(rcx_13 + 0x10) = 0
*(rcx_13 + 0x18) = 0
*(rcx_13 + 0x1c) = 0x80
void* rax_5 = *(rcx_13 + 0x10)

if (rax_5 != 0)
    rcx_13 = rax_5

*rcx_13 = 0
*(rcx_13 + 8) = 0
void* rcx_14 = &arg1[0x38]
arg1[0x32].d = 0xffffffff
*(arg1 + 0x194) = 0
arg1[0x34] = 0
arg1[0x35].d = 0
arg1[0x36] = 0
arg1[0x37] = 0
*(rcx_14 + 0x10) = 0
*(rcx_14 + 0x18) = 0
*(rcx_14 + 0x1c) = 0x80
void* rax_6 = *(rcx_14 + 0x10)

if (rax_6 != 0)
    rcx_14 = rax_6

*rcx_14 = 0
*(rcx_14 + 8) = 0
void* rcx_15 = &arg1[0x42]
arg1[0x3c].d = 0xffffffff
*(arg1 + 0x1e4) = 0
arg1[0x3e] = 0
arg1[0x3f].d = 0
arg1[0x40] = 0
arg1[0x41] = 0
*(rcx_15 + 0x10) = 0
*(rcx_15 + 0x18) = 0
*(rcx_15 + 0x1c) = 0x80
void* rax_7 = *(rcx_15 + 0x10)

if (rax_7 != 0)
    rcx_15 = rax_7

*rcx_15 = 0
*(rcx_15 + 8) = 0
void* rcx_16 = &arg1[0x4c]
arg1[0x46].d = 0xffffffff
*(arg1 + 0x234) = 0
arg1[0x48] = 0
arg1[0x49].d = 0
arg1[0x4a] = 0
arg1[0x4b] = 0
*(rcx_16 + 0x10) = 0
*(rcx_16 + 0x18) = 0
*(rcx_16 + 0x1c) = 0x80
void* rax_8 = *(rcx_16 + 0x10)

if (rax_8 != 0)
    rcx_16 = rax_8

*rcx_16 = 0
*(rcx_16 + 8) = 0
arg1[0x50].d = 0xffffffff
*(arg1 + 0x284) = 0
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x54] = *(arg2 + 0x2a0)
arg1[0x55] = *(arg2 + 0x2a8)
arg1[0x56].b = *(arg2 + 0x2b0)
sub_141840c70(arg1)
return arg1

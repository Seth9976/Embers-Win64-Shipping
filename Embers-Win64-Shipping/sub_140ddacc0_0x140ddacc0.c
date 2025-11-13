// 函数: sub_140ddacc0
// 地址: 0x140ddacc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_8 = 0
*arg1 = &data_142ec9950
arg1[1] = *arg2
arg1[2] = 0
arg1[3] = 0
__builtin_memset(&arg1[4], 0, 0x20)
void* rcx = &arg1[8]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
int64_t* rcx_1 = &arg1[0x12]
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
arg1[0x10] = 0
arg1[0x11] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_2 = rcx_1[2]

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
rcx_1[1] = 0
void* rcx_2 = &arg1[0x1c]
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x26]
arg1[0x20].d = 0xffffffff
*(arg1 + 0x104) = 0
arg1[0x22] = 0
arg1[0x23].d = 0
arg1[0x24] = 0
arg1[0x25] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &arg1[0x30]
arg1[0x2a].d = 0xffffffff
*(arg1 + 0x154) = 0
arg1[0x2c] = 0
arg1[0x2d].d = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_5 = *(rcx_4 + 0x10)

if (rax_5 != 0)
    rcx_4 = rax_5

*rcx_4 = 0
*(rcx_4 + 8) = 0
void* rcx_5 = &arg1[0x3a]
arg1[0x34].d = 0xffffffff
*(arg1 + 0x1a4) = 0
arg1[0x36] = 0
arg1[0x37].d = 0
arg1[0x38] = 0
arg1[0x39] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_6 = *(rcx_5 + 0x10)

if (rax_6 != 0)
    rcx_5 = rax_6

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x3e].d = 0xffffffff
*(arg1 + 0x1f4) = 0
arg1[0x40] = 0
arg1[0x41].d = 0
void*** rax_7 = j_sub_140a82f30(0x88)
int64_t var_28
int64_t var_18
void*** rax_9

if (rax_7 == 0)
    rax_9 = nullptr
else
    arg_8 = 0x41800000
    int32_t arg_c = 0x41800000
    int64_t* rax_8 = sub_140b139e0(&var_18)
    int32_t rdx = rax_8[1].d
    int32_t rdx_1 = neg.d(rdx)
    var_28 = *rax_8
    *rax_8 = 0
    int32_t rcx_8 = rax_8[1].d
    int32_t rcx_9 = *(rax_8 + 0xc)
    rax_8[1] = 0
    int32_t rdx_4 = sbb.d(rdx_1, rdx_1, rdx != 0) + 0x18 + rcx_8
    
    if (rdx_4 s> rcx_9)
        sub_1405947f0(&var_28, rdx_4)
    
    sub_140a2cf70(&var_28, u"Slate/Checkerboard.png", 0x16)
    rbx = 3
    rax_9 = sub_140dda910(rax_7, &var_28, &arg_8, &data_14399f5c0, 3, 1)

arg1[0x42] = rax_9

if ((rbx.b & 2) != 0)
    int64_t rcx_13 = var_28
    rbx &= 0xfffffffd
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

if ((rbx.b & 1) != 0)
    int64_t rcx_14 = var_18
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

arg1[0x43] = 0
void* rcx_15 = &arg1[0x45]
arg1[0x44] = 0
*(rcx_15 + 0x10) = 0
*(rcx_15 + 0x18) = 0
*(rcx_15 + 0x1c) = 0x80
void* rax_10 = *(rcx_15 + 0x10)

if (rax_10 != 0)
    rcx_15 = rax_10

*rcx_15 = 0
*(rcx_15 + 8) = 0
void* rcx_16 = &arg1[0x4f]
arg1[0x49].d = 0xffffffff
*(arg1 + 0x24c) = 0
arg1[0x4b] = 0
arg1[0x4c].d = 0
arg1[0x4d] = 0
arg1[0x4e] = 0
*(rcx_16 + 0x10) = 0
*(rcx_16 + 0x18) = 0
*(rcx_16 + 0x1c) = 0x80
void* rax_11 = *(rcx_16 + 0x10)

if (rax_11 != 0)
    rcx_16 = rax_11

*rcx_16 = 0
*(rcx_16 + 8) = 0
void* rcx_17 = &arg1[0x59]
arg1[0x53].d = 0xffffffff
*(arg1 + 0x29c) = 0
arg1[0x55] = 0
arg1[0x56].d = 0
arg1[0x57] = 0
arg1[0x58] = 0
*(rcx_17 + 0x10) = 0
*(rcx_17 + 0x18) = 0
*(rcx_17 + 0x1c) = 0x80
void* rax_12 = *(rcx_17 + 0x10)

if (rax_12 != 0)
    rcx_17 = rax_12

*rcx_17 = 0
*(rcx_17 + 8) = 0
void* rcx_18 = &arg1[0x63]
arg1[0x5d].d = 0xffffffff
*(arg1 + 0x2ec) = 0
arg1[0x5f] = 0
arg1[0x60].d = 0
arg1[0x61] = 0
arg1[0x62] = 0
*(rcx_18 + 0x10) = 0
*(rcx_18 + 0x18) = 0
*(rcx_18 + 0x1c) = 0x80
void* rax_13 = *(rcx_18 + 0x10)

if (rax_13 != 0)
    rcx_18 = rax_13

*rcx_18 = 0
*(rcx_18 + 8) = 0
void* rcx_19 = &arg1[0x6d]
arg1[0x67].d = 0xffffffff
*(arg1 + 0x33c) = 0
arg1[0x69] = 0
arg1[0x6a].d = 0
arg1[0x6b] = 0
arg1[0x6c] = 0
*(rcx_19 + 0x10) = 0
*(rcx_19 + 0x18) = 0
*(rcx_19 + 0x1c) = 0x80
void* rax_14 = *(rcx_19 + 0x10)

if (rax_14 != 0)
    rcx_19 = rax_14

*rcx_19 = 0
*(rcx_19 + 8) = 0
arg1[0x71].d = 0xffffffff
*(arg1 + 0x38c) = 0
arg1[0x73] = 0
arg1[0x74].d = 0
sub_140e234f0(arg1, *sub_140b58260(&arg_8, u"Default", 1), arg1[0x42])
return arg1

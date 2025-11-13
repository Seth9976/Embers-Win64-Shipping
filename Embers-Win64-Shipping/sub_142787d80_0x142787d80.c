// 函数: sub_142787d80
// 地址: 0x142787d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
arg1[0x1a].w = 1
arg1[0x17] = 0
*arg1 = &data_1434ae488
arg1[0x18] = 0
arg1[5] = &data_1434ae870
*(arg1 + 0xd2) = 2
arg1[0x16] = &data_1434ae8a0
*(arg1 + 0xd4) = 0x4019999a
arg1[0x1b].d = 0x3a83126f
*(arg1 + 0xdc) = 0x49742400
arg1[0x1c].b = 0
*(arg1 + 0xe4) = 0x3dcccccd
*(arg1 + 0xec) = 0x32
arg1[0x1e].d = 5
*(arg1 + 0xf4) = 0xa
*(arg1 + 0xfc) = 0
__builtin_memset(&arg1[0x20], 0, 0x38)
*(arg1 + 0x3a) |= 2
int64_t* rax = j_sub_140a82f30(0x30)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = 0x3f000000
    rax[1] = 0x3dcccccd
    rax[2].d = 0
    *(rax + 0x14) = 0x3f800000
    rax[3] = 0x3f800000
    rax[4] = 0
    rax[5] = 0

void arg_8

if (&arg1[0x26] != &arg_8)
    int64_t rcx = arg1[0x26]
    arg1[0x26] = rbx
    rbx = nullptr
    j_sub_140a74f90(rcx)

j_sub_140a74f90(rbx)
return arg1

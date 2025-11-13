// 函数: sub_142787ef0
// 地址: 0x142787ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
arg1[0x17].w = 1
*(arg1 + 0xba) = 4
*arg1 = &data_1434ae8c0
*(arg1 + 0xbc) = 0x3f800000
arg1[5] = &data_1434aeca8
arg1[0x18].w = 0x501
arg1[0x16] = &data_1434aecd8
*(arg1 + 0xc4) = 5
arg1[0x19].d = 0xa
*(arg1 + 0xcc) = 0
__builtin_memset(&arg1[0x1f], 0, 0x40)
*(arg1 + 0x3a) |= 6
arg1[7].b = 0
sub_1423c9cb0(&arg1[6], 1)
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
    int64_t rcx_1 = arg1[0x26]
    arg1[0x26] = rbx
    rbx = nullptr
    j_sub_140a74f90(rcx_1)

j_sub_140a74f90(rbx)
return arg1

// 函数: sub_142428960
// 地址: 0x142428960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[5].d = 0x1010102
*arg1 = &data_14334ab70
*(arg1 + 0x2c) = 0x101
*(arg1 + 0x2e) = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 8
arg1[7].d = 2
*(arg1 + 0x3c) = 2
arg1[0xa].b = 0
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
*(arg1 + 0x6c) = 0x3f800000
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0x3f800000
*(arg1 + 0x84) = 0
*(arg1 + 0x8c) = 0x3f800000
*(arg1 + 0x94) = 0
*(arg1 + 0x9c) = 0x3f800000
int32_t* rax = j_sub_140a82f30(0x10)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    *(rax + 8) = 0

arg1[0xb] = rax
sub_142438b00(arg1)
return arg1

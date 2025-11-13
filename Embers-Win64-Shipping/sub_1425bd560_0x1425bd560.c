// 函数: sub_1425bd560
// 地址: 0x1425bd560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].b &= 0xe0
*arg1 = 0x3ea147ae
arg1[1] = 0x461c4000
arg1[3] = 0x12c
arg1[4] = 0x40400000
sub_1420d87d0(&arg1[5])
arg1[0x27] = 0
arg1[0x28] = data_14399f634
arg1[0x29] = 0x41a00000
arg1[0x2a] = 0x43020000
arg1[0x2b] = 0x100
arg1[0x2c].w = 0x100
char rax_1 = *(arg1 + 0xb3) & 0xe6
*(arg1 + 0xb2) = 0x20
*(arg1 + 0x3d) = 1
*(arg1 + 0xb3) = rax_1 | 6
arg1[0x2d] = 0x100
sub_1420d87d0(&arg1[0x30])
char rax_2 = *(arg1 + 0x152) & 0xd6
*(arg1 + 0x148) = 2
arg1[0x54].w = 0x8102
*(arg1 + 0x152) = rax_2 | 0x16
int64_t count = 8
*(arg1 + 0x153) = 0

if (&arg1[0x2e] u> &arg1[0x30])
    count = 0

if (&arg1[0x2e] u<= &arg1[0x30])
    __builtin_memset(&arg1[0x2e], 1, count)

*(arg1 + 0x151) |= 0x11
*(arg1 + 0xb3) &= 0xfb
arg1[0x55] = 0x44fa0000
arg1[0x56] = 0x42480000
arg1[0x57] = 2
*(arg1 + 0x3d) = 1
return arg1

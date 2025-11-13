// 函数: sub_1425bd6a0
// 地址: 0x1425bd6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_143441080
arg1[5] = 0
arg1[6] = 0
arg1[0xb] = 0
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
__builtin_memset(&arg1[9], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x5c) s<= 0xffffffff)
    sub_1405947f0(&arg1[0xa], 0)

int16_t* rax = arg1[0xa]

if (rax != 0)
    *rax = 0

arg1[8].d = 0
int64_t rsi = sx.q(arg1[6].d)
int32_t rax_1 = (rsi + 1).d
arg1[6].d = rax_1

if (rax_1 s> *(arg1 + 0x34))
    sub_140bb7dd0(&arg1[5])

int32_t* rsi_2 = &arg1[5][rsi * 0x2c]
rsi_2[2].b &= 0xe0
*rsi_2 = 0x3ea147ae
rsi_2[1] = 0x461c4000
rsi_2[3] = 0x12c
rsi_2[4] = 0x40400000
sub_1420d87d0(&rsi_2[5])
rsi_2[0x27] = 0
rsi_2[0x28] = data_14399f634
rsi_2[0x29] = 0x41a00000
rsi_2[0x2a] = 0x43020000
rsi_2[0x2b] = 0x100
rsi_2[0x2c].w = 0x100
char rax_3 = *(rsi_2 + 0xb3) & 0xe6
*(rsi_2 + 0xb2) = 0x20
*(rsi_2 + 0x3d) = 1
*(rsi_2 + 0xb3) = rax_3 | 6
rsi_2[0x2d] = 0x100
sub_1420d87d0(&rsi_2[0x30])
char rax_4 = *(rsi_2 + 0x152) & 0xd6
*(rsi_2 + 0x148) = 2
rsi_2[0x54].w = 0x8102
*(rsi_2 + 0x152) = rax_4 | 0x16
int64_t count = 8
*(rsi_2 + 0x153) = 0

if (&rsi_2[0x2e] u> &rsi_2[0x30])
    count = 0

if (&rsi_2[0x2e] u<= &rsi_2[0x30])
    __builtin_memset(&rsi_2[0x2e], 1, count)

*(rsi_2 + 0x151) |= 0x11
*(rsi_2 + 0xb3) &= 0xfb
rsi_2[0x55] = 0x44fa0000
rsi_2[0x56] = 0x42480000
rsi_2[0x57] = 2
*(rsi_2 + 0x3d) = 1
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
int32_t rax_6 = *(arg1 + 0x5c)
arg_8 = 0
arg1[0xb].d = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405947f0(&arg1[0xa], 0)

int16_t* rax_7 = arg1[0xa]

if (rax_7 != 0)
    *rax_7 = 0

arg1[8].d = 0
return arg1

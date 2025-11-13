// 函数: sub_141c308b0
// 地址: 0x141c308b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x3f800000
arg1[1].d = 0x3f4ccccd
void* rsi = &arg1[0xb]
*(arg1 + 0xc) = 0x3f000000
void* rbx = rsi + 0x2c
__builtin_strncpy(&arg1[2], "333?", 0xc)
__builtin_memcpy(arg1 + 0x1c, 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f", 
    0x18)
int64_t i_1 = 2
arg1[7] = &data_143205170
arg1[8] = 0x3f800000
arg1[9].d = 0x3f4ccccd
*(arg1 + 0x4c) = 0x3f000000
__builtin_strncpy(&arg1[0xa], "333?", 4)
int64_t i

do
    *rsi = &data_143205000
    __builtin_memset(rbx - 0x24, 0, 0x20)
    *(rbx - 4) = 0x38d1b717
    *(rbx + 4) = 0x38d1b717
    *(rbx + 8) = 0x3f7ff972
    *(rbx + 0x10) = 0x3f800000
    sub_141c45160(rsi)
    *(rbx + 0x1c) = 0
    *(rbx + 0x24) = 0x3f800000
    `vector constructor iterator'(rbx + 0x2c, 0x50, 4, sub_141c2dcb0)
    *(rbx + 0x16c) = 0
    rsi += 0x1f8
    *(rbx + 0x174) = 0x3f800000
    *(rbx + 0x17c) = 0
    *(rbx + 0x184) = 0x3f800000
    *(rbx + 0x18c) = 0
    *(rbx + 0x194) = 0x3f800000
    *(rbx + 0x19c) = 0
    *(rbx + 0x1a4) = 0x3f800000
    rbx += 0x1f8
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x89] = &data_143205000
__builtin_memset(&arg1[0x8a], 0, 0x20)
arg1[0x8e] = 0x38d1b717
arg1[0x8f].d = 0x38d1b717
*(arg1 + 0x47c) = 0x3f7ff972
*(arg1 + 0x484) = 0x3f800000
sub_141c45160(&arg1[0x89])
arg1[0x92] = 0
arg1[0x93] = 0x3f800000
sub_141c2dcb0(&arg1[0x94])
sub_141c2dcb0(&arg1[0x9e])
sub_141c2dcb0(&arg1[0xa8])
sub_141c2dcb0(&arg1[0xb2])
arg1[0xbc] = 0
arg1[0xbd] = 0
sub_141c307d0(&arg1[0xbe])
sub_141c307d0(&arg1[0xe8])
arg1[0x119].w = 0x101
__builtin_memset(&arg1[0x112], 0, 0x38)
return arg1

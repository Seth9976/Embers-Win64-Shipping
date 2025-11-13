// 函数: sub_142350630
// 地址: 0x142350630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_5 = 2
*arg1 = 0x40a00000
int64_t i_3 = 2
*(arg1 + 4) = 0x40200000
arg1[3] = 0x3f800000
arg1[0x68] = 0x42480000
void* rax = &arg1[0x7e]
arg1[0x69] = 0x40000000
int64_t i

do
    *(rax + 0x78) = 0x3e99999a
    *(rax + 0x7c) = 0x3f400000
    *(rax + 0x80) = 0x3e99999a
    __builtin_memset(rax, 0, 0x78)
    rax += 0x84
    i = i_3
    i_3 -= 1
while (i != 1)
void* rax_1 = &arg1[0xc0]
int64_t i_1

do
    __builtin_memcpy(rax_1 + 0xc8, 
        "\x00\x00\xa0\x41\x00\x00\x80\x3f\x00\x00\x80\x3f\x9a\x99\x99\x3e\x0a\xd7\xa3\x3b\x00\x00\x80\x3f", 
        0x18)
    __builtin_memset(rax_1, 0, 0xc8)
    rax_1 += 0xe0
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
arg1[0x13a] = 0x41200000
void* rax_2 = &arg1[5]
arg1[0x13b] = 0x3f800000
uint64_t i_4 = zx.q((i_5 + 0xa).d)
arg1[0x13c] = 0x3ba3d70a
arg1[0x13d] = 0x41100000
arg1[0x13e] = 0x42000000
arg1[0x13f] = 0x3ecccccd
arg1[0x140] = 0x3d4ccccd
arg1[0x141] = 0x3f000000
arg1[0x142] = 0x3f000000
arg1[0x143] = 0xbf000000
arg1[0x144] = 0x3f000000
*(arg1 + 0x514) = 0x3f000000
arg1[0x147] = 0x3f000000
arg1[0x148] = 0x3f800000
arg1[0x149] = 0x3f800000
arg1[0x14a] = 0x40800000
arg1[0x14b] = 0x3f800000
arg1[0x14c] = 0x3f800000
uint64_t i_2

do
    *(rax_2 - 4) = 0
    __builtin_memset(rax_2 + 4, 0, 0x20)
    rax_2 += 0x28
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
__builtin_memset(&arg1[0x130], 0, 0x28)
__builtin_memset(&arg1[0x6a], 0, 0x50)
return arg1

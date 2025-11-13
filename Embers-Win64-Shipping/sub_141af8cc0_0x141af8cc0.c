// 函数: sub_141af8cc0
// 地址: 0x141af8cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
int64_t i_3 = 3
*arg1 = &data_143051330
void* r8 = &arg1[0x1d]
arg1[0x1c].d = 0
int64_t i_4 = 3
void* rdx = r8 + 0x68
int64_t i

do
    *r8 = &data_142d4c350
    void* rcx = rdx - 0x10
    *(rdx - 0x60) = 0x404
    r8 += 0xa0
    __builtin_memset(rdx - 0x58, 0, 0x25)
    __builtin_memset(rdx - 0x30, 0, 0x20)
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    void* rax_1 = *rdx
    rdx += 0xa0
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    *(rcx + 8) = 0
    *(rdx - 0x90) = 0xffffffff
    *(rdx - 0x8c) = 0
    *(rdx - 0x80) = 0
    *(rdx - 0x78) = 0
    *(rdx - 0x70) = 0xea60
    *(rdx - 0x6c) = 1
    i = i_4
    i_4 -= 1
while (i != 1)
void* r8_1 = &arg1[0x59]
int64_t i_5 = 3
void* rdx_1 = r8_1 + 0x68
int64_t i_1

do
    *r8_1 = &data_142d4c350
    void* rcx_1 = rdx_1 - 0x10
    *(rdx_1 - 0x60) = 0x404
    r8_1 += 0xa0
    __builtin_memset(rdx_1 - 0x58, 0, 0x25)
    __builtin_memset(rdx_1 - 0x30, 0, 0x20)
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rdx_1 + 0xc) = 0x80
    void* rax_2 = *rdx_1
    rdx_1 += 0xa0
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    *rcx_1 = 0
    *(rcx_1 + 8) = 0
    *(rdx_1 - 0x90) = 0xffffffff
    *(rdx_1 - 0x8c) = 0
    *(rdx_1 - 0x80) = 0
    *(rdx_1 - 0x78) = 0
    *(rdx_1 - 0x70) = 0xea60
    *(rdx_1 - 0x6c) = 1
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
void* r8_2 = &arg1[0x95]
void* rdx_2 = r8_2 + 0x68
int64_t i_2

do
    *r8_2 = &data_142d4c350
    void* rcx_2 = rdx_2 - 0x10
    *(rdx_2 - 0x60) = 0x404
    r8_2 += 0xa0
    __builtin_memset(rdx_2 - 0x58, 0, 0x25)
    __builtin_memset(rdx_2 - 0x30, 0, 0x20)
    *rdx_2 = 0
    *(rdx_2 + 8) = 0
    *(rdx_2 + 0xc) = 0x80
    void* rax_3 = *rdx_2
    rdx_2 += 0xa0
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    *rcx_2 = 0
    *(rcx_2 + 8) = 0
    *(rdx_2 - 0x90) = 0xffffffff
    *(rdx_2 - 0x8c) = 0
    *(rdx_2 - 0x80) = 0
    *(rdx_2 - 0x78) = 0
    *(rdx_2 - 0x70) = 0xea60
    *(rdx_2 - 0x6c) = 1
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
arg1[0xd1] = &data_142d4c350
void* rcx_3 = &arg1[0xdc]
arg1[0xd2].w = 0x404
__builtin_memset(&arg1[0xd3], 0, 0x25)
__builtin_memset(&arg1[0xd8], 0, 0x20)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0xe0].d = 0xffffffff
*(arg1 + 0x704) = 0
arg1[0xe2] = 0
arg1[0xe3].d = 0
arg1[0xe4].d = 0xea60
*(arg1 + 0x724) = 1
*(arg1 + 0x72c) = 0
int128_t var_18 = data_1439a9488
int32_t rax_5

if (sub_140cdd5d0(arg1, &var_18) s>= 4)
    var_18 = data_1439a9488
    rax_5.b = sub_140cdd5d0(arg1, &var_18) s>= 6
    rax_5.b += 1
else
    rax_5.b = 0

arg1[0xa].b = 1
*(arg1 + 0x51) = rax_5.b
arg1[0xe5].d = 0
arg1[0x1c].d = 0x1ff
*(arg1 + 0xc9) = 0x101
arg1[0x19].b = 1
sub_141b358a0(arg1)
void* rax_7 = sub_141a4ad10(arg1[0x1a], *(sub_141a788e0() + 0x18))
int64_t* rcx_8

if (rax_7 == 0)
    rcx_8 = nullptr
else
    rcx_8 = *(rax_7 + 8)

void* rax_8 = *rcx_8
*(rax_8 + 0x30) = 0
*(rax_8 + 0x34) = 1
void* rax_9 = rcx_8[1]
*(rax_9 + 0x34) = 1
*(rax_9 + 0x30) = 0
void* rax_10 = rcx_8[2]
*(rax_10 + 0x34) = 1
*(rax_10 + 0x30) = 0
void* rax_11 = rcx_8[3]
*(rax_11 + 0x34) = 1
*(rax_11 + 0x30) = 0
void* rax_12 = rcx_8[4]
*(rax_12 + 0x34) = 1
*(rax_12 + 0x30) = 0
void* rax_13 = rcx_8[5]
*(rax_13 + 0x34) = 1
*(rax_13 + 0x30) = 0
void* rax_14 = rcx_8[6]
*(rax_14 + 0x34) = 1
*(rax_14 + 0x30) = 0x3f800000
void* rax_15 = rcx_8[7]
*(rax_15 + 0x34) = 1
*(rax_15 + 0x30) = 0x3f800000
void* rax_16 = rcx_8[8]
*(rax_16 + 0x34) = 1
*(rax_16 + 0x30) = 0x3f800000
void* rax_17 = rcx_8[9]
*(rax_17 + 0x34) = 1
*(rax_17 + 0x30) = 0x3f800000
return arg1

// 函数: sub_141b7f7b0
// 地址: 0x141b7f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
int64_t i_5 = 2
*arg1 = &data_14306d9a0
void* r8 = &arg1[0x1d]
arg1[0x1c].d = 0
int64_t i_3 = 2
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
    i = i_3
    i_3 -= 1
while (i != 1)
arg1[0x45] = &data_142d4c350
void* rcx_1 = &arg1[0x50]
arg1[0x46].w = 0x404
void* r8_1 = &arg1[0x59]
__builtin_memset(&arg1[0x47], 0, 0x25)
void* rdx_1 = r8_1 + 0x68
int64_t i_4 = 2
__builtin_memset(&arg1[0x4c], 0, 0x20)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x54].d = 0xffffffff
*(arg1 + 0x2a4) = 0
arg1[0x56] = 0
arg1[0x57].d = 0
arg1[0x58].d = 0xea60
*(arg1 + 0x2c4) = 1
int64_t i_1

do
    *r8_1 = &data_142d4c350
    void* rcx_2 = rdx_1 - 0x10
    *(rdx_1 - 0x60) = 0x404
    r8_1 += 0xa0
    __builtin_memset(rdx_1 - 0x58, 0, 0x25)
    __builtin_memset(rdx_1 - 0x30, 0, 0x20)
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rdx_1 + 0xc) = 0x80
    void* rax_3 = *rdx_1
    rdx_1 += 0xa0
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    *rcx_2 = 0
    *(rcx_2 + 8) = 0
    *(rdx_1 - 0x90) = 0xffffffff
    *(rdx_1 - 0x8c) = 0
    *(rdx_1 - 0x80) = 0
    *(rdx_1 - 0x78) = 0
    *(rdx_1 - 0x70) = 0xea60
    *(rdx_1 - 0x6c) = 1
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
void* r8_2 = &arg1[0x81]
void* rdx_2 = r8_2 + 0x68
int64_t i_2

do
    *r8_2 = &data_142d4c350
    void* rcx_3 = rdx_2 - 0x10
    *(rdx_2 - 0x60) = 0x404
    r8_2 += 0xa0
    __builtin_memset(rdx_2 - 0x58, 0, 0x25)
    __builtin_memset(rdx_2 - 0x30, 0, 0x20)
    *rdx_2 = 0
    *(rdx_2 + 8) = 0
    *(rdx_2 + 0xc) = 0x80
    void* rax_4 = *rdx_2
    rdx_2 += 0xa0
    
    if (rax_4 != 0)
        rcx_3 = rax_4
    
    *rcx_3 = 0
    *(rcx_3 + 8) = 0
    *(rdx_2 - 0x90) = 0xffffffff
    *(rdx_2 - 0x8c) = 0
    *(rdx_2 - 0x80) = 0
    *(rdx_2 - 0x78) = 0
    *(rdx_2 - 0x70) = 0xea60
    *(rdx_2 - 0x6c) = 1
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
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
arg1[0xa9].d = 0
arg1[0x1c].d = 0x7f
*(arg1 + 0xc9) = 0x101
arg1[0x19].b = 1
sub_141bf45a0(arg1)
return arg1

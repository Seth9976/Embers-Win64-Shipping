// 函数: sub_141b7b5e0
// 地址: 0x141b7b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a30780(arg1, *(arg3 + 0x60), arg3 + 0x68)
int64_t i_5 = 2
*arg1 = &data_14306dc98
void* rdx_1 = &arg1[9]
int64_t i_3 = 2
void* r8_1 = &arg1[0x16]
int64_t i

do
    *rdx_1 = &data_142d4c350
    void* rcx = r8_1 - 0x10
    *(r8_1 - 0x60) = 0x404
    rdx_1 += 0xa0
    __builtin_memset(r8_1 - 0x58, 0, 0x25)
    __builtin_memset(r8_1 - 0x30, 0, 0x20)
    *r8_1 = 0
    *(r8_1 + 8) = 0
    *(r8_1 + 0xc) = 0x80
    void* rax_1 = *r8_1
    r8_1 += 0xa0
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    *(rcx + 8) = 0
    *(r8_1 - 0x90) = 0xffffffff
    *(r8_1 - 0x8c) = 0
    *(r8_1 - 0x80) = 0
    *(r8_1 - 0x78) = 0
    *(r8_1 - 0x70) = 0xea60
    *(r8_1 - 0x6c) = 1
    i = i_3
    i_3 -= 1
while (i != 1)
int64_t i_4 = 2
arg1[0x31] = &data_142d4c350
void* rcx_1 = &arg1[0x3c]
arg1[0x32].w = 0x404
void* r8_2 = &arg1[0x45]
__builtin_memset(&arg1[0x33], 0, 0x25)
void* rdx_2 = &arg1[0x52]
__builtin_memset(&arg1[0x38], 0, 0x20)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x40].d = 0xffffffff
*(arg1 + 0x204) = 0
arg1[0x42] = 0
arg1[0x43].d = 0
arg1[0x44].d = 0xea60
*(arg1 + 0x224) = 1
int64_t i_1

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
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
void* r8_3 = &arg1[0x6d]
void* rdx_3 = &arg1[0x7a]
int64_t i_2

do
    *r8_3 = &data_142d4c350
    void* rcx_3 = rdx_3 - 0x10
    *(rdx_3 - 0x60) = 0x404
    r8_3 += 0xa0
    __builtin_memset(rdx_3 - 0x58, 0, 0x25)
    __builtin_memset(rdx_3 - 0x30, 0, 0x20)
    *rdx_3 = 0
    *(rdx_3 + 8) = 0
    *(rdx_3 + 0xc) = 0x80
    void* rax_4 = *rdx_3
    rdx_3 += 0xa0
    
    if (rax_4 != 0)
        rcx_3 = rax_4
    
    *rcx_3 = 0
    *(rcx_3 + 8) = 0
    *(rdx_3 - 0x90) = 0xffffffff
    *(rdx_3 - 0x8c) = 0
    *(rdx_3 - 0x80) = 0
    *(rdx_3 - 0x78) = 0
    *(rdx_3 - 0x70) = 0xea60
    *(rdx_3 - 0x6c) = 1
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
arg1[0x95].b = *(arg2 + 0xc9)
int32_t rbx = *(arg2 + 0xe0)
*(arg1 + 0x4ac) = rbx

if ((rbx.b & 1) != 0)
    sub_1405af700(&arg1[9], arg2 + 0xe8)

if (((rbx u>> 1).b & 1) != 0)
    sub_1405af700(&arg1[0x1d], arg2 + 0x188)

if (((rbx u>> 2).b & 1) != 0)
    sub_1405af700(&arg1[0x31], arg2 + 0x228)

if (((rbx u>> 3).b & 1) != 0)
    sub_1405af700(&arg1[0x45], arg2 + 0x2c8)

if (((rbx u>> 4).b & 1) != 0)
    sub_1405af700(&arg1[0x59], arg2 + 0x368)

if (((rbx u>> 5).b & 1) != 0)
    sub_1405af700(&arg1[0x6d], arg2 + 0x408)

if (((rbx u>> 6).b & 1) != 0)
    sub_1405af700(&arg1[0x81], arg2 + 0x4a8)

return arg1

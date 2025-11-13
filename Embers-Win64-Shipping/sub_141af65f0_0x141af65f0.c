// 函数: sub_141af65f0
// 地址: 0x141af65f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_3 = 3
void** r8 = arg1 + 0x68
int64_t i_4 = 3
int64_t* rdi = nullptr
int64_t i

do
    r8[-0xd] = &data_142d4c350
    void* rcx = &r8[-2]
    r8[-0xc].w = 0x404
    __builtin_memset(&r8[-0xb], 0, 0x25)
    __builtin_memset(&r8[-6], 0, 0x20)
    *r8 = nullptr
    r8[1].d = 0
    *(r8 + 0xc) = 0x80
    void* rax_1 = *r8
    r8 = &r8[0x14]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    *(rcx + 8) = 0
    r8[-0x12].d = 0xffffffff
    *(r8 - 0x8c) = 0
    r8[-0x10] = 0
    r8[-0xf].d = 0
    r8[-0xe].d = 0xea60
    *(r8 - 0x6c) = 1
    i = i_4
    i_4 -= 1
while (i != 1)
int64_t i_5 = 3
void*** r8_1 = arg1 + 0x1e0
void* rdx = arg1 + 0x248
int64_t i_1

do
    *r8_1 = &data_142d4c350
    int64_t* rcx_1 = rdx - 0x10
    *(rdx - 0x60) = 0x404
    r8_1 = &r8_1[0x14]
    __builtin_memset(rdx - 0x58, 0, 0x25)
    __builtin_memset(rdx - 0x30, 0, 0x20)
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    int64_t* rax_2 = *rdx
    rdx += 0xa0
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    *rcx_1 = 0
    rcx_1[1] = 0
    *(rdx - 0x90) = 0xffffffff
    *(rdx - 0x8c) = 0
    *(rdx - 0x80) = 0
    *(rdx - 0x78) = 0
    *(rdx - 0x70) = 0xea60
    *(rdx - 0x6c) = 1
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
void*** r8_2 = arg1 + 0x3c0
void* rdx_1 = arg1 + 0x428
int64_t i_2

do
    *r8_2 = &data_142d4c350
    int64_t* rcx_2 = rdx_1 - 0x10
    *(rdx_1 - 0x60) = 0x404
    r8_2 = &r8_2[0x14]
    __builtin_memset(rdx_1 - 0x58, 0, 0x25)
    __builtin_memset(rdx_1 - 0x30, 0, 0x20)
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rdx_1 + 0xc) = 0x80
    int64_t* rax_3 = *rdx_1
    rdx_1 += 0xa0
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    *rcx_2 = 0
    rcx_2[1] = 0
    *(rdx_1 - 0x90) = 0xffffffff
    *(rdx_1 - 0x8c) = 0
    *(rdx_1 - 0x80) = 0
    *(rdx_1 - 0x78) = 0
    *(rdx_1 - 0x70) = 0xea60
    *(rdx_1 - 0x6c) = 1
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
*(arg1 + 0x5a0) = &data_142d4c350
void* rcx_3 = arg1 + 0x5f8
*(arg1 + 0x5a8) = 0x404
__builtin_memset(arg1 + 0x5b0, 0, 0x25)
__builtin_memset(arg1 + 0x5d8, 0, 0x20)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

*rcx_3 = 0
*(rcx_3 + 8) = 0
*(arg1 + 0x618) = 0xffffffff
*(arg1 + 0x61c) = 0
*(arg1 + 0x628) = 0
*(arg1 + 0x630) = 0
*(arg1 + 0x638) = 0xea60
*(arg1 + 0x63c) = 1
*(arg1 + 0x640) = *(arg2 + 0xc9)
*(arg1 + 0x644) = *(arg2 + 0xe0)
int32_t rbp = *(arg1 + 0x644)
*(arg1 + 0x648) = *(arg2 + 0x72c)
void* rax_10 = sub_141a4ad10(sub_141a50850(arg2), *(sub_141a788e0() + 0x18))

if (rax_10 != 0)
    rdi = *(rax_10 + 8)

if ((rbp.b & 1) != 0)
    sub_1405af700(arg1, *rdi)

if (((rbp u>> 1).b & 1) != 0)
    sub_1405af700(arg1 + 0xa0, rdi[1])

if (((rbp u>> 2).b & 1) != 0)
    sub_1405af700(arg1 + 0x140, rdi[2])

if (((rbp u>> 3).b & 1) != 0)
    sub_1405af700(arg1 + 0x1e0, rdi[3])

if (((rbp u>> 4).b & 1) != 0)
    sub_1405af700(arg1 + 0x280, rdi[4])

if (((rbp u>> 5).b & 1) != 0)
    sub_1405af700(arg1 + 0x320, rdi[5])

if (((rbp u>> 6).b & 1) == 0)
    *(arg1 + 0x3f4) = 1
    *(arg1 + 0x3f0) = 0x3f800000
else
    sub_1405af700(arg1 + 0x3c0, rdi[6])

if (((rbp u>> 7).b & 1) == 0)
    *(arg1 + 0x494) = 1
    *(arg1 + 0x490) = 0x3f800000
else
    sub_1405af700(arg1 + 0x460, rdi[7])

if (((rbp u>> 8).b & 1) == 0)
    *(arg1 + 0x534) = 1
    *(arg1 + 0x530) = 0x3f800000
else
    sub_1405af700(arg1 + 0x500, rdi[8])

if (((rbp u>> 9).b & 1) == 0)
    *(arg1 + 0x5d4) = 1
    *(arg1 + 0x5d0) = 0x3f800000
else
    sub_1405af700(arg1 + 0x5a0, rdi[9])

return arg1

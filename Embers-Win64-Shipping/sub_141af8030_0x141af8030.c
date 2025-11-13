// 函数: sub_141af8030
// 地址: 0x141af8030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d4b9d8
void* r11 = &arg1[9]
arg1[1].b = *(arg2 + 8)
*arg1 = &data_142d4ba68
int64_t i_1 = 4
arg1[2].b = *(arg2 + 0x10)
int64_t r8_1 = arg2 - arg1
*(arg1 + 0x14) = *(arg2 + 0x14)
*arg1 = &data_142d4c6c8
arg1[4] = *(arg2 + 0x20)
arg1[5] = 0
arg1[5] = *(arg2 + 0x28)
*(arg2 + 0x28) = 0
arg1[6].d = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg2 + 0x30) = 0
arg1[7] = *(arg2 + 0x38)
void* rdx = r11 + 0x68
arg1[8] = *(arg2 + 0x40)
*arg1 = &data_143058a78
int64_t i

do
    *r11 = &data_142d4c350
    void* rcx = rdx - 0x10
    r11 += 0xa0
    *(rdx - 0x60) = *(r8_1 + rdx - 0x60)
    *(rdx - 0x5f) = *(r8_1 + rdx - 0x5f)
    *(rdx - 0x58) = 0
    *(rdx - 0x58) = *(r8_1 + rdx - 0x58)
    __builtin_memset(r8_1 + rdx - 0x58, 0, 0x20)
    *(rdx - 0x50) = *(r8_1 + rdx - 0x50)
    *(rdx - 0x4c) = *(r8_1 + rdx - 0x4c)
    *(rdx - 0x48) = 0
    *(rdx - 0x48) = *(r8_1 + rdx - 0x48)
    *(rdx - 0x40) = *(r8_1 + rdx - 0x40)
    *(rdx - 0x3c) = *(r8_1 + rdx - 0x3c)
    *(rdx - 0x38) = *(r8_1 + rdx - 0x38)
    *(rdx - 0x34) = *(r8_1 + rdx - 0x34)
    __builtin_memset(rdx - 0x30, 0, 0x20)
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    void* rax_19 = *rdx
    rdx += 0xa0
    
    if (rax_19 != 0)
        rcx = rax_19
    
    *rcx = 0
    *(rcx + 8) = 0
    *(rdx - 0x90) = 0xffffffff
    *(rdx - 0x8c) = 0
    *(rdx - 0x80) = 0
    *(rdx - 0x78) = 0
    *(rdx - 0x70) = *(r8_1 + rdx - 0x70)
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x59].d = *(arg2 + 0x2c8)
*(arg1 + 0x2cc) = *(arg2 + 0x2cc)
return arg1

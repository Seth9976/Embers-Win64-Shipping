// 函数: sub_140743f00
// 地址: 0x140743f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
void* r9 = &arg1[9]
arg1[3].d = 0
void* rdx = r9 + 0x68
*(arg1 + 0x14) = 0xffffffff
*arg1 = &data_142d9aae0
arg1[2].b = 0
arg1[4] = 0
int64_t i_1 = 4
arg1[5] = data_14396f0d8
arg1[6].w = data_14396f0e0
*(arg1 + 0x32) = 0xffffffff
arg1[7] = 0
arg1[8] = 0
*arg1 = &data_142d9adc8
int64_t i

do
    *r9 = &data_142d4c350
    void* rcx = rdx - 0x10
    *(rdx - 0x60) = 0x404
    r9 += 0xa0
    __builtin_memset(rdx - 0x58, 0, 0x25)
    __builtin_memset(rdx - 0x30, 0, 0x20)
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    void* rax_2 = *rdx
    rdx += 0xa0
    
    if (rax_2 != 0)
        rcx = rax_2
    
    *rcx = 0
    *(rcx + 8) = 0
    *(rdx - 0x90) = 0xffffffff
    *(rdx - 0x8c) = 0
    *(rdx - 0x80) = 0
    *(rdx - 0x78) = 0
    *(rdx - 0x70) = 0xea60
    *(rdx - 0x6c) = 1
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x59].d = 0
return arg1

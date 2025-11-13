// 函数: sub_141d2caa0
// 地址: 0x141d2caa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = &arg1[1]
*arg1 = &data_143222828
void* rdx = r9 + 0x40
int64_t i_1 = 3
int64_t i

do
    *(rdx - 0x38) = 0
    void* rcx = rdx - 0x10
    *r9 = 0xff7fffff
    r9 += 0x70
    *(rdx - 0x30) = 0
    *(rdx - 0x28) = 0xff7fffff
    __builtin_memset(rdx + 0x10, 0, 0x1c)
    *(rdx + 0x20) = 0
    *(rdx + 0x28) = 0
    __builtin_memset(rdx - 0x20, 0, 0x20)
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    void* rax_1 = *rdx
    rdx += 0x70
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    *(rcx + 8) = 0
    *(rdx - 0x60) = 0xffffffff
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x2b].d = 1
*(arg1 + 0x15c) = 0
return arg1

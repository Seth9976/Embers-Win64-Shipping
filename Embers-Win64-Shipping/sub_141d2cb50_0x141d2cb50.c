// 函数: sub_141d2cb50
// 地址: 0x141d2cb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = &arg1[1]
*arg1 = &data_1432226a0
void* rax = r8 + 0x30
int64_t i_1 = 3
int64_t i

do
    *r8 = 0
    void* rdx_1 = rax - 0x10
    __builtin_memset(rax - 0x28, 0, 0x18)
    r8 += 0x60
    *rax = 0
    *(rax + 8) = 0
    *(rax + 0xc) = 0x80
    void* rcx = *rax
    rax += 0x60
    
    if (rcx != 0)
        rdx_1 = rcx
    
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rax - 0x50) = 0xffffffff
    *(rax - 0x4c) = 0
    *(rax - 0x40) = 0
    *(rax - 0x38) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x25].d = 1
*(arg1 + 0x12c) = 0
return arg1

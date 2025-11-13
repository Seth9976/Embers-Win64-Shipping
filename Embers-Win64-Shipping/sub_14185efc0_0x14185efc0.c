// 函数: sub_14185efc0
// 地址: 0x14185efc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg2
void* rdx_1 = arg2[1] - rbp
*arg1 = 0
int32_t i_1 = (rdx_1 s/ 0x138).d
arg1[1].d = i_1

if (i_1 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_141846b00(arg1, i_1, 0)
void* r15 = *arg1
void* rdi = rbp + 0x90
void* rbx = r15 + 0xb8
int32_t i

do
    sub_1418209d0(r15, rbp)
    *(rbx - 0x40) = *(rdi - 0x18)
    void* rax_5 = *(rdi - 0x10)
    *(rbx - 0x38) = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    *(rbx - 0x30) = *(rdi - 8)
    void* rax_7 = *rdi
    *(rbx - 0x28) = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    *(rbx - 0x20) = 0
    *(rbx - 0x18) = 0
    void* rdx_5 = rbx - 0x10
    *rbx = 0
    *(rbx + 8) = 0
    *(rbx + 0xc) = 0x80
    void* rax_8 = *rbx
    
    if (rax_8 != 0)
        rdx_5 = rax_8
    
    *rdx_5 = 0
    *(rdx_5 + 8) = 0
    *(rbx + 0x10) = 0xffffffff
    *(rbx + 0x14) = 0
    *(rbx + 0x20) = 0
    *(rbx + 0x28) = 0
    sub_1418235f0(rbx - 0x20, rdi + 8)
    *(rbx + 0x30) = 0
    *(rbx + 0x38) = 0
    void* rdx_7 = rbx + 0x40
    *(rbx + 0x50) = 0
    *(rbx + 0x58) = 0
    *(rbx + 0x5c) = 0x80
    void* rax_9 = *(rbx + 0x50)
    
    if (rax_9 != 0)
        rdx_7 = rax_9
    
    *rdx_7 = 0
    *(rdx_7 + 8) = 0
    *(rbx + 0x60) = 0xffffffff
    *(rbx + 0x64) = 0
    *(rbx + 0x70) = 0
    *(rbx + 0x78) = 0
    sub_1418235f0(rbx + 0x30, rdi + 0x58)
    r15 += 0x138
    rbx += 0x138
    rbp += 0x138
    rdi += 0x138
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1

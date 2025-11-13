// 函数: sub_141a308c0
// 地址: 0x141a308c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3a3a0(arg1, nullptr)
void* rdx = &arg1[0xa]
arg1[4] = data_143f29fb0
void* rcx = &arg1[0x26]
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_1 = *(rdx + 0x10)

if (rax_1 != 0)
    rdx = rax_1

*rdx = 0
*(rdx + 8) = 0
arg1[0x12] = 0xffffffff
arg1[0x13] = 0
*(arg1 + 0x58) = 0
arg1[0x18] = 0
__builtin_memset(&arg1[0x1a], 0, 0x30)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x42]
arg1[0x2e] = 0xffffffff
arg1[0x2f] = 0
*(arg1 + 0xc8) = 0
arg1[0x34] = 0
__builtin_memset(&arg1[0x36], 0, 0x30)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x4a] = 0xffffffff
arg1[0x4b] = 0
*(arg1 + 0x138) = 0
arg1[0x50] = 0
void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_14302f458
    *(rax_4 + 0xc) = 1
    rax_4[2] = &data_14302e020

*(arg1 + 0x148) = &rax_4[2]
*(arg1 + 0x150) = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t temp1_1 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_4)[1](rax_4, 1)

*(arg1 + 0x178) = 0
arg1[0x60] = 0
arg1[0x61] = 8
sub_141a30240(&arg1[0x62])
arg1[0xc6].b = 0
return arg1

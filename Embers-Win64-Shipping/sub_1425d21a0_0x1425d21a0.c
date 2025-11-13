// 函数: sub_1425d21a0
// 地址: 0x1425d21a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1417ad930(arg1 + 0x30, 4)
uint64_t i_2 = zx.q(*(arg1 + 8))
uint64_t* rax
int64_t rdx_1
rax, rdx_1 = sub_1425cf6a0(arg1, 1)
rax[1].d = 0

if (*(rax + 0xc) != i_2.d)
    sub_1405dadb0(rax, i_2.d)

if (i_2.d s> 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t rdi = sx.q(rax[1].d)
        int32_t rax_1 = (rdi + 1).d
        rax[1].d = rax_1
        
        if (rax_1 s> *(rax + 0xc))
            sub_1406105e0(rax)
        
        rdx_1 = *rax + (rdi << 2)
        
        if (rdx_1 != 0)
            *rdx_1 = 0
        
        i = i_1
        i_1 -= 1
    while (i != 1)

rdx_1.b = 2
sub_1425cf6a0(arg1, rdx_1.b)
sub_1425cf6a0(arg1, 3)
return sub_1425cf6a0(arg1, 4) __tailcall

// 函数: sub_141bb0fc0
// 地址: 0x141bb0fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x658)

if (rdi == 0)
    *arg2 = *(arg1 + 0x128)
    void* rax_7 = *(arg1 + 0x130)
    arg2[1] = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    arg2[2].d = *(arg1 + 0x138)
    return arg2

sub_1405d9400()
int64_t* rdx = &data_143cd6fd8

if (*(rdi + 0x2c0) != 0)
    rdx = sub_140d44910(rdi + 0x2a8)

*arg2 = *rdx
void* rax_3 = rdx[1]
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = rdx[2].d
return arg2

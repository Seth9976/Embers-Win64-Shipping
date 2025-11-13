// 函数: sub_141bb1060
// 地址: 0x141bb1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x290)

if (rax == 0)
    *arg2 = *(arg1 + 0x128)
    void* rax_5 = *(arg1 + 0x130)
    arg2[1] = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    arg2[2].d = *(arg1 + 0x138)
    return arg2

int64_t* rax_1 = sub_140d44910(rax + 0x2a8)
*arg2 = *rax_1
void* rcx_2 = rax_1[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

arg2[2].d = rax_1[2].d
return arg2

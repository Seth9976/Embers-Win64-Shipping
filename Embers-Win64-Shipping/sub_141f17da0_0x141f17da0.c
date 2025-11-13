// 函数: sub_141f17da0
// 地址: 0x141f17da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax
rax.b = *(arg1 + 0x55c) & 1
bool cond:0 = (*(arg1 + 0x55c) & 2) != 0
*(arg2 + 0x14) = rax.b

if (cond:0)
    rax.b = 1
else
    void* rsi_1 = *(arg1 - 0x130)
    
    if (rsi_1 == 0)
        rax.b = 1
    else
        void* rax_1 = sub_14258d940()
        void* rdx = *(rsi_1 + 0x10)
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s> *(rdx + 0x38))
            rax.b = 1
        else if (*(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
            rax.b = 1
        else
            rax.b = 0

*(arg2 + 0x15) = rax.b
*(arg2 + 0xc) = *(arg1 + 0x554)
arg2[2].d = *(arg1 + 0x558)
arg2[1].d = *(arg1 + 0x550)
*arg2 = arg1 + 0x10
return arg2

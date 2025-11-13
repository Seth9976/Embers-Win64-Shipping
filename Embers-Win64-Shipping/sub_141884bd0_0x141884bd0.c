// 函数: sub_141884bd0
// 地址: 0x141884bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x5c)
*(arg1 + 0x5c) = 1

if (*(arg1 + 0x68) != 0)
    while (true)
        void* rax_1 = *(arg1 + 0x68)
        
        if (rax_1 != 0)
            int64_t* rcx = *(rax_1 + 0x70)
            
            if ((*(*rcx + 0x20))(rcx, 0xffffffff, 0) != 0)
                break

int32_t rdx = *(*(arg1 + 0x10) + 8)
int32_t rax_5 = 0

if (0 == *(arg1 + 0x60))
    *(arg1 + 0x60) = 0
else
    rax_5 = *(arg1 + 0x60)

int64_t rcx_1 = sx.q(rax_5)
*arg2 = rcx_1
arg2[1] = sx.q(rdx - 1) - rcx_1 + 1
return arg2

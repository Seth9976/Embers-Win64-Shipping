// 函数: sub_141baa470
// 地址: 0x141baa470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
*arg2 = 0
arg2[1] = 0
int64_t* rsi = *(arg1 + 0x108)
uint64_t r15_1 = sx.q(*(arg1 + 0x110)) << 3 u>> 3

if (rsi u> &rsi[sx.q(*(arg1 + 0x110))])
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        void* r14_1 = *rsi
        int32_t rax_2 = (rdi_1 + 1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        rsi = &rsi[1]
        rbp += 1
        *(*arg2 + (rdi_1 << 3)) = *(r14_1 + 0x30)
    while (rbp != r15_1)

return arg2

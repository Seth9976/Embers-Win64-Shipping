// 函数: sub_14271d420
// 地址: 0x14271d420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = *(arg1 + 0x90) + arg2[1].d

if (rdx_1 s> *(arg2 + 0xc))
    sub_140638c50(arg2, rdx_1)

int64_t rbp = 0
int64_t* rsi = *(arg1 + 0x88)
uint64_t result = &rsi[sx.q(*(arg1 + 0x90))]
uint64_t r15_1 = sx.q(*(arg1 + 0x90)) << 3 u>> 3

if (rsi u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int64_t r14_1 = *(*rsi + 0xa0)
        int32_t rax_2 = (rdi_1 + 1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = *arg2
        rsi = &rsi[1]
        rbp += 1
        *(result + (rdi_1 << 3)) = r14_1
    while (rbp != r15_1)

return result

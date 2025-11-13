// 函数: sub_141f8ae70
// 地址: 0x141f8ae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fb6160(arg1, arg2)
int64_t rbp = 0
int64_t* rsi = *(arg1 + 0xc8)
void* result = &rsi[sx.q(*(arg1 + 0xd0))]
uint64_t r15_1 = sx.q(*(arg1 + 0xd0)) << 3 u>> 3

if (rsi u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t r14_1 = *rsi
        
        if (r14_1 != 0)
            int64_t rdi_1 = sx.q(arg2[1].d)
            int32_t rax_1 = (rdi_1 + 1).d
            arg2[1].d = rax_1
            
            if (rax_1 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            result = *arg2
            *(result + (rdi_1 << 3)) = r14_1
        
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r15_1)

return result

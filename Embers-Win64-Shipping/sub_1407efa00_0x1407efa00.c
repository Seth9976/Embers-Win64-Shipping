// 函数: sub_1407efa00
// 地址: 0x1407efa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
*arg2 = 0
arg2[1] = 0
int64_t* r14 = *(arg1 + 0x1c0)
uint64_t r15_1 = sx.q(*(arg1 + 0x1c8)) << 3 u>> 3

if (r14 u> &r14[sx.q(*(arg1 + 0x1c8))])
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rbx_1 = *r14
        
        if (rbx_1 != 0 && (*(*rbx_1 + 0x288))(rbx_1) != 0
                && (*(*rbx_1 + 0x278))(rbx_1, zx.q(*(arg1 + 0xd8))) != 0)
            int64_t rsi_1 = sx.q(arg2[1].d)
            int32_t rax_6 = (rsi_1 + 1).d
            arg2[1].d = rax_6
            
            if (rax_6 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rsi_1 << 3)) = rbx_1
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r15_1)

return arg2

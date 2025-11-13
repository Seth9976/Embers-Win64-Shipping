// 函数: sub_141f3bc80
// 地址: 0x141f3bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405c5570(arg3, 0)

if (arg2 != 0)
    return sub_141f31720(arg1, arg3) __tailcall

int32_t rax_1 = *(arg1 + 0xd8)

if (rax_1 s> *(arg3 + 0xc))
    sub_1405c5570(arg3, rax_1)
    rax_1 = *(arg1 + 0xd8)

int64_t* r14_1 = *(arg1 + 0xd0)
uint64_t result = &r14_1[sx.q(rax_1)]
uint64_t r15_1 = sx.q(rax_1) << 3 u>> 3

if (r14_1 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rbp_1 = *r14_1
        
        if (rbp_1 != 0)
            int64_t rsi_1 = sx.q(arg3[1].d)
            int32_t rax_3 = (rsi_1 + 1).d
            arg3[1].d = rax_3
            
            if (rax_3 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            result = *arg3
            *(result + (rsi_1 << 3)) = rbp_1
        
        r14_1 = &r14_1[1]
        rdi += 1
    while (rdi != r15_1)

return result

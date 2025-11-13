// 函数: sub_141e02a10
// 地址: 0x141e02a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141e01bc0(*(arg1 + 0x10))

if (result != 0)
    int64_t rdx = *result
    int64_t* rax = (*(rdx + 0x30))(result, rdx)
    int64_t rsi_1 = 0
    void** r14_1 = *rax
    result = &r14_1[rax[1]]
    uint64_t r12_2 = sx.q(rax[1].d) << 3 u>> 3
    
    if (r14_1 u> result)
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            result = *r14_1
            int64_t rcx_2 = sx.q(*(result + 0x4c))
            void* rcx_3 = rcx_2 + arg1
            
            if (rcx_2 != neg.q(arg1) && *(rcx_3 + 0x80) == arg2)
                void* rax_2 = sub_141df1e90(rcx_3)
                int64_t rbp_1 = sx.q(arg3[1].d)
                int32_t rcx_4 = (rbp_1 + 1).d
                arg3[1].d = rcx_4
                
                if (rcx_4 s> *(arg3 + 0xc))
                    sub_1405a4d70(arg3)
                
                result = *arg3
                *(result + (rbp_1 << 3)) = rax_2
            
            r14_1 = &r14_1[1]
            rsi_1 += 1
        while (rsi_1 != r12_2)

return result

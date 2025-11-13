// 函数: sub_141e06640
// 地址: 0x141e06640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141e01bc0(arg1[2])

if (result != 0)
    int64_t rdx = *result
    int64_t* rax = (*(rdx + 0x30))(result, rdx)
    int64_t rsi_1 = 0
    void** r14_1 = *rax
    result = &r14_1[rax[1]]
    uint64_t r15_2 = sx.q(rax[1].d) << 3 u>> 3
    
    if (r14_1 u> result)
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            result = *r14_1
            int64_t rcx_2 = sx.q(*(result + 0x4c))
            void* rcx_3 = rcx_2 + arg1
            
            if (rcx_2 != neg.q(arg1) && *(rcx_3 + 0x80) == arg2)
                result = sub_141e30ce0(rcx_3, arg3, arg1)
            
            r14_1 = &r14_1[1]
            rsi_1 += 1
        while (rsi_1 != r15_2)

return result

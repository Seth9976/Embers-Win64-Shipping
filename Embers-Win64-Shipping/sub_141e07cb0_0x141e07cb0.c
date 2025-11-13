// 函数: sub_141e07cb0
// 地址: 0x141e07cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg3 s<= arg2)
    if (*(arg1 + 0x680) s> 0)
        int32_t rsi_2 = 1
        int64_t r14_2 = 0
        
        do
            int64_t* rbp_2 = *(r14_2 + *(arg1 + 0x678))
            
            if (rbp_2 != 0 && sub_141e2ae10(rbp_2, arg1).b != 0)
                int64_t r13_2 = sx.q(*(arg1 + 0x670))
                int32_t rax_6 = (r13_2 + 1).d
                *(arg1 + 0x670) = rax_6
                
                if (rax_6 s> *(arg1 + 0x674))
                    sub_1405a4d70(arg1 + 0x668)
                
                *(*(arg1 + 0x668) + (r13_2 << 3)) = rbp_2
                int32_t rax_8 = *(arg1 + 0x680)
                int32_t rdx_9 = rax_8 - i
                
                if (rdx_9 != 1)
                    int64_t rcx_6 = *(arg1 + 0x678)
                    memmove(rcx_6 + (sx.q(i) << 3), rcx_6 + (sx.q(rsi_2) << 3), (rdx_9 - 1) << 3)
                    rax_8 = *(arg1 + 0x680)
                
                i -= 1
                rsi_2 -= 1
                *(arg1 + 0x680) = rax_8 - 1
                r14_2 -= 8
            
            i += 1
            rsi_2 += 1
            r14_2 += 8
        while (i s< *(arg1 + 0x680))
else if (*(arg1 + 0x670) s> 0)
    int32_t rsi_1 = 1
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rbp_1 = *(r14_1 + *(arg1 + 0x668))
        
        if (rbp_1 != 0 && sub_141e2ae10(rbp_1, arg1).b == 0)
            int64_t r13_1 = sx.q(*(arg1 + 0x680))
            int32_t rax_1 = (r13_1 + 1).d
            *(arg1 + 0x680) = rax_1
            
            if (rax_1 s> *(arg1 + 0x684))
                sub_1405a4d70(arg1 + 0x678)
            
            *(*(arg1 + 0x678) + (r13_1 << 3)) = rbp_1
            int32_t rax_3 = *(arg1 + 0x670)
            int32_t rdx_3 = rax_3 - i
            
            if (rdx_3 != 1)
                int64_t rcx_2 = *(arg1 + 0x668)
                memmove(rcx_2 + (sx.q(i) << 3), rcx_2 + (sx.q(rsi_1) << 3), (rdx_3 - 1) << 3)
                rax_3 = *(arg1 + 0x670)
            
            i -= 1
            rsi_1 -= 1
            *(arg1 + 0x670) = rax_3 - 1
            r14_1 -= 8
        
        i += 1
        rsi_1 += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x670))

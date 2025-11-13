// 函数: sub_140806720
// 地址: 0x140806720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x24) - 3)

if (result.d u> 1)
    void* r12_1 = *(arg1 + 0x778)
    char rsi_1 = sub_14085d8d0(arg1 + 0x58, *(arg1 + 0x780)) & 1
        & sub_14085d8d0(arg1 + 0x3c0, *(arg1 + 0x780))
    
    if (*(*(arg1 + 0x788) + 0xd8) == 1)
        void* rcx_3 = *(arg1 + 0x728)
        
        if (rcx_3 != 0)
            *(arg1 + 0x780)
            rsi_1 &= sub_14085d880(rcx_3)
    
    int64_t* i = *(arg1 + 0x730)
    
    for (void* rbp_2 = sx.q(*(arg1 + 0x738)) * 0x368 + i; i != rbp_2; i = &i[0x6d])
        rsi_1 &= sub_14085d8d0(i, *(arg1 + 0x780))
    
    if (rsi_1 != 0)
        if (*(arg1 + 0x14) == 0)
            sub_140857c00(arg1 + 0x58)
            sub_140857c00(arg1 + 0x3c0)
            
            if (*(*(arg1 + 0x788) + 0xd8) == 1)
                void* rcx_8 = *(arg1 + 0x728)
                
                if (rcx_8 != 0)
                    sub_140857be0(rcx_8)
            
            void* i_1 = *(arg1 + 0x730)
            
            for (void* rsi_3 = sx.q(*(arg1 + 0x738)) * 0x368 + i_1; i_1 != rsi_3; i_1 += 0x368)
                sub_140857c00(i_1)
        
        if ((*(arg1 + 0x1c) & 1) != 0)
            sub_140808700(r12_1)
            int64_t rsi_4 = 0
            int64_t* rdi_1 = *(arg1 + 0x7a8)
            int64_t rbp_3 = 0
            uint64_t r14_2 = sx.q(*(arg1 + 0x7b0)) << 3 u>> 3
            
            if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x7b0))])
                r14_2 = 0
            
            if (r14_2 != 0)
                do
                    sub_140808700(*rdi_1)
                    rbp_3 += 1
                    rdi_1 = &rdi_1[1]
                while (rbp_3 != r14_2)
            
            int64_t* rdi_2 = *(arg1 + 0x798)
            uint64_t r14_4 = sx.q(*(arg1 + 0x7a0)) << 3 u>> 3
            
            if (rdi_2 u> &rdi_2[sx.q(*(arg1 + 0x7a0))])
                r14_4 = 0
            
            if (r14_4 != 0)
                do
                    sub_140808700(*rdi_2)
                    rsi_4 += 1
                    rdi_2 = &rdi_2[1]
                while (rsi_4 != r14_4)
            
            *(arg1 + 0x1c) &= 0xfffffffe
        
        *(arg1 + 0x14) += 1
        result = *(arg1 + 0x778)
        *(result + 0x58) = *(arg1 + 0x14)
    else
        result = sub_140808860(arg1, 1)
        
        if (*(arg1 + 0x24) != 4)
            *(arg1 + 0x24) = 4

return result

// 函数: sub_142ba3e20
// 地址: 0x142ba3e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
int16_t* rdi = *(arg1 + 0x8e8)
uint64_t result = &rdi[sx.q(*(arg1 + 0x8e0)) * 0x24]
int32_t r8_1 = *(arg2 + 0x246c)
uint64_t result_1 = result
int32_t arg_18 = r8_1

if (rdi u< result)
    uint64_t r13
    uint64_t var_30_1 = r13
    int64_t r15
    int64_t var_40_1 = r15
    
    do
        void* r12_1 = nullptr
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = mulu.dp.d(0xcccccccd, *(rbx + 0x38))
        r13.b = 0
        result = sub_142b93e80(temp0_1 u>> 5, r8_1)
        int32_t r14_1 = result.d
        
        if (result.d s> 0x20)
            r14_1 = 0x20
        
        uint64_t rbp_1 = 0
        
        if (*(rbx + 0x2544) u> 0)
            do
                void* rsi_3 = rbx + (((rbp_1 << 3) + 0x952 + zx.q(rbp_1.d)) << 2)
                int32_t rbx_1 = *(rsi_3 + 0x20)
                
                if ((rbx_1.b & 1) != 0)
                    r15.b = (rbx_1.b & 6) != 0
                    uint8_t rbx_2 = (rbx_1 u>> 3).b & 1
                    result.b = sx.d(*(rdi + 0xd)) == *(arg1 + 0x8f0)
                    
                    if (result.b != r15.b || rbx_2 != 0)
                        int32_t rax_3 = sx.d(*rdi) - *rsi_3
                        int32_t rcx_5 = neg.d(rax_3)
                        
                        if (rax_3 s>= 0)
                            rcx_5 = rax_3
                        
                        result = sub_142b93e80(rcx_5, arg_18)
                        
                        if (result.d s< r14_1)
                            r14_1 = result.d
                            r12_1 = rsi_3
                            r13 = zx.q(rbx_2)
                        
                        if ((rdi[6].b & 1) != 0 && result.d != 0 && rbx_2 == 0)
                            int32_t rdx_3 = sx.d(*rdi)
                            result.b = rdx_3 s< *rsi_3
                            
                            if (result.b != r15.b)
                                int32_t rdx_4 = rdx_3 - *(rsi_3 + 0xc)
                                int32_t rcx_7 = neg.d(rdx_4)
                                
                                if (rdx_4 s>= 0)
                                    rcx_7 = rdx_4
                                
                                result = sub_142b93e80(rcx_7, arg_18)
                                
                                if (result.d s< r14_1)
                                    r14_1 = result.d
                                    r12_1 = rsi_3 + 0xc
                                    r13.b = 0
                
                rbx = arg2
                rbp_1 = zx.q(rbp_1.d + 1)
            while (rbp_1.d u< *(rbx + 0x2544))
            
            if (r12_1 != 0)
                *(rdi + 0x18) = r12_1
                
                if (r13.b != 0)
                    rdi[6].b |= 8
        
        r8_1 = arg_18
        rdi = &rdi[0x24]
    while (rdi u< result_1)

return result

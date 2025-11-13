// 函数: sub_141e04760
// 地址: 0x141e04760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = nullptr
int64_t* rcx = *(arg1 + 0xa8)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x20))(rcx)
    
    if (arg2 s>= 0)
        int32_t rax_3 = rax_2[1].d
        
        if (arg2 s< rax_3)
            int64_t rcx_3 = sx.q(*(*(*rax_2 + (sx.q(rax_3 - arg2) << 3) - 8) + 0x4c))
            
            if (rcx_3 != neg.q(*(arg1 + 0xa0)))
                void* rax_6 = sub_141e24b80(rcx_3 + *(arg1 + 0xa0), arg3)
                int64_t rdi_1 = 0
                int32_t* r14 = *(rax_6 + 0x30)
                uint64_t r12_1 = sx.q(*(rax_6 + 0x38)) << 2 u>> 2
                
                if (r14 u> &r14[sx.q(*(rax_6 + 0x38))])
                    r12_1 = 0
                
                if (r12_1 == 0)
                    return nullptr
                
                do
                    int32_t r15_1 = *r14
                    void* rax_9
                    int32_t zmm0_1
                    int32_t zmm6_1
                    rax_9, zmm0_1, zmm6_1 = sub_142468100()
                    int64_t* rcx_5 = *(arg1 + 0xa8)
                    
                    if (rcx_5 != 0)
                        int64_t* rax_11 = (*(*rcx_5 + 0x20))(rcx_5)
                        int32_t rdx_2 = rax_11[1].d
                        int32_t rcx_7 = rdx_2 - r15_1
                        
                        if (rcx_7 s> 0 && rcx_7 - 1 s< rdx_2)
                            void* rdx_3 = *(*rax_11 + (sx.q(rcx_7) << 3) - 8)
                            
                            if (rax_9 != 0)
                                void* rax_14 = *(rdx_3 + 0x78)
                                int64_t rcx_9 = sx.q(*(rax_9 + 0x38))
                                
                                if (rcx_9.d s<= *(rax_14 + 0x38)
                                        && *(*(rax_14 + 0x30) + (rcx_9 << 3)) == rax_9 + 0x30)
                                    int64_t rbx_2 = sx.q(*(rdx_3 + 0x4c))
                                    int64_t* result_1 = rbx_2 + *(arg1 + 0xa0)
                                    
                                    if (rbx_2 != neg.q(*(arg1 + 0xa0)) && *(result_1 + 0x15) == 0)
                                        (*(*result_1 + 0xd0))(result_1)
                                        
                                        if (not(zmm0_1 f<= zmm6_1))
                                            (*(*result_1 + 0xd0))(result_1)
                                            result = result_1
                    
                    r14 = &r14[1]
                    rdi_1 += 1
                while (rdi_1 != r12_1)
                
                return result

return 0

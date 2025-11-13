// 函数: sub_1406432f0
// 地址: 0x1406432f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2 != 0)
    void* rax_1 = sub_141c122a0()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* result_1 = sub_141baf690(arg1)
            void* result = result_1
            
            if (result_1 != 0)
                while (true)
                    void* rax_4 = sub_141c122a0()
                    
                    if (rax_4 != 0)
                        int64_t rdx_1 = sx.q(*(arg2 + 0x38))
                        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                        
                        if (rax_5.d s<= rdx_1.d && *(*(arg2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                            void* rax_7 = *(result + 0x10)
                            
                            if (rdx_1.d s<= *(rax_7 + 0x38)
                                    && *(*(rax_7 + 0x30) + (rdx_1 << 3)) == arg2 + 0x30)
                                void* rax_15 = sub_141c122a0()
                                void* rdx_4 = *(result + 0x10)
                                int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                                
                                if (rax_16.d s<= *(rdx_4 + 0x38)
                                        && *(*(rdx_4 + 0x30) + (rax_16 << 3)) == rax_15 + 0x30)
                                    return result
                                
                                break
                    
                    void* result_2 = sub_141baf690(result)
                    
                    if (result_2 != 0)
                        result = result_2
                    else
                        void* rbx_1 = *(result + 0x20)
                        
                        if (rbx_1 == 0)
                            break
                        
                        void* rax_9 = sub_141c243c0()
                        void* rdx_2 = *(rbx_1 + 0x10)
                        int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                        
                        if (rax_10.d s> *(rdx_2 + 0x38))
                            break
                        
                        if (*(*(rdx_2 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                            break
                        
                        result = *(rbx_1 + 0x20)
                        
                        if (result == 0)
                            break
                        
                        void* rax_12 = sub_141c18780()
                        void* rdx_3 = *(result + 0x10)
                        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                        
                        if (rax_13.d s> *(rdx_3 + 0x38))
                            break
                        
                        if (*(*(rdx_3 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                            break

return nullptr

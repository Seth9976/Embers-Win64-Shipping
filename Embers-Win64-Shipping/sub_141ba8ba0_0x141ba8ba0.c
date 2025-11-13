// 函数: sub_141ba8ba0
// 地址: 0x141ba8ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(*(arg1 + 0x4c))

if (r15 != neg.q(arg2))
    void* rcx = *(arg1 + 0x78)
    
    if (*(rcx + 0xb4) == 1)
        void* rax_1 = sub_140be0b10(rcx)
        
        if (rax_1 != 0)
            int64_t* arg_8
            sub_141ba7ec0(&arg_8, rax_1)
            int64_t* rdi_1 = arg_8
            
            if (rdi_1 != 0)
                void* rax_2 = sub_141c062e0()
                
                if (rax_2 != 0)
                    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                    
                    if (rax_3.d s<= rdi_1[7].d && *(rdi_1[6] + (rax_3 << 3)) == rax_2 + 0x30)
                        arg_8 = nullptr
                        void* rax_5 = sub_141c062e0()
                        int64_t rax_6
                        
                        if (rax_5 != 0)
                            rax_6 = sx.q(*(rax_5 + 0x38))
                        
                        if (rax_5 == 0 || rax_6.d s> rdi_1[7].d
                                || *(rdi_1[6] + (rax_6 << 3)) != rax_5 + 0x30)
                            rdi_1 = nullptr
                        
                        char rax_8 = sub_140b5b8a0(0, 0)
                        uint64_t rbx_1 = arg_8
                        uint32_t rcx_5
                        rcx_5.b = (rbx_1 u>> 0x20).d == 0
                        
                        if ((rcx_5.b & rax_8) != 0)
                            sub_140d19010(arg2, 
                                NewObject with empty name can't be used to create default subobjects "
                            "(inside of UObject derived class constructor) as it produces 
                                    incon")
                        
                        void* result = sub_140d2dfc0(rdi_1, arg2, rbx_1, 0, 0, 0, 0, 0, 0)
                        sub_140d3a3a0(result + 0x28, arg3)
                        
                        if (result + 0x30 != arg4)
                            int64_t rdi_2 = sx.q(arg4[1].d)
                            int64_t r12_1 = *arg4
                            int32_t r8_1 = *(result + 0x3c)
                            *(result + 0x38) = rdi_2.d
                            
                            if (rdi_2.d != 0 || r8_1 != 0)
                                sub_1407751d0(result + 0x30, rdi_2.d, r8_1)
                                memcpy(*(result + 0x30), r12_1, (rdi_2 * 0x28).d)
                            else
                                *(result + 0x3c) = 0
                        
                        *(result + 0x40) = arg4[2]
                        *(result + 0x48) = arg4[3]
                        *(result + 0x50) = arg4[4].b
                        (*(*result + 0x270))(result, rax_1, r15 + arg2)
                        return result

return nullptr

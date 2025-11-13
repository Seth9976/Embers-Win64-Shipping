// 函数: sub_1420ab750
// 地址: 0x1420ab750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg3 + 0x260))(arg3)

if (result != 0)
    result = sub_141dc5a00(result)
    uint64_t result_1 = result
    
    if (result != 0)
        int32_t rax_1 = *(result + 0xc)
        int64_t* rdi_1 = nullptr
        void* const rax_7
        
        if (rax_1 s>= data_143e1d9b4)
            rax_7 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_1)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_3 = temp1_1 + rdx_2
            rax_7 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
        
        result = zx.q(*(rax_7 + 8) u>> 0x1d)
        
        if ((result.b & 1) == 0)
            int32_t i = 0
            
            if (*(arg1 + 0x268) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    int64_t* rcx_6 = *(rsi_1 + *(arg1 + 0x260))
                    result = (*(*rcx_6 + 0x278))(rcx_6, result_1)
                    
                    if (result.b != 0)
                        result = sx.q(i)
                        void* r13_1 = *(*(arg1 + 0x260) + (result << 3))
                        
                        if (r13_1 != 0)
                            int64_t* j = *(r13_1 + 0x38)
                            result = sx.q(*(r13_1 + 0x40))
                            
                            for (void* rsi_2 = &j[result]; j != rsi_2; j = &j[1])
                                void* r12_1 = *j
                                int64_t* rcx_8 = *(r12_1 + 0x20)
                                
                                if (rcx_8 == 0)
                                    result = 0
                                else
                                    result = (*(*rcx_8 + 0x260))(rcx_8)
                                
                                if (result == result_1)
                                    if (*(r13_1 + 0x28) != 0)
                                        int64_t* var_48 = nullptr
                                        int32_t rbx_1 = 0
                                        int32_t var_3c_1 = 0
                                        int64_t r9_1
                                        result, r9_1 = sub_1424d1b10()
                                        void* r13_2 = *(r13_1 + 0x28)
                                        int32_t k = 0
                                        
                                        if (*(r13_2 + 0x38) s> 0)
                                            void* r8_1 = result + 0x30
                                            void* arg_18 = r8_1
                                            void** r14_1 = nullptr
                                            int32_t rdx_5 = 0
                                            
                                            do
                                                int64_t rcx_9 = sx.q(*(r8_1 + 8))
                                                void* r15_1 = *(r14_1 + *(r13_2 + 0x30))
                                                result = *(r15_1 + 0x10)
                                                
                                                if (rcx_9.d s<= *(result + 0x38))
                                                    result = *(result + 0x30)
                                                    
                                                    if (*(result + (rcx_9 << 3)) == r8_1)
                                                        int64_t rsi_3 = sx.q(rbx_1)
                                                        rbx_1 = (rsi_3 + 1).d
                                                        
                                                        if (rbx_1 s> rdx_5)
                                                            result, r9_1 = sub_1405a4d70(&var_48)
                                                            rdx_5 = var_3c_1
                                                            r8_1 = arg_18
                                                            rdi_1 = var_48
                                                        
                                                        rdi_1[rsi_3] = r15_1
                                                
                                                k += 1
                                                r14_1 = &r14_1[1]
                                            while (k s< *(r13_2 + 0x38))
                                            
                                            if (rbx_1 s> 0)
                                                int64_t* rcx_11 = *rdi_1
                                                r9_1.b = 1
                                                result =
                                                    (*(*rcx_11 + 0x2d8))(rcx_11, arg2, r12_1, r9_1)
                                            
                                            if (rdi_1 != 0)
                                                return sub_140a74f90(rdi_1)
                                    
                                    break
                        
                        break
                    
                    i += 1
                    rsi_1 = &rsi_1[1]
                while (i s< *(arg1 + 0x268))

return result

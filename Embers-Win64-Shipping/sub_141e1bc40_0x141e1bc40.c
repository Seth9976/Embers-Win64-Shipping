// 函数: sub_141e1bc40
// 地址: 0x141e1bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0xf0))()
void* result_2 = result

if (result != 0)
    result = sub_141e01bc0(*(result + 0x10))
    
    if (result != 0)
        void* rdi_1 = arg2[4]
        
        if (rdi_1 != 0)
            void* rax_1 = sub_142591550()
            void* rdx = *(rdi_1 + 0x10)
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
                uint32_t rax_4
                void* r8_1
                
                if (data_143de5480 != 0)
                    rax_4, r8_1 = GetCurrentThreadId()
                    rax_4.b = rax_4 == data_143de5470
                
                if (data_143de5480 == 0 || rax_4.b != 0)
                    r8_1.b = 1
                    sub_141f3e990(arg2[4], 1, r8_1.b)
        
        void* rbp_1 = arg2[0x48]
        
        if (rbp_1 == 0)
            void* rax_6 = (*(*arg2 + 0x300))(arg2)
            arg2[0x48] = rax_6
            rbp_1 = rax_6
        
        void* result_1
        (*(*arg1 + 0xe8))(arg1, &result_1)
        int64_t* rax_9 = (*(*result + 0x80))(result)
        int64_t* rbx_1 = *rax_9
        result = sx.q(rax_9[1].d)
        void* rcx_7 = result * 0x68 + rbx_1
        
        if (rbx_1 != rcx_7)
            result = result_1
            
            do
                if (*rbx_1 == result)
                    int32_t i = 0
                    
                    if (rbx_1[4].d s> 0)
                        int64_t r15_1 = 0
                        int64_t r12_1 = 0
                        
                        while (i s< arg1[0xc].d)
                            int32_t* rdi_3 = arg1[0xb] + r15_1
                            
                            if (*(rdi_3 + 8) == 0 && *rdi_3 != 0xffffffff)
                                int64_t* rcx_8
                                
                                if (rbp_1 == 0)
                                    rcx_8 = nullptr
                                else
                                    rcx_8 = *(rbp_1 + 0xa8)
                                
                                int64_t* rax_11 = (*(*rcx_8 + 0x20))(rcx_8)
                                int64_t rdx_2 = sx.q(*rdi_3)
                                char rcx_9
                                
                                if (rdx_2.d s< 0 || rdx_2.d s>= rax_11[1].d)
                                    rcx_9 = 0
                                else
                                    rcx_9 = 1
                                
                                if (rcx_9 != 0)
                                    *(rdi_3 + 8) =
                                        sx.q(*(*(*rax_11 + (rdx_2 << 3)) + 0x4c)) + *(rbp_1 + 0xa0)
                            
                            int64_t r8_2 = sx.q(rbx_1[4].d)
                            int64_t rax_15 = 0
                            
                            if (r8_2.d s> 0)
                                int64_t* rcx_11 = rbx_1[3]
                                
                                do
                                    if (*(rcx_11 + r12_1) == rcx_11[rax_15])
                                        if (rax_15 != -1)
                                            void* rdx_4 = *(rbx_1[8] + (rax_15 << 3))
                                            
                                            if (rdx_4 != 0)
                                                void* rdx_5 = arg1[0xb]
                                                void* rcx_14 = sx.q(*(rdx_4 + 0x4c)) + result_2
                                                int32_t r8_3 = arg1[0x12].d
                                                *(rcx_14 + 0x70) = rbp_1
                                                int32_t* rdx_6 = rdx_5 + r15_1
                                                int32_t rax_17
                                                
                                                if (rdx_5 == neg.q(r15_1))
                                                    *(rcx_14 + 0x28) = 0
                                                    rax_17 = -1
                                                else
                                                    *(rcx_14 + 0x28) = *(rdx_6 + 8)
                                                    rax_17 = *rdx_6
                                                
                                                *(rcx_14 + 0x20) = rax_17
                                                *(rcx_14 + 0x68) = r8_3
                                        
                                        break
                                    
                                    rax_15 += 1
                                while (rax_15 s< r8_2)
                            
                            i += 1
                            r12_1 += 8
                            r15_1 += 0x10
                            
                            if (i s>= rbx_1[4].d)
                                break
                    
                    result = rbx_1[7]
                    
                    if (result != 0)
                        result = sx.q(*(result + 0x4c)) + result_2
                        arg1[0x11] = result
                    
                    break
                
                rbx_1 = &rbx_1[0xd]
            while (rbx_1 != rcx_7)

return result

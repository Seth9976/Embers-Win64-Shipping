// 函数: sub_141e1be90
// 地址: 0x141e1be90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x11] = 0
void* j = (*(*arg1 + 0xf0))()
void* j_2 = j

if (j != 0)
    j = sub_141e01bc0(*(j + 0x10))
    
    if (j != 0)
        int64_t r8_1 = *arg1
        void* j_1
        (*(r8_1 + 0xe8))(arg1, &j_1, r8_1)
        int64_t rdx_2 = *j
        int64_t* rax_1 = (*(rdx_2 + 0x80))(j, rdx_2)
        int64_t* rdx_3 = *rax_1
        j = sx.q(rax_1[1].d)
        void* rcx_4 = j * 0x68 + rdx_3
        
        if (rdx_3 != rcx_4)
            j = j_1
            
            do
                if (*rdx_3 == j)
                    int32_t r8_2 = rdx_3[4].d
                    int32_t i = 0
                    
                    if (r8_2 s> 0)
                        int64_t* rbx_2 = nullptr
                        
                        while (i s< arg1[0xc].d)
                            int64_t* rcx_5 = rdx_3[3]
                            j = nullptr
                            
                            if (r8_2 s> 0)
                                int64_t r9_1 = *(rbx_2 + rcx_5)
                                
                                do
                                    if (r9_1 == *rcx_5)
                                        if (j != -1)
                                            void* r8_3 = *(rdx_3[8] + (j << 3))
                                            
                                            if (r8_3 != 0)
                                                j = sx.q(*(r8_3 + 0x4c)) + j_2
                                                *(j + 0x70) = 0
                                                *(j + 0x28) = 0
                                                *(j + 0x20) = 0xffffffff
                                                *(j + 0x68) = 0xffffffff
                                        
                                        break
                                    
                                    j += 1
                                    rcx_5 = &rcx_5[1]
                                while (j s< sx.q(r8_2))
                            
                            r8_2 = rdx_3[4].d
                            i += 1
                            rbx_2 = &rbx_2[1]
                            
                            if (i s>= r8_2)
                                break
                    
                    break
                
                rdx_3 = &rdx_3[0xd]
            while (rdx_3 != rcx_4)

return j

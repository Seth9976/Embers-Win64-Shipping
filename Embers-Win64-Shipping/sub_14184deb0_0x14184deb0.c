// 函数: sub_14184deb0
// 地址: 0x14184deb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* r15 = *arg1
int64_t* rbx = nullptr
int64_t rax = arg2
int64_t r12 = 0
int64_t r13 = 0
void* result = nullptr

if (r15 == 0)
    return 0

while (result u< arg3)
    int64_t rdx = r15[1]
    r13 += rdx
    
    if (r13 u> rax)
        int64_t* rcx_1 = rax - r12
        
        if (rax u<= r12)
            rcx_1 = rbx
        
        void* rsi_2 = arg3 - result
        void* rdx_1 = rdx - rcx_1
        void* rdi_2 = *r15 + rcx_1
        
        if (rdx_1 u<= rsi_2)
            rsi_2 = rdx_1
        
        if (rsi_2 != 0)
            if (*arg4 == 0)
                int64_t* rax_9 = j_sub_140a82f30(0x20)
                
                if (rax_9 == 0)
                    arg3 = arg_18
                    *arg4 = rbx
                    arg4[1] = rbx
                else
                    arg3 = arg_18
                    *rax_9 = rdi_2
                    rax_9[1] = rsi_2
                    rax_9[2] = rbx
                    rax_9[3] = rbx
                    *arg4 = rax_9
                    arg4[1] = rax_9
            else
                rbx = arg4[1]
                
                if (rbx != 0)
                    while (true)
                        void* rcx_2 = *rbx
                        void* rdx_3 = rbx[1] + rcx_2
                        
                        if (rdi_2 u> rdx_3)
                            int64_t* rax_6 = j_sub_140a82f30(0x20)
                            int64_t* rcx_6 = rax_6
                            
                            if (rax_6 == 0)
                                rcx_6 = nullptr
                            else
                                *rax_6 = rdi_2
                                rax_6[1] = rsi_2
                                rax_6[3] = 0
                            
                            rcx_6[2] = rbx
                            rcx_6[3] = rbx[3]
                            void* rax_8 = rbx[3]
                            
                            if (rax_8 == 0)
                                arg4[1] = rcx_6
                                rbx[3] = rcx_6
                            else
                                *(rax_8 + 0x10) = rcx_6
                                rbx[3] = rcx_6
                        else
                            void* rax_1 = rsi_2 + rdi_2
                            
                            if (rcx_2 u<= rax_1)
                                if (rcx_2 u<= rdi_2)
                                    rdi_2 = rcx_2
                                
                                *rbx = rdi_2
                                
                                if (rax_1 u>= rdx_3)
                                    rdx_3 = rax_1
                                
                                rbx[1] = rdx_3 - rdi_2
                                sub_14182f660(arg4, rbx, 1)
                            else
                                rbx = rbx[2]
                                
                                if (rbx != 0)
                                    continue
                                
                                int64_t* rax_2 = j_sub_140a82f30(zx.q((&rbx[4]).d))
                                int64_t* rcx_4 = rax_2
                                
                                if (rax_2 == 0)
                                    rcx_4 = rbx
                                else
                                    *rax_2 = rdi_2
                                    rax_2[1] = rsi_2
                                    rax_2[2] = rbx
                                    rax_2[3] = rbx
                                
                                void* rdx_4 = *arg4
                                rcx_4[2] = *(rdx_4 + 0x10)
                                rcx_4[3] = rdx_4
                                void* rax_4 = *(rdx_4 + 0x10)
                                
                                if (rax_4 == 0)
                                    arg3 = arg_18
                                    *arg4 = rcx_4
                                    *(rdx_4 + 0x10) = rcx_4
                                else
                                    arg3 = arg_18
                                    *(rax_4 + 0x18) = rcx_4
                                    *(rdx_4 + 0x10) = rcx_4
                                
                                goto label_14184dffe
                        
                        arg3 = arg_18
                        break
                
                rbx = nullptr
        
    label_14184dffe:
        rdx = r15[1]
        result += rsi_2
        rax = arg2
    
    r15 = r15[3]
    r12 += rdx
    
    if (r15 == 0)
        break

return result

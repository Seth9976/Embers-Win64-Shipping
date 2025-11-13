// 函数: sub_142a383c0
// 地址: 0x142a383c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x10)
int64_t* rdi = arg1

if (rax s>= 0)
    if (rax + 1 s< arg1[0x15].d)
        return *(rdi[0x14] + (sx.q(rax + 1) << 3))
    
    return &arg1[4]

int64_t rbx = *(arg2 + 8)
int64_t r15_1 = arg1[3] + arg1[2]
int32_t arg_10

if (sub_142a38740(*arg1, rbx, &arg_10) == 0
        && sub_142a3e160(*rdi, rbx, &arg_10, arg3) == 0x1f43b675)
    int64_t rbx_1 = rbx + sx.q(arg_10)
    sub_142a38740(*rdi, rbx_1, &arg_10)
    int64_t rax_9 = sub_142a3e270(*rdi, rbx_1, &arg_10, arg3)
    int64_t rbx_2 = rbx_1 + sx.q(arg_10) + rax_9
    
    while (rbx_2 s< r15_1)
        if (sub_142a38740(*rdi, rbx_2, &arg_10) != 0)
            break
        
        int64_t rsi_1 = rbx_2
        uint64_t rax_11 = sub_142a3e160(*rdi, rbx_2, &arg_10, arg3)
        
        if (rax_11 s< 0)
            break
        
        int64_t rbx_3 = rbx_2 + sx.q(arg_10)
        sub_142a38740(*rdi, rbx_3, &arg_10)
        int64_t rax_12 = sub_142a3e270(*rdi, rbx_3, &arg_10, arg3)
        rbx_2 = rbx_3 + sx.q(arg_10)
        
        if (rax_12 != 0)
            if (rax_11 == 0x1f43b675)
                int64_t rsi_2 = rsi_1 - rdi[2]
                void arg_18
                void arg_20
                
                if (sub_142a38830(rdi, rsi_2, &arg_20, &arg_18, arg3) s> 0)
                    if (rsi_2 s> 0)
                        int64_t rbx_4 = rdi[0x14] + (sx.q(rdi[0x15].d) << 3)
                        int64_t r8_9 = rbx_4 + (sx.q(*(rdi + 0xac)) << 3)
                        
                        while (rbx_4 u< r8_9)
                            int64_t rax_19 = (r8_9 - rbx_4) s>> 3
                            
                            if (rax_19 s< 0)
                                rax_19 += 1
                            
                            int64_t rax_20 = rax_19 s>> 1
                            void** r9_2 = *(rbx_4 + (rax_20 << 3))
                            int64_t rdx_9 = rbx_4 + (rax_20 << 3)
                            int64_t rcx_16 = r9_2[1] - *(*r9_2 + 0x10)
                            
                            if (rcx_16 s>= rsi_2)
                                if (rcx_16 s<= rsi_2)
                                    return r9_2
                                
                                r8_9 = rdx_9
                            else
                                rbx_4 = rdx_9 + 8
                        
                        void** rax_22 = sub_142a36b00(rdi, 0xffffffff, rsi_2)
                        
                        if (rax_22 != 0)
                            if (sub_142a3dfa0(rdi, rax_22, (rbx_4 - rdi[0x14]) s>> 3) != 0)
                                return rax_22
                            
                            sub_142a35cd0(rax_22)
                            j_sub_140a74f90(rax_22)
                    
                    break
            
            rbx_2 += rax_12
    
    return nullptr

return 0

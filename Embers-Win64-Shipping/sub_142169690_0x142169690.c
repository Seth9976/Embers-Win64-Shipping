// 函数: sub_142169690
// 地址: 0x142169690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = nullptr
bool r8 = sub_140b5b8a0(*arg2, 0x66)

if ((*(arg2 + 4) == 0 & r8) != 0)
    int64_t rbx_1 = data_143f4d048
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_1 + (rcx_1 << 2)) != 0 && arg1[0x40].d s> 0)
        while (true)
            if (result == 0)
                int64_t r8_1 = sx.q(arg1[0x40].d)
                result = *(arg1[0x3f] + (r8_1 << 3) - 8)
                arg1[0x40].d = (r8_1 - 1).d
                sub_1405c53d0(&arg1[0x3f])
                
                if (result != 0)
                    int64_t rbx_2 = *arg2
                    int64_t rbp_1 = *(result + 0x10)
                    int64_t* rcx_7
                    
                    if (arg1[0x36].d == *(arg1 + 0x1dc))
                    label_1421697ae:
                        rcx_7 = nullptr
                    else
                        int32_t rax_6 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                        void* r8_2 = &arg1[0x3c]
                        void* rcx_4 = *(r8_2 + 8)
                        
                        if (rcx_4 != 0)
                            r8_2 = rcx_4
                        
                        int32_t rax_8 = *(r8_2 + (((sx.q(arg1[0x3e].d) - 1) & sx.q(rax_6)) << 2))
                        
                        if (rax_8 == 0xffffffff)
                        label_1421697ae_1:
                            rcx_7 = nullptr
                        else
                            while (true)
                                rcx_7 = sx.q(rax_8) * 0x38 + arg1[0x35]
                                
                                if (*rcx_7 == rbx_2)
                                    break
                                
                                rax_8 = rcx_7[6].d
                                
                                if (rax_8 == 0xffffffff)
                                    goto label_1421697ae_2
                            
                            if (rax_8 == 0xffffffff)
                            label_1421697ae_2:
                                rcx_7 = nullptr
                    
                    if (rbp_1 != rcx_7[3])
                        int32_t rax_9 = *(result + 0xc)
                        void* const rax_13
                        
                        if (rax_9 s>= data_143e1d9b4)
                            rax_13 = nullptr
                        else
                            uint32_t rdx_3 = zx.d(rax_9.w)
                            
                            if (rax_9 s< 0)
                                rax_9 += 0xffff
                                rdx_3 -= 0x10000
                            
                            rax_13 =
                                *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
                        
                        *(rax_13 + 8) |= 0x20000000
                        result = nullptr
                
                if (arg1[0x40].d s> 0)
                    continue
                else if (result == 0)
                    break
            
            *(result + 0x30) &= 0xfffffbff
            return result

return (*(*arg1 + 0x410))(arg1, arg2)

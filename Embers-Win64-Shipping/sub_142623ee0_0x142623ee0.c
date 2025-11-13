// 函数: sub_142623ee0
// 地址: 0x142623ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t r10 = arg5
int32_t r11 = arg3
int64_t r8 = sx.q(arg1)
int64_t rcx = sx.q(arg2)
int64_t var_60 = r8
int64_t var_68 = rcx
int16_t* r14 = arg4 + ((zx.q(*(r10 + (r8 << 1))) & 0x7fff) << 3)
int16_t* rsi = arg4 + ((zx.q(*(r10 + (rcx << 1))) & 0x7fff) << 3)
uint64_t result

if (r11 s<= 0)
label_142624149:
    result.b = 1
else
    int32_t r15_1 = 1
    result = 0
    int32_t arg_8 = 1
    
    while (true)
        uint64_t result_2 = result + 1
        uint64_t result_1 = result_2
        
        if (r15_1 s>= r11)
            result_2 = 0
        
        if (result != r8 && result_2 != r8 && result != rcx && result_2 != rcx)
            int16_t r11_1 = *r14
            int16_t* rdi_1 = arg4 + ((zx.q(*(r10 + (result << 1))) & 0x7fff) << 3)
            int16_t* rbx_1 = arg4 + ((zx.q(*(r10 + (result_2 << 1))) & 0x7fff) << 3)
            int16_t r9 = *rdi_1
            
            if (r11_1 != r9 || r14[2] != rdi_1[2])
                int16_t r8_1 = *rsi
                
                if (r8_1 != r9 || rsi[2] != rdi_1[2])
                    int16_t rdx = *rbx_1
                    
                    if ((r11_1 != rdx || r14[2] != rbx_1[2]) && (r8_1 != rdx || rsi[2] != rbx_1[2]))
                        uint32_t rcx_3 = zx.d(r14[2])
                        uint32_t rax_9 = zx.d(r9)
                        uint32_t r10_1 = zx.d(r8_1)
                        uint32_t r8_2 = zx.d(rsi[2])
                        uint32_t r11_2 = zx.d(r11_1)
                        uint32_t r13_2 = r8_2 - rcx_3
                        uint32_t r12_2 = r10_1 - r11_2
                        int32_t rax_11 = (rax_9 - r11_2) * r13_2
                        int32_t r9_3 = (zx.d(rdi_1[2]) - rcx_3) * r12_2
                        
                        if (r9_3 != rax_11)
                            uint32_t rbp_2 = zx.d(rbx_1[2])
                            uint32_t r15_2 = zx.d(rdx)
                            int32_t rdx_3 = (rbp_2 - rcx_3) * r12_2
                            int32_t rax_14 = (r15_2 - r11_2) * r13_2
                            
                            if (rdx_3 != rax_14)
                                result = zx.q(rdi_1[2])
                                int32_t rbp_3 = rbp_2 - result.d
                                uint32_t r15_3 = r15_2 - rax_9
                                int32_t rcx_5 = (rcx_3 - result.d) * r15_3
                                int32_t r11_4 = (r11_2 - rax_9) * rbp_3
                                
                                if (rcx_5 != r11_4)
                                    int32_t r10_3 = (r10_1 - rax_9) * rbp_3
                                    int32_t r8_4 = (r8_2 - result.d) * r15_3
                                    
                                    if (r8_4 != r10_3 && ((rdx_3 - rax_14) u>> 0x1f).b
                                            != ((r9_3 - rax_11) u>> 0x1f).b && ((rcx_5 - r11_4) u>> 0x1f).b
                                            != ((r8_4 - r10_3) u>> 0x1f).b)
                                        result.b = 0
                                        break
                                        break
                                        break
                            
                            r15_1 = arg_8
                        
                        if (sub_142620aa0(r14, rsi, rdi_1).b != 0)
                            result.b = 0
                            break
                        
                        if (sub_142620aa0(r14, rsi, rbx_1).b != 0)
                            result.b = 0
                            break
                        
                        if (sub_142620aa0(rdi_1, rbx_1, r14).b != 0)
                            result.b = 0
                            break
                        
                        if (sub_142620aa0(rdi_1, rbx_1, rsi).b != 0)
                            result.b = 0
                            break
                        
                        r10 = arg5
                
                r8 = var_60
            
            rcx = var_68
            arg4 = arg_20
            r11 = arg3
        
        result = result_1
        r15_1 += 1
        arg_8 = r15_1
        
        if (result s>= sx.q(r11))
            goto label_142624149

return result

// 函数: ?IsInExceptionSpec@@YAEPEAUEHExceptionRecord@@PEBU_s_ESTypeList@@@Z
// 地址: 0x1426b5fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 != 0)
    int16_t r13_1 = *(arg2 + 0x50)
    int32_t r12_1 = 0
    
    if (*(arg1 + 0x118) s> 0)
        int64_t rcx = 0
        int64_t arg_10 = 0
        
        while (true)
            result = *(arg1 + 0x110)
            int32_t rsi_1 = 0
            void* r14_1 = rcx + result
            
            if (*(rcx + result + 0x18) s> 0)
                int64_t* rdi_1 = nullptr
                
                while (true)
                    int64_t* rcx_2 = *(rdi_1 + *(r14_1 + 0x10))
                    
                    if (rcx_2 != arg2)
                        int64_t rdx
                        
                        if ((*(arg2 + 0x55) & 1) != 0 && rcx_2 != 0 && rcx_2[0xa].w == r13_1)
                            int64_t rbx_2 = zx.q(*(rcx_2 + 0x52)) + *(r14_1 + 0x30)
                            result = zx.q((*(*rcx_2 + 0x298))())
                            
                            if (result.d == 0)
                                rdx = 0
                            else
                                int64_t rcx_4 = zx.q(result.d + 3) & 0xfffffffffffffffc
                                
                                if (rbx_2 == rcx_4)
                                    rdx = 0
                                else
                                    result = sx.q(*(rbx_2 - rcx_4))
                                    
                                    if (result.d s< 0 || result.d s>= *(arg1 + 0x138))
                                        rdx = 0
                                    else
                                        rdx = *(*(arg1 + 0x130) + (result << 3))
                        
                        if ((*(arg2 + 0x55) & 1) == 0 || rcx_2 == 0 || rcx_2[0xa].w != r13_1
                                || rdx != arg2)
                            rsi_1 += 1
                            rdi_1 = &rdi_1[1]
                            
                            if (rsi_1 s< *(r14_1 + 0x18))
                                continue
                            
                            rcx = arg_10
                            break
                    
                    result.b = 1
                    goto label_1426b60d8
            
            rcx += 0x58
            r12_1 += 1
            arg_10 = rcx
            
            if (r12_1 s>= *(arg1 + 0x118))
                break

result.b = 0
label_1426b60d8:
return result

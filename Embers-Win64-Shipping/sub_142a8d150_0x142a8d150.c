// 函数: sub_142a8d150
// 地址: 0x142a8d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t rdx = arg1
int64_t r13 = sx.q(arg3)
int32_t* result

if (*arg6 s<= 0)
    int32_t rsi_1 = 0
    int64_t rdi_1 = 0
    int32_t r15_1 = 0
    
    if (arg3 s> 0)
        while (true)
            uint64_t rax_3 = zx.q(r13.d - rsi_1)
            uint64_t r8
            
            if (rax_3.d s>= 0x2aaaaaaa)
                r8 = zx.q((rax_3 * 2).d)
                
                if (rax_3.d s>= 0x3fffffff)
                    r8 = 0x7fffffff
            else
                r8 = zx.q((rax_3 * 3).d)
            
            int32_t i_1
            void var_118
            int64_t rax_5 = (*(*arg4 + 0x10))(arg4, 4, r8, &var_118, 0xc8, &i_1)
            int32_t rbx_1 = 0
            int32_t i = i_1 - 3
            i_1 = i
            
            if (rdi_1 s< r13)
                for (; rbx_1 s< i; i = i_1)
                    uint32_t rcx_2 = zx.d(*(arg2 + (rdi_1 << 1)))
                    rsi_1 += 1
                    rdi_1 += 1
                    
                    if ((rcx_2 & 0xfffffc00) == 0xd800)
                        rsi_1 += 1
                        rcx_2 = ((rcx_2 - 0xd7f7) << 0xa) + zx.d(*(arg2 + (rdi_1 << 1)))
                        rdi_1 += 1
                    
                    uint8_t* rax_10 = sx.q(rbx_1)
                    
                    if (rcx_2 u> 0x7f)
                        uint8_t rdx_2
                        
                        if (rcx_2 u> 0x7ff)
                            uint8_t rdx_3
                            
                            if (rcx_2 u> 0xffff)
                                rbx_1 += 1
                                rax_10[rax_5] = (rcx_2 u>> 0x12).b | 0xf0
                                rax_10 = sx.q(rbx_1)
                                rdx_3 = ((rcx_2 u>> 0xc).b & 0x3f) | 0x80
                            else
                                rdx_3 = (rcx_2 u>> 0xc).b | 0xe0
                            
                            rax_10[rax_5] = rdx_3
                            rax_10 = sx.q(rbx_1 + 1)
                            rbx_1 += 1
                            rdx_2 = ((rcx_2 u>> 6).b & 0x3f) | 0x80
                        else
                            rdx_2 = (rcx_2 u>> 6).b | 0xc0
                        
                        rax_10[rax_5] = rdx_2
                        rcx_2.b &= 0x3f
                        rcx_2.b |= 0x80
                        rax_10 = sx.q(rbx_1 + 1)
                        rbx_1 += 1
                    
                    rbx_1 += 1
                    rax_10[rax_5] = rcx_2.b
                    
                    if (rdi_1 s>= r13)
                        break
            
            if (rbx_1 s> 0x7fffffff - r15_1)
                *arg6 = 8
                result.b = 0
                goto label_142a8d370
            
            (*(*arg4 + 8))(arg4, rax_5, zx.q(rbx_1))
            r15_1 += rbx_1
            
            if (rdi_1 s>= r13)
                rdx = arg1
                break
    
    if (arg5 != 0)
        sub_142afcad0(arg5, rdx, r15_1)
    
    result.b = 1
else
    result.b = 0

label_142a8d370:
__security_check_cookie(rax_1 ^ &var_168)
return result

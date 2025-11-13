// 函数: sub_142bb6300
// 地址: 0x142bb6300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x2a0)
void* rdi = arg1
int64_t r13 = arg2[4]
arg2[7](arg2)
char* rax = *arg2
char* rax_1

if (rax u>= arg2[2] || *rax != 0x5b)
    int32_t rax_2 = arg2[9](arg2)
    int64_t rbp_1 = sx.q(rax_2)
    int32_t arg_18 = rbp_1.d
    
    if (rax_2 s< 0)
        arg2[3].d = 3
        return rax_2
    
    int64_t rcx_4 = arg2[2]
    int64_t rax_3 = *arg2
    int32_t arg_10
    
    if (rcx_4 u< rax_3)
    label_142bb6413:
        rax_1 = arg2[8](arg2)
        
        if (arg2[3].d == 0)
            arg2[7](arg2)
            
            if (arg2[0x49].d == 0)
                rax_1 = (**r14)(&arg2[0x4a], zx.q(rbp_1.d), r13)
                arg_10 = rax_1.d
            
            if (arg2[0x49].d == 0 && rax_1.d != 0)
            label_142bb6648:
                arg2[3].d = rax_1.d
            else
                int32_t rbp_2 = 0
                rax_1 = *arg2 + 4
                
                if (rax_1 u< arg2[2])
                    while (true)
                        rax_1 = strncmp(*arg2, "dup", 3)
                        
                        if (rax_1.d != 0)
                            break
                        
                        arg2[8](arg2)
                        int32_t r14_1 = arg2[9](arg2)
                        int64_t rdi_1 = arg2[2]
                        int64_t r15_1 = *(*(rdi + 0xd0) + 0x50)
                        rax_1 = arg2[7](arg2)
                        char* rcx_17 = *arg2
                        
                        if (rcx_17 u< rdi_1 && zx.d(*rcx_17) - 0x30 u< 0xa)
                            uint64_t rsi_1 = zx.q(arg2[9](arg2))
                            rax_1 = arg2[8](arg2)
                            int64_t rdx_2 = *arg2
                            
                            if (rsi_1.d s>= 0)
                                rax_1 = sx.q(rsi_1.d)
                                
                                if (rax_1 s< rdi_1 - (rdx_2 + 1))
                                    bool cond:1_1 = arg2[3].d == 0
                                    *arg2 = sx.q((rsi_1 + 1).d) + rdx_2
                                    rax_1.b = cond:1_1
                                    
                                    if (rax_1.d == 0)
                                        return rax_1
                                    
                                    rax_1 = arg2[8](arg2)
                                    
                                    if (arg2[3].d != 0)
                                        return rax_1
                                    
                                    arg2[7](arg2)
                                    char* _Str1 = *arg2
                                    
                                    if (&_Str1[4] u< arg2[2] && strncmp(_Str1, "put", 3) == 0)
                                        arg2[8](arg2)
                                        arg2[7](arg2)
                                    
                                    int32_t* r8_3 = arg2[0x56]
                                    
                                    if (r8_3 != 0)
                                        sub_142b99280(r14_1, zx.q(rbp_2), r8_3, r13)
                                        r14_1 = rbp_2
                                    
                                    if (arg2[0x49].d == 0)
                                        int32_t rax_13 = *(arg1 + 0x118)
                                        
                                        if (rax_13 s< 0)
                                            rax_1 = arg2[0x54](&arg2[0x4a], zx.q(r14_1), rdx_2 + 1, 
                                                zx.q(rsi_1.d))
                                            arg_10 = rax_1.d
                                        else
                                            if (rsi_1.d u< rax_13)
                                                rax_1 = 3
                                                goto label_142bb6648_2
                                            
                                            int64_t rax_14 = sub_142b99860(r13, rsi_1.d, &arg_10)
                                            rax_1 = zx.q(arg_10)
                                            
                                            if (rax_1.d != 0)
                                                goto label_142bb6648_2
                                            
                                            memcpy(rax_14, rdx_2 + 1, rsi_1.d)
                                            r14[4](rax_14, rsi_1, 0x10ea)
                                            int64_t rcx_32 = sx.q(*(arg1 + 0x118))
                                            arg_10 = arg2[0x54](&arg2[0x4a], zx.q(r14_1), 
                                                rax_14 + rcx_32, zx.q(rsi_1.d - rcx_32.d))
                                            sub_142b99980(r13, rax_14)
                                            rax_1 = zx.q(arg_10)
                                        
                                        if (rax_1.d != 0)
                                            goto label_142bb6648_2
                                    
                                    rbp_2 += 1
                                    rax_1 = *arg2 + 4
                                    
                                    if (rax_1 u>= arg2[2])
                                        break
                                    
                                    rdi = arg1
                                    continue
                        
                        if (r15_1 != 0)
                            return rax_1
                        
                        arg2[3].d = 3
                        return rax_1
                
                if (arg2[0x49].d == 0)
                    rax_1 = zx.q(arg_18)
                    arg2[0x49].d = rax_1.d
    else
        int64_t rcx_6 = (rcx_4 - rax_3) s>> 3
        
        if (rbp_1 s<= rcx_6)
            goto label_142bb6413
        
        rbp_1 = zx.q(rcx_6.d)
        arg_18 = rcx_6.d
        
        if (arg2[0x56] != 0)
            goto label_142bb6413
        
        int32_t* rax_4 = sub_142b99860(r13, 0x28, &arg_10)
        arg2[0x56] = rax_4
        rax_1 = zx.q(arg_10)
        
        if (rax_1.d != 0)
        label_142bb6648_1:
            arg2[3].d = rax_1.d
        else
            rax_1 = sub_142b99200(rax_4, r13)
            arg_10 = rax_1.d
            
            if (rax_1.d == 0)
                goto label_142bb6413
            
        label_142bb6648_2:
            arg2[3].d = rax_1.d
else
    arg2[8](arg2)
    arg2[7](arg2)
    rax_1 = *arg2
    
    if (rax_1 u>= arg2[2] || *rax_1 != 0x5d)
        arg2[3].d = 3

return rax_1

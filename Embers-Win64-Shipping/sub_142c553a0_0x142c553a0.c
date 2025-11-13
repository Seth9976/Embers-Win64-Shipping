// 函数: sub_142c553a0
// 地址: 0x142c553a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* r12 = arg1
int64_t var_68
__builtin_memset(&var_68, 0xff, 0x28)
int32_t i_2 = sub_142c53e10(arg2, &var_68, 5)
int32_t r13 = 0
int32_t var_78 = 0
int64_t* r14 = &var_68
int32_t i_3 = i_2
int32_t i_1 = i_2
int64_t* result

while (true)
    int32_t rdi_1 = 1 << r13.b
    void* var_70
    
    if ((i_3 & (rdi_1 | 1 << ((r13 + 0x10) u% 0x20))) != 0)
        void* rsi_1 = *r14
        var_70 = rsi_1
        int64_t* result_1
        
        if (rsi_1 == -1)
            result_1 = nullptr
        else
            int64_t* result_2 = sub_142c671a0(r12 + 0xb8, &var_70, 8)
            i_3 = i_1
            result_1 = result_2
        
        int32_t rax_2
        rax_2.b = (i_3 & rdi_1) != 0
        int32_t rdi_3 = rax_2 | 2
        
        if (not(test_bit(i_3, r13 + 0x10)))
            rdi_3 = rax_2
        
        if (result_1 == 0)
            result = sub_142c552f0(r12 + 0xb8, rsi_1, arg2)
            result_1 = result
            
            if (result == 0)
                break
            
            goto label_142c554be
        
        if (result_1[1].d != rdi_3)
        label_142c554be:
            int64_t r10_1 = *(r12 + 0x60)
            
            if (r10_1 != 0)
                r10_1(arg2, rsi_1, zx.q(rdi_3), *(r12 + 0x68), result_1[3])
            
            i_3 = i_1
            result_1[1].d = rdi_3
        
        r13 += 1
        r14 = &r14[1]
        var_78 = r13
        
        if (r13 s< 5)
            continue
    
    bool cond:0_1 = *(arg2 + 0xa8) s<= 0
    i_1 = 0
    int64_t r14_1 = sx.q(r13)
    
    if (not(cond:0_1))
        int32_t i = i_1
        void* rax_4 = arg2 + 0x80
        var_70 = rax_4
        
        do
            int64_t rbx_1 = *rax_4
            int64_t rax_5 = 0
            
            if (r14_1 s> 0)
                do
                    if (rbx_1 == (&var_68)[rax_5])
                        rbx_1 = -1
                        break
                    
                    rax_5 += 1
                while (rax_5 s< r14_1)
            
            i_1.q = rbx_1
            
            if (rbx_1 != -1)
                int64_t* rax_6 = sub_142c671a0(r12 + 0xb8, &i_1, 8)
                
                if (rax_6 == 0)
                    r12 = arg1
                else
                    void* rdi_4 = *(arg2 + 0x10)
                    int32_t r15_1
                    r15_1.b = 1
                    
                    if (rdi_4 == 0)
                    label_142c55616:
                        int64_t r10_2 = *(arg1 + 0x60)
                        
                        if (r10_2 != 0)
                            r10_2(arg2, rbx_1, 4, *(arg1 + 0x68), rax_6[3])
                        
                        i_1.q = rbx_1
                        sub_142c66f30(r12 + 0xb8, &i_1, 8)
                        r12 = arg1
                    else
                        if (*(rdi_4 + 0x4f0) u> 1)
                            r15_1.b = 0
                            
                            if (*rax_6 == arg2)
                                bool cond:2_1 = sub_142c703e0(arg2, rdi_4) == 0
                                int64_t* rax_8 = *(rdi_4 + 0x4d8)
                                
                                if (cond:2_1)
                                    *rax_6 = *rax_8
                                else
                                    *rax_6 = *rax_8[2]
                        
                        if (*(rdi_4 + 0x4d0) u<= 1)
                            if (r15_1.b != 0)
                                goto label_142c55616
                            
                            r12 = arg1
                        else if (*rax_6 != arg2)
                            r12 = arg1
                        else
                            r12 = arg1
                            bool cond:3_1 = sub_142c70400(arg2, rdi_4) == 0
                            int64_t* rax_11 = *(rdi_4 + 0x4b8)
                            
                            if (cond:3_1)
                                *rax_6 = *rax_11
                            else
                                *rax_6 = *rax_11[2]
            
            i += 1
            rax_4 = var_70 + 8
            var_70 = rax_4
        while (i s< *(arg2 + 0xa8))
        
        r13 = var_78
    
    result = memcpy(arg2 + 0x80, &var_68, (r14_1 << 3).d)
    *(arg2 + 0xa8) = r13
    break

__security_check_cookie(rax_1 ^ &var_b8)
return result

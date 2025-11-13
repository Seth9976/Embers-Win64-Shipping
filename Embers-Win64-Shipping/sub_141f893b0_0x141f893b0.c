// 函数: sub_141f893b0
// 地址: 0x141f893b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t rbx = sx.q(arg2)
int64_t result

if (arg1[3].d == *(arg1 + 0x44))
labelid_1:
    result = 0xffffffff
else
    void* rdx = arg1[0xa]
    void* r9_1 = &arg1[9]
    
    if (rdx != 0)
        r9_1 = rdx
    
    int32_t rax_3 = *(r9_1 + (((sx.q(arg1[0xb].d) - 1) & rbx) << 2))
    
    if (rax_3 == 0xffffffff)
    labelid_1:
        result = 0xffffffff
    else
        int64_t r8_4 = arg1[2]
        int64_t rcx_1
        int64_t rdx_1
        
        while (true)
            rdx_1 = sx.q(rax_3)
            rcx_1 = rdx_1 << 4
            
            if (*(rcx_1 + r8_4) == rbx.d)
                break
            
            rax_3 = *(rcx_1 + r8_4 + 8)
            
            if (rax_3 == 0xffffffff)
                goto label_141f8942a_2
        
        if (rax_3 == 0xffffffff)
        labelid_1:
            result = 0xffffffff
        else
            int64_t rdx_2 = rdx_1 << 4
            void* rdx_3 = rdx_2 + r8_4
            
            if (rdx_2 == neg.q(r8_4) || rdx_3 == -4)
            label_141f8942a:
                result = 0xffffffff
            else
                result = sx.q(*(rdx_3 + 4))
                
                if (result.d s< 0 || result.d s>= arg1[1].d)
                    rcx_1.b = 0
                else
                    rcx_1.b = 1
                
                int64_t rdx_5
                
                if (rcx_1.b != 0)
                    rdx_5 = *arg1
                
                if (rcx_1.b == 0 || *(rdx_5 + (result << 3) + 4) != 1
                        || *(rdx_5 + (result << 3)) != rbx.d)
                    int32_t* rdx_6 = *arg1
                    int32_t* rdi_1 = rdx_6
                    void* rcx_4 = &rdx_6[sx.q(arg1[1].d) * 2]
                    
                    if (rdx_6 == rcx_4)
                    label_141f8942a_1:
                        result = 0xffffffff
                    else
                        while (true)
                            int64_t rax_4
                            
                            if (rdi_1[1].b == 0 || *rdi_1 != rbx.d)
                                rax_4.b = 0
                            else
                                rax_4.b = 1
                            
                            if (rax_4.b != 0)
                                break
                            
                            rdi_1 = &rdi_1[2]
                            
                            if (rdi_1 == rcx_4)
                                goto label_141f8942a_2
                        
                        int32_t result_1 = ((rdi_1 - rdx_6) s>> 3).d
                        
                        if (result_1 == 0xffffffff)
                        label_141f8942a_2:
                            result = 0xffffffff
                        else
                            int32_t var_20
                            sub_14090a150(&arg1[2], &var_20)
                            int32_t rdx_8 = var_20
                            char* var_30_1 = nullptr
                            int32_t* var_18
                            *var_18 = rbx.d
                            var_18[1] = result_1
                            var_18[2] = 0xffffffff
                            void var_28
                            sub_141f86230(&arg1[2], &var_28, rbx.d, var_18, rdx_8, var_30_1)
                            result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_58)
return result

// 函数: sub_14289dd60
// 地址: 0x14289dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x288)
void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int32_t var_278 = arg2
uint64_t result

if (arg2 == 0)
    result = 0xffffffff
else
    void* var_270
    
    if (arg2 == 1)
        int64_t var_130_1 = arg3
        void var_178
        var_270 = &var_178
    else if (arg2 == 2)
        int64_t var_240_1 = arg3
        void var_258
        var_270 = &var_258
    
    int32_t result_1 = sub_1428989f0(arg1, &var_278)
    
    if (result_1 s>= 0 && arg4 != 0)
        int32_t rbx_1 = result_1 + 1
        *arg4 = 1
        
        if (rbx_1 s< sub_142898c70(arg1))
            int32_t rax_6
            
            do
                int32_t* rax_4 = sub_142898ea0(arg1, rbx_1)
                int32_t rcx_2 = *rax_4
                
                if (rcx_2 != var_278)
                    break
                
                if (rcx_2 != 0)
                    int32_t rax_5
                    
                    if (rcx_2 == 1)
                        rax_5 = sub_1428a3940(*(rax_4 + 8), var_270)
                    label_14289de3e:
                        
                        if (rax_5 != 0)
                            break
                    else if (rcx_2 == 2)
                        rax_5 = sub_1428a3250(*(rax_4 + 8), var_270)
                        goto label_14289de3e
                
                *arg4 += 1
                rbx_1 += 1
                rax_6 = sub_142898c70(arg1)
            while (rbx_1 s< rax_6)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_298)
return result

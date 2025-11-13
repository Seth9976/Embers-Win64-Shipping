// 函数: sub_14294c550
// 地址: 0x14294c550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rdi = arg2
int64_t r14 = arg1
int32_t result_1 = 0
uint64_t result

if (arg6 u> 0x40000000 || arg2 u> 0x40000000 || arg4 u> 0x40000000)
    result = 0
else
    int64_t* rax_3 = sub_142891ee0()
    
    if (rax_3 == 0)
        result = 0
    else
        int64_t rsi_1 = sx.q(sub_1428916c0(arg7))
        int32_t rbp_1 = 1
        
        if (sub_1428919c0(rax_3, arg7, nullptr) != 0)
            while (true)
                uint8_t var_b6_1 = (rbp_1 u>> 8).b
                char var_b5_1 = rbp_1.b
                uint8_t var_b7_1 = (rbp_1 u>> 0x10).b
                uint8_t var_b8 = (rbp_1 u>> 0x18).b
                
                if (sub_142891c10(rax_3, arg3, arg4) == 0)
                    break
                
                if (sub_142891c10(rax_3, &var_b8, 4) == 0)
                    break
                
                if (sub_142891c10(rax_3, arg5, arg6) == 0)
                    break
                
                if (rdi u< rsi_1)
                    void var_98
                    
                    if (sub_1428917e0(rax_3, &var_98, nullptr) == 0)
                        break
                    
                    memcpy(r14, &var_98, rdi.d)
                    sub_1428b8960(&var_98, rsi_1)
                else
                    if (sub_1428917e0(rax_3, r14, nullptr) == 0)
                        break
                    
                    int64_t temp0_1 = rdi
                    rdi -= rsi_1
                    
                    if (temp0_1 != rsi_1)
                        r14 += rsi_1
                        rbp_1 += 1
                        
                        if (sub_1428919c0(rax_3, arg7, nullptr) == 0)
                            break
                        
                        continue
                
                result_1 = 1
                break
        
        sub_142891ea0(rax_3)
        result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_d8)
return result

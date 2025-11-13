// 函数: sub_14294ac90
// 地址: 0x14294ac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc0)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t result_1 = 0
int64_t rdi = arg2
int64_t r14 = arg1
int64_t var_c0 = 0
int64_t* rax_2

if (arg4 u<= 0x40000000)
    rax_2 = sub_142891ee0()

uint64_t result

if (arg4 u> 0x40000000 || rax_2 == 0)
    result = 0
else
    int64_t rsi_1 = sx.q(sub_1428916c0(arg8))
    int64_t var_d0_1 = arg7
    char* var_b8
    int32_t rax_5 = sub_14294ae80(&var_c0, &var_b8, arg5, rdi, arg6)
    
    if (rax_5 != 0)
        int32_t rbp_1 = 1
        
        if (sub_1428919c0(rax_2, arg8, nullptr) != 0)
            char* r15_1 = var_b8
            
            while (sub_142891c10(rax_2, arg3, arg4) != 0)
                r15_1[3] = rbp_1.b
                r15_1[2] = (rbp_1 u>> 8).b
                r15_1[1] = (rbp_1 u>> 0x10).b
                *r15_1 = (rbp_1 u>> 0x18).b
                
                if (sub_142891c10(rax_2, var_c0, sx.q(rax_5)) == 0)
                    break
                
                if (rdi u< rsi_1)
                    void var_98
                    
                    if (sub_1428917e0(rax_2, &var_98, nullptr) == 0)
                        break
                    
                    memcpy(r14, &var_98, rdi.d)
                    sub_1428b8960(&var_98, rsi_1)
                else
                    if (sub_1428917e0(rax_2, r14, nullptr) == 0)
                        break
                    
                    int64_t temp0_1 = rdi
                    rdi -= rsi_1
                    
                    if (temp0_1 != rsi_1)
                        r14 += rsi_1
                        rbp_1 += 1
                        
                        if (sub_1428919c0(rax_2, arg8, nullptr) == 0)
                            break
                        
                        continue
                
                result_1 = 1
                break
    
    sub_1428a6780(var_c0)
    sub_142891ea0(rax_2)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_f8)
return result

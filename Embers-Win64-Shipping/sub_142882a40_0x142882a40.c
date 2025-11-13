// 函数: sub_142882a40
// 地址: 0x142882a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t r14 = arg2
int64_t* rax_3 = sub_142891ee0()
int64_t r15 = 0
uint64_t result

if (rax_3 != 0)
    int32_t rbp_1 = 0
    wchar32 const (** rsi_1)[0x2] = &data_143b84c30
    void var_98
    int32_t result_1
    
    while (true)
        if (sub_1428919c0(rax_3, *(*(arg1 + 0x598) + 0xf0), nullptr) s> 0)
            wchar32 const (* rax_5)[0x2] = *rsi_1
            int32_t i = 0
            wchar32 const (* rdx_3)[0x2] = rax_5
            
            if (*rax_5 != 0)
                while (i u< 0x80000000)
                    rax_5 += 1
                    i += 1
                    
                    if (*rax_5 == 0)
                        break
            
            int32_t var_a8
            
            if (sub_142891c10(rax_3, rdx_3, zx.q(i) & 0x7fffffff) s> 0
                    && sub_142891c10(rax_3, arg3, arg4) s> 0
                    && sub_142891c10(rax_3, *(arg1 + 0xa8) + 0xb8, 0x20) s> 0
                    && sub_142891c10(rax_3, *(arg1 + 0xa8) + 0x98, 0x20) s> 0
                    && sub_1428918e0(rax_3, &var_98, &var_a8) s> 0
                    && sub_1428919c0(rax_3, *(*(arg1 + 0x598) + 0xe8), nullptr) s> 0
                    && sub_142891c10(rax_3, arg3, arg4) s> 0
                    && sub_142891c10(rax_3, &var_98, zx.q(var_a8)) s> 0
                    && sub_1428918e0(rax_3, r14, &var_a8) s> 0)
                uint64_t rax_15 = zx.q(var_a8)
                rbp_1 += 1
                r14 += rax_15
                r15 += rax_15
                rsi_1 = &rsi_1[1]
                
                if (rbp_1 s< 3)
                    continue
                
                result_1 = 1
                break
        
        sub_142856580(arg1, 0x50, 0x184, 0x44, "ssl\s3_enc.c", 0x200)
        result_1 = 0
        break
    
    sub_142891ea0(rax_3)
    sub_1428b8960(&var_98, 0x40)
    
    if (result_1 != 0)
        *arg5 = r15
    
    result = zx.q(result_1)
else
    sub_142856580(arg1, (&rax_3[0xa]).d, 0x184, (rax_3 + 0x41).d, "ssl\s3_enc.c", 0x1ed)
    result = 0

__security_check_cookie(rax_1 ^ &var_d8)
return result

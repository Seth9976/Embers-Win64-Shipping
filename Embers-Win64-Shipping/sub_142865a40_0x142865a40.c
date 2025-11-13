// 函数: sub_142865a40
// 地址: 0x142865a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t result_1 = 0
int64_t var_b8 = 0
int32_t result = sub_1428a40b0(arg3, 0x3a, 1, sub_142863080, &var_b8)

if (result != 0)
    if (arg1 != 0)
        int32_t rdi_1 = 0
        int64_t r14_1 = var_b8
        int64_t rax_3 = sub_1428a6730(r14_1 * 2)
        
        if (rax_3 != 0)
            int64_t r8_2 = 0
            
            if (r14_1 == 0)
            label_142865b7f:
                sub_1428a6780(*arg1)
                *arg1 = rax_3
                result_1 = 1
                *arg2 = r14_1
            else
                while (true)
                    int64_t rdx_1 = 0
                    int64_t rax_4 = 0
                    
                    while (true)
                        int32_t var_b0[0x1e]
                        
                        if (*(rax_4 + &data_1434dc570) == var_b0[r8_2])
                            rdx_1.w += 1
                            break
                        
                        rdx_1 += 1
                        rax_4 += 0xc
                        
                        if (rax_4 u>= 0x168)
                            rdx_1 = 0
                            break
                    
                    int32_t rax_5 = 1 << rdx_1.b
                    
                    if (rdx_1.w == 0 || (rdi_1 & rax_5) != 0)
                        sub_1428a6780(rax_3)
                        break
                    
                    *(rax_3 + (r8_2 << 1)) = rdx_1.w
                    rdi_1 |= rax_5
                    r8_2 += 1
                    
                    if (r8_2 u>= r14_1)
                        goto label_142865b7f
                    
                    continue
        else
            int64_t* var_c8
            var_c8.d = 0x15b
            sub_1428a5670((rax_3 + 0x14).d, 0x275, (rax_3 + 0x41).d, "ssl\t1_lib.c", var_c8.d)
        
        result = result_1
    else
        result = (arg1 + 1).d

__security_check_cookie(rax_1 ^ &var_e8)
return result

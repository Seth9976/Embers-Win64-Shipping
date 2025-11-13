// 函数: sub_142877b70
// 地址: 0x142877b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
*arg2 = 0
int64_t result

while (true)
    void* rax_2 = sub_140687ad0(*(*(arg1 + 0xb0) + 0x118))
    
    if (rax_2 == 0)
    label_142877c9b:
        int64_t var_c8
        int32_t var_c0
        char var_58
        
        if ((*(*(arg1 + 8) + 0x68))(arg1, 0x16, &var_c0, &var_58, 0xc, 0, &var_c8) s<= 0)
            arg1[0xa] = 3
            *arg3 = 0
        else if (var_c0 == 0x14)
            if (var_58 == 1)
                memcpy(*(*(arg1 + 0x88) + 8), &var_58, var_c8.d)
                *(arg1 + 0x98) = var_c8 - 1
                void* rax_28 = *(arg1 + 0xa8)
                *(arg1 + 0x90) = *(*(arg1 + 0x88) + 8) + 1
                *(rax_28 + 0x230) = 0x101
                *(*(arg1 + 0xa8) + 0x228) = var_c8 - 1
                *arg3 = var_c8 - 1
                result = 1
                break
            
            sub_142856580(arg1, 0xa, 0x172, 0x67, "ssl\statem\statem_dtls.c", 0x304)
            *(arg1 + 0x98) = 0
            *arg3 = 0
        else if (var_c8 != 0xc)
            sub_142856580(arg1, 0xa, 0x172, 0xf4, "ssl\statem\statem_dtls.c", 0x314)
            *(arg1 + 0x98) = 0
            *arg3 = 0
        else
            char var_b8
            memset(&var_b8, 0, 0x58)
            var_b8 = var_58
            char var_57
            char var_56
            char var_55
            uint64_t rsi_6 = zx.q((zx.d(var_57) << 8 | zx.d(var_56)) << 8) | zx.q(var_55)
            char var_54
            char var_53
            uint16_t rcx_12 = zx.w(var_54) << 8 | zx.w(var_53)
            uint64_t var_b0_1 = rsi_6
            uint16_t var_a8_1 = rcx_12
            char var_52
            char var_51
            char var_50
            uint64_t r15_5 = zx.q((zx.d(var_52) << 8 | zx.d(var_51)) << 8) | zx.q(var_50)
            uint64_t var_a0_1 = r15_5
            char var_4f
            char var_4e
            char var_4d
            uint64_t rbx_6 = zx.q((zx.d(var_4f) << 8 | zx.d(var_4e)) << 8) | zx.q(var_4d)
            uint64_t var_98_1 = rbx_6
            char const* const var_e8_3
            int32_t var_e0_2
            int32_t rdx_10
            int32_t r9_3
            
            if (rbx_6 u> sub_14285b760(&arg1[0x200]))
                var_e0_2 = 0x325
                var_e8_3 = "ssl\statem\statem_dtls.c"
                rdx_10 = 0x2f
                r9_3 = 0x10f
            label_142877ec6:
                sub_142856580(arg1, rdx_10, 0x172, r9_3, var_e8_3, var_e0_2)
                *(arg1 + 0x98) = 0
                *arg3 = 0
            else
                void* rax_15 = *(arg1 + 0xb0)
                
                if (rcx_12 != *(rax_15 + 0x110))
                    *arg2 = sub_142876ee0(arg1, &var_b8)
                else if (rbx_6 == 0 || rbx_6 u>= rsi_6)
                    if (arg1[0xe] == 0 && *(rax_15 + 0x1a8) == 0 && arg1[0x17] != 1 && var_58 == 0)
                        if (var_57 != 0 || var_56 != 0 || var_55 != 0)
                            var_e0_2 = 0x34e
                            var_e8_3 = "ssl\statem\statem_dtls.c"
                            rdx_10 = 0xa
                            r9_3 = 0xf4
                            goto label_142877ec6
                        
                        int64_t r10_1 = *(arg1 + 0xb8)
                        
                        if (r10_1 != 0)
                            int32_t var_e0_1
                            var_e0_1.q = arg1
                            r10_1(0, zx.q(*arg1), 0x16, &var_58, 0xc, var_e0_1, *(arg1 + 0xc0))
                        
                        *(arg1 + 0x98) = 0
                        continue
                    
                    if (sub_142876d90(arg1, &var_b8) == 0)
                        *(arg1 + 0x98) = 0
                        *arg3 = 0
                    else
                        int64_t rax_23
                        
                        if (rbx_6 == 0)
                            rax_23 = 0
                            var_c8 = 0
                        label_142877f40:
                            
                            if (rax_23 == rbx_6)
                                *(arg1 + 0x98) = rbx_6
                                result = 1
                                *arg3 = rbx_6
                                break
                            
                            sub_142856580(arg1, 0x2f, 0x172, 0x10f, "ssl\statem\statem_dtls.c", 
                                0x372)
                            *(arg1 + 0x98) = 0
                            *arg3 = 0
                        else
                            if ((*(*(arg1 + 8) + 0x68))(arg1, 0x16, 0, 
                                    *(*(arg1 + 0x88) + 8) + 0xc + r15_5, rbx_6, 0, &var_c8) s> 0)
                                rax_23 = var_c8
                                goto label_142877f40
                            
                            arg1[0xa] = 3
                            *arg3 = 0
                else
                    *arg2 = sub_1428771e0(arg1, &var_b8)
    else
        char* rbx_1 = *(rax_2 + 8)
        void* rcx_2 = *(arg1 + 0xb0)
        int16_t rax_3 = *(rbx_1 + 0x10)
        int16_t rdx = *(rcx_2 + 0x110)
        
        if (rax_3 u>= rdx)
            if (*(rbx_1 + 0x60) != 0 || rdx != rax_3)
                goto label_142877c9b
            
            uint64_t r14_2 = *(rbx_1 + 0x20)
            sub_142885870(*(rcx_2 + 0x118))
            int32_t rax_17 = sub_142876d90(arg1, rbx_1)
            
            if (rax_17 != 0)
                int64_t r8_4 = *(rbx_1 + 0x20)
                
                if (r8_4 != 0)
                    memcpy(*(rbx_1 + 0x18) + *(*(arg1 + 0x88) + 8) + 0xc, *(rbx_1 + 0x58), r8_4.d)
            
            sub_142876bc0(rbx_1)
            sub_142885600(rax_2)
            
            if (rax_17 != 0)
                *(arg1 + 0x98) = r14_2
                result = 1
                *arg3 = r14_2
                break
            
            *(arg1 + 0x98) = 0
        else
            sub_142885870(*(rcx_2 + 0x118))
            
            if (*(rbx_1 + 0x28) != 0)
                sub_1428921c0(*(rbx_1 + 0x30))
                sub_142891ea0(*(rbx_1 + 0x38))
            
            sub_1428a6780(*(rbx_1 + 0x58))
            sub_1428a6780(*(rbx_1 + 0x60))
            sub_1428a6780(rbx_1)
            sub_142885600(rax_2)
            continue
    
    result = 0
    break

__security_check_cookie(rax_1 ^ &var_108)
return result

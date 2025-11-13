// 函数: sub_142941750
// 地址: 0x142941750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x318)
void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int64_t* rax_2 = sub_142891ee0()
int32_t result_1 = 0
uint64_t result = 0
int64_t var_118
__builtin_memset(&var_118, 0, 0x39)

if (rax_2 != 0)
    int64_t* rax_3 = sub_142891ee0()
    
    if (rax_3 != 0)
        if (sub_1428919c0(rax_3, &data_143522870, nullptr) == 0)
            sub_142891ea0(rax_3)
        else
            char var_d8
            
            if (sub_142891c10(rax_3, arg2, 0x39) == 0)
                sub_142891ea0(rax_3)
            else if (sub_142891820(rax_3, &var_d8, 0x72) == 0)
                sub_142891ea0(rax_3)
            else
                sub_142891ea0(rax_3)
                var_d8 &= 0xfc
                char var_a1
                char var_a1_1 = var_a1 | 0x80
                char var_a0_1 = 0
                void var_258
                sub_14296e560(&var_258, &var_d8, 0x39)
                int64_t var_328_1 = arg8
                void var_9f
                
                if (sub_142941d30(rax_2, arg6, 0, arg7) == 0)
                    sub_1428b8960(&var_d8, 0x72)
                else if (sub_142891c10(rax_2, &var_9f, 0x39) == 0)
                    sub_1428b8960(&var_d8, 0x72)
                else if (sub_142891c10(rax_2, arg4, arg5) == 0)
                    sub_1428b8960(&var_d8, 0x72)
                else
                    sub_1428b8960(&var_d8, 0x72)
                    
                    if (sub_142891820(rax_2, &var_d8, 0x72) != 0)
                        void var_290
                        sub_14296e560(&var_290, &var_d8, 0x72)
                        sub_1428b8960(&var_d8, 0x72)
                        int32_t var_2c8[0xe]
                        sub_14296e7c0(&var_2c8, &var_290)
                        
                        for (int32_t i = 2; i u< 4; i *= 2)
                            sub_14296e7c0(&var_2c8, &var_2c8)
                        
                        void var_218
                        sub_14293f1a0(&var_218, data_143b868f0, &var_2c8)
                        sub_14293ef00(&var_118, &var_218)
                        sub_14293ee60(&var_218)
                        sub_14296e740(&var_2c8)
                        int64_t var_328_2 = arg8
                        
                        if (sub_142941d30(rax_2, arg6, 0, arg7) != 0
                                && sub_142891c10(rax_2, &var_118, 0x39) != 0
                                && sub_142891c10(rax_2, arg3, 0x39) != 0
                                && sub_142891c10(rax_2, arg4, arg5) != 0
                                && sub_142891820(rax_2, &var_d8, 0x72) != 0)
                            void var_300
                            sub_14296e560(&var_300, &var_d8, 0x72)
                            sub_1428b8960(&var_d8, 0x72)
                            sub_14296e980(&var_300, &var_300, &var_258)
                            sub_14296e1e0(&var_300, &var_300, &var_290)
                            sub_1428b8960(arg1, 0x72)
                            *arg1 = var_118.o
                            int64_t var_108
                            arg1[1] = var_108.o
                            int64_t var_f8
                            arg1[2] = var_f8.o
                            int64_t var_e8
                            arg1[3].q = var_e8
                            char var_e0
                            *(arg1 + 0x38) = var_e0
                            sub_14296e760(arg1 + 0x39, &var_300)
                            sub_14296e740(&var_258)
                            sub_14296e740(&var_290)
                            sub_14296e740(&var_300)
                            result_1 = -1
    
    sub_142891ea0(rax_2)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_348)
return result

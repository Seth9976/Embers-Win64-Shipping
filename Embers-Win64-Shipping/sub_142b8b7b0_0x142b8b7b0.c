// 函数: sub_142b8b7b0
// 地址: 0x142b8b7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t var_58 = -2
int64_t rbp = sx.q(arg1)

if (arg1 != 0)
    result = j_sub_142a7dd00(0xc8)
    void* const* result_1 = result
    void* const* result_2
    
    if (result == 0)
        result_2 = nullptr
    else
        result = sub_142a9db60(result)
        result_2 = result
    
    void** result_4 = result_2
    result_1 = result_4
    
    if (result_2 != 0)
        void* const* result_3 = result_2
        void* (* var_48_1)(void* arg1, int32_t arg2) = j_sub_142a9e7d0
        void* (* var_40_1)(void* arg1, int32_t arg2, int32_t arg3) = j_sub_142a9e9d0
        int64_t (* var_38_1)(void* arg1, int64_t arg2, int32_t arg3) = sub_142b67ff0
        int64_t var_30_1 = 0
        int64_t var_28_1 = 0
        result = zx.q((rbp - 1).d)
        
        if (result.d u> 0xd)
            *arg2 = 5
        else
            result = &__dos_header.e_magic[zx.q(jump_table_142b8b9bc[sx.q(result.d)])]
            
            switch (result)
                case 0x142b8b87e
                    result = sub_142a549e0(&result_3, arg2)
                label_142b8b94f:
                    
                    if (*arg2 s<= 0)
                        if ((result_2[4].b & 1) == 0)
                            sub_142a9eee0(result_2)
                            result_4 = nullptr
                            *(rbp * 0x10 + &data_144016f70) = result_2
                            result = sub_142a7db20(0xc, sub_142b8b4d0)
                        else
                            *arg2 = 7
                case 0x142b8b890
                    sub_142a549e0(&result_3, arg2)
                label_142b8b8a5:
                    result = sub_142a54bd0(&result_3, arg2)
                    goto label_142b8b94f
                case 0x142b8b89d
                    goto label_142b8b8a5
                case 0x142b8b8af
                    int64_t* rax_2 = sub_142b68c10(arg2)
                    
                    if (*arg2 s<= 0)
                        sub_142b19880(rax_2, &result_3)
                    
                    goto label_142b8b8d4
                case 0x142b8b8cc
                label_142b8b8d4:
                    result = sub_142a52b60(&result_3, arg2)
                    goto label_142b8b94f
                case 0x142b8b8db
                    result = sub_142b68c10(arg2)
                label_142b8b8e3:
                    
                    if (*arg2 s<= 0)
                        result = sub_142b19880(result, &result_3)
                        goto label_142b8b94f
                case 0x142b8b8fe
                    result = sub_142b6ace0(arg2)
                    goto label_142b8b8e3
                case 0x142b8b908
                    result = sub_142b6ada0(arg2)
                    goto label_142b8b8e3
                case 0x142b8b912
                    result = sub_142b68c10(arg2)
                    
                    if (*arg2 s<= 0)
                        result = sub_142b19670(result, &result_3, arg2)
                        goto label_142b8b94f
                case 0x142b8b931
                    result = sub_142af5b70(&result_3, arg2)
                    goto label_142b8b94f
                case 0x142b8b940
                    result = sub_142af4770(rbp.d, &result_3, arg2)
                    goto label_142b8b94f
                case 0x142b8b98b
                    *arg2 = 5
    else
        *arg2 = 7
    
    if (result_4 != 0)
        sub_142a9dbc0(result_4)
        return sub_142a47920(result_4)
else
    *arg2 = 5

return result

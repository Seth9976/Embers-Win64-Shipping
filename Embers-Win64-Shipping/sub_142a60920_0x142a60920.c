// 函数: sub_142a60920
// 地址: 0x142a60920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char var_98[0x70]
memset(&var_98, 0, 0x64)
bool cond:0 = *arg3 s<= 0
int32_t var_128 = 0
char** result

if (cond:0)
    char* rsi_1
    
    if (arg1 != 0)
        rsi_1 = "root"
        
        if (*arg1 != 0)
            rsi_1 = arg1
    else
        rsi_1 = j_sub_142a46ef0()
    
    int64_t* rcx_1 = data_144015678
    char* var_118 = rsi_1
    int64_t var_110_1 = arg2
    char** result_2 = sub_142a86c30(rcx_1, &var_118)
    char** result_1 = result_2
    
    if (result_2 != 0)
    label_142a60b8f:
        void* rax_14 = &result_1[3]
        
        while (result_1[3] != 0)
            result_1 = *rax_14
            rax_14 = &result_1[3]
        
        *(result_1 + 0x6c) += 1
        int32_t rax_15 = result_1[0xe].d
        
        if (rax_15 != 0 && *arg3 s<= 0)
            *arg3 = rax_15
        
        result = result_1
    else
        result = sub_142a7dd00(zx.q((&result_2[0xf]).d))
        result_1 = result
        
        if (result != 0)
            memset(result_1, 0, 0x78)
            sub_142a61650(result_1, rsi_1, arg3)
            
            if (*arg3 s> 0)
                sub_142a7dcd0(result_1)
                result = nullptr
            else
                int64_t rax_3
                
                if (arg2 != 0)
                    rax_3 = sub_142a86250(arg2)
                    result_1[1] = rax_3
                
                if (arg2 == 0 || rax_3 != 0)
                    sub_142ac3e80(&result_1[5], result_1[1], *result_1, arg3)
                    int32_t rax_4 = *arg3
                    
                    if (rax_4 s<= 0)
                        if (*(result_1 + 0x62) != 0)
                            void* rax_5 = sub_142a60920("pool", result_1[1], arg3)
                            
                            if (*arg3 s<= 0 &&
                                    (rax_5 == 0 || *(rax_5 + 0x70) != 0 || *(rax_5 + 0x61) == 0))
                                *arg3 = 3
                            
                            result_1[4] = rax_5
                            int32_t rax_6 = *arg3
                            
                            if (rax_6 s> 0)
                                result_1[0xe].d = rax_6
                            else
                                char* r8_4 = *(rax_5 + 0x30) + 4
                                
                                if (*(result_1[6] + 0x20) != *(r8_4 + 0x1c))
                                    *arg3 = 3
                                    result_1[0xe].d = 3
                                else
                                    result_1[8] = &r8_4[zx.q(*r8_4) << 2]
                                    result_1[0xa] = *(rax_5 + 0x38)
                        
                        if (*arg3 s<= 0)
                            int32_t rax_10 = sub_142ac3a80(&result_1[5], "%%ALIAS")
                            
                            if (rax_10 != 0xffffffff)
                                void* rax_11 = sub_142ac3aa0(&result_1[5], rax_10, &var_128)
                                
                                if (rax_11 != 0)
                                    int32_t r8_6 = var_128
                                    
                                    if (r8_6 s> 0)
                                        sub_142a8d6e0(rax_11, &var_98, r8_6 + 1)
                                        result_1[3] = sub_142a60920(&var_98, arg2, arg3)
                        
                        goto label_142a60b3c
                    
                    if (rax_4 == 7)
                        sub_142a7dcd0(result_1)
                        result = nullptr
                    else
                        *arg3 = 0xffffff80
                        result_1[0xe].d = 0xffffff80
                    label_142a60b3c:
                        char** result_3 = sub_142a86c30(data_144015678, result_1)
                        
                        if (result_3 != 0)
                            sub_142a60260(result_1)
                            result_1 = result_3
                        label_142a60b85:
                            
                            if (result_1 != 0)
                                goto label_142a60b8f
                            
                            result = result_1
                        else
                            int64_t* rcx_15 = data_144015678
                            int32_t var_124 = result_3.d
                            sub_142a86f50(rcx_15, result_1, result_1, &var_124)
                            int32_t rax_13 = var_124
                            
                            if (rax_13 s<= 0)
                                goto label_142a60b85
                            
                            *arg3 = rax_13
                            sub_142a60260(result_1)
                            result = nullptr
                else
                    *arg3 = 7
                    sub_142a7dcd0(result_1)
                    result = nullptr
        else
            *arg3 = 7
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_148)
return result

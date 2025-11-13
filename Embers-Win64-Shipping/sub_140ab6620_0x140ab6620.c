// 函数: sub_140ab6620
// 地址: 0x140ab6620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_2 = *arg1
int16_t r14 = arg3
int64_t* r15 = arg2
int64_t result_1 = result_2
int64_t rsi = result_2 + (sx.q(arg1[1].d) << 1)
int64_t result

if (result_2 u< rsi)
    result = result_2
    
    do
        result_1 = result
        
        if (iswspace(*result_2).d == 0)
            break
        
        result_2 = result_1 + 2
        result = result_2
        result_1 = result_2
    while (result_2 u< rsi)

if (result_1 u>= rsi)
label_140ab6915:
    result.b = 1
else
    if (result_2 u>= rsi)
        goto label_140ab66ac
    
    while (true)
        if (iswspace(*result_2) != 0)
            result_2 += 2
            
            if (result_2 u< rsi)
                continue
        
    label_140ab66ac:
        int64_t result_7 = result_2
        int64_t result_5 = result_2
        
        if (result_2 u< rsi)
            int64_t result_8 = result_2
        label_140ab66c0:
            wint_t _C = *result_2
            result_5 = result_8
            
            if (iswalnum(_C) != 0 || _C == 0x5f)
                r14 = arg3
                
                if (*result_2 != r14)
                    result_2 = result_5 + 2
                    result_8 = result_2
                    result_5 = result_2
                    
                    if (result_2 u< rsi)
                        goto label_140ab66c0
                    
                    r14 = arg3
            else
                r14 = arg3
            
            r15 = arg2
        
        int64_t result_9 = result_7
        int32_t rax_4 = ((result_5 - result_7) s>> 1).d
        int32_t var_54_1 = sub_140b21160(result_7, rax_4 * 2, 0)
        int64_t var_50_1 = 0
        int64_t var_48_1 = 0
        
        if (rax_4 != 0)
            if (result_5 u>= rsi)
            label_140ab67a3:
                int64_t result_10 = result_5
                char* result_11
                int32_t var_78_1
                char* result_14
                int64_t result_6
                int64_t var_68
                
                if (*result_2 != 0x22)
                label_140ab6844:
                    result_6 = result_10
                    
                    if (result_10 u< rsi)
                        int64_t result_4 = result_10
                    label_140ab6850:
                        result_6 = result_4
                        
                        if (*result_2 != arg4)
                            result_2 = result_4 + 2
                            result_4 = result_2
                            result_6 = result_2
                            
                            if (result_2 u< rsi)
                                goto label_140ab6850
                    
                    result_11 = result_10
                    int32_t rax_13 = ((result_6 - result_10) s>> 1).d
                    var_78_1 = rax_13
                    int32_t var_74_3 = sub_140b21160(result_10, rax_13 * 2, 0)
                    result_14 = nullptr
                    var_68 = 0
                else
                    char* result_13 = nullptr
                    int64_t var_98_1 = 0
                    int32_t var_a8 = 0
                    
                    if (j_sub_140b08930(result_2, &result_13, &var_a8) == 0)
                        char* result_15 = result_13
                        result_10 = result_5
                        
                        if (result_15 != 0)
                            sub_140a74f90(result_15)
                            result_10 = result_5
                        
                        goto label_140ab6844
                    
                    int32_t rdx_2 = var_98_1.d
                    int64_t rax_9 = sx.q(var_a8)
                    char* result_12 = result_13
                    result_13 = nullptr
                    int32_t var_74_1 = 0
                    result_14 = result_12
                    result_2 = result_5 + (rax_9 << 1)
                    result_6 = result_2
                    int64_t var_98_2 = 0
                    var_68:4.d = var_98_1:4.d
                    var_68.d = rdx_2
                    int32_t rdx_3
                    
                    if (rdx_2 == 0)
                        result_12 = &data_142d40450
                        rdx_3 = 0
                    else
                        rdx_3 = rdx_2 - 1
                    
                    var_78_1 = rdx_3
                    result_11 = result_12
                    result = sub_140b21160(result_12, rdx_3 * 2, 0)
                    char* result_16 = result_13
                    int32_t var_74_2 = result.d
                    
                    if (result_16 != 0)
                        sub_140a74f90(result_16)
                
                if (var_78_1 != 0)
                    if (result_2 u>= rsi)
                    label_140ab68d4:
                        int64_t* var_90 = &result_9
                        char** var_88_1 = &result_11
                        void var_a4
                        sub_140a91b50(r15, &var_a4, &var_90, nullptr)
                        
                        if (result_14 != 0)
                            sub_140a74f90(result_14)
                        
                        if (var_50_1 != 0)
                            sub_140a74f90(var_50_1)
                        
                        if (result_2 u>= rsi)
                            goto label_140ab6915
                        
                        continue
                    else
                    label_140ab68a3:
                        
                        if (iswspace(*result_2) != 0)
                            result_2 = result_6 + 2
                            result_6 = result_2
                            
                            if (result_2 u< rsi)
                                goto label_140ab68a3
                            
                            goto label_140ab68d4
                        
                        if (result_6 u>= rsi)
                            goto label_140ab68d4
                        
                        result = zx.q(*result_2)
                        result_2 = result_6 + 2
                        
                        if (result.w == arg4)
                            goto label_140ab68d4
                
                if (result_14 != 0)
                    sub_140a74f90(result_14)
            else
            label_140ab6743:
                
                if (iswspace(*result_2) != 0)
                    result_2 = result_5 + 2
                    result_5 = result_2
                    
                    if (result_2 u< rsi)
                        goto label_140ab6743
                    
                    goto label_140ab67a3
                
                if (result_5 u>= rsi)
                    goto label_140ab67a3
                
                result = zx.q(*result_2)
                result_2 = result_5 + 2
                
                if (result.w == r14)
                    result_5 = result_2
                    
                    if (result_2 u< rsi)
                        int64_t result_3 = result_2
                    label_140ab6783:
                        result_5 = result_3
                        
                        if (iswspace(*result_2) != 0)
                            result_2 = result_5 + 2
                            result_3 = result_2
                            result_5 = result_2
                            
                            if (result_2 u< rsi)
                                goto label_140ab6783
                    
                    goto label_140ab67a3
            
            if (var_50_1 != 0)
                sub_140a74f90(var_50_1)
        
        result.b = 0
        break

return result

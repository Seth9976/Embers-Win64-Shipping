// 函数: sub_1405f3fe0
// 地址: 0x1405f3fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* result = arg1
struct IMFMediaType ppMFType = arg1
int64_t var_58
int32_t rax_2 = (*(*arg2 + 0x50))(arg2, &data_1434cbb80, &var_58)
int64_t var_68
int32_t rax_4

if (rax_2 s>= 0)
    rax_4 = (*(*arg2 + 0x50))(arg2, &data_1434cbb90, &var_68)

if (rax_2 s< 0 || rax_4 s< 0)
    *result = 0
else
    ppMFType = 0
    
    if (MFCreateMediaType(&ppMFType) s>= 0)
        struct IMFMediaType ppMFType_2 = ppMFType
        
        if ((*(*ppMFType_2 + 0xa8))(ppMFType_2, &data_1434cbba0, 1) s>= 0)
            int64_t rcx_3 = var_58
            int64_t var_50
            int64_t var_64
            int32_t var_5c
            
            if (rcx_3 != 0x10000073647561 || var_50 != 0x719b3800aa000080)
                if (rcx_3 == 0x11d5e45b72178c25 && var_50 == -0x540b0c2f4fffd544)
                    struct IMFMediaType ppMFType_11 = ppMFType
                    
                    if ((*(*ppMFType_11 + 0xc0))(ppMFType_11, &data_1434cbb80, &data_1434cbd10)
                            s>= 0)
                        *result = ppMFType
                    else
                        *result = 0
                        struct IMFMediaType ppMFType_12 = ppMFType
                        
                        if (ppMFType_12 != 0)
                            (*(*ppMFType_12 + 0x10))(ppMFType_12)
                else if (rcx_3 == 0x40cb3dcde69669a0 && var_50 == 0x16067c3808372e9e)
                    struct IMFMediaType ppMFType_13 = ppMFType
                    
                    if ((*(*ppMFType_13 + 0xc0))(ppMFType_13, &data_1434cbb80, &data_1434cbcd0)
                            s>= 0)
                        *result = ppMFType
                    else
                        *result = 0
                        struct IMFMediaType ppMFType_14 = ppMFType
                        
                        if (ppMFType_14 != 0)
                            (*(*ppMFType_14 + 0x10))(ppMFType_14)
                else if (rcx_3 != 0x10000073646976 || var_50 != 0x719b3800aa000080)
                    *result = 0
                    struct IMFMediaType ppMFType_24 = ppMFType
                    
                    if (ppMFType_24 != 0)
                        (*(*ppMFType_24 + 0x10))(ppMFType_24)
                else
                    if (var_64 != -0x55ffff7ffff00000)
                        if (arg3 != 0)
                            goto label_1405f4336
                        
                        goto label_1405f431e
                    
                    if (var_5c == 0x719b3800 || arg3 != 0)
                    label_1405f4336:
                        int64_t rcx_7 = var_68
                        
                        if (((rcx_7 == 0x10000034363248 && var_64 == 0x719b3800aa000080)
                                || (rcx_7 == 0x4ff856223f40f4f0 && var_64 == 0x5eee4b587aa1d8b6))
                                && arg4 != 0)
                            *result = 0
                            struct IMFMediaType ppMFType_16 = ppMFType
                            
                            if (ppMFType_16 != 0)
                                (*(*ppMFType_16 + 0x10))(ppMFType_16)
                        else if ((rcx_7 != 0x10000043564548 || var_64 != 0x719b3800aa000080)
                            && (rcx_7 != 0x10000053564548 || var_64 != 0x719b3800aa000080))
                        label_1405f43da:
                            struct IMFMediaType ppMFType_18 = ppMFType
                            int32_t rax_41 =
                                (*(*ppMFType_18 + 0xc0))(ppMFType_18, &data_1434cbb80, "vids")
                            int32_t rsi_1 = rax_41
                            
                            if (rax_41 s>= 0)
                                void* rax_43 = sub_1405f6d70()
                                char rax_44
                                
                                if (rax_43 != 0)
                                    int64_t* rcx_8 = *(rax_43 + 8)
                                    int64_t r9 = *rcx_8
                                    rax_44 = (*(r9 + 8))(rcx_8, &var_58, &var_68, r9)
                                
                                if (rax_43 == 0 || rax_44 == 0)
                                    int64_t rcx_10 = var_68
                                    char const* const r8_5
                                    
                                    if ((rcx_10 != 0x10000043564548 || var_64 != 0x719b3800aa000080)
                                            && (rcx_10 != 0x10000053564548
                                            || var_64 != 0x719b3800aa000080) && (rcx_10 != 0x1000003231564e
                                            || var_64 != 0x719b3800aa000080) && (rcx_10 != 0x10000056555949
                                            || var_64 != 0x719b3800aa000080))
                                        int64_t rax_47
                                        
                                        if ((rcx_10 != 0x10000000000018
                                                || var_64 != 0x719b3800aa000080) && (
                                                rcx_10 != 0x10000000000017
                                                || var_64 != 0x719b3800aa000080) && (
                                                rcx_10 != 0x10000000000014
                                                || var_64 != 0x719b3800aa000080) && (
                                                rcx_10 != 0x10000000000016
                                                || var_64 != 0x719b3800aa000080) && (
                                                rcx_10 != 0x10000000000015
                                                || var_64 != 0x719b3800aa000080))
                                            rax_47.b = 0
                                        else
                                            rax_47.b = 1
                                        
                                        r8_5 = "YUY2"
                                        
                                        if (rax_47.b != 0)
                                            r8_5 = &data_1434cb7a0
                                    else
                                        r8_5 = "NV12"
                                    
                                    struct IMFMediaType ppMFType_21 = ppMFType
                                    rsi_1 =
                                        (*(*ppMFType_21 + 0xc0))(ppMFType_21, &data_1434cbb90, r8_5)
                                else
                                    int64_t* rcx_9 = *(rax_43 + 8)
                                    void var_48
                                    (*(*rcx_9 + 0x10))(rcx_9, &var_68, &var_48)
                                    struct IMFMediaType ppMFType_20 = ppMFType
                                    (*(*ppMFType_20 + 0xc0))(ppMFType_20, &data_1434cbb90, &var_48)
                                
                                if (rsi_1 s< 0)
                                    *result = 0
                                    struct IMFMediaType ppMFType_22 = ppMFType
                                    
                                    if (ppMFType_22 != 0)
                                        (*(*ppMFType_22 + 0x10))(ppMFType_22)
                                else if (arg4 == 0)
                                    *result = ppMFType
                                else
                                    int32_t rax_51 = sub_1405f3560(arg2, ppMFType, &data_1434cbc20)
                                    int32_t rax_52
                                    
                                    if (rax_51 s>= 0)
                                        rax_52 = sub_1405f3560(arg2, ppMFType, &data_1434cbc10)
                                    
                                    if (rax_51 s>= 0 && rax_52 s>= 0)
                                        *result = ppMFType
                                    else
                                        *result = 0
                                        struct IMFMediaType ppMFType_23 = ppMFType
                                        
                                        if (ppMFType_23 != 0)
                                            (*(*ppMFType_23 + 0x10))(ppMFType_23)
                            else
                                *result = 0
                                struct IMFMediaType ppMFType_19 = ppMFType
                                
                                if (ppMFType_19 != 0)
                                    (*(*ppMFType_19 + 0x10))(ppMFType_19)
                        else
                            if (sub_140b74110(0xa, 0) != 0)
                                goto label_1405f43da
                            
                            if (sub_140b74110(6, 2) != 0)
                                goto label_1405f43da
                            
                            *result = 0
                            struct IMFMediaType ppMFType_17 = ppMFType
                            
                            if (ppMFType_17 != 0)
                                (*(*ppMFType_17 + 0x10))(ppMFType_17)
                    else
                    label_1405f431e:
                        *result = 0
                        struct IMFMediaType ppMFType_15 = ppMFType
                        
                        if (ppMFType_15 != 0)
                            (*(*ppMFType_15 + 0x10))(ppMFType_15)
            else if (var_64 != -0x620d874bb6b28986 || var_5c != 0x3790dc25)
                if (var_64 != -0x55ffff7ffff00000)
                    if (arg3 != 0)
                        goto label_1405f418b
                else if (var_5c == 0x719b3800 || arg3 != 0)
                    goto label_1405f418b
                
                *result = 0
                struct IMFMediaType ppMFType_5 = ppMFType
                
                if (ppMFType_5 != 0)
                    (*(*ppMFType_5 + 0x10))(ppMFType_5)
            else if (arg3 != 0)
            label_1405f418b:
                struct IMFMediaType ppMFType_6 = ppMFType
                
                if ((*(*ppMFType_6 + 0xc0))(ppMFType_6, &data_1434cbb80, "auds") s< 0)
                label_1405f4235:
                    *result = 0
                    struct IMFMediaType ppMFType_10 = ppMFType
                    
                    if (ppMFType_10 != 0)
                        (*(*ppMFType_10 + 0x10))(ppMFType_10)
                else
                    struct IMFMediaType ppMFType_7 = ppMFType
                    
                    if ((*(*ppMFType_7 + 0xc0))(ppMFType_7, &data_1434cbb90, &data_1434cbb30) s< 0)
                        goto label_1405f4235
                    
                    struct IMFMediaType ppMFType_8 = ppMFType
                    
                    if ((*(*ppMFType_8 + 0xa8))(ppMFType_8, &data_1434cbc00, 0x10) s< 0)
                        goto label_1405f4235
                    
                    int32_t rax_22 = sub_1405f3560(arg2, ppMFType, &data_1434cbbd0)
                    int32_t rax_23
                    
                    if (rax_22 s>= 0)
                        rax_23 = sub_1405f3560(arg2, ppMFType, &data_1434cbbe0)
                    
                    if (rax_22 s>= 0 && rax_23 s>= 0)
                        *result = ppMFType
                    else
                        *result = 0
                        struct IMFMediaType ppMFType_9 = ppMFType
                        
                        if (ppMFType_9 != 0)
                            (*(*ppMFType_9 + 0x10))(ppMFType_9)
            else
                int32_t rax_12 = var_68.d
                int64_t rcx_4
                
                if (rax_12 u> 0x11)
                    if (rax_12 == 0x1610 || rax_12 == 0x55 || rax_12 == 1)
                        rcx_4.b = 1
                    else
                        rcx_4.b = 0
                else if (test_bit(0x200c4, rax_12) || rax_12 == 0x1610 || rax_12 == 0x55
                        || rax_12 == 1)
                    rcx_4.b = 1
                else
                    rcx_4.b = 0
                
                int32_t rax_13
                rax_13.b = rax_12 - 0x161 u<= 2
                
                if (rcx_4.b != 0 || rax_13.b != 0)
                    goto label_1405f418b
                
                *result = 0
                struct IMFMediaType ppMFType_4 = ppMFType
                
                if (ppMFType_4 != 0)
                    (*(*ppMFType_4 + 0x10))(ppMFType_4)
        else
            *result = 0
            struct IMFMediaType ppMFType_3 = ppMFType
            
            if (ppMFType_3 != 0)
                (*(*ppMFType_3 + 0x10))(ppMFType_3)
    else
        *result = 0
        struct IMFMediaType ppMFType_1 = ppMFType
        
        if (ppMFType_1 != 0)
            (*(*ppMFType_1 + 0x10))(ppMFType_1)

__security_check_cookie(rax_1 ^ &var_98)
return result

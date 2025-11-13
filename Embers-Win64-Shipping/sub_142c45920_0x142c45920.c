// 函数: sub_142c45920
// 地址: 0x142c45920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg4

if (sub_142c46e10(arg1, arg2, "-fonnapa") != 0)
    __builtin_strncpy(rbx, "HPPA", 4)
    *arg3 = 1
    return 1

if (sub_142c46e10(arg1, arg2, "-polyton") != 0)
    __builtin_strncpy(rbx, " RGP", 4)
    *arg3 = 1
    return 1

if (sub_142c46e10(arg1, arg2, "-provenc") != 0)
    __builtin_strncpy(rbx, " ORP", 4)
    *arg3 = 1
    return 1

if (sub_142c46e10(arg1, arg2, "-fonipa") != 0)
    __builtin_strncpy(rbx, "HPPI", 4)
    *arg3 = 1
    return 1

if (sub_142c46e10(arg1, arg2, "-geok") != 0)
    __builtin_strncpy(rbx, " EGK", 4)
    *arg3 = 1
    return 1

if (sub_142c46e10(arg1, arg2, "-syre") != 0)
    __builtin_strncpy(rbx, "ERYS", 4)
    *arg3 = 1
    return 1

if (sub_142c46e10(arg1, arg2, "-syrj") != 0)
    __builtin_strncpy(rbx, "JRYS", 4)
    *arg3 = 1
    return 1

if (sub_142c46e10(arg1, arg2, "-syrn") != 0)
    __builtin_strncpy(rbx, "NRYS", 4)
    *arg3 = 1
    return 1

char* result = zx.q(sx.d(*arg1) - 0x61)
void* const _Str2
uint64_t _MaxCount

if (result.d u> 0x19)
labelid_11:
    result.b = 0
else
    switch (&__dos_header.e_magic[zx.q(jump_table_142c469d4[sx.q(result.d)])])
        case 0x142c45af1
            if (strcmp(&arg1[1], "rt-lojban").d != 0)
            labelid_11:
                result.b = 0
            else
                __builtin_strncpy(rbx, " OBJ", 4)
                result.b = 1
                *arg3 = 1
        case 0x142c45b1c
            if (sub_142c46c60(&arg1[1], "do-hant-hk").d == 0)
                if (sub_142c46c60(&arg1[1], "do-hant-mo").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "jy-hant-hk").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "jy-hant-mo").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "mn-hant-hk").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "mn-hant-mo").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "px-hant-hk").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "px-hant-mo").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "zh-hant-hk").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "zh-hant-mo").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "zo-hant-hk").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "zo-hant-mo").d != 0)
                    goto label_142c46817
                
                if (sub_142c46c60(&arg1[1], "do-hans").d != 0)
                    goto label_142c464b3
                
                if (sub_142c46c60(&arg1[1], "do-hant").d != 0)
                    goto label_142c469aa
                
                if (sub_142c46c60(&arg1[1], "jy-hans").d != 0)
                    goto label_142c464b3
                
                if (sub_142c46c60(&arg1[1], "jy-hant").d != 0)
                    goto label_142c469aa
                
                if (sub_142c46c60(&arg1[1], "mn-hans").d != 0)
                    goto label_142c464b3
                
                if (sub_142c46c60(&arg1[1], "mn-hant").d != 0)
                    goto label_142c469aa
                
                if (sub_142c46c60(&arg1[1], "px-hans").d != 0)
                    goto label_142c464b3
                
                if (sub_142c46c60(&arg1[1], "px-hant").d != 0)
                    goto label_142c469aa
                
                if (sub_142c46c60(&arg1[1], "zh-hans").d != 0)
                    goto label_142c464b3
                
                if (sub_142c46c60(&arg1[1], "zh-hant").d != 0)
                    goto label_142c469aa
                
                if (sub_142c46c60(&arg1[1], "zo-hans").d != 0)
                    goto label_142c464b3
                
                result = sub_142c46c60(&arg1[1], "zo-hant")
                
                if (result.d != 0)
                    goto label_142c469aa
                
                int32_t rax_9 = strncmp(&arg1[1], "do-", zx.q((&result[3]).d))
                
                if (rax_9 == 0)
                    result = sub_142c46e10(arg1, arg2, "-hk")
                
                if (rax_9 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_10 = strncmp(&arg1[1], "do-", 3)
                
                if (rax_10 == 0)
                    result = sub_142c46e10(arg1, arg2, "-mo")
                
                if (rax_10 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_11 = strncmp(&arg1[1], "do-", 3)
                
                if (rax_11 == 0)
                    result = sub_142c46e10(arg1, arg2, "-tw")
                
                if (rax_11 == 0 && result.b != 0)
                    goto label_142c469aa
                
                int32_t rax_12 = strncmp(&arg1[1], "jy-", 3)
                
                if (rax_12 == 0)
                    result = sub_142c46e10(arg1, arg2, "-hk")
                
                if (rax_12 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_13 = strncmp(&arg1[1], "jy-", 3)
                
                if (rax_13 == 0)
                    result = sub_142c46e10(arg1, arg2, "-mo")
                
                if (rax_13 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_14 = strncmp(&arg1[1], "jy-", 3)
                
                if (rax_14 == 0)
                    result = sub_142c46e10(arg1, arg2, "-tw")
                
                if (rax_14 == 0 && result.b != 0)
                    goto label_142c469aa
                
                int32_t rax_15 = strncmp(&arg1[1], "mn-", 3)
                
                if (rax_15 == 0)
                    result = sub_142c46e10(arg1, arg2, "-hk")
                
                if (rax_15 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_16 = strncmp(&arg1[1], "mn-", 3)
                
                if (rax_16 == 0)
                    result = sub_142c46e10(arg1, arg2, "-mo")
                
                if (rax_16 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_17 = strncmp(&arg1[1], "mn-", 3)
                
                if (rax_17 == 0)
                    result = sub_142c46e10(arg1, arg2, "-tw")
                
                if (rax_17 == 0 && result.b != 0)
                    goto label_142c469aa
                
                int32_t rax_18 = strncmp(&arg1[1], "px-", 3)
                
                if (rax_18 == 0)
                    result = sub_142c46e10(arg1, arg2, "-hk")
                
                if (rax_18 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_19 = strncmp(&arg1[1], "px-", 3)
                
                if (rax_19 == 0)
                    result = sub_142c46e10(arg1, arg2, "-mo")
                
                if (rax_19 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_20 = strncmp(&arg1[1], "px-", 3)
                
                if (rax_20 == 0)
                    result = sub_142c46e10(arg1, arg2, "-tw")
                
                if (rax_20 == 0 && result.b != 0)
                    goto label_142c469aa
                
                int32_t rax_21 = strncmp(&arg1[1], "zh-", 3)
                
                if (rax_21 == 0)
                    result = sub_142c46e10(arg1, arg2, "-hk")
                
                if (rax_21 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_22 = strncmp(&arg1[1], "zh-", 3)
                
                if (rax_22 == 0)
                    result = sub_142c46e10(arg1, arg2, "-mo")
                
                if (rax_22 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_23 = strncmp(&arg1[1], "zh-", 3)
                
                if (rax_23 == 0)
                    result = sub_142c46e10(arg1, arg2, "-tw")
                
                if (rax_23 == 0 && result.b != 0)
                    goto label_142c469aa
                
                int32_t rax_24 = strncmp(&arg1[1], "zo-", 3)
                
                if (rax_24 == 0)
                    result = sub_142c46e10(arg1, arg2, "-hk")
                
                if (rax_24 == 0 && result.b != 0)
                    goto label_142c46817
                
                int32_t rax_25 = strncmp(&arg1[1], "zo-", 3)
                
                if (rax_25 == 0)
                    result = sub_142c46e10(arg1, arg2, "-mo")
                
                if (rax_25 == 0 && result.b != 0)
                    goto label_142c46817
                
                _MaxCount = 3
                _Str2 = &data_1436aab78
                goto label_142c4698a
            
        label_142c46817:
            __builtin_strncpy(rbx, " HHZ", 4)
            result.b = 1
            *arg3 = 1
        case 0x142c460f1
            if (sub_142c46c60(&arg1[1], "an-hant-hk").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "an-hant-mo").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "an-hans").d != 0)
                goto label_142c464b3
            
            if (sub_142c46c60(&arg1[1], "an-hant").d != 0)
            label_142c469aa:
                __builtin_strncpy(rbx, " THZ", 4)
                result.b = 1
                *arg3 = 1
            else
                result = sub_142c46c60(&arg1[1], "a-latg")
                
                if (result.d == 0)
                    int32_t rax_26 = strncmp(&arg1[1], "an-", 3)
                    
                    if (rax_26 == 0)
                        result = sub_142c46e10(arg1, arg2, "-hk")
                    
                    if (rax_26 == 0 && result.b != 0)
                        goto label_142c46817
                    
                    int32_t rax_27 = strncmp(&arg1[1], "an-", 3)
                    
                    if (rax_27 == 0)
                        result = sub_142c46e10(arg1, arg2, "-mo")
                    
                    if (rax_27 == 0 && result.b != 0)
                        goto label_142c46817
                    
                    _MaxCount = 3
                    _Str2 = &data_1436aabb8
                    goto label_142c4698a
                
                __builtin_strncpy(rbx, " TRI", 4)
                result.b = 1
                *arg3 = 1
        case 0x142c461f4
            if (sub_142c46c60(&arg1[1], "ak-hant-hk").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "ak-hant-mo").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "sn-hant-hk").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "sn-hant-mo").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "ak-hans").d != 0)
                goto label_142c464b3
            
            if (sub_142c46c60(&arg1[1], "ak-hant").d != 0)
                goto label_142c469aa
            
            if (sub_142c46c60(&arg1[1], "sn-hans").d != 0)
                goto label_142c464b3
            
            result = sub_142c46c60(&arg1[1], "sn-hant")
            
            if (result.d != 0)
                goto label_142c469aa
            
            int32_t rax_28 = strncmp(&arg1[1], "ak-", zx.q((&result[3]).d))
            
            if (rax_28 == 0)
                result = sub_142c46e10(arg1, arg2, "-hk")
            
            if (rax_28 == 0 && result.b != 0)
                goto label_142c46817
            
            int32_t rax_29 = strncmp(&arg1[1], "ak-", 3)
            
            if (rax_29 == 0)
                result = sub_142c46e10(arg1, arg2, "-mo")
            
            if (rax_29 == 0 && result.b != 0)
                goto label_142c46817
            
            int32_t rax_30 = strncmp(&arg1[1], "ak-", 3)
            
            if (rax_30 == 0)
                result = sub_142c46e10(arg1, arg2, "-tw")
            
            if (rax_30 == 0 && result.b != 0)
                goto label_142c469aa
            
            int32_t rax_31 = strncmp(&arg1[1], "sn-", 3)
            
            if (rax_31 == 0)
                result = sub_142c46e10(arg1, arg2, "-hk")
            
            if (rax_31 == 0 && result.b != 0)
                goto label_142c46817
            
            int32_t rax_32 = strncmp(&arg1[1], "sn-", 3)
            
            if (rax_32 == 0)
                result = sub_142c46e10(arg1, arg2, "-mo")
            
            if (rax_32 == 0 && result.b != 0)
                goto label_142c46817
            
            _MaxCount = 3
            _Str2 = &data_1436aac24
            goto label_142c4698a
        case 0x142c463cd
            uint64_t i = 0
            int64_t rdx_31 = 0
            
            while (true)
                result = zx.q(arg1[rdx_31 + 1])
                rdx_31 += 1
                
                if (result.b != *(rdx_31 + 0x1436aac27))
                    int64_t rdx_33 = 0
                    
                    while (true)
                        result = zx.q(arg1[rdx_33 + 1])
                        rdx_33 += 1
                        
                        if (result.b != data_1436aac28[7][rdx_33])
                            do
                                result = zx.q(arg1[i + 1])
                                i += 1
                                
                                if (result.b != *(i + 0x1436aac37))
                                    goto label_142c469ba_2
                            while (i != 5)
                            
                            __builtin_strncpy(rbx, " ZTL", 4)
                            result.b = 1
                            *arg3 = 1
                            break
                        
                        if (rdx_33 == 5)
                            __builtin_strncpy(rbx, " SHZ", 4)
                            result.b = 1
                            *arg3 = 1
                            break
                    
                    break
                
                if (rdx_31 == 8)
                    int32_t var_28
                    __builtin_strncpy(&var_28, " VAN HTA", 8)
                    void* rdx_32 = &var_28 - rbx
                    
                    while (i.d u< *arg3)
                        i = zx.q(i.d + 1)
                        *rbx = *(rdx_32 + rbx)
                        rbx = &rbx[1]
                        
                        if (i.d u>= 2)
                            break
                    
                    *arg3 = i.d
                    result.b = 1
                    break
        case 0x142c4649b
            if (sub_142c46c60(&arg1[1], "zh-hans").d == 0)
            labelid_11:
                result.b = 0
            else
            label_142c464b3:
                __builtin_strncpy(rbx, " SHZ", 4)
                result.b = 1
                *arg3 = 1
        case 0x142c464c6
            if (sub_142c46c60(&arg1[1], "np-hant-hk").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "np-hant-mo").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "np-hans").d != 0)
                goto label_142c464b3
            
            result = sub_142c46c60(&arg1[1], "np-hant")
            
            if (result.d != 0)
                goto label_142c469aa
            
            int32_t rax_33 = strncmp(&arg1[1], "np-", zx.q((&result[3]).d))
            
            if (rax_33 == 0)
                result = sub_142c46e10(arg1, arg2, "-hk")
            
            if (rax_33 == 0 && result.b != 0)
                goto label_142c46817
            
            int32_t rax_34 = strncmp(&arg1[1], "np-", 3)
            
            if (rax_34 == 0)
                result = sub_142c46e10(arg1, arg2, "-mo")
            
            if (rax_34 == 0 && result.b != 0)
                goto label_142c46817
            
            _MaxCount = 3
            _Str2 = &data_1436aac70
        label_142c4698a:
            
            if (strncmp(&arg1[1], _Str2, _MaxCount).d != 0)
            labelid_11:
                result.b = 0
            else
                if (sub_142c46e10(arg1, arg2, "-tw").b != 0)
                    goto label_142c469aa
                
            labelid_11:
                result.b = 0
        case 0x142c4659c
            if (sub_142c46c60(&arg1[1], "an-hant-hk").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "an-hant-mo").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "an-hans").d != 0)
                goto label_142c464b3
            
            result = sub_142c46c60(&arg1[1], "an-hant")
            
            if (result.d != 0)
                goto label_142c469aa
            
            int32_t rax_35 = strncmp(&arg1[1], "an-", zx.q((&result[3]).d))
            
            if (rax_35 == 0)
                result = sub_142c46e10(arg1, arg2, "-hk")
            
            if (rax_35 == 0 && result.b != 0)
                goto label_142c46817
            
            int32_t rax_36 = strncmp(&arg1[1], "an-", 3)
            
            if (rax_36 == 0)
                result = sub_142c46e10(arg1, arg2, "-mo")
            
            if (rax_36 == 0 && result.b != 0)
                goto label_142c46817
            
            int32_t rax_37 = strncmp(&arg1[1], "an-", 3)
            
            if (rax_37 == 0)
                result = sub_142c46e10(arg1, arg2, "-tw")
            
            if (rax_37 == 0 && result.b != 0)
                goto label_142c469aa
            
            int64_t i_1 = 0
            int64_t rdx_39 = 0
            
            while (true)
                result = zx.q(arg1[rdx_39 + 1])
                rdx_39 += 1
                
                if (result.b != *(rdx_39 + 0x1436aac73))
                    do
                        result = zx.q(arg1[i_1 + 1])
                        i_1 += 1
                        
                        if (result.b != *(i_1 + 0x1436aac7b))
                            goto label_142c469ba_2
                    while (i_1 != 6)
                    
                    __builtin_strncpy(rbx, " NYN", 4)
                    result.b = 1
                    *arg3 = 1
                    break
                
                if (rdx_39 == 6)
                    __builtin_strncpy(rbx, " RON", 4)
                    result.b = 1
                    *arg3 = 1
                    break
        case 0x142c4670b
            if (strncmp(&arg1[1], "o-", 2).d != 0)
            labelid_11:
                result.b = 0
            else if (sub_142c46e10(arg1, arg2, "-md").b == 0)
            label_142c469ba:
                result.b = 0
            else
                __builtin_strncpy(rbx, " LOM", 4)
                result.b = 1
                *arg3 = 1
        case 0x142c46757
            if (sub_142c46c60(&arg1[1], "uu-hant-hk").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "uu-hant-mo").d != 0)
                goto label_142c46817
            
            if (sub_142c46c60(&arg1[1], "uu-hans").d != 0)
                goto label_142c464b3
            
            result = sub_142c46c60(&arg1[1], "uu-hant")
            
            if (result.d != 0)
                goto label_142c469aa
            
            int32_t rax_38 = strncmp(&arg1[1], "uu-", zx.q((&result[3]).d))
            
            if (rax_38 == 0)
                result = sub_142c46e10(arg1, arg2, "-hk")
            
            if (rax_38 == 0 && result.b != 0)
                goto label_142c46817
            
            int32_t rax_39 = strncmp(&arg1[1], "uu-", 3)
            
            if (rax_39 == 0)
                result = sub_142c46e10(arg1, arg2, "-mo")
            
            if (rax_39 == 0 && result.b != 0)
                goto label_142c46817
            
            _MaxCount = 3
            _Str2 = &data_1436aacc0
            goto label_142c4698a
        case 0x142c4683c
            if (sub_142c46c60(&arg1[1], "ue-hans").d == 0)
            label_142c469ba_1:
                result.b = 0
            else
                __builtin_strncpy(rbx, " SHZ", 4)
                result.b = 1
                *arg3 = 1
        case 0x142c46867
            if (sub_142c46c60(&arg1[1], "h-hant-hk").d != 0)
            label_142c46969:
                __builtin_strncpy(rbx, " HHZ", 4)
                result.b = 1
                *arg3 = 1
            else
                if (sub_142c46c60(&arg1[1], "h-hant-mo").d != 0)
                    goto label_142c46969
                
                if (strcmp(&arg1[1], "h-min-nan").d != 0)
                    if (sub_142c46c60(&arg1[1], "h-hans").d != 0)
                        goto label_142c468f4
                    
                    if (sub_142c46c60(&arg1[1], "h-hant").d != 0)
                        goto label_142c469aa
                    
                    int64_t rcx_130 = 0
                    
                    while (true)
                        result = zx.q(arg1[rcx_130 + 1])
                        rcx_130 += 1
                        
                        if (result.b != *(rcx_130 + 0x1436aad0b))
                            break
                        
                        if (rcx_130 == 6)
                            goto label_142c468f4
                    
                    int32_t rax_40 = strncmp(&arg1[1], "h-", 2)
                    
                    if (rax_40 == 0)
                        result = sub_142c46e10(arg1, arg2, "-hk")
                    
                    if (rax_40 == 0 && result.b != 0)
                        goto label_142c46969
                    
                    int32_t rax_41 = strncmp(&arg1[1], "h-", 2)
                    
                    if (rax_41 == 0)
                        result = sub_142c46e10(arg1, arg2, "-mo")
                    
                    if (rax_41 == 0 && result.b != 0)
                        goto label_142c46969
                    
                    _MaxCount = 2
                    _Str2 = &data_1436aad14
                    goto label_142c4698a
                
            label_142c468f4:
                __builtin_strncpy(rbx, " SHZ", 4)
                result.b = 1
                *arg3 = 1
        case 0x142c469ba
        label_142c469ba_2:
            result.b = 0
return result

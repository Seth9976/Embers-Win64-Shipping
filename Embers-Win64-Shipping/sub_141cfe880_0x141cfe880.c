// 函数: sub_141cfe880
// 地址: 0x141cfe880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_70 = *(arg1 + 8)
void*** var_58 = nullptr
int128_t var_40 = arg3.o
void** const var_48 = &data_142d42ed8
int64_t (* var_68)(int64_t* arg1) = sub_141cfc7b0
void*** result

if (*(arg4 + 0x44) == 0 || *(arg3 + 0xa4) s< 3)
    char rbx_1 = arg4[9].b
    void*** result_2 = j_sub_140a82f30(0xd0)
    result = result_2
    void** rax_7
    
    if ((rbx_1 & 1) != 0)
        if (result_2 != 0)
            rax_7 = &data_14321dd68
            goto label_141cfe9c6
        
        result = nullptr
    else if (result == 0)
        result = nullptr
    else
        rax_7 = &data_14321ddb0
    label_141cfe9c6:
        *result = rax_7
        result[1].b = 1
        result[2] = 0
        result[4] = arg3
        sub_141cf7990(&result[5], arg4)
        result[0x10] = var_68
        result[0x12] = 0
        
        if (result[0x10] != 0)
            void*** rcx_3 = &var_48
            
            if (var_58 != 0)
                rcx_3 = var_58
            
            (**rcx_3)(rcx_3)
        
        int64_t rcx_4 = 0x30
        int32_t rdx_4 = *(result[4] + 0xa4)
        
        if (rdx_4 s>= 3)
            rcx_4 = 0x35
            
            if (*(result + 0x6c) != 0)
                rcx_4 = (sx.q(result[0xc].d) << 4) + 0x39
        
        int64_t rax_12 = rcx_4 + 8
        
        if (rdx_4 s>= 2)
            rax_12 = rcx_4
        
        result[0x18] = rax_12 + result[5]
else
    char rbx = arg4[9].b
    void*** result_1 = j_sub_140a82f30(0xc0)
    result = result_1
    void** const rax_3
    
    if ((rbx & 1) != 0)
        if (result_1 != 0)
            rax_3 = &data_14321dcd8
            goto label_141cfe922
        
        result = nullptr
    else if (result == 0)
        result = nullptr
    else
        rax_3 = &data_14321dd20
    label_141cfe922:
        *result = rax_3
        result[1].b = 1
        result[2] = 0
        result[4] = arg3
        sub_141cf7990(&result[5], arg4)
        result[0x10] = var_68
        result[0x12] = 0
        
        if (result[0x10] != 0)
            void** const* rcx_1 = &var_48
            
            if (var_58 != 0)
                rcx_1 = var_58
            
            (**rcx_1)(rcx_1)

if (var_68 != 0)
    void** const* rcx_7 = &var_48
    
    if (var_58 != 0)
        rcx_7 = var_58
    
    void** const rdx_6 = *rcx_7
    rdx_6[2](rcx_7, rdx_6)

__security_check_cookie(rax_1 ^ &var_98)
return result

// 函数: sub_142a92e60
// 地址: 0x142a92e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t* rsi = arg1
sub_142a7db20(5, sub_142a939b0)
data_144015c60 = sub_142a86f30(sub_142a86ce0, sub_142a86b10, 0, rsi)
char** rax_3 = sub_142a64160(nullptr, "keyTypeData", rsi)
char** rdi = rax_3
char** rax_4 = sub_142a625a0(rax_3, "keyMap", nullptr, rsi)
char** var_e0 = rax_4
char** result = sub_142a625a0(rdi, "typeMap", nullptr, rsi)
char** result_7 = result
char** result_1 = result

if (*rsi s<= 0)
    char** result_6 = nullptr
    int32_t var_178 = 0
    char** rax_5 = sub_142a625a0(rdi, "typeAlias", nullptr, &var_178)
    char** rbx_1 = rax_5
    var_178 = 0
    char** rax_6 = sub_142a625a0(rdi, "bcpTypeAlias", nullptr, &var_178)
    char** r14_1 = rax_6
    result = j_sub_142a7dd00(0x58)
    char** result_2 = result
    
    if (result == 0)
        result = nullptr
    else
        *result = nullptr
        result[1] = &result[3]
        result[2].d = 8
        *(result + 0x14) = 0
    
    data_144015c70 = result
    
    if (result != 0)
        result = j_sub_142a7dd00(0x58)
        char** result_3 = result
        
        if (result == 0)
            result = nullptr
        else
            *result = nullptr
            result[1] = &result[3]
            result[2].d = 8
            *(result + 0x14) = 0
        
        data_144015c78 = result
        
        if (result != 0)
            result = j_sub_142a7dd00(0x58)
            char** result_4 = result
            
            if (result == 0)
                result = nullptr
            else
                *result = nullptr
                result[1] = &result[3]
                result[2].d = 8
                *(result + 0x14) = 0
            
            data_144015c80 = result
            
            if (result != 0)
                result = sub_142a63fa0(rax_4)
                
                if (result.b != 0)
                    while (true)
                        result = sub_142a63800(rax_4, result_6, rsi)
                        result_6 = result
                        char** result_5 = result
                        
                        if (*rsi s> 0)
                            break
                        
                        char* _Str1_5 = sub_142a63790(result)
                        char* _Str1_1 = _Str1_5
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
                        sub_142a93930(&var_78, result_6, rsi)
                        
                        if (*rsi s<= 0)
                            char* _Str1_4 = _Str1_1
                            int16_t var_70
                            
                            if ((var_70 & 0xffe0) == 0)
                                goto label_142a93100
                            
                            int64_t* rax_7 = sub_142a87070(data_144015c70)
                            
                            if (rax_7 == 0)
                                *rsi = 7
                            else
                                sub_142a8cd50(rax_7, &var_78, rsi)
                                
                                if (*rsi s<= 0)
                                    _Str1_4 = *rax_7
                                    _Str1_1 = _Str1_5
                                label_142a93100:
                                    bool var_174_1 = strcmp(_Str1_1, "timezone") == 0
                                    int64_t* rax_10 =
                                        sub_142a86f30(sub_142a86ce0, sub_142a86b10, 0, rsi)
                                    
                                    if (*rsi s<= 0)
                                        int32_t var_168_1 = 0
                                        char** rsi_1 = nullptr
                                        int64_t var_100_1 = 0
                                        char** rdi_2 = nullptr
                                        int64_t var_f8_1 = 0
                                        
                                        if (rbx_1 != 0)
                                            var_178 = 0
                                            rsi_1 = sub_142a625a0(rbx_1, _Str1_5, nullptr, &var_178)
                                            
                                            if (var_178 s> 0)
                                                rsi_1 = nullptr
                                            
                                            char** var_100_2 = rsi_1
                                        
                                        if (r14_1 != 0)
                                            var_178 = 0
                                            rdi_2 = sub_142a625a0(r14_1, _Str1_4, nullptr, &var_178)
                                            
                                            if (var_178 s> 0)
                                                rdi_2 = nullptr
                                            
                                            char** var_f8_2 = rdi_2
                                        
                                        var_178 = 0
                                        char** rax_13 =
                                            sub_142a625a0(result_7, _Str1_5, nullptr, &var_178)
                                        char** var_d0_1 = rax_13
                                        
                                        if (var_178 s> 0)
                                            abort()
                                            noreturn
                                        
                                        char** r14_2 = nullptr
                                        int64_t* _Str1_2
                                        
                                        if (sub_142a63fa0(rax_13) != 0)
                                            int32_t* rbx_2 = arg1
                                            char i
                                            
                                            do
                                                char** rax_15 = sub_142a63800(rax_13, r14_2, rbx_2)
                                                r14_2 = rax_15
                                                char** var_c8_1 = rax_15
                                                
                                                if (*rbx_2 s> 0)
                                                    break
                                                
                                                int64_t* _Str1 = sub_142a63790(rax_15)
                                                int64_t* _Str1_3 = _Str1
                                                _Str1_2 = _Str1
                                                
                                                if (strcmp(_Str1, "CODEPOINTS") != 0)
                                                    if (strcmp(_Str1_3, "REORDER_CODE") != 0)
                                                        if (strcmp(_Str1_3, "RG_KEY_VALUE") != 0)
                                                            if (var_174_1 != 0
                                                                    && strchr(_Str1_3, 0x3a) != 0)
                                                                int64_t** rax_20 = sub_142a92c80(
                                                                    data_144015c70, &_Str1_2, rbx_2)
                                                                
                                                                if (rax_20 == 0)
                                                                    *rbx_2 = 7
                                                                    break
                                                                
                                                                if (*rbx_2 s> 0)
                                                                    break
                                                                
                                                                int64_t* j = *rax_20
                                                                
                                                                for (
                                                                        void* r8_7 = sx.q(rax_20[7].d) + j; 
                                                                        j != r8_7; j += 1)
                                                                    if (*j == 0x3a)
                                                                        *j = 0x2f
                                                                
                                                                _Str1_3 = *rax_20
                                                            
                                                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable
                                                                * var_b8
                                                            sub_142a93930(&var_b8, r14_2, rbx_2)
                                                            
                                                            if (*rbx_2 s> 0)
                                                                sub_142a47ff0(&var_b8)
                                                                break
                                                            
                                                            char* _Str1_6 = _Str1_3
                                                            int16_t var_b0
                                                            
                                                            if ((var_b0 & 0xffe0) != 0)
                                                                int64_t* _Str1_7 =
                                                                    sub_142a87070(data_144015c70)
                                                                _Str1_2 = _Str1_7
                                                                
                                                                if (_Str1_7 == 0)
                                                                label_142a935e9:
                                                                    *rbx_2 = 7
                                                                    sub_142a47ff0(&var_b8)
                                                                    break
                                                                    break
                                                                
                                                                sub_142a8cd50(_Str1_7, &var_b8, rbx_2)
                                                                
                                                                if (*rbx_2 s> 0)
                                                                    sub_142a47ff0(&var_b8)
                                                                    break
                                                                    break
                                                                
                                                                _Str1_6 = *_Str1_2
                                                            
                                                            int64_t** _Str1_8 =
                                                                sub_142a92c00(data_144015c80)
                                                            _Str1_2 = _Str1_8
                                                            
                                                            if (_Str1_8 == 0)
                                                                goto label_142a935e9
                                                            
                                                            _Str1_8[1] = _Str1_6
                                                            *_Str1_8 = _Str1_3
                                                            sub_142a86f50(rax_10, _Str1_3, _Str1_8, 
                                                                rbx_2)
                                                            
                                                            if (_Str1_6 != _Str1_3)
                                                                sub_142a86f50(rax_10, _Str1_6, _Str1_2, 
                                                                    rbx_2)
                                                            
                                                            if (*rbx_2 s> 0)
                                                                sub_142a47ff0(&var_b8)
                                                                break
                                                            
                                                            char** rbx_3
                                                            
                                                            if (rsi_1 != 0)
                                                                rbx_3 = nullptr
                                                                sub_142a641e0(rsi_1)
                                                                
                                                                if (sub_142a63fa0(rsi_1) == 0)
                                                                label_142a934e5:
                                                                    
                                                                    if (*arg1 s<= 0)
                                                                        if (rbx_3 != 0)
                                                                            sub_142a5f860(rbx_3)
                                                                        
                                                                        goto label_142a934fb
                                                                else
                                                                    while (*arg1 s<= 0)
                                                                        char** rax_30 =
                                                                            sub_142a63800(rsi_1, rbx_3, arg1)
                                                                        rbx_3 = rax_30
                                                                        char** var_c0_1 = rax_30
                                                                        int32_t var_108
                                                                        void* rax_31 =
                                                                            sub_142a63f30(rax_30, &var_108, arg1)
                                                                        
                                                                        if (*arg1 s> 0)
                                                                            break
                                                                        
                                                                        if (sub_142a8d780(0, _Str1_3, 
                                                                                0xffffffff, rax_31, var_108) == 0)
                                                                            char* string = sub_142a63790(rbx_3)
                                                                            char* string_1 = string
                                                                            
                                                                            if (var_174_1 != 0
                                                                                    && strchr(string, 0x3a) != 0)
                                                                                int64_t* rax_35 = sub_142a92c80(
                                                                                    data_144015c70, &string_1, arg1)
                                                                                
                                                                                if (rax_35 == 0)
                                                                                    *arg1 = 7
                                                                                    break
                                                                                
                                                                                if (*arg1 s> 0)
                                                                                    break
                                                                                
                                                                                char* j_1 = *rax_35
                                                                                
                                                                                for (
                                                                                        void* r8_16 = &j_1[sx.q(rax_35[7].d)]; 
                                                                                        j_1 != r8_16; j_1 = &j_1[1])
                                                                                    if (*j_1 == 0x3a)
                                                                                        *j_1 = 0x2f
                                                                                
                                                                                string = *rax_35
                                                                            
                                                                            sub_142a86f50(rax_10, string, _Str1_2, 
                                                                                arg1)
                                                                        
                                                                        if (sub_142a63fa0(rsi_1) == 0)
                                                                            goto label_142a934e5
                                                                
                                                                if (rbx_3 == 0)
                                                                    sub_142a47ff0(&var_b8)
                                                                    break
                                                                
                                                            label_142a935ff:
                                                                sub_142a5f860(rbx_3)
                                                                sub_142a47ff0(&var_b8)
                                                                break
                                                            
                                                        label_142a934fb:
                                                            
                                                            if (rdi_2 == 0)
                                                                sub_142a47ff0(&var_b8)
                                                                rbx_2 = arg1
                                                            else
                                                                rbx_3 = nullptr
                                                                sub_142a641e0(rdi_2)
                                                                
                                                                if (sub_142a63fa0(rdi_2) != 0)
                                                                    while (*arg1 s<= 0)
                                                                        char** rax_41 =
                                                                            sub_142a63800(rdi_2, rbx_3, arg1)
                                                                        rbx_3 = rax_41
                                                                        int32_t var_104
                                                                        void* rax_42 =
                                                                            sub_142a63f30(rax_41, &var_104, arg1)
                                                                        
                                                                        if (*arg1 s> 0)
                                                                            break
                                                                        
                                                                        if (sub_142a8d780(0, _Str1_6, 
                                                                                0xffffffff, rax_42, var_104) == 0)
                                                                            sub_142a86f50(rax_10, 
                                                                                sub_142a63790(rbx_3), _Str1_2, arg1)
                                                                        
                                                                        if (sub_142a63fa0(rdi_2) == 0)
                                                                            goto label_142a935af
                                                                    
                                                                    goto label_142a93606
                                                                
                                                            label_142a935af:
                                                                
                                                                if (*arg1 s> 0)
                                                                label_142a93606:
                                                                    
                                                                    if (rbx_3 != 0)
                                                                        goto label_142a935ff
                                                                    
                                                                    sub_142a47ff0(&var_b8)
                                                                    break
                                                                
                                                                if (rbx_3 != 0)
                                                                    sub_142a5f860(rbx_3)
                                                                
                                                                sub_142a47ff0(&var_b8)
                                                                rbx_2 = arg1
                                                        else
                                                            var_168_1 |= 4
                                                    else
                                                        var_168_1 |= 2
                                                else
                                                    var_168_1 |= 1
                                                
                                                i = sub_142a63fa0(rax_13)
                                            while (i != 0)
                                            rbx_1 = rax_5
                                        
                                        if (r14_2 != 0)
                                            sub_142a5f860(r14_2)
                                        
                                        if (*arg1 s<= 0)
                                            int64_t* _Str1_9 = sub_142a92b80(data_144015c78)
                                            _Str1_2 = _Str1_9
                                            
                                            if (_Str1_9 == 0)
                                                *arg1 = 7
                                            else
                                                _Str1_9[1] = _Str1_4
                                                *_Str1_9 = _Str1_5
                                                _Str1_9[3].d = var_168_1
                                                int64_t* rcx_61 = _Str1_9[2]
                                                
                                                if (rcx_61 != 0)
                                                    sub_142a869e0(rcx_61)
                                                    _Str1_9 = _Str1_2
                                                
                                                _Str1_9[2] = rax_10
                                                sub_142a86f50(data_144015c60, _Str1_5, _Str1_9, 
                                                    arg1)
                                                
                                                if (_Str1_5 != _Str1_4)
                                                    sub_142a86f50(data_144015c60, _Str1_4, _Str1_2, 
                                                        arg1)
                                                
                                                if (*arg1 s<= 0)
                                                    if (rax_13 != 0)
                                                        sub_142a5f860(rax_13)
                                                    
                                                    if (rdi_2 != 0)
                                                        sub_142a5f860(rdi_2)
                                                    
                                                    if (rsi_1 != 0)
                                                        sub_142a5f860(rsi_1)
                                                    
                                                    sub_142a47ff0(&var_78)
                                                    result = sub_142a63fa0(rax_4)
                                                    r14_1 = rax_6
                                                    result_7 = result_1
                                                    
                                                    if (result.b == 0)
                                                        break
                                                    
                                                    rsi = arg1
                                                    continue
                                        
                                        if (rax_13 != 0)
                                            sub_142a5f860(rax_13)
                                        
                                        if (rdi_2 != 0)
                                            sub_142a5f860(rdi_2)
                                        
                                        if (rsi_1 != 0)
                                            sub_142a5f860(rsi_1)
                                        
                                        result = sub_142a47ff0(&var_78)
                                        r14_1 = rax_6
                                        result_7 = result_1
                                        break
                        
                        result = sub_142a47ff0(&var_78)
                        break
                    
                    rdi = rax_3
                
                if (result_6 != 0)
                    result = sub_142a5f860(result_6)
            else
                *rsi = 7
        else
            *rsi = 7
    else
        *rsi = 7
    
    if (r14_1 != 0)
        result = sub_142a5f860(r14_1)
    
    if (rbx_1 != 0)
        result = sub_142a5f860(rbx_1)

if (result_7 != 0)
    result = sub_142a5f860(result_7)

if (rax_4 != 0)
    result = sub_142a5f860(rax_4)

if (rdi != 0)
    result = sub_142a5f860(rdi)

__security_check_cookie(rax_1 ^ &var_1a8)
return result

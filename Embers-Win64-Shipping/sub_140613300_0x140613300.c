// 函数: sub_140613300
// 地址: 0x140613300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t* r13
r13.b = 1
char var_98 = 1
int64_t rbx = sx.q(std::istream::get())
int32_t var_b0 = rbx.d
int32_t* rax_3 = j_sub_140a82f30(0x18)
int32_t* var_a8
int32_t* rdi

if (rax_3 == 0)
    rdi = nullptr
    var_a8 = nullptr
else
    int32_t* rax_4 = sub_14060d350(rax_3)
    rdi = rax_4
    var_a8 = rax_4

char* _Str_1 = j_sub_140a82f30(sx.q(*rdi))
char* _Str = _Str_1
int64_t _Count = sx.q(*rdi)

if (_Count.d s> 0)
    std::istream::read(arg3, _Str, _Count)

if ((rbx - 1).d u> 6 && rbx.d != 0x7f && rbx.d != 0xa)
    goto label_140613a18

int64_t r8_1 = sx.q(*rdi)
int64_t var_58_1 = 0
int64_t var_50_1 = 0xf
char var_68 = 0
sub_14058ad40(&var_68, _Str, r8_1)
int32_t rax_5 = (rbx - 1).d
void var_88
void* rcx_17
void* r8_5
int64_t* r12_2
void*** result

if (rax_5 u> 0x7e)
label_1406139de:
    
    if (var_50_1 u< 0x10)
        goto label_140613a18
    
    void* rcx_45 = var_68.q
    void* rax_43 = rcx_45
    
    if (var_50_1 + 1 u>= 0x1000)
        rcx_45 = *(rcx_45 - 8)
    
    if (var_50_1 + 1 u< 0x1000 || rax_43 - rcx_45 - 8 u<= 0x1f)
        j_sub_140a74f90(rcx_45)
    label_140613a18:
        void*** result_13
        
        if (rbx.d u> 0x59)
        label_14061406d:
            void*** rax_78 = j_sub_140a82f30(0x28)
            
            if (rax_78 != 0)
                result_13 = sub_14060c920(rax_78, arg1, arg2, &var_b0)
                r13 = zx.q(var_98)
                _Str = _Str_1
                rdi = var_a8
            label_140614096:
                result = result_13
            label_140614099:
                
                if (r13.b == 0)
                    __security_check_cookie(rax_1 ^ &var_f8)
                    return result
                
                goto label_1406140a5
            
            result = nullptr
        label_1406140a5:
            
            if (rdi != 0)
                int64_t rcx_80 = *(rdi + 8)
                
                if (rcx_80 != 0)
                    j_sub_140a74f90(rcx_80)
                
                *(rdi + 8) = 0
                j_sub_140a74f90(rdi)
            
            j_sub_140a74f90(_Str)
            __security_check_cookie(rax_1 ^ &var_f8)
            return result
        
        void** rax_47
        
        switch (rbx)
            case 0
                if (*rdi != 2)
                    void*** result_9 = j_sub_140a82f30(0x28)
                    result = result_9
                    
                    if (result_9 == 0)
                        goto label_140614064
                    
                    sub_14060ca80(result_9, arg1, arg2)
                    result[1].d = 0
                    *result = &data_142d63918
                    result[3] = rdi
                    result[4] = _Str
                    rax_47 =
                        sub_14058b120(std::cout, "Warning: GenericMetaEvent used because type ")
                label_140613fbb:
                    sub_14058b120(
                        std::ostream::operator<<(sub_14058b120(std::ostream::operator<<(rax_47), 
                            " wasn't recognized or unexpected data length (")), 
                        ") for the type.")
                    r13.b = 0
                    goto label_140614099
                
                int32_t r12_6 = (sx.d(*_Str) << 8) + sx.d(_Str[1])
                void*** result_10 = j_sub_140a82f30(0x28)
                result = result_10
                
                if (result_10 == 0)
                    goto label_140614064
                
                int32_t* rax_49 = j_sub_140a82f30(0x18)
                r13 = rax_49
                
                if (rax_49 == 0)
                    r13 = nullptr
                else
                    *(rax_49 + 8) = 0
                    sub_140615390(rax_49, 2)
                
                sub_14060ca80(result, arg1, arg2)
                result[3] = r13
                *result = &data_142d63a88
                r13.b = 1
                result[1].d = 0
                result[4].d = r12_6
                goto label_140614099
            case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                    0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x21, 
                    0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
                    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 
                    0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 
                    0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x52, 0x53, 0x55, 0x56, 0x57
                goto label_14061406d
            case 0x20
                if (*rdi != 1)
                    void*** result_11 = j_sub_140a82f30(0x28)
                    result = result_11
                    
                    if (result_11 == 0)
                        goto label_140614064
                    
                    sub_14060ca80(result_11, arg1, arg2)
                    result[1].d = 0x20
                    *result = &data_142d63918
                    result[3] = rdi
                    result[4] = _Str
                    rax_47 =
                        sub_14058b120(std::cout, "Warning: GenericMetaEvent used because type ")
                    goto label_140613fbb
                
                int32_t r12_7 = sx.d(*_Str)
                void*** result_12 = j_sub_140a82f30(0x28)
                result = result_12
                
                if (result_12 == 0)
                    goto label_140614064
                
                int32_t* rax_50 = j_sub_140a82f30(0x18)
                r13 = rax_50
                
                if (rax_50 == 0)
                    r13 = nullptr
                else
                    *(rax_50 + 8) = 0
                    sub_140615390(rax_50, 4)
                
                sub_14060ca80(result, arg1, arg2)
                result[3] = r13
                *result = &data_142d63a48
                r13.b = 1
                result[1].d = 0x20
                result[4].d = r12_7
                goto label_140614099
            case 0x2f
                void*** rax_51 = j_sub_140a82f30(0x20)
                
                if (rax_51 != 0)
                    result_13 = sub_14060c8a0(rax_51, arg1, arg2)
                    goto label_140614096
                
            label_140614064:
                result = nullptr
                goto label_140614099
            case 0x51
                if (*rdi != 3)
                    void*** result_14 = j_sub_140a82f30(0x28)
                    result = result_14
                    
                    if (result_14 == 0)
                        goto label_140614064
                    
                    sub_14060ca80(result_14, arg1, arg2)
                    result[1].d = 0x51
                    *result = &data_142d63918
                    result[3] = rdi
                    result[4] = _Str
                    rax_47 =
                        sub_14058b120(std::cout, "Warning: GenericMetaEvent used because type ")
                    goto label_140613fbb
                
                int32_t rax_52 = sub_140610f60(_Str, 0, 3)
                void*** result_15 = j_sub_140a82f30(0x28)
                result = result_15
                
                if (result_15 == 0)
                    goto label_140614064
                
                int32_t* rax_53 = j_sub_140a82f30(0x18)
                r13 = rax_53
                
                if (rax_53 == 0)
                    r13 = nullptr
                else
                    *(rax_53 + 8) = 0
                    sub_140615390(rax_53, 3)
                
                sub_14060ca80(result, arg1, arg2)
                uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o(rax_52))
                result[3] = r13
                r13.b = 1
                result[1].d = 0x51
                *result = &data_142d63b48
                result[4].d = rax_52
                *(result + 0x24) = 60000000f f/ zmm0_3.d
                goto label_140614099
            case 0x54
                if (*rdi != 5)
                    void*** result_16 = j_sub_140a82f30(0x28)
                    result = result_16
                    
                    if (result_16 == 0)
                        goto label_140614064
                    
                    sub_14060ca80(result_16, arg1, arg2)
                    result[1].d = 0x54
                    *result = &data_142d63918
                    result[3] = rdi
                    result[4] = _Str
                    rax_47 =
                        sub_14058b120(std::cout, "Warning: GenericMetaEvent used because type ")
                    goto label_140613fbb
                
                int32_t r12_9 = sx.d(*_Str)
                int32_t rax_56 = sx.d(_Str[1])
                int32_t rax_57 = sx.d(_Str[2])
                int32_t rax_58 = sx.d(_Str[3])
                int32_t rax_59 = sx.d(_Str[4])
                void*** result_17 = j_sub_140a82f30(0x38)
                result = result_17
                
                if (result_17 == 0)
                    goto label_140614064
                
                int32_t* rax_60 = j_sub_140a82f30(0x18)
                r13 = rax_60
                
                if (rax_60 == 0)
                    r13 = nullptr
                else
                    *(rax_60 + 8) = 0
                    sub_140615390(rax_60, 5)
                
                sub_14060ca80(result, arg1, arg2)
                result[3] = r13
                *result = &data_142d63b08
                r13.b = 1
                result[4].d = r12_9 s>> 5
                result[5].d = rax_56
                *(result + 0x2c) = rax_57
                result[6].d = rax_58
                *(result + 0x34) = rax_59
                result[1].d = 0x54
                *(result + 0x24) = r12_9 & 0x1f
                goto label_140614099
            case 0x58
                if (*rdi != 4)
                    void*** result_18 = j_sub_140a82f30(0x28)
                    result = result_18
                    
                    if (result_18 == 0)
                        goto label_140614064
                    
                    sub_14060ca80(result_18, arg1, arg2)
                    result[1].d = 0x58
                    *result = &data_142d63918
                    result[3] = rdi
                    result[4] = _Str
                    rax_47 =
                        sub_14058b120(std::cout, "Warning: GenericMetaEvent used because type ")
                    goto label_140613fbb
                
                int32_t rax_66 = sx.d(_Str[2])
                int32_t r12_11 = sx.d(*_Str)
                int32_t rax_67 = sx.d(_Str[3])
                int32_t rax_69 = int.d(pow(2.0, _mm_cvtepi32_pd(zx.q(sx.d(_Str[1])))))
                void*** result_19 = j_sub_140a82f30(0x30)
                result = result_19
                
                if (result_19 == 0)
                    goto label_140614064
                
                int32_t* rax_70 = j_sub_140a82f30(0x18)
                r13 = rax_70
                
                if (rax_70 == 0)
                    r13 = nullptr
                else
                    *(rax_70 + 8) = 0
                    sub_140615390(rax_70, 4)
                
                sub_14060ca80(result, arg1, arg2)
                *result = &data_142d63a08
                result[1].d = 0x58
                result[3] = r13
                sub_140615300(result, r12_11, rax_69, rax_66, rax_67)
                r13.b = 1
                goto label_140614099
            case 0x59
                if (*rdi != 2)
                    void*** result_20 = j_sub_140a82f30(0x28)
                    result = result_20
                    
                    if (result_20 == 0)
                        goto label_140614064
                    
                    sub_14060ca80(result_20, arg1, arg2)
                    result[1].d = 0x59
                    *result = &data_142d63918
                    result[3] = rdi
                    result[4] = _Str
                    rax_47 =
                        sub_14058b120(std::cout, "Warning: GenericMetaEvent used because type ")
                    goto label_140613fbb
                
                char rax_75 = *_Str
                int32_t r12_12 = sx.d(_Str[1])
                void*** result_21 = j_sub_140a82f30(0x28)
                result = result_21
                
                if (result_21 == 0)
                    goto label_140614064
                
                int32_t* rax_76 = j_sub_140a82f30(0x18)
                r13 = rax_76
                
                if (rax_76 == 0)
                    r13 = nullptr
                else
                    *(rax_76 + 8) = 0
                    sub_140615390(rax_76, 2)
                
                sub_14060ca80(result, arg1, arg2)
                result[1].d = 0x59
                *result = &data_142d639c8
                int32_t rax_77 = sx.d(rax_75)
                result[3] = r13
                result[4].d = rax_77
                
                if (rax_77 s>= 0xfffffff9)
                    if (rax_77 s> 7)
                        result[4].d = 7
                    
                    *(result + 0x24) = r12_12
                    r13.b = 1
                else
                    result[4].d = 0xfffffff9
                    r13.b = 1
                    *(result + 0x24) = r12_12
                
                goto label_140614099
else
    switch (rax_5)
        case 0
            void*** result_1 = j_sub_140a82f30(0x40)
            result = result_1
            
            if (result_1 == 0)
            label_14061396b:
                result = nullptr
            label_14061396d:
                r13.b = 1
                goto label_140613997
            
            char* rax_8 = &var_68
            
            if (var_50_1 u>= 0x10)
                rax_8 = var_68.q
            
            if (var_58_1 u< 0x10)
                var_98.q = 0xf
                var_b0.o = *rax_8
            label_1406134bd:
                int64_t var_a0_1 = var_58_1
                sub_14060cff0(result, arg1, arg2, 1, sub_140592d30(&var_88, &var_b0))
                int64_t rdx_6 = var_98.q
                *result = &data_142d63898
                
                if (rdx_6 u< 0x10)
                    goto label_14061396d
                
                void* rcx_13 = var_b0.q
                void* rax_14 = rcx_13
                
                if (rdx_6 + 1 u>= 0x1000)
                    rcx_13 = *(rcx_13 - 8)
                    
                    if (rax_14 - rcx_13 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rcx_13)
                r13.b = 1
                goto label_140613997
            
            r13 = var_58_1 | 0xf
            
            if (r13 u> 0x7fffffffffffffff)
                r13 = 0x7fffffffffffffff
            
            void* const rax_12
            
            if (r13 + 1 u< 0x1000)
                if (r13 == -1)
                    rax_12 = nullptr
                else
                    rax_12 = j_sub_140a82f30(r13 + 1)
                
                goto label_1406134ac
            
            if (&r13[0xa] u<= r13 + 1)
                stdext::threads::_Throw_lock_error()
                noreturn
            
            int64_t rax_10 = j_sub_140a82f30(&r13[0xa])
            
            if (rax_10 != 0)
                rax_12 = (rax_10 + 0x27) & 0xffffffffffffffe0
                *(rax_12 - 8) = rax_10
            label_1406134ac:
                var_b0.q = rax_12
                memcpy(rax_12, rax_8, var_58_1.d + 1)
                var_98.q = r13
                goto label_1406134bd
        case 1
            void*** result_2 = j_sub_140a82f30(0x40)
            result = result_2
            
            if (result_2 == 0)
                goto label_14061396b
            
            int64_t* rax_17 = sub_140592d30(&var_88, &var_68)
            r12_2 = rax_17
            sub_14060cff0(result, arg1, arg2, 2, sub_140592d30(&var_b0, rax_17))
            *result = &data_142d63898
            int64_t rdx_11 = r12_2[3]
            
            if (rdx_11 u< 0x10)
                goto label_1406135cb
            
            rcx_17 = *r12_2
            
            if (rdx_11 + 1 u< 0x1000)
                goto label_1406135c6
            
            r8_5 = *(rcx_17 - 8)
            
            if (rcx_17 - r8_5 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
        label_1406135c3:
            rcx_17 = r8_5
        label_1406135c6:
            j_sub_140a74f90(rcx_17)
        label_1406135cb:
            r12_2[2] = 0
            r13.b = 1
            r12_2[3] = 0xf
            *r12_2 = 0
            goto label_140613997
        case 2
            void*** result_3 = j_sub_140a82f30(0x40)
            result = result_3
            
            if (result_3 == 0)
                goto label_14061396b
            
            int64_t* rax_20 = sub_140592d30(&var_88, &var_68)
            r12_2 = rax_20
            sub_14060cff0(result, arg1, arg2, 3, sub_140592d30(&var_b0, rax_20))
            *result = &data_142d63898
            int64_t rdx_16 = r12_2[3]
            
            if (rdx_16 u< 0x10)
                goto label_1406135cb
            
            rcx_17 = *r12_2
            
            if (rdx_16 + 1 u< 0x1000)
                goto label_1406135c6
            
            r8_5 = *(rcx_17 - 8)
            
            if (rcx_17 - r8_5 - 8 u<= 0x1f)
                goto label_1406135c3
            
            _invalid_parameter_noinfo_noreturn()
            noreturn
        case 3
            void*** result_4 = j_sub_140a82f30(0x40)
            result = result_4
            
            if (result_4 == 0)
                goto label_14061396b
            
            int64_t* rax_23 = sub_140592d30(&var_88, &var_68)
            r12_2 = rax_23
            sub_14060cff0(result, arg1, arg2, 4, sub_140592d30(&var_b0, rax_23))
            *result = &data_142d63898
            int64_t rdx_21 = r12_2[3]
            
            if (rdx_21 u< 0x10)
                goto label_1406135cb
            
            rcx_17 = *r12_2
            
            if (rdx_21 + 1 u< 0x1000)
                goto label_1406135c6
            
            r8_5 = *(rcx_17 - 8)
            
            if (rcx_17 - r8_5 - 8 u<= 0x1f)
                goto label_1406135c3
            
            _invalid_parameter_noinfo_noreturn()
            noreturn
        case 4
            void*** result_5 = j_sub_140a82f30(0x40)
            result = result_5
            
            if (result_5 == 0)
                goto label_14061396b
            
            int64_t* rax_26 = sub_140592d30(&var_88, &var_68)
            r12_2 = rax_26
            sub_14060cff0(result, arg1, arg2, 5, sub_140592d30(&var_b0, rax_26))
            *result = &data_142d63898
            int64_t rdx_26 = r12_2[3]
            
            if (rdx_26 u< 0x10)
                goto label_1406135cb
            
            rcx_17 = *r12_2
            
            if (rdx_26 + 1 u< 0x1000)
                goto label_1406135c6
            
            r8_5 = *(rcx_17 - 8)
            
            if (rcx_17 - r8_5 - 8 u<= 0x1f)
                goto label_1406135c3
            
            _invalid_parameter_noinfo_noreturn()
            noreturn
        case 5
            void*** result_6 = j_sub_140a82f30(0x40)
            result = result_6
            
            if (result_6 == 0)
                goto label_14061396b
            
            int64_t* rax_29 = sub_140592d30(&var_88, &var_68)
            r12_2 = rax_29
            sub_14060cff0(result, arg1, arg2, 6, sub_140592d30(&var_b0, rax_29))
            *result = &data_142d63898
            int64_t rdx_31 = r12_2[3]
            
            if (rdx_31 u< 0x10)
                goto label_1406135cb
            
            rcx_17 = *r12_2
            
            if (rdx_31 + 1 u< 0x1000)
                goto label_1406135c6
            
            r8_5 = *(rcx_17 - 8)
            
            if (rcx_17 - r8_5 - 8 u<= 0x1f)
                goto label_1406135c3
            
            _invalid_parameter_noinfo_noreturn()
            noreturn
        case 6
            void*** result_7 = j_sub_140a82f30(0x40)
            result = result_7
            
            if (result_7 == 0)
                goto label_14061396b
            
            int64_t* rax_32 = sub_140592d30(&var_88, &var_68)
            r12_2 = rax_32
            sub_14060cff0(result, arg1, arg2, 7, sub_140592d30(&var_b0, rax_32))
            *result = &data_142d63898
            int64_t rdx_36 = r12_2[3]
            
            if (rdx_36 u< 0x10)
                goto label_1406135cb
            
            rcx_17 = *r12_2
            
            if (rdx_36 + 1 u< 0x1000)
                goto label_1406135c6
            
            r8_5 = *(rcx_17 - 8)
            
            if (rcx_17 - r8_5 - 8 u<= 0x1f)
                goto label_1406135c3
            
            _invalid_parameter_noinfo_noreturn()
            noreturn
        case 7, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
                0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
                0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 
                0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 
                0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
                0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 
                0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 
                0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 
                0x7a, 0x7b, 0x7c, 0x7d
            goto label_1406139de
        case 9
            int64_t* rax_38 = sub_140592d30(&var_88, &var_68)
            result = sub_140612e30(arg1, arg2, *rdi, rax_38)
        label_140613997:
            
            if (var_50_1 u< 0x10)
                goto label_140614099
            
            void* rcx_44 = var_68.q
            void* rax_40 = rcx_44
            
            if (var_50_1 + 1 u>= 0x1000)
                rcx_44 = *(rcx_44 - 8)
                
                if (rax_40 - rcx_44 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_44)
            goto label_140614099
        case 0x7e
            void*** result_8 = j_sub_140a82f30(0x28)
            result = result_8
            
            if (result_8 == 0)
                goto label_14061396b
            
            int128_t* rax_35 = j_sub_140a82f30(0x20)
            int64_t* r12_3
            
            if (rax_35 == 0)
                r12_3 = nullptr
            else
                r12_3 = sub_140592d30(rax_35, &var_68)
            
            int32_t* rax_37 = j_sub_140a82f30(0x18)
            r13 = rax_37
            
            if (rax_37 == 0)
                r13 = nullptr
            else
                int32_t rdx_39 = r12_3[2].d
                *(rax_37 + 8) = 0
                sub_140615390(rax_37, rdx_39)
            
            sub_14060ca80(result, arg1, arg2)
            result[3] = r13
            *result = &data_142d63ac8
            r13.b = 1
            result[1].d = 0x7f
            result[4] = r12_3
            goto label_140613997
_invalid_parameter_noinfo_noreturn()
noreturn

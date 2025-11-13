// 函数: sub_1428ec210
// 地址: 0x1428ec210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t* rsi = arg3
int32_t* result_2 = sub_142898b60(sub_1428ec9c0)
int32_t* result_1 = result_2
int32_t* result

if (result_2 != 0)
    int32_t rbx_1 = 0
    int32_t var_78_1 = 0
    char* _Str_3
    
    if (sub_142898c70(rsi) s> 0)
        int32_t* result_3 = result_1
        
        while (true)
            int64_t* rax_3 = sub_142898ea0(rsi, rbx_1)
            char const* const _Control_1 = nullptr
            char const* const _Control = nullptr
            char* r13_1 = nullptr
            int32_t var_a8_4
            int32_t r8_12
            int32_t rsi_1
            
            if (sub_1428ea5d0(rax_3[1], "IPv4") != 0)
                if (sub_1428ea5d0(rax_3[1], "IPv6") == 0)
                    goto label_1428ec343
                
                int32_t rax_6 = sub_1428ea5d0(rax_3[1], "IPv4-SAFI")
                void var_74
                
                if (rax_6 == 0)
                    rsi_1 = rax_6 + 1
                    r13_1 = &var_74
                    goto label_1428ec34d
                
                if (sub_1428ea5d0(rax_3[1], "IPv6-SAFI") == 0)
                    r13_1 = &var_74
                label_1428ec343:
                    rsi_1 = 2
                    goto label_1428ec34d
                
                var_a8_4 = 0x399
                r8_12 = 0x73
            else
                rsi_1 = 1
            label_1428ec34d:
                
                if (rsi_1 == 1)
                    _Control_1 = "0123456789."
                    _Control = _Control_1
                else if (rsi_1 == 2)
                    _Control_1 = "0123456789.:abcdefABCDEF"
                    _Control = _Control_1
                
                int64_t r12_1
                
                if (rsi_1 == 1)
                    r12_1 = 4
                else if (rsi_1 == 2)
                    r12_1 = 0x10
                else
                    r12_1 = 0
                
                char* _String = rax_3[2]
                
                if (r13_1 == 0)
                    goto label_1428ec413
                
                char* _EndPtr
                uint32_t rax_12 = strtoul(_String, &_EndPtr, 0)
                char* _Str = _EndPtr
                *r13_1 = rax_12
                void* _EndPtr_2 = &_EndPtr[strspn(_Str, " \t")]
                _EndPtr = _EndPtr_2
                char rax_14
                
                if (rax_12 u<= 0xff)
                    rax_14 = *_EndPtr_2
                    _EndPtr = _EndPtr_2 + 1
                
                if (rax_12 u<= 0xff && rax_14 == 0x3a)
                    _String = &_EndPtr[strspn(_EndPtr_2 + 1, " \t")]
                    _EndPtr = _String
                label_1428ec413:
                    char* _Str_4 = sub_1428a6ba0(_String)
                    _Str_3 = _Str_4
                    int32_t var_a8_3
                    
                    if (_Str_4 == 0)
                        var_a8_3 = 0x3bb
                    label_1428ec8db:
                        sub_1428a5670(0x22, 0x9f, 0x41, "crypto\x509v3\v3_addr.c", var_a8_3)
                        break
                    
                    int32_t var_a8_5
                    int32_t r8_14
                    
                    for (int64_t i = 0; i != 8; )
                        char rax_16 = _Str_3[i]
                        i += 1
                        
                        if (rax_16 != *(i + 0x143514d87))
                            int32_t rax_21 = strspn(_Str_3, _Control_1)
                            void* _Str_1 = &_Str_3[sx.q(rax_21)]
                            int32_t rbp_1 = rax_21 + strspn(_Str_1, " \t")
                            char rbx_5 = *(sx.q(rbp_1) + _Str_3)
                            *_Str_1 = 0
                            void buffer1
                            
                            if (sub_1428e9750(&buffer1, _Str_3) != r12_1.d)
                                var_a8_5 = 0x3d5
                                r8_14 = 0xa6
                                goto label_1428ec7f8
                            
                            if (rbx_5 == 0)
                                int32_t* rax_37 = sub_1428ee220(result_2, rsi_1, r13_1)
                                
                                if (rax_37 == 0)
                                    var_a8_3 = 0x404
                                    goto label_1428ec8db
                                
                                void* var_60
                                
                                if (sub_1428eded0(&var_60, &buffer1, (r12_1 << 3).d) == 0)
                                    var_a8_3 = 0x404
                                    goto label_1428ec8db
                                
                                void* rdi_4 = var_60
                                
                                if (sub_142898d50(rax_37, rdi_4) == 0)
                                    sub_1428c3d60(rdi_4, &data_143514eb0)
                                    var_a8_3 = 0x404
                                    goto label_1428ec8db
                            else if (rbx_5 == 0x2d)
                                int32_t rbx_7 = strspn(&_Str_3[sx.q(rbp_1 + 1)], " \t") + rbp_1 + 1
                                char* _Str_2 = &_Str_3[sx.q(rbx_7)]
                                int32_t rax_28 = strspn(_Str_2, _Control) + rbx_7
                                
                                if (rbx_7 == rax_28 || *(sx.q(rax_28) + _Str_3) != 0)
                                    var_a8_5 = 0x3ed
                                    r8_14 = 0x74
                                    goto label_1428ec7f8
                                
                                void buffer2
                                
                                if (sub_1428e9750(&buffer2, _Str_2) != r12_1.d)
                                    var_a8_5 = 0x3f3
                                    r8_14 = 0xa6
                                    goto label_1428ec7f8
                                
                                uint64_t count
                                
                                if (rsi_1 == 1)
                                    count = 4
                                else if (rsi_1 == 2)
                                    count = 0x10
                                else
                                    count = 0
                                
                                if (memcmp(&buffer1, &buffer2, count) s> 0)
                                    var_a8_5 = 0x3f9
                                    r8_14 = 0x74
                                    goto label_1428ec7f8
                                
                                int32_t* rax_34 = sub_1428ee220(result_2, rsi_1, r13_1)
                                int32_t r9_2
                                
                                if (rsi_1 == 1)
                                    r9_2 = 4
                                else if (rsi_1 == 2)
                                    r9_2 = 0x10
                                else
                                    r9_2 = 0
                                
                                if (rax_34 == 0)
                                    var_a8_3 = 0x3fe
                                    goto label_1428ec8db
                                
                                void* var_68
                                
                                if (sub_1428edfd0(&var_68, &buffer1, &buffer2, r9_2) == 0)
                                    var_a8_3 = 0x3fe
                                    goto label_1428ec8db
                                
                                void* rbx_8 = var_68
                                
                                if (sub_142898d50(rax_34, rbx_8) == 0)
                                    sub_1428c3d60(rbx_8, &data_143514eb0)
                                    var_a8_3 = 0x3fe
                                    goto label_1428ec8db
                            else
                                if (rbx_5 != 0x2f)
                                    var_a8_5 = 0x40a
                                    r8_14 = 0x74
                                    goto label_1428ec7f8
                                
                                void* _String_1 = &_Str_3[sx.q(rbp_1 + 1)]
                                uint32_t rax_24 = strtoul(_String_1, &_EndPtr, 0xa)
                                char* _EndPtr_1 = _EndPtr
                                
                                if (_EndPtr_1 == _String_1 || *_EndPtr_1 != 0)
                                    var_a8_5 = 0x3df
                                    r8_14 = 0x74
                                    goto label_1428ec7f8
                                
                                if (sub_1428ecfb0(result_2, rsi_1, r13_1, &buffer1, rax_24) == 0)
                                    var_a8_3 = 0x3e4
                                    goto label_1428ec8db
                            
                            result_3 = result_2
                            goto label_1428ec6f1
                    
                    int64_t* rax_17 = sub_1428eddb0(result_3, rsi_1, r13_1)
                    
                    if (rax_17 != 0)
                        int32_t* rcx_10 = rax_17[1]
                        
                        if (rcx_10 != 0)
                            int32_t rax_18 = *rcx_10
                            
                            if (rax_18 != 1 || *(rcx_10 + 8) == 0)
                                if (rax_18 == 0 && *(rcx_10 + 8) != 0)
                                    goto label_1428ec6f1
                                
                                int64_t rax_19
                                
                                if (*(rcx_10 + 8) == 0)
                                    rax_19 = sub_1428c3580()
                                    *(rax_17[1] + 8) = rax_19
                                
                                if (*(rcx_10 + 8) != 0 || rax_19 != 0)
                                    *rax_17[1] = 0
                                label_1428ec6f1:
                                    sub_1428a6780(_Str_3)
                                    rsi = arg3
                                    rbx_1 = var_78_1 + 1
                                    var_78_1 = rbx_1
                                    
                                    if (rbx_1 s< sub_142898c70(rsi))
                                        continue
                                    
                                    result_1 = result_2
                                    goto label_1428ec71d
                    
                    var_a8_5 = 0x3c6
                    r8_14 = 0xa5
                label_1428ec7f8:
                    sub_1428a5670(0x22, 0x9f, r8_14, "crypto\x509v3\v3_addr.c", var_a8_5)
                    *rax_3
                    int64_t var_98_2 = rax_3[2]
                    char const* const var_a0_2 = ",value:"
                    var_a8_5.q = rax_3[1]
                    sub_1428a4880(6)
                    break
                
                var_a8_4 = 0x3b1
                r8_12 = 0xa4
            sub_1428a5670(0x22, 0x9f, r8_12, "crypto\x509v3\v3_addr.c", var_a8_4)
            *rax_3
            int64_t var_98_1 = rax_3[2]
            char const* const var_a0_1 = ",value:"
            var_a8_4.q = rax_3[1]
            sub_1428a4880(6)
            goto label_1428ec939
        
        goto label_1428ec94c
    
label_1428ec71d:
    int32_t rbx_11 = 0
    
    if (sub_142898c70(result_1) s> 0)
        while (true)
            int64_t* rax_42 = sub_142898ea0(result_1, rbx_11)
            int32_t* r8_11 = rax_42[1]
            
            if (*r8_11 == 1)
                int32_t* rax_43 = *rax_42
                char* rcx_34
                
                if (rax_43 != 0)
                    rcx_34 = *(rax_43 + 8)
                
                uint32_t rdx_22
                
                if (rax_43 == 0 || rcx_34 == 0 || *rax_43 s< 2)
                    rdx_22 = 0
                else
                    rdx_22 = zx.d(*rcx_34) << 8 | zx.d(rcx_34[1])
                
                if (sub_1428ecc80(*(r8_11 + 8), rdx_22) == 0)
                    break
            
            rbx_11 += 1
            
            if (rbx_11 s>= sub_142898c70(result_1))
                goto label_1428ec920
        
        goto label_1428ec939
    
label_1428ec920:
    sub_142898e00(result_1, sub_1428ec9c0)
    sub_142898e50(result_1)
    
    if (sub_1428ed060(result_1) != 0)
        result = result_1
    else
    label_1428ec939:
        _Str_3 = nullptr
    label_1428ec94c:
        sub_1428a6780(_Str_3)
        sub_142898cb0(result_2, sub_1428eca10)
        result = nullptr
else
    sub_1428a5670((result_2 + 0x22).d, 0x9f, (result_2 + 0x41).d, "crypto\x509v3\v3_addr.c", 0x382)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_c8)
return result

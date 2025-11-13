// 函数: sub_142bef4e0
// 地址: 0x142bef4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t result_1 = 0
char* _Str1 = arg1
int32_t rax_2 = strncmp(arg1, "ENDPROPERTIES", 0xd)
char rax_3

if (rax_2 == 0)
    rax_3 = _Str1[0xd]

int32_t result

if (rax_2 != 0 || rax_3 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_3))))
    int32_t rax_15 = strncmp(_Str1, "_XFREE86_GLYPH_RANGES", 0x15)
    char rax_16
    
    if (rax_15 == 0)
        rax_16 = _Str1[0x15]
    
    if (rax_15 != 0 || rax_16 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_16))))
        int32_t rax_18 = strncmp(_Str1, "COMMENT", 7)
        char rax_19
        char* r8_4
        
        if (rax_18 == 0)
            rax_19 = _Str1[7]
            r8_4 = &_Str1[7]
        
        char* var_d8
        char* var_d0
        
        if (rax_18 != 0 || rax_19 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_19))))
            if (sub_142bee590(_Str1, arg2, &var_d0, &var_d8, *(arg5 + 0x28)) == 0)
                result = sub_142bee840(&arg5[0xe], " +", _Str1, arg2)
                
                if (result == 0)
                    _Str1 = **(arg5 + 0x38)
                    
                    if (arg5 != -0x38)
                        int32_t rax_24 = arg5[0x11]
                        
                        if (rax_24 != 0)
                            if (rax_24 u> 1)
                                int32_t i = 1
                                
                                do
                                    int64_t r9_4 = *(arg5 + 0x38)
                                    uint64_t rdx_4 = zx.q(i - 1)
                                    uint64_t i_1 = zx.q(i)
                                    i += 1
                                    *(r9_4 + (rdx_4 << 3)) = *(r9_4 + (i_1 << 3))
                                while (i u< arg5[0x11])
                                
                                arg5[0x11] -= 1
                            else
                                arg5[0x11] = 0
                    
                    r8_4 = sub_142bee790(&arg5[0xe], 0x20, &var_d8)
                    result = sub_142bedef0(*(arg5 + 0x28), _Str1, r8_4, arg3)
            else
                result = sub_142bedef0(*(arg5 + 0x28), var_d0, var_d8, arg3)
        else
            if (*r8_4 != 0)
                *r8_4 = 0
                r8_4 = &r8_4[1]
            
            result = sub_142bedef0(*(arg5 + 0x28), _Str1, r8_4, arg3)
    else
        result = result_1
else
    void* rbx_1 = *(arg5 + 0x28)
    
    if (rbx_1 != 0 && *(rbx_1 + 0x58) != 0)
        int64_t* rax_5 = sub_142b993e0("FONT_ASCENT", *(rbx_1 + 0x78))
        
        if (rax_5 == 0)
            goto label_142bef597
        
        if (*(rbx_1 + 0x60) + *rax_5 * 0x18 != 0)
            goto label_142bef5de
        
        goto label_142bef597
    
label_142bef597:
    void* rcx_2 = *(arg5 + 0x28)
    *(rcx_2 + 0x2c) = sx.d(*(rcx_2 + 0x10))
    void var_c8
    sub_1425f2950(&var_c8, "%hd", zx.q(sx.d(*(*(arg5 + 0x28) + 0x10))))
    result = sub_142bedef0(*(arg5 + 0x28), "FONT_ASCENT", &var_c8, arg3)
    result_1 = result
    
    if (result == 0)
    label_142bef5de:
        void* rbx_2 = *(arg5 + 0x28)
        
        if (rbx_2 != 0 && *(rbx_2 + 0x58) != 0)
            int64_t* rax_10 = sub_142b993e0("FONT_DESCENT", *(rbx_2 + 0x78))
            
            if (rax_10 != 0 && *(rbx_2 + 0x60) + *rax_10 * 0x18 != 0)
                goto label_142bef666
        
        void* rcx_7 = *(arg5 + 0x28)
        *(rcx_7 + 0x30) = sx.d(*(rcx_7 + 0x12))
        sub_1425f2950(&var_c8, "%hd", zx.q(sx.d(*(*(arg5 + 0x28) + 0x12))))
        result = sub_142bedef0(*(arg5 + 0x28), "FONT_DESCENT", &var_c8, arg3)
        result_1 = result
        
        if (result == 0)
        label_142bef666:
            *arg5 &= 0xffffffef
            *arg4 = sub_142beeaa0
            result = result_1

__security_check_cookie(rax_1 ^ &var_108)
return result

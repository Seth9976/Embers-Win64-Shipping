// 函数: sub_142bef7d0
// 地址: 0x142bef7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t i_1 = 0
int32_t var_d0 = arg3
int32_t result_1 = 0
char* _Str1 = arg1
void* rax_2 = *(arg5 + 0x28)
int64_t r13 = 0

if (rax_2 != 0)
    r13 = *(rax_2 + 0x88)

int32_t rax_3 = strncmp(arg1, "COMMENT", 7)
uint64_t rax_4
void* rdx

if (rax_3 == 0)
    rax_4 = zx.q(_Str1[7])
    rdx = &_Str1[7]

int32_t result

if (rax_3 != 0 || rax_4.b u> 0x20 || not(test_bit(0x100002601, rax_4)))
    if ((*arg5 & 1) != 0)
        int32_t rax_13 = strncmp(_Str1, "STARTPROPERTIES", 0xf)
        uint64_t rax_14
        
        if (rax_13 == 0)
            rax_14 = zx.q(_Str1[0xf])
        
        if (rax_13 != 0 || rax_14.b u> 0x20 || not(test_bit(0x100002601, rax_14)))
            int32_t rax_19 = strncmp(_Str1, "FONTBOUNDINGBOX", 0xf)
            uint64_t rax_20
            
            if (rax_19 == 0)
                rax_20 = zx.q(_Str1[0xf])
            
            if (rax_19 != 0 || rax_20.b u> 0x20 || not(test_bit(0x100002601, rax_20)))
                int32_t rax_27 = strncmp(_Str1, "FONT", 4)
                uint64_t rax_28
                
                if (rax_27 == 0)
                    rax_28 = zx.q(_Str1[4])
                
                if (rax_27 != 0 || rax_28.b u> 0x20 || not(test_bit(0x100002601, rax_28)))
                    int32_t rax_34 = strncmp(_Str1, "SIZE", 4)
                    char rax_35
                    
                    if (rax_34 == 0)
                        rax_35 = _Str1[4]
                    
                    if (rax_34 != 0 || rax_35 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_35))))
                        if (strncmp(_Str1, "CHARS", 5) != 0)
                            result = 3
                        else
                            char rax_45 = _Str1[5]
                            
                            if (rax_45 u> 0x20 || not(test_bit(0x100002601, sx.q(rax_45))))
                                result = 3
                            else if ((*arg5 & 8) == 0)
                                result = 0xb3
                            else
                                void* rcx_58 = *(arg5 + 0x28)
                                *(rcx_58 + 0x2c) = sx.d(*(rcx_58 + 0x10))
                                void var_c8
                                sub_1425f2950(&var_c8, "%hd", zx.q(sx.d(*(*(arg5 + 0x28) + 0x10))))
                                result = sub_142bedef0(*(arg5 + 0x28), "FONT_ASCENT", &var_c8, arg3)
                                result_1 = result
                                
                                if (result == 0)
                                    void* rcx_61 = *(arg5 + 0x28)
                                    *(rcx_61 + 0x30) = sx.d(*(rcx_61 + 0x12))
                                    sub_1425f2950(&var_c8, "%hd", 
                                        zx.q(sx.d(*(*(arg5 + 0x28) + 0x12))))
                                    result =
                                        sub_142bedef0(*(arg5 + 0x28), "FONT_DESCENT", &var_c8, arg3)
                                    
                                    if (result == 0)
                                        *arg4 = sub_142beeaa0
                                        result = -1
                    else if ((*arg5 & 2) != 0)
                        result = sub_142bee840(&arg5[0xe], " +", _Str1, arg2)
                        result_1 = result
                        
                        if (result == 0)
                            *(*(arg5 + 0x28) + 0x14) = sub_142bee450(*(*(arg5 + 0x38) + 8))
                            *(*(arg5 + 0x28) + 0x18) = sub_142bee450(*(*(arg5 + 0x38) + 0x10))
                            *(*(arg5 + 0x28) + 0x1c) = sub_142bee450(*(*(arg5 + 0x38) + 0x18))
                            void* rax_43
                            
                            if (arg5[0x11] != 5)
                                rax_43 = *(arg5 + 0x28)
                            label_142befe2e:
                                *(rax_43 + 0x80) = 1
                                *arg5 |= 4
                                result = result_1
                            else
                                int16_t rax_40 = sub_142bee370(*(*(arg5 + 0x38) + 0x20))
                                
                                if (rax_40 u> 4)
                                    *(*(arg5 + 0x28) + 0x80) = 8
                                    *arg5 |= 4
                                    result = result_1
                                else if (rax_40 u<= 2)
                                    rax_43 = *(arg5 + 0x28)
                                    
                                    if (rax_40 u<= 1)
                                        goto label_142befe2e
                                    
                                    *(rax_43 + 0x80) = 2
                                    *arg5 |= 4
                                    result = result_1
                                else
                                    *(*(arg5 + 0x28) + 0x80) = 4
                                    *arg5 |= 4
                                    result = result_1
                    else
                        result = 0xb1
                else
                    result = sub_142bee840(&arg5[0xe], " +", _Str1, arg2)
                    result_1 = result
                    
                    if (result == 0)
                        if (arg5 != -0x38)
                            int32_t rax_29 = arg5[0x11]
                            
                            if (rax_29 != 0)
                                if (rax_29 u> result + 1)
                                    int32_t i = result + 1
                                    
                                    do
                                        int64_t r9_5 = *(arg5 + 0x38)
                                        uint64_t rdx_5 = zx.q(i - 1)
                                        uint64_t i_2 = zx.q(i)
                                        i += 1
                                        *(r9_5 + (rdx_5 << 3)) = *(r9_5 + (i_2 << 3))
                                    while (i u< arg5[0x11])
                                    
                                    arg5[0x11] -= 1
                                else
                                    arg5[0x11] = 0
                        
                        int32_t var_d4
                        int64_t rax_31 = sub_142bee790(&arg5[0xe], 0x20, &var_d4)
                        
                        if (rax_31 == 0)
                            result = 3
                        else
                            sub_142b99980(r13, **(arg5 + 0x28))
                            uint32_t count = var_d4 + 1
                            **(arg5 + 0x28) = 0
                            **(arg5 + 0x28) = sub_142b99a90(r13, result + 1, 0, count, 0, &result_1)
                            result = result_1
                            
                            if (result == 0)
                                memcpy(**(arg5 + 0x28), rax_31, count)
                                result = sub_142bf0270(*(arg5 + 0x28), *(arg5 + 0x30))
                                
                                if (result == 0)
                                    *arg5 |= 2
            else if ((*arg5 & 4) != 0)
                result = sub_142bee840(&arg5[0xe], " +", _Str1, arg2)
                result_1 = result
                
                if (result == 0)
                    *(*(arg5 + 0x28) + 8) = sub_142bee4e0(*(*(arg5 + 0x38) + 8))
                    *(*(arg5 + 0x28) + 0xa) = sub_142bee4e0(*(*(arg5 + 0x38) + 0x10))
                    *(*(arg5 + 0x28) + 0xc) = sub_142bee370(*(*(arg5 + 0x38) + 0x18))
                    *(*(arg5 + 0x28) + 0xe) = sub_142bee370(*(*(arg5 + 0x38) + 0x20))
                    void* rcx_33 = *(arg5 + 0x28)
                    *(rcx_33 + 0x10) = *(rcx_33 + 0xe) + *(rcx_33 + 0xa)
                    void* rcx_34 = *(arg5 + 0x28)
                    *(rcx_34 + 0x12) = neg.w(*(rcx_34 + 0xe))
                    *arg5 |= 8
                    result = result_1
            else
                result = 0xb2
        else if ((*arg5 & 8) != 0)
            result = sub_142bee840(&arg5[0xe], " +", _Str1, arg2)
            result_1 = result
            
            if (result == 0)
                int32_t rax_15 = sub_142bee450(*(*(arg5 + 0x38) + 8))
                *(*(arg5 + 0x28) + 0x58) = rax_15
                uint32_t rcx_16 = arg5[0x16] u>> 2
                arg5[1] = rax_15
                
                if (rax_15 u<= rcx_16)
                    *(*(arg5 + 0x28) + 0x60) = sub_142b99a90(r13, 0x18, 0, rax_15, 0, &result_1)
                    result = result_1
                    
                    if (result == 0)
                        *arg5 |= 0x10
                        *arg4 = sub_142bef4e0
                    else
                        *(*(arg5 + 0x28) + 0x58) = 0
                        result = result_1
                else
                    *(*(arg5 + 0x28) + 0x58) = 0
                    result = 6
        else
            result = 0xb3
    else
        int64_t r14_1 = *(arg5 + 0x50)
        int32_t rax_6 = strncmp(_Str1, "STARTFONT", 9)
        uint64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = zx.q(_Str1[9])
        
        if (rax_6 != 0 || rax_7.b u> 0x20 || not(test_bit(0x100002601, rax_7)))
            result = 0xb0
        else
            *(arg5 + 0x28) = 0
            *arg5 = 1
            void* rax_8 = sub_142b99860(r14_1, 0xc8, &result_1)
            result = result_1
            
            if (result == 0)
                int64_t rcx_3 = *(arg5 + 0x50)
                *(arg5 + 0x28) = rax_8
                *(rax_8 + 0x88) = rcx_3
                *(arg5 + 0x50) = 0
                result = sub_142b99350(rax_8 + 0xa0, r14_1)
                result_1 = result
                
                if (result == 0)
                    char const (** const rsi)[0xf] = &data_143698ce0
                    
                    do
                        result = j_sub_142b9a810(*rsi, i_1, rax_8 + 0xa0, r14_1)
                        result_1 = result
                        
                        if (result != 0)
                            goto label_142beff20
                        
                        i_1 += 1
                        rsi = &rsi[3]
                    while (i_1 u< 0x53)
                    
                    *(*(arg5 + 0x28) + 0x78) = sub_142b99860(r14_1, result + 0x28, &result_1)
                    result = result_1
                    
                    if (result == 0)
                        result = sub_142b99350(*(*(arg5 + 0x28) + 0x78), r14_1)
                        result_1 = result
                        
                        if (result == 0)
                            *(*(arg5 + 0x28) + 0x20) = *(*(arg5 + 0x30) + 0xc)
                            *(*(arg5 + 0x28) + 0x28) = 0xffffffff
                            result = result_1
else if (*(*(arg5 + 0x30) + 8) == 0)
    result = result_1
else
    void* rcx = *(arg5 + 0x28)
    
    if (rcx == 0)
        result = result_1
    else
        int32_t r15_1 = arg2 - 7
        
        if (*rdx != 0)
            rdx += 1
            r15_1 -= 1
        
        result = sub_142bede50(rcx, rdx, r15_1)

label_142beff20:
__security_check_cookie(rax_1 ^ &var_108)
return result

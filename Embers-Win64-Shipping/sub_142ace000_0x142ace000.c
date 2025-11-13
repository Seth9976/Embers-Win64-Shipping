// 函数: sub_142ace000
// 地址: 0x142ace000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int128_t zmm6 = arg2
int32_t var_e4 = 0
int32_t result
int32_t rsi

if (arg1[0x1b].d == 2)
label_142ace080:
    rsi = *(arg1 + 0xdc)
    
    if (rsi s<= 0 || rsi s<= 0)
    label_142ace08f:
        
        if (arg1[0x10] == 0)
        label_142ace107:
            int64_t r15_1 = arg1[0x18]
            
            if (r15_1 == 0)
                result.b = 0
            else
                uint32_t rbx_1
                rbx_1.w = *(arg1 + 0x4c) - 1
                rbx_1.w += *(arg1 + 0x4a)
                rbx_1.w += arg1[9].w
                int16_t i = arg1[0x16].w
                
                if (rbx_1.w s< i)
                    result.b = 0
                else
                    do
                        int64_t zmm0_3
                        zmm0_3, result = sub_142acedb0(arg1, rbx_1.w)
                        
                        if (zmm6.q f> zmm0_3)
                            break
                        
                        if (arg3 != 0)
                            zmm6.q f- zmm0_3
                            
                            if (not(is_unordered.q(zmm6.q, zmm0_3)) && zmm6.q f== zmm0_3)
                                break
                        
                        rbx_1.w -= 1
                    while (rbx_1.w s>= i)
                    
                    if (rbx_1.w s< i)
                        result.b = 0
                    else if (rbx_1.w != i)
                        int64_t r8_1 = arg1[0xf]
                        int64_t* rsi_1 = *(r15_1 + (zx.q(*(sx.q(rbx_1.w) + r8_1)) << 3))
                        int64_t* r15_2 = *(r15_1 + (zx.q(*(sx.q(sx.d(rbx_1.w) - 1) + r8_1)) << 3))
                        int128_t zmm0_4 = sub_142acedb0(arg1, rbx_1.w)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_90_1 = 2
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_d0_1 = 2
                        Concurrency::details::SchedulerBase::GetPolicy(r15_2, &var_98)
                        Concurrency::details::SchedulerBase::GetPolicy(rsi_1, &var_d8)
                        bool cond:3_1
                        
                        if ((var_90_1.b & 1) == 0)
                            int32_t r8_3
                            int32_t var_8c
                            
                            if (var_90_1 s< 0)
                                r8_3 = var_8c
                            else
                                r8_3 = sx.d(var_90_1) s>> 5
                            int32_t rax_13
                            int32_t var_cc
                            
                            if (var_d0_1 s< 0)
                                rax_13 = var_cc
                            else
                                rax_13 = sx.d(var_d0_1) s>> 5
                            
                            if ((var_d0_1.b & 1) != 0 || r8_3 != rax_13)
                                goto label_142ace295
                            
                            cond:3_1 = sub_142a490e0(&var_98, &var_d8, r8_3) == 0
                        else
                            cond:3_1 = (var_d0_1.b & 1) == 0
                        
                        if (cond:3_1)
                        label_142ace295:
                            sub_142838410(arg4, zmm0_4.q)
                            sub_142ad10a0(arg4, (*(*r15_2 + 0x10))(r15_2))
                            sub_142ad10e0(arg4, (*(*rsi_1 + 0x10))(rsi_1))
                            rbx_1.b = 1
                        else
                            if (sub_1405f8de0(r15_2) != sub_1405f8de0(rsi_1))
                                goto label_142ace295
                            
                            if (sub_141b60020(r15_2) != sub_141b60020(rsi_1))
                                goto label_142ace295
                            
                            rbx_1 = zx.d((*(*arg1 + 0x70))(arg1, zmm0_4, 0, arg4))
                        
                        sub_142a47ff0(&var_d8)
                        sub_142a47ff0(&var_98)
                        result = zx.d(rbx_1.b)
                    else
                        sub_142ad0f90(arg4, arg1[0x15])
                        result.b = 1
        else
            double zmm0_1
            
            if (arg3 != 0)
                zmm0_1 = sub_142ad1130(arg1[0x17])
                zmm6.q f- zmm0_1
            
            if (arg3 == 0 || is_unordered.q(zmm6.q, zmm0_1) || zmm6.q f!= zmm0_1)
                if (zmm6.q f<= sub_142ad1130(arg1[0x17]))
                    goto label_142ace107
                
                int64_t* rcx_6 = arg1[0x10]
                
                if ((*(*rcx_6 + 0x40))(rcx_6) == 0)
                    sub_142ad0f90(arg4, arg1[0x17])
                    result.b = 1
                else
                    int64_t* rcx_7 = arg1[0x1a]
                    result = (*(*rcx_7 + 0x70))(rcx_7, zmm6, zx.q(arg3), arg4)
            else
                sub_142ad0f90(arg4, arg1[0x17])
                result.b = 1
    else
        result.b = 0
else
    if (sub_142a85f00(&arg1[0x1b]).b == 0)
        goto label_142ace080
    
    zmm6 = sub_142ace690(arg1, &var_e4)
    rsi = var_e4
    *(arg1 + 0xdc) = rsi
    sub_142a85e80(&arg1[0x1b])
    
    if (rsi s<= 0)
        goto label_142ace08f
    
    result.b = 0
__security_check_cookie(rax_1 ^ &var_108)
return result

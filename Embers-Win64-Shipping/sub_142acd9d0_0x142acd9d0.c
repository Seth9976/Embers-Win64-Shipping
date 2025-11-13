// 函数: sub_142acd9d0
// 地址: 0x142acd9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int128_t zmm6 = arg2
int32_t var_e4 = 0
int32_t result
int32_t rsi

if (arg1[0x1b].d == 2)
label_142acda52:
    rsi = *(arg1 + 0xdc)
    
    if (rsi s<= 0 || rsi s<= 0)
    label_142acda61:
        
        if (arg1[0x10] == 0)
        label_142acdadd:
            int64_t r12_1 = arg1[0x18]
            
            if (r12_1 == 0)
                result.b = 0
            else
                uint32_t r15_1
                r15_1.w = *(arg1 + 0x4c) + *(arg1 + 0x4a)
                r15_1.w += arg1[9].w
                uint32_t rbx_1 = r15_1 - 1
                int16_t i = arg1[0x16].w
                
                while (rbx_1.w s>= i)
                    int64_t zmm0_3 = sub_142acedb0(arg1, rbx_1.w)
                    
                    if (zmm6.q f> zmm0_3)
                        break
                    
                    if (arg3 == 0)
                        zmm6.q f- zmm0_3
                        
                        if (not(is_unordered.q(zmm6.q, zmm0_3)) && zmm6.q f== zmm0_3)
                            break
                    
                    rbx_1.w -= 1
                
                int32_t rcx_9 = sx.d(rbx_1.w)
                
                if (rcx_9 == sx.d(r15_1.w) - 1)
                    void* rdx_4 = arg1[0x17]
                    
                    if (rdx_4 == 0)
                        result.b = 0
                    else
                        sub_142ad0f90(arg4, rdx_4)
                        result.b = 1
                else if (rbx_1.w s>= i)
                    int64_t r8_1 = arg1[0xf]
                    int64_t* rsi_1 = *(r12_1 + (zx.q(*(sx.q(rcx_9 + 1) + r8_1)) << 3))
                    int64_t* r14_1 = *(r12_1 + (zx.q(*(sx.q(rbx_1.w) + r8_1)) << 3))
                    rbx_1.w += 1
                    int128_t zmm0_4 = sub_142acedb0(arg1, rbx_1.w)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_90_1 = 2
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_d0_1 = 2
                    Concurrency::details::SchedulerBase::GetPolicy(r14_1, &var_98)
                    Concurrency::details::SchedulerBase::GetPolicy(rsi_1, &var_d8)
                    bool cond:2_1
                    
                    if ((var_90_1.b & 1) == 0)
                        int32_t r8_3
                        int32_t var_8c
                        
                        if (var_90_1 s< 0)
                            r8_3 = var_8c
                        else
                            r8_3 = sx.d(var_90_1) s>> 5
                        int32_t rax_12
                        int32_t var_cc
                        
                        if (var_d0_1 s< 0)
                            rax_12 = var_cc
                        else
                            rax_12 = sx.d(var_d0_1) s>> 5
                        
                        if ((var_d0_1.b & 1) != 0 || r8_3 != rax_12)
                            goto label_142acdc8d
                        
                        cond:2_1 = sub_142a490e0(&var_98, &var_d8, r8_3) == 0
                    else
                        cond:2_1 = (var_d0_1.b & 1) == 0
                    
                    if (cond:2_1)
                    label_142acdc8d:
                        sub_142838410(arg4, zmm0_4.q)
                        sub_142ad10a0(arg4, (*(*r14_1 + 0x10))(r14_1))
                        sub_142ad10e0(arg4, (*(*rsi_1 + 0x10))(rsi_1))
                        rbx_1.b = 1
                    else
                        if (sub_1405f8de0(r14_1) != sub_1405f8de0(rsi_1))
                            goto label_142acdc8d
                        
                        if (sub_141b60020(r14_1) != sub_141b60020(rsi_1))
                            goto label_142acdc8d
                        
                        rbx_1 = zx.d((*(*arg1 + 0x68))(arg1, zmm0_4, 0, arg4))
                    
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
                if (zmm6.q f< sub_142ad1130(arg1[0x17]))
                    goto label_142acdadd
                
                int64_t* rcx_6 = arg1[0x10]
                
                if ((*(*rcx_6 + 0x40))(rcx_6).b == 0)
                    result.b = 0
                else
                    int64_t* rcx_7 = arg1[0x1a]
                    result = (*(*rcx_7 + 0x68))(rcx_7, zmm6, zx.q(arg3), arg4)
            else
                sub_142ad0f90(arg4, arg1[0x17])
                result.b = 1
    else
        result.b = 0
else
    if (sub_142a85f00(&arg1[0x1b]).b == 0)
        goto label_142acda52
    
    zmm6 = sub_142ace690(arg1, &var_e4)
    rsi = var_e4
    *(arg1 + 0xdc) = rsi
    sub_142a85e80(&arg1[0x1b])
    
    if (rsi s<= 0)
        goto label_142acda61
    
    result.b = 0
__security_check_cookie(rax_1 ^ &var_108)
return result

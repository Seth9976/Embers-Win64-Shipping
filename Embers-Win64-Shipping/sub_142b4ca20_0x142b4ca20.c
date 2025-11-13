// 函数: sub_142b4ca20
// 地址: 0x142b4ca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
int128_t zmm6 = arg3
int32_t* rbx = arg6
uint32_t result

if (*rbx s> 0)
    result.b = 0
else if ((*(*arg1 + 0x50))().b == 0)
    int512_t zmm1
    zmm1.o = zmm6
    uint32_t var_a8
    int32_t var_a0
    (*(*arg1 + 0x18))(arg1, zmm1, 0, &var_a8, &var_a0, rbx)
    
    if (*rbx s<= 0)
        zmm1.o = zmm6
        uint32_t var_a4
        (*(*arg2 + 0x18))(arg2, zmm1, 0, &arg6, &var_a4, rbx)
        
        if (*rbx s<= 0)
            if (arg5 != 0)
                uint32_t r8_1 = var_a4
                int32_t r9_3 = var_a0
                
                if (var_a8 + r9_3 == arg6.d + r8_1)
                    if (r9_3 == 0)
                        if (r8_1 == 0)
                            goto label_142b4cb2e
                    else if (r8_1 != 0)
                        goto label_142b4cb2e
            else if (var_a8 == arg6.d && var_a0 == var_a4)
            label_142b4cb2e:
                struct icu_64::UObject::icu_64::TimeZoneTransition::VTable* var_90
                sub_142ad0f20(&var_90)
                struct icu_64::UObject::icu_64::TimeZoneTransition::VTable* var_70
                sub_142ad0f20(&var_70)
                
                while (true)
                    zmm1.o = zmm6
                    char rax_4 = (*(*arg1 + 0x68))(arg1, zmm1, 0, &var_90)
                    zmm1.o = zmm6
                    char r12_1 = (*(*arg2 + 0x68))(arg2, zmm1, 0, &var_70).b
                    
                    if (arg5 != 0)
                        if (rax_4 != 0)
                            while (not(arg4.q f< sub_142ad1130(&var_90)))
                                if (sub_1405f8de0(sub_1405948b0(&var_90))
                                        + sub_141b60020(sub_1405948b0(&var_90))
                                        != sub_1405f8de0(sub_14082fb80(&var_90))
                                        + sub_141b60020(sub_14082fb80(&var_90)))
                                    break
                                
                                if (sub_141b60020(sub_1405948b0(&var_90)) == 0)
                                    break
                                
                                if (sub_141b60020(sub_14082fb80(&var_90)) == 0)
                                    break
                                
                                rbx = *arg1 + 0x68
                                zmm1.o = sub_142ad1130(&var_90)
                                (*rbx)(arg1, zmm1, 0, &var_90)
                        
                        if (r12_1 != 0)
                            while (not(arg4.q f< sub_142ad1130(&var_70)))
                                if (sub_1405f8de0(sub_1405948b0(&var_70))
                                        + sub_141b60020(sub_1405948b0(&var_70))
                                        != sub_1405f8de0(sub_14082fb80(&var_70))
                                        + sub_141b60020(sub_14082fb80(&var_70)))
                                    break
                                
                                if (sub_141b60020(sub_1405948b0(&var_70)) == 0)
                                    break
                                
                                if (sub_141b60020(sub_14082fb80(&var_70)) == 0)
                                    break
                                
                                rbx = *arg2 + 0x68
                                zmm1.o = sub_142ad1130(&var_70)
                                (*rbx)(arg2, zmm1, 0, &var_70)
                    
                    int64_t zmm0_5
                    
                    if (rax_4 != 0)
                        zmm0_5 = sub_142ad1130(&var_90)
                    
                    if (rax_4 == 0 || arg4.q f< zmm0_5)
                        rbx.b = 0
                    else
                        rbx.b = 1
                    
                    int64_t zmm0_6
                    
                    if (r12_1 != 0)
                        zmm0_6 = sub_142ad1130(&var_70)
                    
                    int32_t rax_5
                    
                    if (r12_1 == 0 || arg4.q f< zmm0_6)
                        rax_5.b = 0
                    else
                        rax_5.b = 1
                    
                    if (rbx.b == 0)
                        if (rax_5.b != 0)
                        label_142b4ce67:
                            rbx.b = 0
                        else
                            rbx.b = 1
                        
                        sub_142ad0f40(&var_70)
                        sub_142ad0f40(&var_90)
                        return zx.d(rbx.b)
                    
                    if (rax_5.b == 0)
                        goto label_142b4ce67
                    
                    int128_t zmm0_7 = sub_142ad1130(&var_90)
                    double zmm0_8 = sub_142ad1130(&var_70)
                    zmm0_7.q f- zmm0_8
                    
                    if (is_unordered.q(zmm0_7.q, zmm0_8) || zmm0_7.q f!= zmm0_8)
                        goto label_142b4ce67
                    
                    int32_t rax_25 = sub_1405f8de0(sub_14082fb80(&var_70))
                    bool cond:1_1
                    
                    if (arg5 == 0)
                        if (sub_1405f8de0(sub_14082fb80(&var_90)) != rax_25)
                            goto label_142b4ce67
                        
                        rbx = zx.q(sub_141b60020(sub_14082fb80(&var_70)))
                        cond:1_1 = sub_141b60020(sub_14082fb80(&var_90)) != rbx.d
                    label_142b4ce4c:
                        
                        if (cond:1_1)
                            goto label_142b4ce67
                    else
                        int32_t rdi_6 = rax_25 + sub_141b60020(sub_14082fb80(&var_70))
                        
                        if (sub_1405f8de0(sub_14082fb80(&var_90))
                                + sub_141b60020(sub_14082fb80(&var_90)) != rdi_6)
                            goto label_142b4ce67
                        
                        int32_t rax_33 = sub_141b60020(sub_14082fb80(&var_90))
                        int32_t rax_35
                        
                        if (rax_33 != 0)
                            rax_35 = sub_141b60020(sub_14082fb80(&var_70))
                        
                        if (rax_33 != 0 && rax_35 == 0)
                            goto label_142b4ce67
                        
                        if (sub_141b60020(sub_14082fb80(&var_90)) == 0)
                            cond:1_1 = sub_141b60020(sub_14082fb80(&var_70)) != 0
                            goto label_142b4ce4c
                    zmm6 = sub_142ad1130(&var_90)
    
    result.b = 0
else
    result.b = 1

return result

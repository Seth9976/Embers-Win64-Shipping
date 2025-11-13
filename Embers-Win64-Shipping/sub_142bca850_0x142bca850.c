// 函数: sub_142bca850
// 地址: 0x142bca850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rax_2 = *(arg1 + 0x98)
int64_t* rbx = *(arg1 + 0xa0)
int32_t r14 = 0
*(arg1 + 0xd8) = 0
int16_t temp0
int16_t temp1
temp0:temp1 = sx.q(arg2)
uint64_t var_e8 = 0
uint64_t r13 = zx.q((temp1 ^ temp0) - temp0)
int32_t rax_7 = sub_142b97060(rbx, 0, arg3)
int32_t var_f8 = rax_7
int32_t rdx_1 = rax_7

if (rax_7 == 0)
    int16_t var_f0
    int32_t rax_8 = sub_142b96aa0(rbx, &data_143687bb0, &var_f0)
    rdx_1 = rax_8
    
    if (rax_8 == 0)
        var_f8 = 2
        
        if (var_f0 != 0x5a4d)
        label_142bcaf2e:
            sub_142bcaf70(arg1)
            rdx_1 = var_f8
        else
            int16_t var_ee
            int32_t rax_9 = sub_142b97060(rbx, zx.d(var_ee), arg3)
            var_f8 = rax_9
            rdx_1 = rax_9
            
            if (rax_9 == 0)
                int16_t var_e0
                int32_t rax_10 = sub_142b96aa0(rbx, &data_143687bc8, &var_e0)
                rdx_1 = rax_10
                
                if (rax_10 == 0)
                    int16_t rax_11 = var_e0
                    rdx_1 = 2
                    var_f8 = 2
                    
                    if (rax_11 != 0x454e)
                        if (rax_11 != 0x4550)
                            goto label_142bcaf0e
                        
                        int32_t rax_32 = sub_142b97060(rbx, zx.d(var_ee), arg3)
                        var_f8 = rax_32
                        rdx_1 = rax_32
                        
                        if (rax_32 == 0)
                            int32_t var_b8
                            int32_t rax_33 = sub_142b96aa0(rbx, &data_143687be0, &var_b8)
                            var_f8 = rax_33
                            rdx_1 = rax_33
                            
                            if (rax_33 == 0)
                                int16_t var_b4
                                int16_t var_b0
                                int16_t var_ae
                                
                                if (var_b8 == 0x4550 && var_b4 == 0x14c && var_b0 == 0xe0
                                        && var_ae == 0x10b)
                                    int16_t rdi_2 = 0
                                    *arg1 = 0
                                    int16_t var_b2
                                    
                                    if (0 u< var_b2)
                                        while (true)
                                            void var_a0
                                            int32_t rax_34 =
                                                sub_142b96aa0(rbx, &data_143687c18, &var_a0)
                                            var_f8 = rax_34
                                            rdx_1 = rax_34
                                            
                                            if (rax_34 != 0)
                                                goto label_142bcaf50
                                            
                                            int32_t var_ac
                                            int32_t var_98
                                            
                                            if (var_ac == var_98)
                                                int32_t var_90
                                                int32_t rax_36 = sub_142b97060(rbx, var_90, arg3)
                                                var_f8 = rax_36
                                                rdx_1 = rax_36
                                                
                                                if (rax_36 != 0)
                                                    goto label_142bcaf50
                                                
                                                void var_68
                                                int32_t rax_37 =
                                                    sub_142b96aa0(rbx, &data_143687c38, &var_68)
                                                var_f8 = rax_37
                                                rdx_1 = rax_37
                                                
                                                if (rax_37 != 0)
                                                    goto label_142bcaf50
                                                
                                                int16_t j_1 = 0
                                                int16_t var_f4_1 = 0
                                                int16_t var_5c
                                                int16_t var_5a
                                                
                                                if (zx.d(var_5a) == neg.d(zx.d(var_5c)))
                                                    goto label_142bcaf0e
                                                
                                                uint32_t r8_7 = 0
                                                
                                                while (true)
                                                    int32_t rax_39 = sub_142b97060(rbx, 
                                                        var_90 + ((r8_7 + 2) << 3), arg3)
                                                    var_f8 = rax_39
                                                    rdx_1 = rax_39
                                                    
                                                    if (rax_39 != 0)
                                                        goto label_142bcaf50
                                                    
                                                    int32_t rax_40 =
                                                        sub_142b96aa0(rbx, &data_143687c58, &var_e8)
                                                    var_f8 = rax_40
                                                    rdx_1 = rax_40
                                                    
                                                    if (rax_40 != 0)
                                                        goto label_142bcaf50
                                                    
                                                    int32_t rcx_34 = var_e8:4.d
                                                    
                                                    if (rcx_34 s>= 0)
                                                        break
                                                    
                                                    int32_t rcx_35 = rcx_34 & 0x7fffffff
                                                    int32_t r14_5 = var_90 + rcx_35
                                                    var_e8:4.d = rcx_35
                                                    int32_t var_d8_1 = r14_5
                                                    int32_t rax_41 = sub_142b97060(rbx, r14_5, arg3)
                                                    var_f8 = rax_41
                                                    rdx_1 = rax_41
                                                    
                                                    if (rax_41 != 0)
                                                        goto label_142bcaf50
                                                    
                                                    void var_78
                                                    int32_t rax_42 =
                                                        sub_142b96aa0(rbx, &data_143687c38, &var_78)
                                                    var_f8 = rax_42
                                                    rdx_1 = rax_42
                                                    
                                                    if (rax_42 != 0)
                                                        goto label_142bcaf50
                                                    
                                                    int16_t i_3 = 0
                                                    int16_t var_6c
                                                    int16_t var_6a
                                                    
                                                    if (zx.d(var_6a) != neg.d(zx.d(var_6c)))
                                                        uint32_t i = 0
                                                        
                                                        do
                                                            int32_t rax_44 = sub_142b97060(rbx, 
                                                                r14_5 + ((i + 2) << 3), arg3)
                                                            var_f8 = rax_44
                                                            rdx_1 = rax_44
                                                            
                                                            if (rax_44 != 0)
                                                                goto label_142bcaf50
                                                            
                                                            void var_d0
                                                            int32_t rax_45 = sub_142b96aa0(rbx, 
                                                                &data_143687c58, &var_d0)
                                                            var_f8 = rax_45
                                                            rdx_1 = rax_45
                                                            
                                                            if (rax_45 != 0)
                                                                goto label_142bcaf50
                                                            
                                                            int32_t var_cc
                                                            
                                                            if (var_cc s>= 0)
                                                                goto label_142bcaf14_2
                                                            
                                                            int32_t rcx_43 = var_cc & 0x7fffffff
                                                            int32_t r14_7 = var_90 + rcx_43
                                                            var_cc = rcx_43
                                                            int32_t rax_46 =
                                                                sub_142b97060(rbx, r14_7, arg3)
                                                            var_f8 = rax_46
                                                            rdx_1 = rax_46
                                                            
                                                            if (rax_46 != 0)
                                                                goto label_142bcaf50
                                                            
                                                            void var_88
                                                            int32_t rax_47 = sub_142b96aa0(rbx, 
                                                                &data_143687c38, &var_88)
                                                            var_f8 = rax_47
                                                            rdx_1 = rax_47
                                                            
                                                            if (rax_47 != 0)
                                                                goto label_142bcaf50
                                                            
                                                            int16_t var_7c
                                                            int16_t var_7a
                                                            
                                                            if (zx.d(var_7a) != neg.d(zx.d(var_7c)))
                                                                uint32_t j = 0
                                                                
                                                                do
                                                                    int32_t rax_49 = sub_142b97060(rbx, 
                                                                        r14_7 + ((j + 2) << 3), arg3)
                                                                    var_f8 = rax_49
                                                                    rdx_1 = rax_49
                                                                    
                                                                    if (rax_49 != 0)
                                                                        goto label_142bcaf50
                                                                    
                                                                    void var_c0
                                                                    int32_t rax_50 = sub_142b96aa0(rbx, 
                                                                        &data_143687c58, &var_c0)
                                                                    var_f8 = rax_50
                                                                    rdx_1 = rax_50
                                                                    
                                                                    if (rax_50 != 0)
                                                                        goto label_142bcaf50
                                                                    
                                                                    if ((var_cc & 0x80000000) != 0)
                                                                        goto label_142bcaf14_2
                                                                    
                                                                    if (var_e8.d == 8)
                                                                        int32_t var_bc
                                                                        int32_t rax_51 = sub_142b97060(rbx, 
                                                                            var_bc + var_90, arg3)
                                                                        var_f8 = rax_51
                                                                        rdx_1 = rax_51
                                                                        
                                                                        if (rax_51 != 0)
                                                                            goto label_142bcaf50
                                                                        
                                                                        int32_t var_58
                                                                        int32_t rax_52 = sub_142b96aa0(rbx, 
                                                                            &data_143687c68, &var_58)
                                                                        var_f8 = rax_52
                                                                        rdx_1 = rax_52
                                                                        
                                                                        if (rax_52 != 0)
                                                                            goto label_142bcaf50
                                                                        
                                                                        if (r13.d == *arg1)
                                                                            int32_t* rax_53 =
                                                                                sub_142b99860(rax_2, 0xb8, &var_f8)
                                                                            rdx_1 = var_f8
                                                                            *(arg1 + 0xd8) = rax_53
                                                                            
                                                                            if (rdx_1 != 0)
                                                                                goto label_142bcaf50
                                                                            
                                                                            *rax_53 = var_58 - var_98 + var_90
                                                                            int32_t var_54
                                                                            *(*(arg1 + 0xd8) + 0xa8) = var_54
                                                                            int32_t rax_55 =
                                                                                sub_142bcaff0(*(arg1 + 0xd8), rbx, arg3)
                                                                            var_f8 = rax_55
                                                                            rdx_1 = rax_55
                                                                            
                                                                            if (rax_55 != 0)
                                                                                goto label_142bcaf2e
                                                                        
                                                                        *arg1 += 1
                                                                    
                                                                    j_1 += 1
                                                                    j = zx.d(j_1)
                                                                while (j u< zx.d(var_7a) + zx.d(var_7c))
                                                            
                                                            i_3 += 1
                                                            j_1 = 0
                                                            r14_5 = var_d8_1
                                                            i = zx.d(i_3)
                                                        while (i u< zx.d(var_6a) + zx.d(var_6c))
                                                    
                                                    r8_7 = zx.d(var_f4_1 + 1)
                                                    var_f4_1 += 1
                                                    
                                                    if (r8_7 u>= zx.d(var_5a) + zx.d(var_5c))
                                                        goto label_142bcaf0e
                                                
                                                break
                                            
                                            rdi_2 += 1
                                            
                                            if (rdi_2 u>= var_b2)
                                                rdx_1 = 3
                                                goto label_142bcaf50
                                        
                                        goto label_142bcaf14_2
                                
                            labelid_2:
                                rdx_1 = 3
                    else
                        int16_t var_de
                        int32_t rax_13 = sub_142b97060(rbx, zx.d(var_de) + zx.d(var_ee), arg3)
                        var_f8 = rax_13
                        rdx_1 = rax_13
                        
                        if (rax_13 == 0)
                            int16_t var_dc
                            int32_t rax_15 = sub_142b96500(rbx, zx.d(var_dc) - zx.d(var_de))
                            var_f8 = rax_15
                            rdx_1 = rax_15
                            
                            if (rax_15 == 0)
                                uint16_t rax_16 = sub_142b96800(rbx)
                                char r15_1 = rax_16.b
                                
                                if (rax_16 u> 0x10)
                                labelid_2:
                                    rdx_1 = 3
                                else
                                    uint16_t i_4 = sub_142b96800(rbx)
                                    uint16_t i_2 = i_4
                                    
                                    if (i_4 != 0)
                                        uint16_t i_1
                                        
                                        do
                                            uint16_t rax_17 = sub_142b96800(rbx)
                                            
                                            if (i_2 == 0x8008)
                                                var_e8 = zx.q(rax_17)
                                                int32_t rax_19 = sub_1408e52d0(rbx)
                                                r14 = rbx[7].d - rbx[8].d + 4 + rax_19
                                                break
                                            
                                            rbx[7] += zx.q(rax_17) * 0xc + 4
                                            i_1 = sub_142b96800(rbx)
                                            i_2 = i_1
                                        while (i_1 != 0)
                                    
                                    sub_142b96620(rbx)
                                    int16_t rax_20 = var_e8.w
                                    
                                    if (rax_20 == 0 || r14 == 0)
                                    label_142bcaf14:
                                        rdx_1 = 3
                                    else
                                        uint32_t rcx_15 = zx.d(rax_20)
                                        
                                        if (rcx_15 * 0x76 u> rbx[1].d)
                                        label_142bcaf14_1:
                                            rdx_1 = 3
                                        else
                                            *arg1 = rcx_15
                                            
                                            if (arg2 s< 0)
                                                rdx_1 = var_f8
                                            else if (r13.d u>= rcx_15)
                                                rdx_1 = 6
                                            else
                                                int64_t rax_22 = sub_142b99860(rax_2, 0xb8, &var_f8)
                                                rdx_1 = var_f8
                                                *(arg1 + 0xd8) = rax_22
                                                
                                                if (rdx_1 == 0)
                                                    int32_t rax_25 = sub_142b97060(rbx, 
                                                        r14 + (((r13 << 1).d + r13.d) << 2), arg3)
                                                    var_f8 = rax_25
                                                    
                                                    if (rax_25 != 0)
                                                        goto label_142bcaf2e
                                                    
                                                    int32_t rax_26 =
                                                        sub_142b96500(rbx, rax_25 + 0xc)
                                                    var_f8 = rax_26
                                                    
                                                    if (rax_26 != 0)
                                                        goto label_142bcaf2e
                                                    
                                                    **(arg1 + 0xd8) =
                                                        zx.d(sub_142b96800(rbx)) << r15_1
                                                    *(*(arg1 + 0xd8) + 0xa8) =
                                                        zx.d(sub_142b96800(rbx)) << r15_1
                                                    rbx[7] += 8
                                                    sub_142b96620(rbx)
                                                    int32_t rax_31 =
                                                        sub_142bcaff0(*(arg1 + 0xd8), rbx, arg3)
                                                    rdx_1 = rax_31
                                                    var_f8 = rax_31
                                                label_142bcaf0e:
                                                    int32_t rax_59 = *arg1
                                                    
                                                    if (rax_59 == 0)
                                                    label_142bcaf14_2:
                                                        rdx_1 = 3
                                                    else if (r13.d s>= rax_59)
                                                        rdx_1 = 6
                                                    else if (rdx_1 != 0)
                                                        goto label_142bcaf2e

label_142bcaf50:
__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rdx_1)

// 函数: sub_140d7c0b0
// 地址: 0x140d7c0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x20) != 0)
    int64_t* rcx = *(arg1 - 0x18)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        if (arg2 - 0x7531 u> 0x17)
            *arg3 = 0
            return 0
        
        switch (arg2)
            case 0x7531
                *arg3 = 0x2005
                SAFEARRAY* rax_5 = SafeArrayCreateVector(VT_R8, 0, 4)
                *(arg3 + 8) = rax_5
                char rcx_4
                bool cond:3_1
                
                if (rax_5 != 0)
                    int64_t* rcx_3 = *(arg1 - 0x18)
                    void pv
                    (*(*rcx_3 + 0x20))(rcx_3, &pv)
                    SAFEARRAY* psa = *(arg3 + 8)
                    int32_t rgIndices = 0
                    HRESULT rax_7 = SafeArrayPutElement(psa, &rgIndices, &pv)
                    SAFEARRAY* psa_1 = *(arg3 + 8)
                    rgIndices = 1
                    void* rdi
                    rdi.b = rax_7 != 0
                    void pv_2
                    HRESULT rax_8 = SafeArrayPutElement(psa_1, &rgIndices, &pv_2)
                    SAFEARRAY* psa_2 = *(arg3 + 8)
                    rgIndices = 2
                    rax_8.b = rax_8 != 0
                    rax_8.b &= rdi.b
                    void pv_1
                    HRESULT rax_9 = SafeArrayPutElement(psa_2, &rgIndices, &pv_1)
                    SAFEARRAY* psa_3 = *(arg3 + 8)
                    rgIndices = 3
                    void pv_3
                    cond:3_1 = SafeArrayPutElement(psa_3, &rgIndices, &pv_3) != 0
                    rcx_4 = 0
                    
                    if (rax_9 != 0)
                        rcx_4 = rax_8.b
                
                if (rax_5 != 0 && (cond:3_1 & rcx_4) != 0)
                    return 0
                
                *arg3 = 0
                return 0x80004005
            case 0x7532
                *arg3 = 3
                *(arg3 + 8) = GetCurrentProcessId()
                return 0
            case 0x7533
                *arg3 = 3
                int64_t* rcx_7 = *(arg1 - 0x18)
                int64_t* rdi_2 = *(arg1 - 0x10)
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                char rax_16 = (*(*rcx_7 + 0x50))(rcx_7)
                void* rdx_9
                
                if (data_1439ae458 == data_1439ae484)
                label_140d7c2d3:
                    rdx_9 = nullptr
                else
                    void* rdx_7 = data_1439ae490
                    void* rcx_10 = &data_1439ae488
                    
                    if (rdx_7 != 0)
                        rcx_10 = rdx_7
                    
                    int32_t rax_17 = *(rcx_10 + (((sx.q(data_1439ae498) - 1) & zx.q(rax_16)) << 2))
                    
                    if (rax_17 == 0xffffffff)
                    label_140d7c2d3_1:
                        rdx_9 = nullptr
                    else
                        int64_t r8_7 = data_1439ae450
                        int64_t rcx_12
                        
                        while (true)
                            rcx_12 = sx.q(rax_17) * 2
                            
                            if (*(r8_7 + (rcx_12 << 3)) == rax_16)
                                break
                            
                            rax_17 = *(r8_7 + (rcx_12 << 3) + 8)
                            
                            if (rax_17 == 0xffffffff)
                                goto label_140d7c2d3_2
                        
                        rdx_9 = r8_7 + (rcx_12 << 3)
                        
                        if (rax_17 == 0xffffffff)
                        label_140d7c2d3_2:
                            rdx_9 = nullptr
                
                int32_t* rax_18 = rdx_9 + 4
                
                if (rdx_9 == 0)
                    rax_18 = nullptr
                
                if (rax_18 == 0)
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t temp8_1 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
                    
                    *(arg3 + 8) = 0xc369
                    return 0
                
                int32_t rsi_2 = *rax_18
                
                if (rdi_2 == 0)
                    *(arg3 + 8) = rsi_2
                    return 0
                
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d != 1)
                    *(arg3 + 8) = rsi_2
                    return 0
                
                (**rdi_2)(rdi_2)
                int32_t temp9_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp9_1 != 1)
                    *(arg3 + 8) = rsi_2
                    return 0
                
                (*(*rdi_2 + 8))(rdi_2, 1)
                *(arg3 + 8) = rsi_2
                return 0
            case 0x7534
                *arg3 = 8
                int64_t var_80 = *(arg1 - 0x18)
                void* rax_47 = *(arg1 - 0x10)
                void* var_78_1 = rax_47
                
                if (rax_47 != 0)
                    *(rax_47 + 8) += 1
                
                int64_t var_50
                int64_t* rax_48 = sub_140d89e10(&var_50, &var_80)
                PWSTR psz_3
                
                if (rax_48[1].d == 0)
                    psz_3 = &data_142d40450
                else
                    psz_3 = *rax_48
                
                BSTR rax_49 = SysAllocString(psz_3)
                int64_t rcx_37 = var_50
                *(arg3 + 8) = rax_49
                
                if (rcx_37 == 0)
                    return 0
                
                sub_140a74f90(rcx_37)
                return 0
            case 0x7535
                *arg3 = 8
                int64_t* rcx_38 = *(arg1 - 0x18)
                int64_t var_40
                int64_t* rax_51 = (*(*rcx_38 + 0x60))(rcx_38, &var_40)
                PWSTR psz_4
                
                if (rax_51[1].d == 0)
                    psz_4 = &data_142d40450
                else
                    psz_4 = *rax_51
                
                BSTR rax_52 = SysAllocString(psz_4)
                int64_t rcx_39 = var_40
                *(arg3 + 8) = rax_52
                
                if (rcx_39 == 0)
                    return 0
                
                sub_140a74f90(rcx_39)
                return 0
            case 0x7536, 0x7537, 0x753b, 0x753e, 0x7542, 0x7544, 0x7545, 0x7547
                *arg3 = 0
                return 0
            case 0x7538
                *arg3 = 0xb
                int64_t* rcx_22 = *(arg1 - 0x18)
                char rax_31
                int16_t rcx_23
                rax_31, rcx_23 = (*(*rcx_22 + 0x88))(rcx_22, &__dos_header)
                arg3[4] = sbb.w(rcx_23, rcx_23, rax_31 != 0)
                return 0
            case 0x7539
                *arg3 = 0xb
                int64_t* rcx_28 = *(arg1 - 0x18)
                char rax_38
                int16_t rcx_29
                rax_38, rcx_29 = (*(*rcx_28 + 0x80))(rcx_28, &__dos_header)
                arg3[4] = sbb.w(rcx_29, rcx_29, rax_38 != 0)
                return 0
            case 0x753a
                *arg3 = 0xb
                int64_t* rcx_26 = *(arg1 - 0x18)
                char rax_36
                int16_t rcx_27
                rax_36, rcx_27 = (*(*rcx_26 + 0x70))(rcx_26, &__dos_header)
                arg3[4] = sbb.w(rcx_27, rcx_27, rax_36 != 0)
                return 0
            case 0x753c
                *arg3 = 8
                int64_t* rcx_5 = *(arg1 - 0x18)
                int64_t var_70
                int64_t* rax_13 = (*(*rcx_5 + 0x58))(rcx_5, &var_70)
                PWSTR psz
                
                if (rax_13[1].d == 0)
                    psz = &data_142d40450
                else
                    psz = *rax_13
                
                BSTR rax_14 = SysAllocString(psz)
                int64_t rcx_6 = var_70
                *(arg3 + 8) = rax_14
                
                if (rcx_6 == 0)
                    return 0
                
                sub_140a74f90(rcx_6)
                return 0
            case 0x753d
                *arg3 = 8
                int64_t* rcx_24 = *(arg1 - 0x18)
                int64_t var_60
                int64_t* rax_33 = (*(*rcx_24 + 0x68))(rcx_24, &var_60)
                PWSTR psz_2
                
                if (rax_33[1].d == 0)
                    psz_2 = &data_142d40450
                else
                    psz_2 = *rax_33
                
                BSTR rax_34 = SysAllocString(psz_2)
                int64_t rcx_25 = var_60
                *(arg3 + 8) = rax_34
                
                if (rcx_25 == 0)
                    return 0
                
                sub_140a74f90(rcx_25)
                return 0
            case 0x753f
                *arg3 = 3
                *(arg3 + 8) = *(*(arg1 - 0x20) + 0xb0)
                return 0
            case 0x7540, 0x7541
                *arg3 = 0xb
                arg3[4] = 0xffff
                return 0
            case 0x7543
                int64_t* rcx_32 = *(arg1 - 0x18)
                
                if ((*(*rcx_32 + 0xa8))(rcx_32, &__dos_header) == 0)
                    return 0
                
                *arg3 = 0xb
                int64_t* rcx_33 = *(arg1 - 0x18)
                int64_t* rax_44 = (*(*rcx_33 + 0xa8))(rcx_33)
                int64_t rdx_12 = *rax_44
                char rax_45
                int16_t rcx_35
                rax_45, rcx_35 = (*(rdx_12 + 8))(rax_44, rdx_12)
                arg3[4] = sbb.w(rcx_35, rcx_35, rax_45 != 0)
                return 0
            case 0x7546
                *arg3 = 0xb
                int64_t* rcx_30 = *(arg1 - 0x18)
                char rax_40
                int16_t rcx_31
                rax_40, rcx_31 = (*(*rcx_30 + 0x78))(rcx_30, &__dos_header)
                arg3[4] = sbb.w(rcx_31, rcx_31, rax_40 != 0)
                return 0
            case 0x7548
                *arg3 = 8
                void var_30
                int64_t* rax_25 = sub_140ac6680(_vfprintf_p_l(&var_30, Slate", SlateAccessibility"))
                PWSTR psz_1
                
                if (rax_25[1].d == 0)
                    psz_1 = &data_142d40450
                else
                    psz_1 = *rax_25
                
                *(arg3 + 8) = SysAllocString(psz_1)
                int64_t* var_28
                
                if (var_28 != 0)
                    var_28[1].d -= 1
                    
                    if (var_28[1].d == 1)
                        (**var_28)(var_28)
                        int32_t rdi_3 = *(var_28 + 0xc)
                        *(var_28 + 0xc) -= 1
                        
                        if (rdi_3 == 1)
                            (*(*var_28 + 8))(var_28, zx.q(rdi_3))
                
                return 0

return 0x80040201

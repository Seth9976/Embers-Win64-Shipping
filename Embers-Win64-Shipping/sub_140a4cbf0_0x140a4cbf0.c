// 函数: sub_140a4cbf0
// 地址: 0x140a4cbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t r10 = 0
int16_t* rdi = arg2
int32_t rdx = 0
int16_t* var_78 = nullptr
int64_t var_70 = 0
uint64_t rsi = zx.q(*rdi)

while (rsi.w != 0)
    if (rsi.w == 0x20)
        goto label_140a4cca8
    
    rdi = &rdi[1]
    
    if (rsi.w != 0)
        int32_t r14_1 = rdx - 1
        
        if (rdx s<= 0)
            r14_1 = 0
        
        int32_t rax_1
        rax_1.b = rdx s<= 0
        int32_t rax_3 = rax_1 + 1 + rdx
        var_70.d = rax_3
        
        if (rax_3 s> r10)
            sub_140594770(&var_78)
        
        int64_t rcx_1 = sx.q(r14_1)
        var_78[rcx_1] = rsi.w
        var_78[rcx_1 + 1] = 0
        r10 = var_70:4.d
        rdx = var_70.d
    
    rsi = zx.q(*rdi)

if (rsi.w == 0x20)
label_140a4cca8:
    
    do
        rdi = &rdi[1]
    while (*rdi == 0x20)

if (rdx s<= 1)
    rsi.b = 0
else
    void* const r14_2 = &data_142e5f8f8
    char rax_6
    int32_t r8
    rax_6, r8 = sub_140a237d0(&var_78, &data_142e5f8f8, 0)
    int32_t rax_7 = var_70.d
    
    if (rax_6 != 0)
        int32_t rdx_1 = rax_7 - 1
        
        if (rax_7 == 0)
            rdx_1 = 0
        
        int32_t rcx_3 = rax_7 - 1
        
        if (rax_7 == 0)
            rcx_3 = 0
        
        int32_t r10_1
        
        if (rdx_1 - 1 s>= 0)
            r10_1 = rcx_3
            
            if (rdx_1 s<= rcx_3)
                r10_1 = rdx_1 - 1
        else
            r10_1 = 0
        
        int32_t rcx_4 = rcx_3 - r10_1
        int32_t rsi_1 = rax_7 - 1
        
        if (rax_7 == 0)
            rsi_1 = 0
        
        int32_t rsi_2 = rsi_1 - r10_1
        
        if (rcx_4 s>= 0)
            if (rcx_4 s< rsi_2)
                rsi_2 = rcx_4
            
            if (rsi_2 != 0)
                int32_t rcx_6 = rax_7 - rsi_2
                
                if (rcx_6 != r10_1)
                    int16_t* r9 = var_78
                    memmove(&r9[sx.q(r10_1)], &r9[sx.q(rsi_2 + r10_1)], (rcx_6 - r10_1) * 2)
                    rax_7 = var_70.d
                
                rax_7 -= rsi_2
                var_70.d = rax_7
        
        int32_t rsi_3 = rax_7 - 1
        
        if (rax_7 == 0)
            rsi_3 = 0
        
        if (rsi_3 s> 0)
            rsi_3 = 0
        
        if (rsi_3 != 0)
            if (rax_7 != rsi_3)
                int16_t* rcx_12 = var_78
                memmove(rcx_12, &rcx_12[sx.q(rsi_3)], (rax_7 - rsi_3) * 2)
                rax_7 = var_70.d
            
            rax_7 -= rsi_3
            var_70.d = rax_7
    
    int16_t* const r13_1 = &data_142d40450
    int16_t* const rdx_4 = &data_142d40450
    
    if (rax_7 != 0)
        rdx_4 = var_78
    
    r8.b = 1
    uint64_t rax_12 = (*(*arg1 + 0xb8))(arg1, rdx_4, r8)
    
    if (rax_12 == 0)
        rsi.b = 0
    else
        int64_t rdx_5 = *rax_12
        
        if (((*(rdx_5 + 0x18))(rax_12, rdx_5) & 1) != 0)
            rsi.b = 0
        else
            int64_t rdx_6 = *rax_12
            
            if ((((*(rdx_6 + 0x18))(rax_12, rdx_6) u>> 3).b & 1) != 0)
                rsi.b = 0
            else
                int64_t var_58
                int64_t* rax_16 = sub_140a43cf0(arg1, &var_58, rax_12)
                
                if (&var_78 != rax_16)
                    int16_t* rcx_17 = var_78
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    var_78 = *rax_16
                    *rax_16 = 0
                    var_70.d = rax_16[1].d
                    var_70:4.d = *(rax_16 + 0xc)
                    rax_16[1] = 0
                
                int64_t rcx_19 = var_58
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                int64_t* rax_20 = (*(*rax_12 + 0x70))(rax_12)
                int64_t rdx_8 = *rax_12
                wchar16 (* r15_2)[0x200] = (*(rdx_8 + 0x28))(rax_12, rdx_8)
                int64_t* var_68
                
                if (rax_20 == 0)
                    if (r15_2 != 0)
                        wchar16 (* rax_21)[0x200]
                        uint64_t rbx_3
                        
                        if (*rdi != 0)
                            var_58 = 0
                            int32_t rdx_18 = 0
                            int64_t var_50_2 = 0
                            int32_t rcx_38 = 0
                            int64_t rsi_5 = -1
                            
                            do
                                rsi_5 += 1
                            while (rdi[rsi_5] != 0)
                            
                            rsi = zx.q(rsi_5.d + 1)
                            
                            if (rsi.d s> 0)
                                sub_1405947f0(&var_58, rsi.d)
                                rcx_38 = var_50_2:4.d
                                rdx_18 = var_50_2.d
                            
                            int32_t rax_31 = rdx_18 + rsi.d
                            var_50_2.d = rax_31
                            
                            if (rax_31 s> rcx_38)
                                sub_140594770(&var_58)
                            
                            memcpy(var_58, rdi, rsi.d * 2)
                            sub_140a36050(&var_58, &var_68)
                            int64_t rcx_43 = var_58
                            
                            if (rcx_43 != 0)
                                sub_140a74f90(rcx_43)
                            
                            int32_t var_60
                            int32_t r8_13 = var_60
                            uint8_t r12_3 = ((*(*r15_2 + 0x18))(r15_2).d u>> 2).b & 1
                            int64_t* rbx_4
                            int64_t* r9_7
                            
                            if (r8_13 == 0)
                                r9_7 = var_68
                                rbx_4 = &data_142d40450
                            else if (r8_13 - 1 s< 2)
                            label_140a4d2ab:
                                r9_7 = var_68
                            label_140a4d2af:
                                
                                rbx_4 = r8_13 == 0 ? &data_142d40450 : r9_7
                            else
                                r9_7 = var_68
                                rsi = 0x7fffffff
                                
                                if (*r9_7 == 0x22 && *(r9_7 + (sx.q(r8_13 - 1) << 1) - 2) == 0x22)
                                    rax_21 = 0x7fffffff
                                    
                                    if (sx.q(r8_13 - 3) + 1 s<= 0x7fffffff)
                                        rax_21 = zx.q(r8_13 - -0xfffffffe)
                                    
                                    int32_t rcx_47
                                    
                                    if (rax_21.d s>= 0)
                                        rcx_47 = r8_13 - 1
                                        
                                        if (rax_21.d s< r8_13 - 1)
                                            rcx_47 = rax_21.d
                                    else
                                        rcx_47 = 0
                                    
                                    int32_t rdi_2 = r8_13 - 1 - rcx_47
                                    
                                    if (r8_13 - 1 - rcx_47 s>= 0 && rdi_2 != 0)
                                        int32_t rax_35 = r8_13 - rcx_47
                                        
                                        if (rax_35 != rdi_2)
                                            memmove(r9_7 + (sx.q(rcx_47) << 1), 
                                                r9_7 + (sx.q(r8_13 - 1) << 1), (rax_35 - rdi_2) * 2)
                                            r8_13 = var_60
                                            r9_7 = var_68
                                        
                                        r8_13 -= rdi_2
                                        var_60 = r8_13
                                    
                                    int32_t rdi_3 = r8_13 - 1
                                    
                                    if (r8_13 == 0)
                                        rdi_3 = 0
                                    
                                    if (rdi_3 s> 1)
                                        rdi_3 = 1
                                    
                                    if (rdi_3 != 0)
                                        if (r8_13 != rdi_3)
                                            memmove(r9_7, r9_7 + (sx.q(rdi_3) << 1), 
                                                (r8_13 - rdi_3) * 2)
                                            r8_13 = var_60
                                            r9_7 = var_68
                                        
                                        r8_13 -= rdi_3
                                        var_60 = r8_13
                                
                                if (r8_13 != 0)
                                    if (r8_13 - 1 s<= 0 || *r9_7 != 0x3d)
                                        goto label_140a4d2af
                                    
                                    sub_140b1f640(arg3, 
                                        Warning: Processing the console input parameters the leading '=' "
                                    "is ignored (only needed for ini files).")
                                    r8_13 = var_60
                                    int32_t rax_40 = r8_13 - 1
                                    
                                    if (r8_13 == 0)
                                        rax_40 = 0
                                    
                                    int32_t rax_42 = r8_13 - 1
                                    
                                    if (sx.q(rax_40 - 1) + 1 s<= 0x7fffffff)
                                        rsi = zx.q(rax_40)
                                    
                                    if (r8_13 == 0)
                                        rax_42 = 0
                                    
                                    int32_t r10_2
                                    
                                    if (rsi.d s>= 0)
                                        r10_2 = rax_42
                                        
                                        if (rsi.d s< rax_42)
                                            r10_2 = rsi.d
                                    else
                                        r10_2 = 0
                                    
                                    int32_t rax_43 = rax_42 - r10_2
                                    int32_t rdi_4 = r8_13 - 1
                                    
                                    if (r8_13 == 0)
                                        rdi_4 = 0
                                    
                                    int32_t rdi_5 = rdi_4 - r10_2
                                    
                                    if (rax_43 s>= 0)
                                        if (rax_43 s< rdi_5)
                                            rdi_5 = rax_43
                                        
                                        if (rdi_5 != 0)
                                            int32_t rax_45 = r8_13 - r10_2
                                            
                                            if (rax_45 != rdi_5)
                                                int64_t* r9_8 = var_68
                                                memmove(r9_8 + (sx.q(r10_2) << 1), 
                                                    r9_8 + (sx.q(r10_2 + rdi_5) << 1), 
                                                    (rax_45 - rdi_5) * 2)
                                                r8_13 = var_60
                                            
                                            r8_13 -= rdi_5
                                            var_60 = r8_13
                                    
                                    if (r8_13 != 0)
                                        rbx = r8_13 - 1
                                    
                                    if (rbx s> 1)
                                        rbx = 1
                                    
                                    if (rbx != 0)
                                        if (r8_13 != rbx)
                                            int64_t* rcx_55 = var_68
                                            memmove(rcx_55, rcx_55 + (sx.q(rbx) << 1), 
                                                (r8_13 - rbx) * 2)
                                            r8_13 = var_60
                                        
                                        r8_13 -= rbx
                                        var_60 = r8_13
                                    
                                    goto label_140a4d2ab
                                
                                rbx_4 = &data_142d40450
                            
                            while (true)
                                int16_t rdx_27 = *(r14_2 + rbx_4 - &data_142e5f8f8)
                                int16_t r10_3 = *r14_2
                                r14_2 += 2
                                
                                if (rdx_27 != r10_3)
                                    uint32_t rdx_29
                                    
                                    if (((zx.d(rdx_27) | zx.d(r10_3)) & 0xffffff80) != 0)
                                        rdx_29 = zx.d(rdx_27) - zx.d(r10_3)
                                    else
                                        uint32_t rcx_58 = zx.d(*(zx.q(r10_3) + &data_142e5e8a0))
                                        uint32_t rdx_28 = zx.d(*(zx.q(rdx_27) + &data_142e5e8a0))
                                        rdx_29 = rdx_28 - rcx_58
                                        
                                        if (rdx_28 == rcx_58)
                                            continue
                                    
                                    if (rdx_29 == 0)
                                        rbx_3.b = 1
                                        break
                                    
                                    int64_t rax_53 = *r15_2
                                    
                                    if (r12_3 == 0)
                                        int64_t* rdx_32 = &data_142d40450
                                        
                                        if (r8_13 != 0)
                                            rdx_32 = r9_7
                                        
                                        (*(rax_53 + 0x80))(r15_2, rdx_32, 0x9000000)
                                        int64_t* rax_56 = (*(*r15_2 + 0xa0))(r15_2, &var_58)
                                        
                                        if (rax_56[1].d != 0)
                                            *rax_56
                                        
                                        int16_t* r8_23 = &data_142d40450
                                        
                                        if (var_70.d != 0)
                                            r8_23 = var_78
                                        
                                        sub_140b1f700(arg3, u"%s = "%s"", r8_23)
                                        int64_t rcx_64 = var_58
                                        
                                        if (rcx_64 != 0)
                                            sub_140a74f90(rcx_64)
                                        
                                        (*(*arg1 + 0x50))(arg1)
                                    else
                                        int64_t* rax_54 = (*(rax_53 + 0xa0))(r15_2, &var_58)
                                        
                                        if (rax_54[1].d != 0)
                                            *rax_54
                                        
                                        int16_t* r8_22 = &data_142d40450
                                        
                                        if (var_70.d != 0)
                                            r8_22 = var_78
                                        
                                        sub_140b1f700(arg3, u"Error: %s is read only!", r8_22)
                                        int64_t rcx_61 = var_58
                                        
                                        if (rcx_61 != 0)
                                            sub_140a74f90(rcx_61)
                                    
                                    r9_7 = var_68
                                    rbx_3 = zx.q(rax_6)
                                    break
                                
                                if (rdx_27 == 0)
                                    rbx_3.b = 1
                                    break
                            
                            if (r9_7 != 0)
                                sub_140a74f90(r9_7)
                            
                            rax_21.b = 0
                        else
                            rbx_3 = zx.q(rax_6)
                            rax_21.b = 1
                        
                        int64_t* rdi_8
                        
                        if (rbx_3.b != 0)
                            (*(*r15_2 + 0x18))(r15_2)
                            int64_t rdx_34 = *r15_2
                            int16_t* rbx_5 = &data_142d40450
                            
                            if (var_70.d != 0)
                                rbx_5 = var_78
                            
                            int64_t var_88_1 = (*(rdx_34 + 8))(r15_2, rdx_34)
                            rdi_8 = arg3
                            sub_140b1f700(rdi_8, u"HELP for '%s'%s:\n%s", rbx_5)
                            goto label_140a4d461
                        
                        if (rax_21.b != 0)
                            rdi_8 = arg3
                        label_140a4d461:
                            int64_t* rax_62 = (*(*r15_2 + 0xa0))(r15_2, &var_58)
                            
                            if (rax_62[1].d != 0)
                                *rax_62
                            
                            if (var_70.d != 0)
                                r13_1 = var_78
                            
                            int64_t var_88_2 = sub_140a48b50((*(*r15_2 + 0x18))(r15_2))
                            sub_140b1f700(rdi_8, u"%s = "%s"      LastSetBy: %s", r13_1)
                            int64_t rcx_74 = var_58
                            
                            if (rcx_74 != 0)
                                sub_140a74f90(rcx_74)
                    
                    rsi.b = 1
                else
                    int32_t rcx_22 = 0
                    var_68 = nullptr
                    int32_t i_4 = 0
                    var_58 = 0
                    int64_t var_50_1 = 0
                    
                    if (*rdi != 0)
                        int64_t rsi_4 = -1
                        
                        do
                            rsi_4 += 1
                        while (rdi[rsi_4] != 0)
                        
                        rsi = zx.q(rsi_4.d + 1)
                        
                        if (rsi.d s> 0)
                            sub_1405947f0(&var_58, rsi.d)
                            rcx_22 = var_50_1:4.d
                            rbx = var_50_1.d
                        
                        int32_t rax_22 = rsi.d + rbx
                        var_50_1.d = rax_22
                        
                        if (rax_22 s> rcx_22)
                            sub_140594770(&var_58)
                        
                        memcpy(var_58, rdi, rsi.d * 2)
                    
                    sub_140a2cee0(&var_58, &var_68, nullptr, 1)
                    int64_t rcx_27 = var_58
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    uint32_t rdx_15
                    
                    if (rax_6 == 0 && i_4 == 1)
                        int64_t* r9_2 = var_68
                        int16_t* const r9_3
                        
                        if (r9_2[1].d == 0)
                            r9_3 = &data_142d40450
                        else
                            r9_3 = *r9_2
                        
                        while (true)
                            int16_t rdx_13 = *(r14_2 + r9_3 - &data_142e5f8f8)
                            int16_t r8_8 = *r14_2
                            r14_2 += 2
                            
                            if (rdx_13 != r8_8)
                                if (((zx.d(rdx_13) | zx.d(r8_8)) & 0xffffff80) != 0)
                                    rdx_15 = zx.d(rdx_13) - zx.d(r8_8)
                                    break
                                
                                uint32_t rcx_34 = zx.d(*(zx.q(r8_8) + &data_142e5e8a0))
                                uint32_t rdx_14 = zx.d(*(zx.q(rdx_13) + &data_142e5e8a0))
                                rdx_15 = rdx_14 - rcx_34
                                
                                if (rdx_14 != rcx_34)
                                    break
                            else
                                if (rdx_13 == 0)
                                    goto label_140a4cf28
                    
                    if (rax_6 != 0 || (i_4 == 1 && rdx_15 == 0))
                    label_140a4cf28:
                        
                        if (var_70.d != 0)
                            r13_1 = var_78
                        
                        (*(*rax_20 + 8))(rax_20)
                        sub_140b1f700(arg3, u"HELP for '%s':\n%s", r13_1)
                        int32_t i_2 = i_4
                        int64_t* rbx_1 = var_68
                        
                        if (i_2 != 0)
                            int32_t i
                            
                            do
                                int64_t rcx_30 = *rbx_1
                                
                                if (rcx_30 != 0)
                                    sub_140a74f90(rcx_30)
                                
                                rbx_1 = &rbx_1[2]
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                            rbx_1 = var_68
                        
                        if (rbx_1 == 0)
                            rsi.b = 1
                        else
                            sub_140a74f90(rbx_1)
                            rsi.b = 1
                    else
                        int32_t i_3 = i_4
                        rsi = zx.q((*(*rax_20 + 0x80))(rax_20, &var_68, arg4, arg3))
                        int64_t* rbx_2 = var_68
                        
                        if (i_3 != 0)
                            int32_t i_1
                            
                            do
                                int64_t rcx_36 = *rbx_2
                                
                                if (rcx_36 != 0)
                                    sub_140a74f90(rcx_36)
                                
                                rbx_2 = &rbx_2[2]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            rbx_2 = var_68
                        
                        if (rbx_2 != 0)
                            sub_140a74f90(rbx_2)

int16_t* rcx_75 = var_78

if (rcx_75 != 0)
    sub_140a74f90(rcx_75)

return zx.q(rsi.b)

// 函数: sub_140b23ee0
// 地址: 0x140b23ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
uint64_t result

if (arg1[1].d s<= 1)
    result.b = 0
else
    int64_t* var_70 = nullptr
    int32_t i_19 = 0
    result = sub_140a2ccb0(arg1, &var_70, &data_142d404d4, 1)
    
    if (result.d s<= 0 || i_19 != result.d)
    label_140b2463f:
        int32_t i_18 = i_19
        int64_t* rbx_15 = var_70
        
        if (i_18 != 0)
            int32_t i
            
            do
                int64_t rcx_56 = *rbx_15
                
                if (rcx_56 != 0)
                    sub_140a74f90(rcx_56)
                
                rbx_15 = &rbx_15[2]
                i = i_18
                i_18 -= 1
            while (i != 1)
        
        int64_t* rdx_19 = var_70
        
        if (rdx_19 != 0)
            sub_140a74f90(rdx_19)
        
        result.b = 0
    else
        int32_t var_78_1 = 0
        int32_t r12_1 = 0
        int32_t arg_20 = 0
        int32_t r13_1 = 0
        int32_t arg_18 = 0
        int32_t r15_1 = 0
        
        if (sub_140a237d0(var_70, &data_142d7fa60, 1) != 0)
            int64_t* rdi_1 = var_70
            int32_t rax_1 = rdi_1[1].d
            int32_t r10_1 = rax_1 - 2
            
            if (rax_1 == 0)
                r10_1 = -1
            
            int32_t rbx_1 = rax_1 - 1
            
            if (rax_1 == 0)
                rbx_1 = 0
            
            int32_t rbx_2 = rbx_1 - r10_1
            
            if (rbx_2 s> 1)
                rbx_2 = 1
            
            if (rbx_2 != 0)
                int32_t rcx_2 = rax_1 - rbx_2
                
                if (rcx_2 != r10_1)
                    int64_t r9_1 = *rdi_1
                    memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rbx_2 + r10_1) << 1), 
                        (rcx_2 - r10_1) * 2)
                    rax_1 = rdi_1[1].d
                
                rdi_1[1].d = rax_1 - rbx_2
                sub_1405a50a0(rdi_1)
        
        int64_t* var_60 = nullptr
        int32_t var_58_1 = 0
        sub_1405947f0(&var_60, 4)
        int32_t rbx_3 = var_58_1 + 4
        
        if (rbx_3 s> 0)
            sub_140594770(&var_60)
        
        int64_t* rsi_1 = var_60
        UnDecorator::getReferenceType(rsi_1, &data_142e75088, 8)
        int16_t* const _String_10 = &data_142d40450
        int16_t* const rcx_9 = &data_142d40450
        void* rax_9 = &var_70[sx.q(i_19 - 1) * 2]
        
        if (rbx_3 != 0)
            rcx_9 = rsi_1
        
        void* rax_10
        
        if (*(rax_9 + 8) == 0)
            rax_10 = &data_142d40450
        else
            rax_10 = *rax_9
        
        void* rcx_10 = rcx_9 - rax_10
        uint32_t i_1
        uint32_t rbx_4
        
        do
            rbx_4 = zx.d(*rax_10)
            i_1 = zx.d(*(rax_10 + rcx_10))
            
            if (rbx_4 != i_1)
                break
            
            rax_10 += 2
        while (i_1 != 0)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        void arg_8
        int64_t* rbx_7
        
        if (rbx_4 - i_1 != 0)
            if (i_19 == 5 && sub_140b0ca80(&arg_8, var_70) s> 0)
                int64_t* rbx_12 = var_70
                int32_t rcx_44 = rbx_12[5].d
                int32_t rax_40 = rcx_44 - 2
                
                if (rcx_44 == 0)
                    rax_40 = -1
                
                if (rax_40 u> 1)
                    r13_1 = -1
                else if (rcx_44 == 0)
                    r13_1 = _wtoi(&data_142d40450)
                else
                    r13_1 = _wtoi(rbx_12[4])
                
                r12_1 = sub_140b0ced0(&arg_8, &rbx_12[2])
                
                if (r13_1 - 1 u<= 0x1e && r12_1 - 1 u<= 0xb)
                    var_60 = nullptr
                    int32_t i_23 = 0
                    
                    if (sub_140a2ccb0(&var_70[6], &var_60, U":\t", 1) != 3)
                        int32_t i_17 = i_23
                        rbx_7 = var_60
                        
                        if (i_17 == 0)
                            goto label_140b241ca
                        
                        int32_t i_2
                        
                        do
                            int64_t rcx_55 = *rbx_7
                            
                            if (rcx_55 != 0)
                                sub_140a74f90(rcx_55)
                            
                            rbx_7 = &rbx_7[2]
                            i_2 = i_17
                            i_17 -= 1
                        while (i_2 != 1)
                    label_140b241c6:
                        rbx_7 = var_60
                    label_140b241ca:
                        
                        if (rbx_7 != 0)
                            sub_140a74f90(rbx_7)
                    else
                        wchar16** rax_47 = var_60
                        wchar16* _String_7
                        
                        if (rax_47[1].d == 0)
                            _String_7 = &data_142d40450
                        else
                            _String_7 = *rax_47
                        
                        int32_t rax_48 = _wtoi(_String_7)
                        int64_t* rcx_49 = var_60
                        var_78_1 = rax_48
                        wchar16* _String_8
                        
                        if (rcx_49[3].d == 0)
                            _String_8 = &data_142d40450
                        else
                            _String_8 = rcx_49[2]
                        
                        int32_t rax_49 = _wtoi(_String_8)
                        int64_t* rcx_50 = var_60
                        arg_20 = rax_49
                        wchar16* _String_9
                        
                        if (rcx_50[5].d == 0)
                            _String_9 = &data_142d40450
                        else
                            _String_9 = rcx_50[4]
                        
                        int32_t rax_50 = _wtoi(_String_9)
                        arg_18 = rax_50
                        
                        if (rax_48 u> 0x17 || rax_49 u> 0x3b || rax_50 u> 0x3b)
                            r14.b = 0
                        else
                            r14.b = 1
                        
                        int32_t i_11 = i_23
                        int64_t* rbx_14 = var_60
                        
                        if (i_11 != 0)
                            int32_t i_3
                            
                            do
                                int64_t rcx_51 = *rbx_14
                                
                                if (rcx_51 != 0)
                                    sub_140a74f90(rcx_51)
                                
                                rbx_14 = &rbx_14[2]
                                i_3 = i_11
                                i_11 -= 1
                            while (i_3 != 1)
                            rbx_14 = var_60
                        
                        if (rbx_14 != 0)
                            sub_140a74f90(rbx_14)
                        
                        if (r14.b == 0)
                            r14 = arg2
                        else
                            int64_t* rdx_18 = var_70
                            int32_t rax_51 = rdx_18[9].d
                            int32_t rcx_53 = rax_51 - 1
                            
                            if (rax_51 == 0)
                                rcx_53 = 0
                            
                            if (rcx_53 == 4)
                                if (rax_51 != 0)
                                    _String_10 = rdx_18[8]
                                
                                r15_1 = _wtoi(_String_10)
                            
                            r14 = arg2
        else if (i_19 == 6)
            if (sub_140b0ca80(&arg_8, var_70) s> 0)
                int64_t* rbx_6 = var_70
                wchar16* _String
                
                if (rbx_6[3].d == 0)
                    _String = &data_142d40450
                else
                    _String = rbx_6[2]
                
                r13_1 = _wtoi(_String)
                int32_t rax_13 = sub_140b0ced0(&arg_8, &rbx_6[4])
                int32_t rdx_6 = rbx_6[7].d
                r12_1 = rax_13
                int32_t rcx_14 = rdx_6 - 1
                
                if (rdx_6 == 0)
                    rcx_14 = 0
                
                if (rcx_14 != 4)
                    r15_1 = -1
                else if (rdx_6 == 0)
                    r15_1 = _wtoi(&data_142d40450)
                else
                    r15_1 = _wtoi(rbx_6[6])
                
                if (r13_1 - 1 u<= 0x1e && r12_1 - 1 u<= 0xb && r15_1 - 1 u<= 0x270e)
                    int64_t* rcx_16 = var_70
                    var_60 = nullptr
                    int32_t i_20 = 0
                    
                    if (sub_140a2ccb0(&rcx_16[8], &var_60, U":\t", 1) != 3)
                        int32_t i_13 = i_20
                        rbx_7 = var_60
                        
                        if (i_13 == 0)
                            goto label_140b241ca
                        
                        int32_t i_4
                        
                        do
                            int64_t rcx_23 = *rbx_7
                            
                            if (rcx_23 != 0)
                                sub_140a74f90(rcx_23)
                            
                            rbx_7 = &rbx_7[2]
                            i_4 = i_13
                            i_13 -= 1
                        while (i_4 != 1)
                        goto label_140b241c6
                    
                    int64_t* rax_20 = var_60
                    wchar16* _String_1
                    
                    if (rax_20[1].d == 0)
                        _String_1 = &data_142d40450
                    else
                        _String_1 = *rax_20
                    
                    int32_t rax_21 = _wtoi(_String_1)
                    int64_t* rcx_18 = var_60
                    var_78_1 = rax_21
                    wchar16* _String_2
                    
                    if (rcx_18[3].d == 0)
                        _String_2 = &data_142d40450
                    else
                        _String_2 = rcx_18[2]
                    
                    int32_t rax_22 = _wtoi(_String_2)
                    int64_t* rcx_19 = var_60
                    arg_20 = rax_22
                    
                    if (rcx_19[5].d != 0)
                        _String_10 = rcx_19[4]
                    
                    int32_t rax_23 = _wtoi(_String_10)
                    int32_t i_12 = i_20
                    rbx_7 = var_60
                    arg_18 = rax_23
                    
                    if (i_12 == 0)
                        goto label_140b241ca
                    
                    int32_t i_5
                    
                    do
                        int64_t rcx_21 = *rbx_7
                        
                        if (rcx_21 != 0)
                            sub_140a74f90(rcx_21)
                        
                        rbx_7 = &rbx_7[2]
                        i_5 = i_12
                        i_12 -= 1
                    while (i_5 != 1)
                    goto label_140b241c6
        else if (i_19 == 4 && sub_140b0c630(&arg_8, var_70) s> 0)
            var_60 = nullptr
            int32_t i_21 = 0
            int32_t rax_25 = sub_140a2ccb0(&var_70[2], &var_60, &data_142d404b0, 1)
            
            if (rax_25 == 3)
                int64_t* rax_26 = var_60
                wchar16* _String_3
                
                if (rax_26[1].d == 0)
                    _String_3 = &data_142d40450
                else
                    _String_3 = *rax_26
                
                r13_1 = _wtoi(_String_3)
                int32_t rax_28 = sub_140b0ced0(&arg_8, &var_60[2])
                int64_t* rcx_28 = var_60
                r12_1 = rax_28
                wchar16* _String_4
                
                if (rcx_28[5].d == 0)
                    _String_4 = &data_142d40450
                else
                    _String_4 = rcx_28[4]
                
                r15_1 = _wtoi(_String_4) + 0x76c
            
            if (rax_25 != 3 || r13_1 - 1 u> 0x1e || r12_1 - 1 u> 0xb || r15_1 - 1 u> 0x270e)
                r14.b = 0
            else
                r14.b = 1
            
            int32_t i_10 = i_21
            int64_t* rbx_8 = var_60
            
            if (i_10 != 0)
                int32_t i_6
                
                do
                    int64_t rcx_29 = *rbx_8
                    
                    if (rcx_29 != 0)
                        sub_140a74f90(rcx_29)
                    
                    rbx_8 = &rbx_8[2]
                    i_6 = i_10
                    i_10 -= 1
                while (i_6 != 1)
                rbx_8 = var_60
            
            if (rbx_8 != 0)
                sub_140a74f90(rbx_8)
            
            if (r14.b != 0)
                var_60 = nullptr
                int32_t i_22 = 0
                int64_t* rbx_9
                
                if (sub_140a2ccb0(&var_70[4], &var_60, U":\t", 1) != 3)
                    int32_t i_16 = i_22
                    rbx_9 = var_60
                    
                    if (i_16 != 0)
                        int32_t i_7
                        
                        do
                            int64_t rcx_42 = *rbx_9
                            
                            if (rcx_42 != 0)
                                sub_140a74f90(rcx_42)
                            
                            rbx_9 = &rbx_9[2]
                            i_7 = i_16
                            i_16 -= 1
                        while (i_7 != 1)
                        rbx_9 = var_60
                else
                    wchar16** rax_34 = var_60
                    wchar16* _String_5
                    
                    if (rax_34[1].d == 0)
                        _String_5 = &data_142d40450
                    else
                        _String_5 = *rax_34
                    
                    int32_t rax_35 = _wtoi(_String_5)
                    int64_t* rcx_33 = var_60
                    var_78_1 = rax_35
                    wchar16* _String_6
                    
                    if (rcx_33[3].d == 0)
                        _String_6 = &data_142d40450
                    else
                        _String_6 = rcx_33[2]
                    
                    arg_20 = _wtoi(_String_6)
                    int64_t* rax_37 = var_60
                    
                    if (rax_37[5].d != 0)
                        _String_10 = rax_37[4]
                    
                    int32_t rax_38 = _wtoi(_String_10)
                    int32_t i_14 = i_22
                    rbx_9 = var_60
                    arg_18 = rax_38
                    
                    if (i_14 != 0)
                        int32_t i_8
                        
                        do
                            int64_t rcx_35 = *rbx_9
                            
                            if (rcx_35 != 0)
                                sub_140a74f90(rcx_35)
                            
                            rbx_9 = &rbx_9[2]
                            i_8 = i_14
                            i_14 -= 1
                        while (i_8 != 1)
                        rbx_9 = var_60
                
                if (rbx_9 != 0)
                    sub_140a74f90(rbx_9)
            
            r14 = arg2
        
        if (sub_140b29e10(r15_1, r12_1, r13_1, var_78_1, arg_20, arg_18, 0).b == 0)
            goto label_140b2463f
        
        result = sub_140b0a2c0(&arg_8, r15_1, r12_1, r13_1, var_78_1, arg_20, arg_18, 0)
        int32_t i_15 = i_19
        int64_t* rbx_11 = var_70
        *r14 = *result
        
        if (i_15 != 0)
            int32_t i_9
            
            do
                int64_t rcx_40 = *rbx_11
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
                
                rbx_11 = &rbx_11[2]
                i_9 = i_15
                i_15 -= 1
            while (i_9 != 1)
            rbx_11 = var_70
        
        if (rbx_11 != 0)
            sub_140a74f90(rbx_11)
        
        result.b = 1

return result

// 函数: sub_1423ea040
// 地址: 0x1423ea040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_58 = zmm6
wchar16* result

if (*arg1 == 0)
    result.b = 0
else
    int32_t rbx_1 = 0
    int64_t rdi_1 = -1
    int16_t* var_88 = nullptr
    int32_t rdx = 0
    int64_t var_80_1 = 0
    int32_t rcx = 0
    int64_t rsi_1 = -1
    
    do
        rsi_1 += 1
    while (*(arg1 + (rsi_1 << 1)) != 0)
    
    if (rsi_1.d + 1 s> 0)
        sub_1405947f0(&var_88, rsi_1.d + 1)
        rcx = var_80_1:4.d
        rdx = var_80_1.d
    
    int32_t rax = rdx + rsi_1.d + 1
    var_80_1.d = rax
    
    if (rax s> rcx)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, arg1, (rsi_1.d + 1) * 2)
    int16_t* var_78
    int64_t* rax_1
    double zmm0_1
    rax_1, zmm0_1 = sub_140a36020(&var_88, &var_78)
    int16_t* var_68
    int64_t* rax_2 = sub_140a35790(rax_1, &var_68)
    
    if (&var_88 != rax_2)
        int16_t* rcx_6 = var_88
        
        if (rcx_6 != 0)
            zmm0_1 = sub_140a74f90(rcx_6)
        
        var_88 = *rax_2
        *rax_2 = 0
        var_80_1.d = rax_2[1].d
        var_80_1:4.d = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int16_t* rcx_8 = var_68
    
    if (rcx_8 != 0)
        zmm0_1 = sub_140a74f90(rcx_8)
    
    int16_t* rcx_9 = var_78
    
    if (rcx_9 != 0)
        zmm0_1 = sub_140a74f90(rcx_9)
    
    int16_t* const _String = &data_142d40450
    
    if (var_80_1.d != 0)
        _String = var_88
    
    _wtof(_String)
    int16_t* var_98 = nullptr
    int16_t* const string = &data_142d40450
    
    if (var_80_1.d != 0)
        string = var_88
    
    int64_t var_90_1 = 0
    int32_t rax_5 = (int.q(_mm_max_ss(fconvert.s(zmm0_1), 0))).d
    
    if (wcschr(string, 0x78) == 0)
    label_1423ea5bc:
        int16_t* rcx_48 = var_98
        
        if (rcx_48 != 0)
            sub_140a74f90(rcx_48)
        
        int16_t* rcx_49 = var_88
        
        if (rcx_49 != 0)
            sub_140a74f90(rcx_49)
        
        result.b = 0
    else
        int16_t* const string_1 = &data_142d40450
        
        if (var_80_1.d != 0)
            string_1 = var_88
        
        void* _String_1 = &wcschr(string_1, 0x78)[1]
        
        if (var_98 != _String_1)
            int32_t rdi_2
            
            if (_String_1 == 0 || *_String_1 == 0)
                rdi_2 = 0
            else
                do
                    rdi_1 += 1
                while (*(_String_1 + (rdi_1 << 1)) != 0)
                
                rdi_2 = rdi_1.d + 1
            
            int32_t rcx_10 = var_90_1:4.d
            
            if (rcx_10 != rdi_2)
                sub_1405947f0(&var_98, rdi_2)
                rcx_10 = var_90_1:4.d
            
            int32_t rax_7 = var_90_1.d + rdi_2
            var_90_1.d = rax_7
            
            if (rax_7 s> rcx_10)
                sub_140594770(&var_98)
            
            if (rdi_2 != 0)
                memcpy(var_98, _String_1, rdi_2 * 2)
        
        int64_t* rax_8
        double zmm0_2
        rax_8, zmm0_2 = sub_140a36020(&var_98, &var_68)
        
        if (&var_98 != rax_8)
            int16_t* rcx_15 = var_98
            
            if (rcx_15 != 0)
                zmm0_2 = sub_140a74f90(rcx_15)
            
            var_98 = *rax_8
            *rax_8 = 0
            var_90_1.d = rax_8[1].d
            var_90_1:4.d = *(rax_8 + 0xc)
            rax_8[1] = 0
        
        int16_t* rcx_17 = var_68
        
        if (rcx_17 != 0)
            result, zmm0_2 = sub_140a74f90(rcx_17)
        
        if (_String_1 == 0)
            goto label_1423ea5bc
        
        int32_t rcx_18 = var_90_1.d
        
        if (rcx_18 == 0)
            goto label_1423ea5bc
        
        int32_t rdi_4 = rcx_18 - 1
        
        if (rdi_4 s<= 0)
            goto label_1423ea5bc
        
        int32_t r8_4 = 0
        var_68 = nullptr
        
        if (rdi_4 - 1 s>= 0)
            r8_4 = rdi_4 - 1
        
        int64_t r9 = sx.q(r8_4)
        
        if (sx.q(rdi_4) + 0x7ffffffe s< r9)
            rdi_4 = r8_4
        else if (sx.q(rdi_4) + 0x7ffffffe s< sx.q(rdi_4))
            rdi_4 += 0x7ffffffe
        
        int16_t* rax_12 = var_98
        int32_t rdi_5 = rdi_4 - r8_4
        int16_t* r14_1 = nullptr
        var_78 = nullptr
        int32_t rsi_4 = 0
        int64_t var_70_1 = 0
        int32_t r12_1 = 0
        int16_t* r13_1 = &rax_12[r9]
        
        if (r13_1 != 0 && *r13_1 != 0 && rdi_5 s> 0)
            if (rdi_5 + 1 s> 0)
                sub_1405947f0(&var_78, rdi_5 + 1)
                r12_1 = var_70_1:4.d
                rsi_4 = var_70_1.d
                r14_1 = var_78
            
            rsi_4 += rdi_5 + 1
            var_70_1.d = rsi_4
            
            if (rsi_4 s> r12_1)
                sub_140594770(&var_78)
                r12_1 = var_70_1:4.d
                rsi_4 = var_70_1.d
                r14_1 = var_78
            
            zmm0_2 = UnDecorator::getReferenceType(r14_1, r13_1, rdi_5 * 2)
            r14_1[sx.q(rsi_4) - 1] = 0
            int16_t* rcx_22 = var_68
            
            if (rcx_22 != 0)
                zmm0_2 = sub_140a74f90(rcx_22)
            
            rcx_18 = var_90_1.d
        
        var_68 = r14_1
        int32_t rax_14 = rcx_18 - 1
        int32_t var_5c_1 = r12_1
        
        if (rcx_18 == 0)
            rax_14 = 0
        
        int32_t rdi_6 = rcx_18 - 1
        
        if (rcx_18 == 0)
            rdi_6 = 0
        
        int32_t rdx_14
        
        if (rax_14 - 2 s>= 0)
            rdx_14 = rdi_6
            
            if (rax_14 - 2 s< rdi_6)
                rdx_14 = rax_14 - 2
        else
            rdx_14 = 0
        
        int64_t r9_1 = sx.q(rdx_14)
        
        if (sx.q(rax_14 - 2) + 0x7fffffff s< r9_1)
            rdi_6 = rdx_14
        else if (sx.q(rax_14 - 2) + 0x7fffffff s< sx.q(rdi_6))
            rdi_6 = rax_14 + 0x17ffffffd
        
        var_78 = nullptr
        int16_t* const r13_2 = &data_142d40450
        int64_t var_70_2 = 0
        int16_t* const rax_17 = &data_142d40450
        int16_t* rsi_6 = nullptr
        
        if (rcx_18 != 0)
            rax_17 = var_98
        
        int32_t r14_2 = 0
        int32_t rdi_7 = rdi_6 - rdx_14
        void* r12_2 = &rax_17[r9_1]
        int32_t rax_18 = 0
        
        if (r12_2 != 0 && *r12_2 != 0 && rdi_7 s> 0)
            if (rdi_7 + 1 s> 0)
                sub_1405947f0(&var_78, rdi_7 + 1)
                rax_18 = var_70_2:4.d
                r14_2 = var_70_2.d
                rsi_6 = var_78
            
            r14_2 = r14_2 + 1 + rdi_7
            var_70_2.d = r14_2
            
            if (r14_2 s> rax_18)
                sub_140594770(&var_78)
                r14_2 = var_70_2.d
                rsi_6 = var_78
            
            zmm0_2 = UnDecorator::getReferenceType(rsi_6, r12_2, rdi_7 * 2)
            rsi_6[sx.q(r14_2) - 1] = 0
        
        int32_t* rdi_8 = arg4
        int32_t r12_3 = *rdi_8
        
        if (sub_140a24720(&var_68) == 0)
            int16_t* const rcx_27 = &data_142d40450
            int32_t rdi_9 = 0
            
            if (r14_2 != 0)
                rcx_27 = rsi_6
            
            int32_t rax_21 = sub_140a54510(rcx_27, &data_143340a48)
            
            if (rax_21 != 0)
                int16_t* rcx_28 = &data_142d40450
                
                if (rsi_4 != 0)
                    rcx_28 = var_68
                
                if (sub_140a54510(rcx_28, &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[
                        0x26]) != 0)
                    if (rsi_4 != 0)
                        r13_2 = var_68
                    
                    int32_t rax_23 = sub_140a54510(r13_2, &data_142d8c8e8)
                    
                    if (rax_23 == 0)
                        r12_3 = rax_23 + 2
                        rdi_9 = 1
                else
                    r12_3 = 0
                    rdi_9 = 1
            else
                rdi_9 = rax_21 + 2
                r12_3 = rax_21 + 1
            
            int32_t rax_26 = var_90_1.d
            int32_t rdx_18 = rax_26 - 1
            
            if (rax_26 == 0)
                rdx_18 = 0
            
            int32_t rdx_19 = rdx_18 - rdi_9
            int32_t rcx_30 = rax_26 - 1
            
            if (rax_26 == 0)
                rcx_30 = 0
            
            int32_t r10_1
            
            if (rdx_19 s>= 0)
                r10_1 = rcx_30
                
                if (rdx_19 s< rcx_30)
                    r10_1 = rdx_19
            else
                r10_1 = 0
            
            int32_t rcx_31 = rcx_30 - r10_1
            
            if (rax_26 != 0)
                rbx_1 = rax_26 - 1
            
            int32_t rbx_2 = rbx_1 - r10_1
            
            if (rcx_31 s>= 0)
                if (rcx_31 s< rbx_2)
                    rbx_2 = rcx_31
                
                if (rbx_2 != 0)
                    int32_t rcx_33 = rax_26 - rbx_2
                    
                    if (rcx_33 != r10_1)
                        int16_t* r9_2 = var_98
                        memmove(&r9_2[sx.q(r10_1)], &r9_2[sx.q(rbx_2 + r10_1)], 
                            (rcx_33 - r10_1) * 2)
                        rax_26 = var_90_1.d
                    
                    var_90_1.d = rax_26 - rbx_2
            
            zmm0_2 = _DeleteExceptionPtr(&var_98)
            rdi_8 = arg4
        
        if (sub_140a24720(&var_98).b == 0)
            if (rsi_6 != 0)
                sub_140a74f90(rsi_6)
            
            int16_t* rcx_47 = var_68
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            goto label_1423ea5bc
        
        _wtof(_String_1)
        *arg2 = rax_5
        *arg3 = int.q(_mm_max_ss(fconvert.s(zmm0_2), 0)).d
        *rdi_8 = r12_3
        
        if (rsi_6 != 0)
            sub_140a74f90(rsi_6)
        
        int16_t* rcx_43 = var_68
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        int16_t* rcx_44 = var_98
        
        if (rcx_44 != 0)
            sub_140a74f90(rcx_44)
        
        int16_t* rcx_45 = var_88
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        result.b = 1

return result

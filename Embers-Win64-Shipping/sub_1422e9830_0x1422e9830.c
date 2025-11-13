// 函数: sub_1422e9830
// 地址: 0x1422e9830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg3
int64_t* var_c0 = nullptr
int32_t i_8 = 0
int128_t zmm6 = sub_140af5330(data_143ddb400, &data_143de5800, &var_c0)
int32_t i_6 = i_8
int64_t result = 0
*arg2 = 0xffffffff
int32_t r15 = 0
int32_t var_e4 = 0

if (i_6 s> 0)
    uint64_t r14
    uint64_t var_38_1 = r14
    int128_t var_58_1 = zmm6
    int64_t var_a8_1 = 0
    
    do
        int64_t* rdi = var_c0
        uint64_t var_a0 = 0
        uint64_t r13_1 = 0
        int32_t var_94_1 = 0
        int32_t rsi_1 = 0
        int64_t var_88 = 0
        r14.b = 0
        int32_t var_80_1 = 0
        int16_t* _String_5 = nullptr
        int32_t var_70_1 = 0
        int64_t var_d0 = 0
        int32_t var_c8_1 = 0
        sub_1405947f0(&var_d0, 2)
        int32_t rax = var_c8_1 + 2
        var_c8_1 = rax
        
        if (rax s> 0)
            sub_140594770(&var_d0)
        
        int64_t rbx_1 = var_d0
        UnDecorator::getReferenceType(rbx_1, &data_142e6d328, 4)
        char rax_1 = sub_14060a620(&rdi[sx.q(r15) * 2], &var_d0, &var_88, &_String_5, 1, 0)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        int64_t rdi_1 = var_88
        int16_t* _String_2 = _String_5
        int32_t var_b0
        
        if (rax_1 != 0)
            rsi_1 = var_80_1
            
            if (rsi_1 != 0)
                sub_1405a4c70(&var_a0, rsi_1, 0)
                r13_1 = var_a0
                memcpy(r13_1, rdi_1, rsi_1 * 2)
            
            int16_t* const _String = &data_142d40450
            
            if (var_70_1 != 0)
                _String = _String_2
            
            var_b0 = _wtoi(_String)
            r14.b = 1
        
        if (_String_2 != 0)
            sub_140a74f90(_String_2)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        if (r14.b != 0)
            int16_t* rbx_2 = nullptr
            uint64_t var_68 = 0
            int32_t rdi_2 = arg1[1].d
            r14 = *arg1
            
            if (rdi_2 != 0)
                sub_1405a4c70(&var_68, rdi_2, 0)
                rbx_2 = var_68
                memcpy(rbx_2, r14, rdi_2 * 2)
            else
                int32_t var_5c_1 = 0
            
            int16_t* rdx_6 = &data_142d40450
            uint64_t rcx_14 = &data_142d40450
            
            if (rdi_2 != 0)
                rdx_6 = rbx_2
            
            if (rsi_1 != 0)
                rcx_14 = r13_1
            
            rdi_2.b = sub_140a54510(rcx_14, rdx_6) == 0
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            if (rdi_2.b != 0)
                int64_t* rax_7 = &var_c0[var_a8_1 * 2]
                uint64_t var_118 = 0
                int32_t i_7 = 0
                int16_t* rdx_7
                
                if (rax_7[1].d == 0)
                    rdx_7 = &data_142d40450
                else
                    rdx_7 = *rax_7
                
                sub_140af4f20(data_143ddb400, rdx_7, &var_118, &data_143de5800)
                int32_t i_4 = i_7
                int32_t var_e8_1 = 0
                
                if (i_4 s<= 0)
                label_1422e9e1b:
                    int32_t rcx_37 = var_b0
                    
                    if (*arg2 s>= rcx_37)
                        rcx_37 = *arg2
                    
                    *arg2 = rcx_37
                    
                    if (r12 != 0 && r12 != &var_118)
                        int32_t i_5 = r12[1].d
                        int64_t* rdi_4 = *r12
                        
                        if (i_5 != 0)
                            int32_t i
                            
                            do
                                int64_t rcx_38 = *rdi_4
                                
                                if (rcx_38 != 0)
                                    sub_140a74f90(rcx_38)
                                
                                rdi_4 = &rdi_4[2]
                                i = i_5
                                i_5 -= 1
                            while (i != 1)
                            i_4 = i_7
                        
                        r14 = var_118
                        int32_t r8_13 = *(r12 + 0xc)
                        r12[1].d = i_4
                        
                        if (i_4 != 0 || r8_13 != 0)
                            sub_1405a4be0(r12, i_4, r8_13)
                            int64_t* rdi_5 = *r12
                            
                            if (i_4 != 0)
                                int32_t i_1
                                
                                do
                                    *rdi_5 = 0
                                    int32_t rsi_7 = *(r14 + 8)
                                    int64_t r15_4 = *r14
                                    rdi_5[1].d = rsi_7
                                    
                                    if (rsi_7 != 0)
                                        sub_1405a4c70(rdi_5, rsi_7, 0)
                                        memcpy(*rdi_5, r15_4, rsi_7 * 2)
                                    else
                                        *(rdi_5 + 0xc) = 0
                                    
                                    rdi_5 = &rdi_5[2]
                                    r14 += 0x10
                                    i_1 = i_4
                                    i_4 -= 1
                                while (i_1 != 1)
                            
                            i_4 = i_7
                        else
                            *(r12 + 0xc) = 0
                else
                    int64_t rcx_17 = 0
                    int64_t var_90_1 = 0
                    
                    while (true)
                        int64_t* r15_3 = var_118 + rcx_17
                        int32_t arg_20 = 0
                        int16_t* var_e0 = nullptr
                        int16_t* r12_1 = nullptr
                        int32_t var_d8_1 = 0
                        uint64_t _String_3 = 0
                        int32_t rsi_2 = 0
                        sub_1405947f0(&var_e0, 2)
                        r14 = zx.q(var_d8_1 + 2)
                        var_d8_1 = r14.d
                        
                        if (r14.d s> 0)
                            sub_140594770(&var_e0)
                            r14 = zx.q(var_d8_1)
                        
                        int16_t* rbx_3 = var_e0
                        UnDecorator::getReferenceType(rbx_3, &data_142e1462c, 4)
                        int16_t* const rdx_9 = &data_142d40450
                        
                        if (r14.d != 0)
                            rdx_9 = rbx_3
                        
                        int32_t rax_8
                        int32_t r8_7
                        int128_t zmm0_1
                        rax_8, r8_7, zmm0_1 = sub_140a23cf0(r15_3, rdx_9, 1, 0, 0xffffffff)
                        
                        if (rax_8 s>= 0)
                            int32_t rax_9 = r15_3[1].d
                            int16_t* rdi_3
                            
                            if (rax_9 == 0)
                                rdi_3 = &data_142d40450
                            else
                                rdi_3 = *r15_3
                            
                            int32_t rbx_4 = rax_9 - 1
                            int16_t* var_108 = nullptr
                            int32_t rax_10 = 0
                            arg_20 = 0
                            
                            if (rax_9 == 0)
                                rbx_4 = 0
                            
                            int32_t var_100_1 = 0
                            int32_t var_fc_1 = 0
                            r12_1 = nullptr
                            int32_t rsi_3 = 0
                            
                            if (rax_8 s< rbx_4)
                                rbx_4 = rax_8
                            
                            if (rdi_3 != 0 && *rdi_3 != 0 && rbx_4 s> 0)
                                if (rbx_4 + 1 s> 0)
                                    sub_1405947f0(&var_108, rbx_4 + 1)
                                    rax_10 = var_fc_1
                                    rsi_3 = var_100_1
                                    r12_1 = var_108
                                
                                int32_t rsi_5 = rbx_4 + 1 + rsi_3
                                arg_20 = rsi_5
                                
                                if (rsi_5 s> rax_10)
                                    sub_140594770(&var_108)
                                    r12_1 = var_108
                                    arg_20 = rsi_5
                                
                                zmm0_1 = UnDecorator::getReferenceType(r12_1, rdi_3, rbx_4 * 2)
                                r12_1[sx.q(rsi_5) - 1] = 0
                            
                            var_108 = nullptr
                            var_100_1.q = 0
                            int32_t r14_1
                            
                            if (r14.d == 0)
                                r14_1 = 0
                            else
                                r14_1 = r14.d - 1
                            
                            r8_7 = r15_3[1].d
                            int32_t rax_12 = r14_1 + rax_8
                            int32_t rbx_5 = r8_7 - 1
                            
                            if (r8_7 == 0)
                                rbx_5 = 0
                            
                            int32_t rcx_25
                            
                            if (rax_12 s>= 0)
                                rcx_25 = rbx_5
                                
                                if (rax_12 s< rbx_5)
                                    rcx_25 = rax_12
                            else
                                rcx_25 = 0
                            
                            int64_t r9_2 = sx.q(rcx_25)
                            
                            if (sx.q(rax_12) + 0x7fffffff s< r9_2)
                                rbx_5 = rcx_25
                            else if (sx.q(rax_12) + 0x7fffffff s< sx.q(rbx_5))
                                rbx_5 = rax_12 + 0x7fffffff
                            
                            int16_t* const rax_14
                            
                            if (r8_7 == 0)
                                rax_14 = &data_142d40450
                            else
                                rax_14 = *r15_3
                            
                            r14 = &rax_14[r9_2]
                            uint64_t _String_4 = 0
                            rbx_3 = zx.q(rbx_5 - rcx_25)
                            int32_t var_f0_1 = 0
                            int32_t rax_15 = 0
                            _String_3 = 0
                            int32_t var_ec_1 = 0
                            rsi_2 = 0
                            
                            if (r14 != 0 && *r14 != 0 && rbx_3.d s> 0)
                                int32_t rdx_15 = (rbx_3 + 1).d
                                
                                if (rdx_15 s> 0)
                                    sub_1405947f0(&_String_4, rdx_15)
                                    rax_15 = var_ec_1
                                    rsi_2 = var_f0_1
                                    _String_3 = _String_4
                                
                                rsi_2 += (rbx_3 + 1).d
                                
                                if (rsi_2 s> rax_15)
                                    sub_140594770(&_String_4)
                                    _String_3 = _String_4
                                
                                r8_7, zmm0_1 =
                                    UnDecorator::getReferenceType(_String_3, r14, rbx_3.d * 2)
                                *(_String_3 + (sx.q(rsi_2) << 1) - 2) = 0
                            
                            _String_4 = 0
                            rbx_3.b = 1
                            var_f0_1.q = 0
                        else
                            rbx_3.b = 0
                        
                        int16_t* rcx_29 = var_e0
                        
                        if (rcx_29 != 0)
                            r8_7, zmm0_1 = sub_140a74f90(rcx_29)
                        
                        if (rbx_3.b != 0)
                            int64_t* rcx_30 = data_143db18d0
                            
                            if (rcx_30 == 0)
                                r8_7, zmm0_1 = sub_140a53c40()
                                rcx_30 = data_143db18d0
                            
                            int16_t* const rdx_18 = &data_142d40450
                            r8_7.b = 1
                            
                            if (arg_20 != 0)
                                rdx_18 = r12_1
                            
                            int64_t* rax_18 = (*(*rcx_30 + 0xb0))(rcx_30, rdx_18, r8_7)
                            
                            if (rax_18 != 0)
                                int64_t rdx_19 = *rax_18
                                (*(rdx_19 + 0x98))(rax_18, rdx_19)
                                int16_t* const _String_1 = &data_142d40450
                                
                                if (rsi_2 != 0)
                                    _String_1 = _String_3
                                
                                _wtof(_String_1)
                                
                                if (fconvert.s(zmm0_1.q) f!= zmm0_1.d)
                                    if (_String_3 != 0)
                                        sub_140a74f90(_String_3)
                                    
                                    if (r12_1 != 0)
                                        sub_140a74f90(r12_1)
                                    
                                    break
                        
                        if (_String_3 != 0)
                            sub_140a74f90(_String_3)
                        
                        if (r12_1 != 0)
                            sub_140a74f90(r12_1)
                        
                        int32_t r13_4 = var_e8_1 + 1
                        i_4 = i_7
                        rcx_17 = var_90_1 + 0x10
                        var_e8_1 = r13_4
                        var_90_1 = rcx_17
                        
                        if (r13_4 s>= i_4)
                            r12 = arg3
                            goto label_1422e9e1b
                    
                    i_4 = i_7
                
                uint64_t rdi_6 = var_118
                
                if (i_4 != 0)
                    int32_t i_2
                    
                    do
                        int64_t rcx_42 = *rdi_6
                        
                        if (rcx_42 != 0)
                            sub_140a74f90(rcx_42)
                        
                        rdi_6 += 0x10
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
                
                uint64_t rcx_43 = var_118
                
                if (rcx_43 != 0)
                    sub_140a74f90(rcx_43)
                
                r12 = arg3
        
        uint64_t rcx_44 = var_a0
        
        if (rcx_44 != 0)
            sub_140a74f90(rcx_44)
        
        result = 0
        var_a8_1 += 1
        r15 = var_e4 + 1
        i_6 = i_8
        var_e4 = r15
    while (r15 s< i_6)

int64_t* rbx_6 = var_c0

if (i_6 != 0)
    int32_t i_3
    
    do
        int64_t rcx_45 = *rbx_6
        
        if (rcx_45 != 0)
            result = sub_140a74f90(rcx_45)
        
        rbx_6 = &rbx_6[2]
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)
    rbx_6 = var_c0

if (rbx_6 == 0)
    return result

return sub_140a74f90(rbx_6)

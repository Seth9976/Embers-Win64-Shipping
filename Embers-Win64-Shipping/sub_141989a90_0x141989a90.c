// 函数: sub_141989a90
// 地址: 0x141989a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rax_2 = arg1[1].d
int64_t r12 = 0
int16_t* const r8 = arg2
int16_t* const var_a0 = arg2
int32_t rdx = rax_2 - 1

if (rax_2 == 0)
    rdx = 0

uint32_t result

if (rdx s<= 1)
    result = arg1[3].d

if (rdx s<= 1 && (result == 0 || result - 1 s<= 1))
    result.b = 1
else
    int16_t* const _String_5 = &data_142d40450
    
    if (arg1[5].d s<= 1)
        goto label_141989b35
    
    int16_t* rdx_1
    
    if (*(r8 + 0x60) == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *(r8 + 0x58)
    
    int16_t* const rcx
    
    if (arg1[5].d == 0)
        rcx = &data_142d40450
    else
        rcx = arg1[4]
    
    if (sub_140a54510(rcx, rdx_1) == 0)
        r8 = var_a0
    label_141989b35:
        uint32_t rbx_1
        void* _String_6
        int16_t* var_98
        wchar16* _String_8
        int16_t* _String_9
        
        if (arg1[1].d s<= 1)
            int64_t var_38_1 = arg3
            _String_8 = nullptr
            int32_t var_70_1 = 0
            __builtin_memset(&var_98, 0, 0x1c)
            _String_9 = nullptr
            int32_t var_58_1 = 0
            int16_t* const rax_10
            
            if (arg1[3].d == 0)
                rax_10 = &data_142d40450
            else
                rax_10 = arg1[2]
            
            int32_t rax_11 = iswdigit(rax_10[1])
            int32_t rdi_1 = arg1[3].d
            void* _String_13
            
            if (rdi_1 == 0)
                _String_13 = &data_142d40450
            else
                _String_13 = arg1[2]
            
            _String_6 = _String_13
            int32_t rax_13 = sub_14197a1b0(&_String_6)
            
            if (rax_13 == 0)
                rax_13 = 1
            
            _String_6.d = rax_13
            int32_t rdi_2
            int16_t* r13_1
            
            if (rdi_1 == 0)
                r13_1 = &data_142d40450
                rdi_2 = 0
            else
                r13_1 = arg1[2]
                rdi_2 = rdi_1 - 1
            
            int64_t var_d8 = 0
            
            if (sbb.d(arg3.d, arg3.d, rax_11 != 0) + 2 s< rdi_2)
                rdi_2 = sbb.d(arg3.d, arg3.d, rax_11 != 0) + 2
            
            int64_t var_d0_1 = 0
            int32_t rdx_7 = 0
            int32_t rcx_9 = 0
            
            if (r13_1 != 0 && *r13_1 != 0 && rdi_2 s> 0)
                if (rdi_2 + 1 s> 0)
                    sub_1405947f0(&var_d8, rdi_2 + 1)
                    rcx_9 = var_d0_1:4.d
                    rdx_7 = var_d0_1.d
                    r12 = var_d8
                
                int32_t rax_16 = rdi_2 + 1 + rdx_7
                var_d0_1.d = rax_16
                
                if (rax_16 s> rcx_9)
                    sub_140594770(&var_d8)
                    r12 = var_d8
                
                UnDecorator::getReferenceType(r12, r13_1, rdi_2 * 2)
                *(r12 + (sx.q(var_d0_1.d) << 1) - 2) = 0
            
            int32_t rax_18 = arg1[3].d
            int32_t rcx_13 = rax_18 - 1
            
            if (rax_18 == 0)
                rcx_13 = 0
            
            int16_t* const r8_4
            
            if (rax_18 == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = arg1[2]
            
            int32_t rax_20 = rcx_13 - (sbb.d(arg3.d, arg3.d, rax_11 != 0) + 2)
            int32_t rdx_10
            
            if (rcx_13 - (sbb.d(arg3.d, arg3.d, rax_11 != 0) + 2) s>= 0)
                rdx_10 = rcx_13
                
                if (rax_20 s< rcx_13)
                    rdx_10 = rax_20
            else
                rdx_10 = 0
            
            int32_t rdx_11 = 0
            int64_t var_b0 = 0
            int32_t var_a8_1 = 0
            int16_t* rdi_3 = &r8_4[sx.q(rcx_13) - sx.q(rdx_10)]
            int32_t rcx_16 = 0
            int32_t var_a4_1 = 0
            
            if (rdi_3 != 0 && *rdi_3 != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (rdi_3[rbx_2] != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_b0, rbx_2.d + 1)
                    rcx_16 = var_a4_1
                    rdx_11 = var_a8_1
                
                int32_t rax_22 = rbx_2.d + 1 + rdx_11
                int32_t var_a8_2 = rax_22
                
                if (rax_22 s> rcx_16)
                    sub_140594770(&var_b0)
                
                UnDecorator::getReferenceType(var_b0, rdi_3, (rbx_2.d + 1) * 2)
            
            var_d8 = 0
            int32_t var_d0_2 = 0
            sub_1405947f0(&var_d8, 2)
            int32_t rax_23 = var_d0_2 + 2
            var_d0_2 = rax_23
            
            if (rax_23 s> 0)
                sub_140594770(&var_d8)
            
            int64_t rbx_4 = var_d8
            UnDecorator::getReferenceType(rbx_4, &data_142d404b0, 4)
            sub_14060a620(&var_b0, &var_d8, &var_98, &_String_9, 0, 1)
            
            if (rbx_4 != 0)
                sub_140a74f90(rbx_4)
            
            var_d8 = 0
            int32_t var_d0_3 = 0
            sub_1405947f0(&var_d8, 2)
            int32_t rax_24 = var_d0_3 + 2
            var_d0_3 = rax_24
            
            if (rax_24 s> 0)
                sub_140594770(&var_d8)
            
            int64_t rbx_5 = var_d8
            UnDecorator::getReferenceType(rbx_5, &data_142d404b0, 4)
            int16_t* _String_7
            sub_14060a620(&var_98, &var_d8, &_String_8, &_String_7, 0, 1)
            
            if (rbx_5 != 0)
                sub_140a74f90(rbx_5)
            
            int16_t* const _String = &data_142d40450
            int32_t var_80
            
            if (var_80 != 0)
                _String = _String_7
            
            int32_t rax_25 = _wtoi(_String)
            wchar16* _String_1 = &data_142d40450
            
            if (var_70_1 != 0)
                _String_1 = _String_8
            
            int32_t rax_26 = _wtoi(_String_1)
            int16_t* _String_2 = &data_142d40450
            
            if (var_58_1 != 0)
                _String_2 = _String_9
            
            int64_t var_c0
            sub_140b0a2c0(&var_c0, _wtoi(_String_2), rax_26, rax_25, 0, 0, 0, 0)
            var_d8 = 0
            int32_t var_d0_4 = 0
            sub_1405947f0(&var_d8, 2)
            int32_t rax_28 = var_d0_4 + 2
            var_d0_4 = rax_28
            
            if (rax_28 s> 0)
                sub_140594770(&var_d8)
            
            int64_t rbx_7 = var_d8
            UnDecorator::getReferenceType(rbx_7, &data_142d404b0, 4)
            sub_14060a620(&var_a0[0x24], &var_d8, &var_98, &_String_9, 0, 1)
            
            if (rbx_7 != 0)
                sub_140a74f90(rbx_7)
            
            var_d8 = 0
            int32_t var_d0_5 = 0
            sub_1405947f0(&var_d8, 2)
            int32_t rax_29 = var_d0_5 + 2
            var_d0_5 = rax_29
            
            if (rax_29 s> 0)
                sub_140594770(&var_d8)
            
            int64_t rbx_8 = var_d8
            UnDecorator::getReferenceType(rbx_8, &data_142d404b0, 4)
            sub_14060a620(&var_98, &var_d8, &_String_8, &_String_7, 0, 1)
            
            if (rbx_8 != 0)
                sub_140a74f90(rbx_8)
            
            int16_t* _String_3 = &data_142d40450
            int16_t* _String_11 = _String_7
            
            if (var_80 != 0)
                _String_3 = _String_11
            
            int32_t rax_30 = _wtoi(_String_3)
            wchar16* _String_4 = &data_142d40450
            wchar16* _String_10 = _String_8
            
            if (var_70_1 != 0)
                _String_4 = _String_10
            
            uint32_t rax_31 = _wtoi(_String_4)
            int16_t* _String_12 = _String_9
            
            if (var_58_1 != 0)
                _String_5 = _String_12
            
            int64_t var_b8
            sub_140b0a2c0(&var_b8, _wtoi(_String_5), rax_31, rax_30, 0, 0, 0, 0)
            
            if (_String_6.d - 1 u> 5)
                rbx_1.b = 0
            else
                switch (_String_6.d)
                    case 1
                        rbx_1.b = var_b8 == var_c0
                    case 2
                        rbx_1.b = var_b8 != var_c0
                    case 3
                        rbx_1.b = var_b8 s> var_c0
                    case 4
                        rbx_1.b = var_b8 s>= var_c0
                    case 5
                        rbx_1.b = var_b8 s< var_c0
                    case 6
                        rbx_1.b = var_b8 s<= var_c0
            
            int64_t rcx_46 = var_b0
            
            if (rcx_46 != 0)
                sub_140a74f90(rcx_46)
            
            if (r12 != 0)
                sub_140a74f90(r12)
            
            if (_String_12 != 0)
                sub_140a74f90(_String_12)
            
            int16_t* rcx_49 = var_98
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
            
            if (_String_10 != 0)
                sub_140a74f90(_String_10)
            
            if (_String_11 != 0)
                sub_140a74f90(_String_11)
        else
            int64_t* rax_3 = sub_140b6cc50(r8, &var_98)
            int16_t* const rdx_3
            
            if (rax_3[1].d == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *rax_3
            
            if (arg1[1].d != 0)
                _String_5 = *arg1
            
            int16_t rcx_2 = *_String_5
            _String_6 = _String_5
            int32_t r14_1
            
            if (rcx_2 == 0x3d && _String_5[1] == rcx_2)
                _String_6 = &_String_5[2]
                r14_1 = 1
            else if (rcx_2 == 0x21 && _String_5[1] == 0x3d)
                r14_1 = 2
                _String_6 = &_String_5[2]
            else if (rcx_2 == 0x3e)
                bool cond:7_1 = _String_5[1] != 0x3d
                _String_6 = &_String_5[1]
                
                if (cond:7_1)
                    r14_1 = 3
                else
                    r14_1 = 4
                    _String_6 = &_String_5[2]
            else if (rcx_2 != 0x3c)
                r14_1 = 1
            else
                bool cond:9_1 = _String_5[1] != 0x3d
                _String_6 = &_String_5[1]
                
                if (cond:9_1)
                    r14_1 = 5
                else
                    r14_1 = 6
                    _String_6 = &_String_5[2]
            
            var_a0 = rdx_3
            __builtin_memset(&_String_8, 0, 0x30)
            sub_14197a090(&_String_8, &var_a0)
            sub_14197a090(&_String_9, &_String_6)
            char rax_5 = sub_14195b960(&_String_8, r14_1, &_String_9)
            int16_t* rcx_6 = var_98
            rbx_1 = zx.d(rax_5)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
        result = zx.d(rbx_1.b)
    else
        result.b = 0

__security_check_cookie(rax_1 ^ &var_118)
return result

// 函数: sub_141806f20
// 地址: 0x141806f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
int64_t* rcx = *arg2

if (rcx != 0)
    int32_t rax_2 = (*(*rcx + 0x40))(rcx)
    
    if (rax_2 == 0x1ad || rax_2 == 0x1f7)
        int64_t var_68 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 0xc)
        int32_t rax_3 = var_60_1 + 0xc
        var_60_1 = rax_3
        int32_t var_5c
        
        if (rax_3 s> var_5c)
            sub_140594770(&var_68)
        
        int64_t zmm0_1 = UnDecorator::getReferenceType(var_68, u"Retry-After", 0x18)
        int64_t* rcx_4 = *arg2
        int16_t* _String_2
        (*(*rcx_4 + 0x10))(rcx_4, &_String_2, &var_68)
        int64_t rcx_5 = var_68
        
        if (rcx_5 != 0)
            zmm0_1 = sub_140a74f90(rcx_5)
        
        int32_t var_40
        
        if (var_40 s<= 1)
            int64_t var_58 = 0
            int32_t var_50_1 = 0
            sub_1405947f0(&var_58, 0x13)
            int32_t rax_9 = var_50_1 + 0x13
            var_50_1 = rax_9
            
            if (rax_9 s> 0)
                sub_140594770(&var_58)
            
            UnDecorator::getReferenceType(var_58, u"X-Rate-Limit-Reset", 0x26)
            int64_t* rcx_12 = *arg2
            int16_t* _String_3
            (*(*rcx_12 + 0x10))(rcx_12, &_String_3, &var_58)
            int64_t rcx_13 = var_58
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int32_t var_30
            
            if (var_30 s> 1)
                int16_t* const _String_1 = &data_142d40450
                
                if (var_30 != 0)
                    _String_1 = _String_3
                
                void arg_20
                int64_t rbx_2 =
                    _wtoi64(_String_1) * 0x989680 + *sub_140b0a2c0(&arg_20, 0x7b2, 1, 1, 0, 0, 0, 0)
                int64_t arg_18
                sub_140b29d90(&arg_18)
                *arg1 = float.d(rbx_2 - arg_18) f* 9.9999999999999995e-08
                arg1[1].b = 1
            
            int16_t* _String_4 = _String_3
            
            if (_String_4 != 0)
                sub_140a74f90(_String_4)
        else
            int64_t arg_8
            
            if (sub_140a24720(&_String_2) == 0)
                if (sub_140b23ee0(&_String_2, &arg_8) != 0)
                    int64_t arg_10
                    sub_140b29d90(&arg_10)
                    *arg1 = float.d(arg_8 - arg_10) f* 9.9999999999999995e-08
                    arg1[1].b = 1
            else
                int16_t* const _String = &data_142d40450
                
                if (var_40 != 0)
                    _String = _String_2
                
                _wtof(_String)
                int64_t zmm1
                zmm1.d = fconvert.s(zmm0_1)
                *arg1 = _mm_cvtps_pd(zmm1).q
                arg1[1].b = 1
        
        int16_t* _String_5 = _String_2
        
        if (_String_5 != 0)
            sub_140a74f90(_String_5)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rsi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, zx.q(rsi_1))

return arg1

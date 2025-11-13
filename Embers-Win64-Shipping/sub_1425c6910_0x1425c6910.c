// 函数: sub_1425c6910
// 地址: 0x1425c6910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int64_t* rcx = *(arg1 + 0x20)
uint64_t rbx = zx.q(arg2)
int16_t* _String_1 = nullptr
int16_t* _String_2 = nullptr
int32_t r15 = 0
int32_t var_3c = 0
int32_t rdi = 0
int64_t r13
r13.b = 1
wchar16 const* const rdx_3
uint32_t r8_1

if ((*(*rcx + 0x30))(rcx) != 0)
label_1425c6b1c:
    _String_2 = nullptr
    int32_t var_40_1 = 0
    sub_1405947f0(&_String_2, 0x1d)
    int32_t rax_16 = var_40_1 + 0x1d
    var_40_1 = rax_16
    
    if (rax_16 s> var_3c)
        sub_140594770(&_String_2)
    
    r8_1 = 0x3a
    rdx_3 = u"Number Token Abruptly Ended."
label_1425c6b59:
    UnDecorator::getReferenceType(_String_2, rdx_3, r8_1)
    sub_140e88b20(arg1, &_String_2)
    int16_t* _String_3 = _String_2
    
    if (_String_3 != 0)
        sub_140a74f90(_String_3)
    
    rbx.b = 0
else
    while (true)
        int16_t arg_8
        
        if (r13.b == 0)
            int64_t* rcx_1 = *(arg1 + 0x20)
            (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
            *(arg1 + 0x64) += 1
            rbx = zx.q(arg_8)
        else
            arg_8 = rbx.w
            r13.b = 0
        int16_t rax_3 = (rbx - 0x2b).w
        
        if (rax_3 u> 0x3a || not(test_bit(0x400000004007fed, zx.q(rax_3))))
            uint64_t* rcx_13 = *(arg1 + 0x20)
            rbx = *rcx_13
            int64_t rax_19 = (*(rbx + 0x20))(rcx_13)
            (*(rbx + 0x178))(*(arg1 + 0x20), rax_19 - 2)
            *(arg1 + 0x64) -= 1
            
            if (rdi u<= 8 && test_bit(0x14c, rdi))
                if (arg1 + 0x48 == &_String_2)
                    goto label_1425c6c50
                
                int32_t r8_2 = *(arg1 + 0x54)
                *(arg1 + 0x50) = r15
                int16_t* const _String
                
                if (r15 != 0 || r8_2 != 0)
                    sub_1405a4c70(arg1 + 0x48, r15, r8_2)
                    arg3 = memcpy(*(arg1 + 0x48), _String_1, r15 * 2)
                label_1425c6c50:
                    _String = _String_1
                    
                    if (r15 == 0)
                        _String = &data_142d40450
                else
                    *(arg1 + 0x54) = 0
                    _String = &data_142d40450
                
                wcstod(_String, nullptr)
                *(arg1 + 0x58) = arg3
                rbx.b = 1
                break
        else
            if (rdi u> 8)
                _String_2 = nullptr
                int32_t var_40_2 = 0
                sub_1405947f0(&_String_2, 0x2c)
                int32_t rax_18 = var_40_2 + 0x2c
                var_40_2 = rax_18
                
                if (rax_18 s> var_3c)
                    sub_140594770(&_String_2)
                
                r8_1 = 0x58
                rdx_3 = u"Unknown state reached in Json Number Token."
                goto label_1425c6b59
            
            switch (rdi)
                case 0
                    if (rbx.w != 0x2d)
                        goto label_1425c69ff
                    
                    rdi = 1
                label_1425c6aa2:
                    
                    if (r15 s> 0)
                        r14 = r15 - 1
                    
                    int32_t r15_1
                    r15_1.b = r15 s<= 0
                    r15 += r15_1 + 1
                    
                    if (r15 s> var_3c)
                        arg3 = sub_140594770(&_String_2)
                        _String_1 = _String_2
                    
                    int64_t rax_13 = sx.q(r14)
                    r14 = 0
                    _String_1[rax_13] = rbx.w
                    _String_1[rax_13 + 1] = 0
                    goto label_1425c6ae6
                case 1
                label_1425c69ff:
                    
                    if (rbx.w == 0x30)
                        rdi = 2
                        goto label_1425c6aa2
                    
                    if ((rbx - 0x31).w u<= 8)
                        rdi = 3
                        goto label_1425c6a9a
                case 2
                label_1425c6a23:
                    
                    if (rbx.w == 0x2e)
                        rdi = 4
                        goto label_1425c6aa2
                    
                label_1425c6a33:
                    
                    if ((0xffdf & (rbx - 0x45).w) == 0)
                        rdi = 5
                        goto label_1425c6a9a
                case 3
                    if ((rbx - 0x30).w u> 9)
                        goto label_1425c6a23
                    
                    rdi = 3
                label_1425c6a9a:
                    
                    if (rbx.w != 0)
                        goto label_1425c6aa2
                    
                label_1425c6ae6:
                    int64_t* rcx_5 = *(arg1 + 0x20)
                    rbx = zx.q(arg2)
                    
                    if ((*(*rcx_5 + 0x30))(rcx_5) != 0)
                        goto label_1425c6b1c
                    
                    continue
                case 4
                    if ((rbx - 0x30).w u<= 9)
                        rdi = 6
                        goto label_1425c6a9a
                case 5
                    if ((0xfffd & (rbx - 0x2b).w) != 0)
                        goto label_1425c6a8b
                    
                    rdi = 7
                    goto label_1425c6a9a
                case 6
                    if ((rbx - 0x30).w u> 9)
                        goto label_1425c6a33
                    
                    rdi = 6
                    goto label_1425c6a9a
                case 7, 8
                label_1425c6a8b:
                    
                    if ((rbx - 0x30).w u<= 9)
                        rdi = 8
                        goto label_1425c6a9a
        
        _String_2 = nullptr
        int32_t var_40_3 = 0
        sub_1405947f0(&_String_2, 0x21)
        int32_t rax_20 = var_40_3 + 0x21
        var_40_3 = rax_20
        
        if (rax_20 s> var_3c)
            sub_140594770(&_String_2)
        
        r8_1 = 0x42
        rdx_3 = u"Poorly formed Json Number Token."
        goto label_1425c6b59

if (_String_1 != 0)
    sub_140a74f90(_String_1)

return zx.q(rbx.b)

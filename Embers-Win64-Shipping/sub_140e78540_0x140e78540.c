// 函数: sub_140e78540
// 地址: 0x140e78540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
uint64_t rbx = zx.q(arg2)
int16_t* _String_1 = nullptr
int16_t* _String_2 = nullptr
int32_t r15 = 0
int32_t var_3c = 0
int32_t rdi = 0
int64_t r13
r13.b = 1
wchar16 const* const rdx_4
uint32_t r8_1

if ((*(*rcx + 0x30))(rcx) != 0)
label_140e7872c:
    _String_2 = nullptr
    int32_t var_40_1 = 0
    sub_1405947f0(&_String_2, 0x1d)
    int32_t rax_16 = var_40_1 + 0x1d
    var_40_1 = rax_16
    
    if (rax_16 s> var_3c)
        sub_140594770(&_String_2)
    
    r8_1 = 0x3a
    rdx_4 = u"Number Token Abruptly Ended."
label_140e78769:
    UnDecorator::getReferenceType(_String_2, rdx_4, r8_1)
    sub_140e88b20(arg1, &_String_2)
    int16_t* _String_3 = _String_2
    
    if (_String_3 != 0)
        sub_140a74f90(_String_3)
    
    rbx.b = 0
else
    while (true)
        char rdx
        char arg_8
        
        if (r13.b == 0)
            int64_t* rcx_1 = *(arg1 + 0x20)
            (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 1)
            *(arg1 + 0x64) += 1
            rdx = arg_8
        else
            rdx = rbx.b
            arg_8 = rbx.b
            r13.b = 0
        
        if (rdx - 0x2b u> 0x3a || not(test_bit(0x400000004007fed, sx.q(rdx - 0x2b))))
            uint64_t* rcx_13 = *(arg1 + 0x20)
            rbx = *rcx_13
            int64_t rax_19 = (*(rbx + 0x20))(rcx_13)
            (*(rbx + 0x178))(*(arg1 + 0x20), rax_19 - 1)
            *(arg1 + 0x64) -= 1
            
            if (rdi u<= 8 && test_bit(0x14c, rdi))
                if (arg1 + 0x48 == &_String_2)
                    goto label_140e78860
                
                int32_t r8_2 = *(arg1 + 0x54)
                *(arg1 + 0x50) = r15
                int16_t* const _String
                
                if (r15 != 0 || r8_2 != 0)
                    sub_1405a4c70(arg1 + 0x48, r15, r8_2)
                    arg3 = memcpy(*(arg1 + 0x48), _String_1, r15 * 2)
                label_140e78860:
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
                rdx_4 = u"Unknown state reached in Json Number Token."
                goto label_140e78769
            
            switch (rdi)
                case 0
                    if (rdx != 0x2d)
                        goto label_140e78620
                    
                    rdi = 1
                label_140e786ae:
                    
                    if (rdx != 0)
                        int32_t rbx_1
                        
                        if (r15 s<= 0)
                            rbx_1 = 0
                        else
                            rbx_1 = r15 - 1
                        
                        int32_t r15_1
                        r15_1.b = r15 s<= 0
                        r15 += r15_1 + 1
                        
                        if (r15 s> var_3c)
                            arg3 = sub_140594770(&_String_2)
                            _String_1 = _String_2
                        
                        int64_t rax_13 = sx.q(rbx_1)
                        rbx = zx.q(arg2)
                        _String_1[rax_13] = sx.w(rdx)
                        _String_1[rax_13 + 1] = 0
                    
                    int64_t* rcx_5 = *(arg1 + 0x20)
                    
                    if ((*(*rcx_5 + 0x30))(rcx_5) != 0)
                        goto label_140e7872c
                    
                    continue
                case 1
                label_140e78620:
                    
                    if (rdx == 0x30)
                        rdi = 2
                        goto label_140e786ae
                    
                    if (rdx - 0x31 u<= 8)
                        rdi = 3
                        goto label_140e786ae
                case 2
                label_140e7863e:
                    
                    if (rdx == 0x2e)
                        rdi = 4
                        goto label_140e786ae
                    
                label_140e7864d:
                    
                    if (((rdx - 0x45) & 0xdf) == 0)
                        rdi = 5
                        goto label_140e786ae
                case 3
                    if (rdx - 0x30 u> 9)
                        goto label_140e7863e
                    
                    rdi = 3
                    goto label_140e786ae
                case 4
                    if (rdx - 0x30 u<= 9)
                        rdi = 6
                        goto label_140e786ae
                case 5
                    if (((rdx - 0x2b) & 0xfd) != 0)
                        goto label_140e7869b
                    
                    rdi = 7
                    goto label_140e786ae
                case 6
                    if (rdx - 0x30 u> 9)
                        goto label_140e7864d
                    
                    rdi = 6
                    goto label_140e786ae
                case 7, 8
                label_140e7869b:
                    
                    if (rdx - 0x30 u<= 9)
                        rdi = 8
                        goto label_140e786ae
        
        _String_2 = nullptr
        int32_t var_40_3 = 0
        sub_1405947f0(&_String_2, 0x21)
        int32_t rax_20 = var_40_3 + 0x21
        var_40_3 = rax_20
        
        if (rax_20 s> var_3c)
            sub_140594770(&_String_2)
        
        r8_1 = 0x42
        rdx_4 = u"Poorly formed Json Number Token."
        goto label_140e78769

if (_String_1 != 0)
    sub_140a74f90(_String_1)

return zx.q(rbx.b)

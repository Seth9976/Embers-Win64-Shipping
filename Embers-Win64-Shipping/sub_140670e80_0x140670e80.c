// 函数: sub_140670e80
// 地址: 0x140670e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int16_t* _String_1 = nullptr
int16_t* _String_2 = nullptr
int32_t r15 = 0
int32_t var_4c = 0
int32_t rdi = 0
int16_t rbx = arg2
int64_t r13
r13.b = 1
int32_t r12 = 1
int64_t var_78
int64_t var_70
int64_t var_68
int64_t var_60
int32_t rax_17
wchar16 const* const rdx_3
int32_t rbx_1
void* rbx_4
int32_t rdi_2
uint32_t r8_1
int64_t r14_1

if ((*(*rcx + 0x30))(rcx) != 0)
label_1406711e2:
    var_68 = 0
    var_60 = 0
    sub_1405947f0(&var_68, 0x1d)
    rbx_1 = var_60.d + 0x1d
    var_60.d = rbx_1
    
    if (rbx_1 s> 0)
        sub_140594770(&var_68)
        rbx_1 = var_60.d
    
    r14_1 = var_68
    rdx_3 = u"Number Token Abruptly Ended."
    r8_1 = 0x3a
label_140671221:
    UnDecorator::getReferenceType(r14_1, rdx_3, r8_1)
    *(arg1 + 0x64)
    sub_140a2e390(&var_68, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
    int64_t rdi_4
    int32_t r12_1
    int32_t r15_3
    
    if (rbx_1 s> 1)
        int32_t rdi_3 = var_60.d
        
        if (rdi_3 == 0)
            rdi_2 = 0
        else
            rdi_2 = rdi_3 - 1
        
        if (rbx_1 != 0 || rdi_2 == 0)
            r12 = 0
        
        rax_17 = r12 + rdi_2
    label_140671276:
        var_78 = 0
        var_70.d = rbx_1
        
        if (rbx_1 != 0 || rax_17 != 0)
            sub_1405a4c70(&var_78, rbx_1 + rax_17, 0)
            memcpy(var_78, r14_1, rbx_1 * 2)
        else
            var_70:4.d = 0
        
        sub_140a20ba0(&var_78, var_68, rdi_2)
        rdi_4 = var_78
        r15_3 = var_70.d
        r12_1 = var_70:4.d
        var_78 = 0
        int64_t var_70_1 = 0
    else
    label_140671243:
        rdi_4 = var_68
        r15_3 = var_60.d
        r12_1 = var_60:4.d
        var_68 = 0
        int64_t var_60_1 = 0
    
    void var_48
    
    if (arg1 + 0x38 != &var_48)
        int64_t rcx_23 = *(arg1 + 0x38)
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        *(arg1 + 0x38) = rdi_4
        *(arg1 + 0x44) = r12_1
        *(arg1 + 0x40) = r15_3
    else if (rdi_4 != 0)
        sub_140a74f90(rdi_4)
    
    int64_t rcx_25 = var_68
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    rbx_4.b = 0
label_140671321:
    int16_t* _String_3 = _String_2
    
    if (_String_3 != 0)
        sub_140a74f90(_String_3)
    
    return zx.q(rbx_4.b)

while (true)
    int16_t arg_8
    
    if (r13.b == 0)
        int64_t* rcx_1 = *(arg1 + 0x20)
        (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2, 0xfffd)
        *(arg1 + 0x64) += 1
        rbx = arg_8
    else
        arg_8 = rbx
        r13.b = 0
    
    if (rbx - 0x2b u> 0x3a || not(test_bit(0x400000004007fed, zx.q(rbx - 0x2b))))
        int64_t* rcx_8 = *(arg1 + 0x20)
        int64_t rbx_2 = *rcx_8
        int64_t rax_16 = (*(rbx_2 + 0x20))(rcx_8, &__dos_header, 0xffdf, 0xfffd)
        (*(rbx_2 + 0x178))(*(arg1 + 0x20), rax_16 - 2)
        *(arg1 + 0x64) -= 1
        
        if (rdi u> 8)
            goto label_140671154
        
        if (not(test_bit(0x14c, rdi)))
            goto label_140671154
        
        if (arg1 + 0x48 == &_String_2)
            goto label_140671128
        
        int32_t r8_2 = *(arg1 + 0x54)
        *(arg1 + 0x50) = r15
        int16_t* const _String
        
        if (r15 != 0 || r8_2 != 0)
            sub_1405a4c70(arg1 + 0x48, r15, r8_2)
            arg3 = memcpy(*(arg1 + 0x48), _String_1, r15 * 2)
        label_140671128:
            _String = _String_1
            
            if (r15 == 0)
                _String = &data_142d40450
        else
            *(arg1 + 0x54) = 0
            _String = &data_142d40450
        
        wcstod(_String, nullptr)
        *(arg1 + 0x58) = arg3
        rbx_4 = 1
        goto label_140671321
    
    if (rdi u> 8)
        var_78 = 0
        var_70 = 0
        sub_1405947f0(&var_78, 0x2c)
        rbx_1 = var_70.d + 0x2c
        var_70.d = rbx_1
        
        if (rbx_1 s> 0)
            sub_140594770(&var_78)
            rbx_1 = var_70.d
        
        r14_1 = var_78
        rdx_3 = u"Unknown state reached in Json Number Token."
        r8_1 = 0x58
        goto label_140671221
    
    switch (rdi)
        case 0
            if (rbx != 0x2d)
                goto label_140670f6e
            
            rdi = 1
        label_140671010:
            int32_t r14 = r15 - 1
            
            if (r15 s<= 0)
                r14 = 0
            
            int32_t r15_1
            r15_1.b = r15 s<= 0
            r15 += r15_1 + 1
            
            if (r15 s> var_4c)
                arg3 = sub_140594770(&_String_2)
            
            int64_t rax_13 = sx.q(r14)
            _String_1 = _String_2
            _String_1[rax_13] = rbx
            _String_1[rax_13 + 1] = 0
            goto label_140671059
        case 1
        label_140670f6e:
            
            if (rbx == 0x30)
                rdi = 2
                goto label_140671010
            
            if (rbx - 0x31 u> 8)
                goto label_140671154
            
            rdi = 3
        case 2
        label_140670f92:
            
            if (rbx == 0x2e)
                rdi = 4
                goto label_140671010
            
        label_140670fa2:
            
            if ((0xffdf & (rbx - 0x45)) != 0)
                goto label_140671154
            
            rdi = 5
        case 3
            if (rbx - 0x30 u> 9)
                goto label_140670f92
            
            rdi = 3
        case 4
            if (rbx - 0x30 u<= 9)
                rdi = 6
                goto label_140671009
            
        label_140671154:
            var_68 = 0
            var_60 = 0
            sub_1405947f0(&var_68, 0x21)
            rbx_1 = var_60.d + 0x21
            var_60.d = rbx_1
            
            if (rbx_1 s> 0)
                sub_140594770(&var_68)
                rbx_1 = var_60.d
            
            r14_1 = var_68
            UnDecorator::getReferenceType(r14_1, u"Poorly formed Json Number Token.", 0x42)
            *(arg1 + 0x64)
            sub_140a2e390(&var_68, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
            
            if (rbx_1 s<= 1)
                goto label_140671243
            
            int32_t rdi_1 = var_60.d
            
            if (rdi_1 == 0)
                rdi_2 = 0
            else
                rdi_2 = rdi_1 - 1
            
            if (rbx_1 != 0 || rdi_2 == 0)
                r12 = 0
            
            rax_17 = rdi_2 + r12
            break
        case 5
            if ((0xfffd & (rbx - 0x2b)) != 0)
                goto label_140670ffa
            
            rdi = 7
        case 6
            if (rbx - 0x30 u> 9)
                goto label_140670fa2
            
            rdi = 6
        case 7, 8
        label_140670ffa:
            
            if (rbx - 0x30 u> 9)
                goto label_140671154
            
            rdi = 8
    
label_140671009:
    
    if (rbx != 0)
        goto label_140671010
    
label_140671059:
    int64_t* rcx_5 = *(arg1 + 0x20)
    
    if ((*(*rcx_5 + 0x30))(rcx_5) != 0)
        goto label_1406711e2
    
    rbx = arg2
    continue

goto label_140671276

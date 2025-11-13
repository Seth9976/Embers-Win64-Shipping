// 函数: sub_14244ce30
// 地址: 0x14244ce30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3[1].d
int32_t rbx = 0
int64_t rsi = *arg3
uint64_t var_58 = 0
int32_t var_50 = rdi
int32_t var_4c
int32_t r13

if (rdi != 0)
    sub_1405a4c70(&var_58, rdi, 0)
    memcpy(var_58, rsi, rdi * 2)
    r13 = var_4c
else
    r13 = 0
    var_4c = 0

int32_t var_48 = 0
int32_t rax = sub_140a23cf0(arg3, u"_LOD", 1, 1, 0xffffffff)

if (rax != 0xffffffff)
    int32_t rcx_3 = arg3[1].d
    int32_t rdx_2 = rcx_3 - 1
    int32_t rdi_1 = rcx_3 - 1
    
    if (rcx_3 == 0)
        rdx_2 = -1
    
    if (rcx_3 == 0)
        rdi_1 = -1
    
    if (rcx_3 == 0)
        rdx_2 = 0
    
    if (rcx_3 == 0)
        rdi_1 = 0
    
    int16_t* r12_1
    
    if (rcx_3 == 0)
        r12_1 = &data_142d40450
    else
        r12_1 = *arg3
    
    int32_t rax_2 = rdi_1 - rdx_2
    int32_t rax_3 = rax_2 + rax
    
    if (rax_2 + rax s< 0)
        rdi_1 = 0
    else if (rax_3 s< rdi_1)
        rdi_1 = rax_3
    
    int64_t var_88 = 0
    int64_t r15_1 = 0
    int64_t var_80_1 = 0
    int32_t rsi_1 = 0
    int32_t rax_4 = 0
    
    if (r12_1 != 0 && *r12_1 != 0 && rdi_1 s> 0)
        if (rdi_1 + 1 s> 0)
            sub_1405947f0(&var_88, rdi_1 + 1)
            rax_4 = var_80_1:4.d
            rsi_1 = var_80_1.d
            r15_1 = var_88
        
        rsi_1 = rsi_1 + 1 + rdi_1
        var_80_1.d = rsi_1
        
        if (rsi_1 s> rax_4)
            sub_140594770(&var_88)
            rsi_1 = var_80_1.d
            r15_1 = var_88
        
        UnDecorator::getReferenceType(r15_1, r12_1, rdi_1 * 2)
        *(r15_1 + (sx.q(rsi_1) << 1) - 2) = 0
    
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 5)
    int32_t rdi_2 = var_60_1 + 5
    int32_t var_5c
    
    if (rdi_2 s> var_5c)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, u"_LOD", 0xa)
    int32_t rdi_3
    
    if (rdi_2 == 0)
        rdi_3 = 0
    else
        rdi_3 = rdi_2 - 1
    
    int32_t rax_6 = arg3[1].d
    int32_t rcx_10 = rax_6 - 1
    
    if (rax_6 == 0)
        rcx_10 = 0
    
    int16_t* const r8_5
    
    if (rax_6 == 0)
        r8_5 = &data_142d40450
    else
        r8_5 = *arg3
    
    int32_t rax_8 = rcx_10 - rdi_3
    int32_t rax_9 = rax_8 - rax
    int32_t rdx_7
    
    if (rax_8 - rax s>= 0)
        rdx_7 = rcx_10
        
        if (rax_9 s< rcx_10)
            rdx_7 = rax_9
    else
        rdx_7 = 0
    
    int16_t* _String_1 = nullptr
    int32_t r12_2 = 0
    int16_t* _String_2 = nullptr
    int64_t var_70_1 = 0
    int32_t rax_11 = 0
    int16_t* r15_2 = &r8_5[sx.q(rcx_10) - sx.q(rdx_7)]
    
    if (r15_2 != 0 && *r15_2 != 0)
        int64_t rdi_4 = -1
        
        do
            rdi_4 += 1
        while (r15_2[rdi_4] != 0)
        
        if (rdi_4.d + 1 s> 0)
            sub_1405947f0(&_String_2, rdi_4.d + 1)
            rax_11 = var_70_1:4.d
            r12_2 = var_70_1.d
            _String_1 = _String_2
        
        r12_2 += rdi_4.d + 1
        var_70_1.d = r12_2
        
        if (r12_2 s> rax_11)
            sub_140594770(&_String_2)
            r12_2 = var_70_1.d
            _String_1 = _String_2
        
        UnDecorator::getReferenceType(_String_1, r15_2, (rdi_4.d + 1) * 2)
    
    int64_t rcx_16 = var_68
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int16_t* const _String = &data_142d40450
    
    if (r12_2 != 0)
        _String = _String_1
    
    int32_t rax_12 = _wtoi(_String)
    int64_t rdi_6
    
    if (rax_12 - 1 u> 3)
        rdi_6 = var_88
        rbx = -1
    else
        var_50 = rsi_1
        
        if (rsi_1 != 0 || r13 != 0)
            sub_1405a4c70(&var_58, rsi_1, r13)
            rdi_6 = var_88
            memcpy(var_58, rdi_6, rsi_1 * 2)
            r13 = var_4c
            rbx = rax_12
        else
            rdi_6 = var_88
            r13 = 0
            rbx = rax_12
    
    if (_String_1 != 0)
        sub_140a74f90(_String_1)
    
    if (rdi_6 != 0)
        sub_140a74f90(rdi_6)

*arg2 = var_58
arg2[1].d = var_50
*(arg2 + 0xc) = r13
arg2[2].d = rbx
return arg2

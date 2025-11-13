// 函数: sub_1426acc70
// 地址: 0x1426acc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t i = 0
int16_t* var_38 = nullptr
int32_t rdi = 2
int32_t var_30 = 0
int64_t var_58
int64_t var_48
int64_t* rcx_14

if (*(arg1 + 0x118) s<= 0)
label_1426acdee:
    var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 5)
    int32_t rax_8 = var_40_1 + 5
    var_40_1 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"None", 0xa)
    rcx_14 = &var_48
else
    int64_t rsi_1 = 0
    
    do
        arg_8.q = *(*(zx.q(*(rsi_1 + *(arg1 + 0x110) + 0x40)) * 0x38 + *(arg1 + 0x120)) + 0x18)
        sub_140b63b70(&arg_8, &var_48)
        int32_t var_40
        int32_t r8_2
        
        if (var_40 == 0)
            r8_2 = 0
        else
            r8_2 = var_40 - 1
        
        sub_140a20ba0(&var_38, var_48, r8_2)
        int64_t rcx_5 = var_48
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        sub_140a20ba0(&var_38, &data_142d8adc4, 2)
        i += 1
        rsi_1 += 0x58
    while (i s< *(arg1 + 0x118))
    
    if (var_30 == 0)
        goto label_1426acdee
    
    int32_t rbx_1 = var_30 - 1
    
    if (var_30 == 1)
        goto label_1426acdee
    
    int16_t* r14_1 = var_38
    
    if (rbx_1 - 2 s< 0)
        rbx_1 = 0
    else if (rbx_1 - 2 s< rbx_1)
        rbx_1 -= 2
    
    var_58 = 0
    int32_t rdx_2 = 0
    int32_t var_50_1 = 0
    int32_t rcx_7 = 0
    int32_t var_4c_1 = 0
    int64_t rdi_1 = 0
    
    if (r14_1 != 0 && *var_38 != 0 && rbx_1 s> 0)
        if (rbx_1 + 1 s> 0)
            sub_1405947f0(&var_58, rbx_1 + 1)
            rcx_7 = var_4c_1
            rdx_2 = var_50_1
            rdi_1 = var_58
        
        int32_t rsi_3 = rdx_2 + 1 + rbx_1
        
        if (rsi_3 s> rcx_7)
            sub_140594770(&var_58)
            rdi_1 = var_58
        
        UnDecorator::getReferenceType(rdi_1, r14_1, rbx_1 * 2)
        *(rdi_1 + (sx.q(rsi_3) << 1) - 2) = 0
    
    rcx_14 = &var_58
    rdi = 1

*arg2 = *rcx_14
*rcx_14 = 0
arg2[1].d = rcx_14[1].d
int32_t rax_11 = *(rcx_14 + 0xc)
rcx_14[1] = 0
*(arg2 + 0xc) = rax_11

if ((rdi.b & 2) != 0)
    int64_t rcx_15 = var_48
    rdi &= 0xfffffffd
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

if ((rdi.b & 1) != 0)
    int64_t rcx_16 = var_58
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)

int16_t* rcx_17 = var_38

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg2

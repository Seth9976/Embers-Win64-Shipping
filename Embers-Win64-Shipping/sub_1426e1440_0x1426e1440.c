// 函数: sub_1426e1440
// 地址: 0x1426e1440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
uint64_t var_a8
int64_t var_98
int64_t var_88
int64_t var_78
int64_t var_68
int64_t var_58
int64_t var_48
int64_t var_38
int64_t* rcx_4
int32_t rbx_1

if ((*(arg1 + 0xdc) & 1) == 0)
    int64_t* rax_3 = sub_140b63b70(arg1 + 0x80, &var_68)
    int16_t* const rbx_2 = &data_142d40450
    int16_t* const r14_1
    
    if (rax_3[1].d == 0)
        r14_1 = &data_142d40450
    else
        r14_1 = *rax_3
    
    void* rax_4 = arg1[0x13]
    
    if (rax_4 != 0)
        arg_8.q = *(rax_4 + 0x18)
        sub_140b63b70(&arg_8, &var_a8)
    else
        var_a8 = 0
        int32_t var_a0 = 0
        sub_1405947f0(&var_a8, (rax_4 + 5).d)
        int32_t rax_5 = var_a0 + 5
        var_a0 = rax_5
        
        if (rax_5 s> 0)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, u"None", 0xa)
    
    int64_t* rax_7 = sub_1426b3770(arg1, &var_78)
    
    if (rax_7[1].d != 0)
        rbx_2 = *rax_7
    
    int16_t* const var_b8_1 = r14_1
    sub_140a2e390(&var_98, u"%s: %s\nResult Blackboard key: %s", rbx_2)
    rcx_4 = &var_98
    rbx_1 = 0xf0
else
    int64_t* rax = sub_140b63b70(arg1 + 0x80, &var_38)
    int16_t* const rbx = &data_142d40450
    int16_t* const r15
    
    if (rax[1].d == 0)
        r15 = &data_142d40450
    else
        r15 = *rax
    
    int64_t* rax_1 = sub_140b63b70(&arg1[0x18], &var_48)
    
    if (rax_1[1].d != 0)
        *rax_1
    
    int64_t* rax_2 = sub_1426b3770(arg1, &var_58)
    
    if (rax_2[1].d != 0)
        rbx = *rax_2
    
    int16_t* const var_b8 = r15
    sub_140a2e390(&var_88, 
        %s: EQS query indicated by %s blackboard key\nResult Blackboard key: %s", rbx)
    rcx_4 = &var_88
    rbx_1 = 0xf

*arg2 = *rcx_4
*rcx_4 = 0
arg2[1].d = rcx_4[1].d
int32_t rax_10 = *(rcx_4 + 0xc)
rcx_4[1] = 0
*(arg2 + 0xc) = rax_10

if (rbx_1.b s< 0)
    int64_t rcx_11 = var_98
    rbx_1 &= 0xffffff7f
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

if ((rbx_1.b & 0x40) != 0)
    int64_t rcx_12 = var_78
    rbx_1 &= 0xffffffbf
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

if ((rbx_1.b & 0x20) != 0)
    uint64_t rcx_13 = var_a8
    rbx_1 &= 0xffffffdf
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

if ((rbx_1.b & 0x10) != 0)
    int64_t rcx_14 = var_68
    rbx_1 &= 0xffffffef
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

if ((rbx_1.b & 8) != 0)
    int64_t rcx_15 = var_88
    rbx_1 &= 0xfffffff7
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

if ((rbx_1.b & 4) != 0)
    int64_t rcx_16 = var_58
    rbx_1 &= 0xfffffffb
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)

if ((rbx_1.b & 2) != 0)
    int64_t rcx_17 = var_48
    rbx_1 &= 0xfffffffd
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

if ((rbx_1.b & 1) != 0)
    int64_t rcx_18 = var_38
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

return arg2

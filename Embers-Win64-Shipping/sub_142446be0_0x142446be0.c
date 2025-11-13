// 函数: sub_142446be0
// 地址: 0x142446be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* result = arg1
*arg1 = 0
arg1[1] = 0
int16_t* var_58
sub_140baa460(&var_58, arg2)

if (sub_140a32a50(&var_58, arg3, 1) == 0)
    sub_140597df0(result, arg2)
else
    int64_t var_48
    sub_140baa480(&var_48, arg2)
    uint64_t var_78 = 0
    int64_t var_70_1 = 0
    sub_1405947f0(&var_78, 2)
    int32_t rsi_1 = var_70_1.d + 2
    var_70_1.d = rsi_1
    
    if (rsi_1 s> 0)
        sub_140594770(&var_78)
        rsi_1 = var_70_1.d
    
    uint64_t rax_1 = var_78
    uint64_t arg_8 = rax_1
    sub_1405a7220(rax_1, 2, &data_142d63b88, 2, 0x3f)
    int32_t rax_2 = arg3[1].d
    int32_t rdx_3 = rax_2 - 1
    
    if (rax_2 == 0)
        rdx_3 = 0
    
    int32_t var_50
    int32_t rcx_7
    int16_t* const r8
    
    if (var_50 == 0)
        rcx_7 = 0
        r8 = &data_142d40450
    else
        r8 = var_58
        rcx_7 = var_50 - 1
    
    int32_t rax_4 = rcx_7 - rdx_3
    int32_t rdx_4
    
    if (rcx_7 - rdx_3 s>= 0)
        rdx_4 = rcx_7
        
        if (rax_4 s< rcx_7)
            rdx_4 = rax_4
    else
        rdx_4 = 0
    
    uint64_t r12_1 = 0
    int32_t r14_1 = 0
    uint64_t var_68 = 0
    int32_t var_60_1 = 0
    int32_t r13_1 = 0
    int16_t* r15_1 = &r8[sx.q(rcx_7) - sx.q(rdx_4)]
    int32_t var_5c
    
    if (r15_1 != 0 && *r15_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (r15_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_68, rbx_1.d + 1)
            r13_1 = var_5c
            r14_1 = var_60_1
            r12_1 = var_68
        
        r14_1 += rbx_1.d + 1
        
        if (r14_1 s> r13_1)
            sub_140594770(&var_68)
            r13_1 = var_5c
            r12_1 = var_68
        
        UnDecorator::getReferenceType(r12_1, r15_1, (rbx_1.d + 1) * 2)
    
    int32_t var_40
    int32_t rax_6
    uint64_t r15_2
    
    if (var_40 s> 1)
        int32_t rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = 0
        else
            rsi_2 = rsi_1 - 1
        
        int32_t rax_7
        
        if (var_40 == 0)
            rax_7 = var_40 + 1
        
        if (var_40 != 0 || rsi_2 == 0)
            rax_7 = 0
        
        int64_t r15_3 = var_48
        int32_t rcx_13 = rax_7 + rsi_2
        var_68 = 0
        
        if (var_40 != 0 || rcx_13 != 0)
            sub_1405a4c70(&var_68, rcx_13 + var_40, 0)
            memcpy(var_68, r15_3, var_40 * 2)
        else
            var_5c = 0
        
        sub_140a20ba0(&var_68, var_78, rsi_2)
        r15_2 = var_68
        rsi_1 = var_40
        rax_6 = var_5c
        var_68 = 0
        int64_t var_60_2 = 0
    else
        r15_2 = var_78
        rax_6 = var_70_1:4.d
        arg_8 = 0
    
    uint64_t rbx_4
    
    if (rsi_1 s> 1)
        int32_t r14_2
        
        if (r14_1 == 0)
            r14_2 = 0
        else
            r14_2 = r14_1 - 1
        
        int32_t rcx_17
        
        if (rsi_1 == 0)
            rcx_17 = rsi_1 + 1
        
        if (rsi_1 != 0 || r14_2 == 0)
            rcx_17 = 0
        
        var_78 = r15_2
        int32_t rdx_12 = rsi_1 + rcx_17 + r14_2
        var_70_1.d = rsi_1
        var_70_1:4.d = rax_6
        
        if (rdx_12 s> rax_6)
            sub_1405947f0(&var_78, rdx_12)
        
        sub_140a20ba0(&var_78, r12_1, r14_2)
        rbx_4 = var_78
        r15_2 = 0
        r14_1 = var_70_1.d
        r13_1 = var_70_1:4.d
        var_78 = 0
        int64_t var_70_2 = 0
    else
        rbx_4 = r12_1
        r12_1 = 0
    
    void var_38
    
    if (result != &var_38)
        uint64_t rcx_20 = *result
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        *result = rbx_4
        result[1].d = r14_1
        *(result + 0xc) = r13_1
    else if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    if (arg_8 != 0)
        sub_140a74f90(arg_8)
    
    int64_t rcx_25 = var_48
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

int16_t* rcx_27 = var_58

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

return result

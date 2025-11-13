// 函数: sub_140642290
// 地址: 0x140642290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_140b33500(&arg_8, 0, 0, 0, int.d(arg2), 0)
sub_140b489f0(&arg_8, arg1)

if (arg3 != 0)
    int64_t var_48 = 0
    int32_t var_40_1 = 0
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    int16_t* var_58 = nullptr
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 2)
    int32_t rax_1 = var_50_1 + 2
    var_50_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_58)
    
    int16_t* rbx_1 = var_58
    UnDecorator::getReferenceType(rbx_1, &data_142d404c4, 4)
    sub_14060a620(arg1, &var_58, &var_48, &var_38, 1, 0)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (arg1 != &var_48)
        int32_t r8_1 = *(arg1 + 0xc)
        arg1[1].d = var_40_1
        
        if (var_40_1 != 0 || r8_1 != 0)
            sub_1405a4c70(arg1, var_40_1, r8_1)
            memcpy(*arg1, var_48, var_40_1 * 2)
        else
            *(arg1 + 0xc) = 0
    
    sub_140a306e0(arg1, u"00:00", &data_142d6bc1c, 1)
    var_58 = nullptr
    int32_t var_50_2 = 0
    sub_1405947f0(&var_58, 2)
    int32_t r14_1 = var_50_2 + 2
    
    if (r14_1 s> 0)
        sub_140594770(&var_58)
    
    int16_t* r15_1 = var_58
    sub_1405a7220(r15_1, 2, &data_142d6bc34, 2, 0x3f)
    void var_28
    int64_t* rax_2 = sub_140596d10(&var_28, arg1)
    int16_t* rdx_7 = &data_142d40450
    
    if (r14_1 != 0)
        rdx_7 = r15_1
    
    int32_t rax_3 = sub_140a306e0(rax_2, rdx_7, &data_142d40450, 1)
    int64_t rcx_15 = *rax_2
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    if (rax_3 s>= 2)
        sub_140a306e0(arg1, &data_142d6bc38, &data_142d40450, 1)
    
    int64_t rcx_18 = var_38
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

return arg1

// 函数: sub_140cfd340
// 地址: 0x140cfd340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_18 = 0
int64_t rbx = *arg3
arg_18.q = rbx
int64_t result
int64_t var_58
int64_t var_38
int64_t var_28

if (test_bit(arg5, 0x1c))
    int32_t rcx
    rcx.b = (rbx u>> 0x20).d == 0
    int64_t var_48
    int64_t* rdx_1
    int32_t rbx_2
    int64_t rsi_1
    
    if ((rcx.b & sub_140b5b8a0(rbx.d, 0)) == 0)
        int64_t* rax_4 = sub_140a30480(sub_140b63b70(&arg_18, &var_28), &var_38, nullptr)
        int16_t* const r8
        
        if (rax_4[1].d == 0)
            r8 = &data_142d40450
        else
            r8 = *rax_4
        
        sub_140a2e390(&var_48, u"FName(TEXT("%s"))", r8)
        rsi_1 = var_58
        rdx_1 = &var_48
        rbx_2 = 0xe
    else
        var_58 = 0
        int32_t var_50_1 = 0
        sub_1405947f0(&var_58, 8)
        int32_t rax_2 = var_50_1 + 8
        var_50_1 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_58)
        
        rsi_1 = var_58
        UnDecorator::getReferenceType(rsi_1, u"FName()", 0x10)
        rdx_1 = &var_58
        rbx_2 = 1
    
    int32_t rax_5 = rdx_1[1].d
    int32_t r8_1 = rax_5 - 1
    
    if (rax_5 == 0)
        r8_1 = 0
    
    result = sub_140a20ba0(arg2, *rdx_1, r8_1)
    
    if ((rbx_2.b & 8) != 0)
        int64_t rcx_8 = var_48
        rbx_2 &= 0xfffffff7
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
    
    if ((rbx_2.b & 4) != 0)
        int64_t rcx_9 = var_38
        rbx_2 &= 0xfffffffb
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
    
    if ((rbx_2.b & 2) != 0)
        int64_t rcx_10 = var_28
        rbx_2 &= 0xfffffffd
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
    
    if ((rbx_2.b & 1) != 0 && rsi_1 != 0)
        return sub_140a74f90(rsi_1)
else if ((arg5.b & 2) != 0)
    int32_t rcx_16
    rcx_16.b = sub_140b5b8a0(rbx.d, 0) == 0
    
    if ((arg4 != 0 | rcx_16.b) == 0)
        return sub_140a20ba0(arg2, &data_142e631fc, 2)
    
    int64_t* rax_10 = sub_140a30480(sub_140b63b70(&arg_18, &var_38), &var_28, nullptr)
    int16_t* const r8_3
    
    if (rax_10[1].d == 0)
        r8_3 = &data_142d40450
    else
        r8_3 = *rax_10
    
    sub_140a2e390(&var_58, u""%s"", r8_3)
    int32_t var_50
    
    if (var_50 != 0)
        rdi = var_50 - 1
    
    result = sub_140a20ba0(arg2, var_58, rdi)
    int64_t rcx_21 = var_58
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = var_28
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = var_38
    
    if (rcx_23 != 0)
        return sub_140a74f90(rcx_23)
else
    int64_t* rax_6 = sub_140b63b70(&arg_18, &var_28)
    int32_t rcx_13 = rax_6[1].d
    int32_t r8_2 = rcx_13 - 1
    
    if (rcx_13 == 0)
        r8_2 = 0
    
    result = sub_140a20ba0(arg2, *rax_6, r8_2)
    int64_t rcx_15 = var_28
    
    if (rcx_15 != 0)
        return sub_140a74f90(rcx_15)
return result

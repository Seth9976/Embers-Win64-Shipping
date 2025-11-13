// 函数: sub_140cfc720
// 地址: 0x140cfc720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_18 = 0
void* r14 = *arg3
int64_t result
int16_t* var_68
int32_t var_60
int16_t* var_58
int32_t var_50
int64_t var_38

if (not(test_bit(arg5, 0x1c)))
    if (r14 == 0)
        return sub_140a20ba0(arg2, u"None", 4)
    
    void* const rbx_3
    
    if ((arg5.b & 8) == 0)
    label_140cfc8fe:
        rbx_3 = nullptr
        
        if (test_bit(arg5, 0xd) && arg4 != 0)
            rbx_3 = sub_140d21d80(arg4)
    else
        rbx_3 = arg6
        
        if (rbx_3 == 0 && arg4 != 0)
            rbx_3 = sub_140d21d80(arg4)
        
        if (sub_140d23d40(r14, rbx_3) == 0)
            goto label_140cfc8fe
    
    int64_t* rax_10 = sub_140d21e10(r14, &var_38, rbx_3)
    int16_t* rsi_3 = &data_142d40450
    
    if (rax_10[1].d != 0)
        *rax_10
    
    arg_18.q = *(*(r14 + 0x10) + 0x18)
    sub_140b63b70(&arg_18, &var_68)
    
    if (var_60 != 0)
        rsi_3 = var_68
    
    sub_140a2e390(&var_58, u"%s'%s'", rsi_3)
    
    if (var_50 != 0)
        rdi = var_50 - 1
    
    result = sub_140a20ba0(arg2, var_58, rdi)
    int16_t* rcx_21 = var_58
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)
    
    int16_t* rcx_22 = var_68
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = var_38
    
    if (rcx_23 != 0)
        return sub_140a74f90(rcx_23)
else
    int64_t var_48
    int64_t* rax_3
    int32_t rbx_1
    int16_t* r14_1
    
    if (r14 == 0)
        var_50 = 0
        rax_3 = &var_58
        rbx_1 = 8
        r14_1 = nullptr
    else
        int64_t* rax_2 = sub_140a30480(sub_140d21e10(r14, &var_38, 0), &var_48, nullptr)
        int16_t* const r8
        
        if (rax_2[1].d == 0)
            r8 = &data_142d40450
        else
            r8 = *rax_2
        
        sub_140a2e390(&var_68, u"LoadObject<UObject>(nullptr, TEXT("%s"))", r8)
        r14_1 = var_68
        rax_3 = &var_68
        rbx_1 = 7
    
    *rax_3 = 0
    rax_3[1].d
    rax_3[1] = 0
    
    if ((rbx_1.b & 8) != 0)
        int16_t* rcx_3 = var_58
        rbx_1 &= 0xfffffff7
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
    
    if ((rbx_1.b & 4) != 0)
        int16_t* rcx_4 = var_68
        rbx_1 &= 0xfffffffb
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    if ((rbx_1.b & 2) != 0)
        int64_t rcx_5 = var_48
        rbx_1 &= 0xfffffffd
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    if ((rbx_1.b & 1) != 0)
        int64_t rcx_6 = var_38
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    void* rax_4 = *(arg1 + 0x78)
    int32_t rbx_2
    int16_t* const r8_1
    
    if (rax_4 == 0)
        r8_1 = u"Interface"
        rbx_2 = 0
    else
        arg_18.q = *(rax_4 + 0x18)
        sub_140b63b70(&arg_18, &var_58)
        r8_1 = &data_142d40450
        rbx_2 = 0x10
        
        if (var_50 != 0)
            r8_1 = var_58
    
    sub_140a2e390(&var_68, u"TScriptInterface<I%s>(%s)", r8_1)
    
    if (var_60 != 0)
        rdi = var_60 - 1
    
    result = sub_140a20ba0(arg2, var_68, rdi)
    int16_t* rcx_10 = var_68
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)
    
    if (rbx_2 != 0)
        int16_t* rcx_11 = var_58
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)
return result

// 函数: sub_1405db6c0
// 地址: 0x1405db6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
(*(*arg1 + 0x268))(arg1, &arg_8)
int32_t rax_1 = arg_8.d
int32_t rcx = arg_8:4.d

if ((rax_1 == data_143cd7df0 && rcx == data_143cd7df4) || (rax_1 s>= 1 && rcx s>= 1))
    int16_t* var_18
    wchar16 const* const rdx_2
    
    if (arg1[0x13].d s> 1)
        if ((*(*arg1 + 0x270))(arg1) != 0x12)
            if ((*(*arg1 + 0x270))(arg1) == 2 || arg1[6].b == 3)
                int32_t rax_11
                rax_11.b = 1
                return rax_11
            
            arg_8 = arg1[3]
            sub_140b63b70(&arg_8, &var_18)
            rdx_2 = Can't validate MediaOutput '%s'. Only EXR export is currently supported for "
            "PF_FloatRGBA and PF_A32B32G32R32F formats."
        else
            arg_8 = arg1[3]
            sub_140b63b70(&arg_8, &var_18)
            rdx_2 =
                Can't validate MediaOutput '%s'. File media output doesn't support 10bits format."
    else
        arg_8 = arg1[3]
        sub_140b63b70(&arg_8, &var_18)
        rdx_2 = u"Can't validate MediaOutput '%s'. The file path is null."
    
    int16_t* const r8_1 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r8_1 = var_18
    
    int64_t var_28
    sub_140a2e390(&var_28, rdx_2, r8_1)
    
    if (arg2 == &var_28)
        int64_t rcx_6 = var_28
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    else
        int64_t rcx_5 = *arg2
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        *arg2 = var_28
        int32_t var_20
        arg2[1].d = var_20
        int32_t var_1c
        *(arg2 + 0xc) = var_1c
        var_20.q = 0
        var_28 = 0
    
    int16_t* rcx_7 = var_18
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
        int64_t rax_9
        rax_9.b = 0
        return rax_9
else if (*arg2 != u"The requested size is invalid.")
    int32_t rcx_10 = 0
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0x1f)
        sub_1405947f0(arg2, 0x1f)
        rcx_10 = arg2[1].d
    
    arg2[1].d = rcx_10 + 0x1f
    
    if (rcx_10 + 0x1f s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    void* rcx_13 = *arg2
    __builtin_memcpy(rcx_13, u"The requested size is in", 0x30)
    *(rcx_13 + 0x30) = 0x69006c00610076
    *(rcx_13 + 0x38) = 0x2e0064
    *(rcx_13 + 0x3c) = 0

int32_t rax_6
rax_6.b = 0
return rax_6

// 函数: sub_1418a7830
// 地址: 0x1418a7830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax

if (*arg3 != 0)
    int64_t* rcx = *(arg1 + 0x18)
    (*(*rcx + 0x28))(rcx, arg5, 5)
    uint64_t rax_2 = zx.q(*arg3)
    wchar16 const* const rdi_1
    
    if (rax_2.d u> 6)
        rdi_1 = u"Unknown"
    else
        switch (rax_2)
            case 0
                rdi_1 = u"Success"
            case 1
                rdi_1 = u"MissingHashInfo"
            case 2
                rdi_1 = u"MissingPartInfo"
            case 3
                rdi_1 = u"OpenFileFail"
            case 4
                rdi_1 = u"IncorrectFileSize"
            case 5
                rdi_1 = u"HashCheckFailed"
            case 6
                rdi_1 = u"Aborted"
    
    int32_t rdx = 0
    int32_t rcx_3 = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int64_t var_48 = 0
    
    if (*rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx_1.d + 1)
            rcx_3 = var_3c_1
            rdx = var_40_1
        
        int32_t rax_3 = rbx_1.d + 1 + rdx
        int32_t var_40_2 = rax_3
        
        if (rax_3 s> rcx_3)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, rdi_1, (rbx_1.d + 1) * 2)
    
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 0x17)
    int32_t rax_4 = var_50_1 + 0x17
    var_50_1 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"InstallChunkSourceLoad", 0x2e)
    int64_t* rax_5 = *(arg1 + 0x10)
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    int64_t rbx_3 = *rax_5
    enum WIN32_ERROR rax_6 = GetLastError()
    (*(rbx_3 + 0x18))(*(arg1 + 0x10), arg2, &var_38, zx.q(rax_6), &var_58, &var_48)
    int64_t rcx_11 = var_38
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_58
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_48
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    rax = 0x24
else
    rax = 0x20

*(rax + arg1) += 1
int64_t* rcx_14 = *(arg1 + 8)
(*(*rcx_14 + 8))(rcx_14, arg4)
*(arg1 + 0x28) += *(arg4 + 0x10)
*(arg1 + 0x30) = 0
int64_t arg_8 = *(arg4 + 8)

if (arg1 + 0x38 == &arg_8)
    return &arg_8

int64_t* result = *(arg1 + 0x38)
*(arg1 + 0x38) = arg_8
return result

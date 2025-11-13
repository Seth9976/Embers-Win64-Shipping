// 函数: sub_142b85bd0
// 地址: 0x142b85bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rcx = *(arg1 + 0x20)
int32_t* result = (*(*rcx + 8))(rcx)

if (*arg4 s<= 0)
    int32_t rcx_4
    int32_t* rbx_1
    
    if (std::ios_base::good(arg2) == 0)
        int64_t* r8_2 = arg1 + 8
        rbx_1 = arg3 + 8
        
        if (arg1 == 0)
            r8_2 = nullptr
        
        rcx_4 = neg.d(sub_142b456f0(rbx_1, arg2, r8_2, arg4))
    else
        char rax_5
        
        if (*(*(arg1 + 0x10) + 1) != 0)
            rbx_1 = arg3 + 8
            rax_5 = sub_142b45af0(rbx_1)
        
        if (*(*(arg1 + 0x10) + 1) == 0 || rax_5 == 0)
            rbx_1 = arg3 + 8
            sub_142b454b0(rbx_1, arg2, arg4)
            rcx_4 = 0
        else
            *arg4
            sub_142b45490(rbx_1, arg2, sx.d(**(arg1 + 0x10)))
            rcx_4 = 0
    
    *(arg3 + 0x90) = rcx_4
    *(arg3 + 0x98) = arg1
    *(arg3 + 0x80) = arg3 + 0x88
    void var_58
    result = sub_142b45d00(&var_58)
    *rbx_1 = *result
    *(rbx_1 + 0x10) = *(result + 0x10)
    *(rbx_1 + 0x20) = *(result + 0x20)

__security_check_cookie(rax_1 ^ &var_78)
return result

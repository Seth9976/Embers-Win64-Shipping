// 函数: sub_1429a3db0
// 地址: 0x1429a3db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int32_t* result = __security_cookie ^ &var_a8
int32_t* result_1 = result
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (arg5 != 1)
    if (arg6 == 0)
        if (*arg2 u<= arg3)
            int64_t rcx_18
            
            do
                **arg1 = **arg2
                *arg1 += 1
                **arg1 = *(*arg2 + 1)
                *arg1 += 1
                **arg1 = *(*arg2 + 2)
                *arg1 += 1
                result = *arg2
                **arg1 = *(result + 3)
                *arg1 += 1
                rcx_18 = *arg2 + arg4
                *arg2 = rcx_18
            while (rcx_18 u<= arg3)
    else if (arg6 != 1)
        if (arg6 != 2)
            sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
            _CxxThrowException(&exceptionObject, &data_143946538)
            noreturn
        
        if (*arg2 u<= arg3)
            int64_t rcx_11
            
            do
                **arg1 = **arg2
                *arg1 += 1
                **arg1 = *(*arg2 + 1)
                *arg1 += 1
                **arg1 = *(*arg2 + 2)
                *arg1 += 1
                result = *arg2
                **arg1 = *(result + 3)
                *arg1 += 1
                rcx_11 = *arg2 + arg4
                *arg2 = rcx_11
            while (rcx_11 u<= arg3)
    else
        while (*arg2 u<= arg3)
            result = zx.q(**arg2)
            **arg1 = result.w
            *arg1 += 2
            *arg2 += arg4
else if (arg6 == 0)
    result = *arg2
    
    while (result u<= arg3)
        int32_t rcx_4 = *result
        **arg1 = rcx_4.b
        *arg1 += 1
        **arg1 = (rcx_4 u>> 8).b
        *arg1 += 1
        **arg1 = (rcx_4 u>> 0x10).b
        *arg1 += 1
        **arg1 = (rcx_4 u>> 0x18).b
        *arg1 += 1
        result = *arg2 + arg4
        *arg2 = result
else if (arg6 == 1)
    result = *arg2
    
    while (result u<= arg3)
        uint16_t rcx_3 = *result
        **arg1 = rcx_3.b
        *arg1 += 1
        **arg1 = (rcx_3 u>> 8).b
        *arg1 += 1
        result = *arg2 + arg4
        *arg2 = result
else
    if (arg6 != 2)
        sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    result = *arg2
    
    while (result u<= arg3)
        int32_t zmm0 = *result
        **arg1 = zmm0.b
        *arg1 += 1
        **arg1 = (zmm0 u>> 8).b
        *arg1 += 1
        **arg1 = (zmm0 u>> 0x10).b
        *arg1 += 1
        **arg1 = (zmm0 u>> 0x18).b
        *arg1 += 1
        result = *arg2 + arg4
        *arg2 = result
__security_check_cookie(result_1 ^ &var_a8)
return result

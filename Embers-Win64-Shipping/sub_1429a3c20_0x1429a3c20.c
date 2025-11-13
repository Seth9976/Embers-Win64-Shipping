// 函数: sub_1429a3c20
// 地址: 0x1429a3c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int32_t* result = __security_cookie ^ &var_a8
int32_t* result_1 = result
int64_t i_3 = arg4

if (arg3 == 0)
    if (arg4 != 0)
        result = *arg2
        int64_t i
        
        do
            int32_t rcx_2 = *result
            **arg1 = rcx_2.b
            *arg1 += 1
            **arg1 = (rcx_2 u>> 8).b
            *arg1 += 1
            **arg1 = (rcx_2 u>> 0x10).b
            *arg1 += 1
            **arg1 = (rcx_2 u>> 0x18).b
            *arg1 += 1
            result = *arg2 + 4
            *arg2 = result
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (arg3 != 1)
    if (arg3 != 2)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    if (arg4 != 0)
        result = *arg2
        int64_t i_1
        
        do
            int32_t zmm0 = *result
            **arg1 = zmm0.b
            *arg1 += 1
            **arg1 = (zmm0 u>> 8).b
            *arg1 += 1
            **arg1 = (zmm0 u>> 0x10).b
            *arg1 += 1
            **arg1 = (zmm0 u>> 0x18).b
            *arg1 += 1
            result = *arg2 + 4
            *arg2 = result
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
else if (arg4 != 0)
    result = *arg2
    int64_t i_2
    
    do
        uint16_t rcx_1 = *result
        **arg1 = rcx_1.b
        *arg1 += 1
        **arg1 = (rcx_1 u>> 8).b
        *arg1 += 1
        result = *arg2 + 2
        *arg2 = result
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

__security_check_cookie(result_1 ^ &var_a8)
return result

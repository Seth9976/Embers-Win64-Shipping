// 函数: sub_1429bd220
// 地址: 0x1429bd220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

void var_a8
int64_t rax_2 = __security_cookie ^ &var_a8
int32_t* rbx_1 = arg1
int32_t r11_1 = 0
int32_t r10_1 = 1

do
    if (r11_1 s< 0)
        struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
        sub_14297d3f0(&exceptionObject, "Argument not in valid range.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    int32_t temp0_1 = divs.dp.d(sx.q(arg4 - arg3 + 1), r10_1)
    int32_t r8 = temp0_1
    
    if (arg6 == 1 && temp0_1 * r10_1 s< arg4 - arg3 + 1)
        r8 = temp0_1 + 1
    
    if (r8 s< 1)
        r8 = 1
    
    r11_1 += 1
    r10_1 = rol.d(r10_1, 1)
    *rbx_1 = divs.dp.d(sx.q(arg5 - 1 + r8), arg5)
    rbx_1 = &rbx_1[1]
while (r11_1 s< arg2)

__security_check_cookie(rax_2 ^ &var_a8)

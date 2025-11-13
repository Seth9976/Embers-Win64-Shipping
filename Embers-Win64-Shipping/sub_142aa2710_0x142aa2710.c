// 函数: sub_142aa2710
// 地址: 0x142aa2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3

if (*arg6 s> 0)
    return 0

if (arg2 != 0 || arg3 == 0)
    int32_t rbx_1 = arg5
    
    if (arg4 != 0 || rbx_1 == 0)
        if (arg3 s< 0)
            if (rbx_1 s>= 0)
                rdi = std::_WChar_traits<wchar_t>::length(arg2)
        else if (rbx_1 s< 0)
            rbx_1 = std::_WChar_traits<wchar_t>::length(arg4)
        
        return sub_142aa3550(arg1, arg2, rdi, arg4, rbx_1, arg6)

*arg6 = 1
return 0

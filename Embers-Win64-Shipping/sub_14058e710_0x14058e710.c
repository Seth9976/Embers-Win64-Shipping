// 函数: sub_14058e710
// 地址: 0x14058e710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rax_2

if (arg2 u>= 0x1000)
    if (arg2 + 0x27 u<= arg2)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    int64_t rax = j_sub_140a82f30(arg2 + 0x27)
    
    if (rax == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rax_2 = (rax + 0x27) & 0xffffffffffffffe0
    *(rax_2 - 8) = rax
else if (arg2 == 0)
    rax_2 = nullptr
else
    rax_2 = j_sub_140a82f30(arg2)

*arg1 = rax_2
arg1[1] = rax_2
void* result = rax_2 + arg2
arg1[2] = result
return result

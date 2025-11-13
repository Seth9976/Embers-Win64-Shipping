// 函数: sub_14058aea0
// 地址: 0x14058aea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u< 0x1000)
    if (arg2 == 0)
        return 0
    
    return j_sub_140a82f30(arg2) __tailcall

if (arg2 + 0x27 u<= arg2)
    stdext::threads::_Throw_lock_error()
    noreturn

int64_t rax = j_sub_140a82f30(arg2 + 0x27)

if (rax == 0)
    _invalid_parameter_noinfo_noreturn()
    noreturn

void* result = (rax + 0x27) & 0xffffffffffffffe0
*(result - 8) = rax
return result

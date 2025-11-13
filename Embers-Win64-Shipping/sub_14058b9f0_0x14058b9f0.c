// 函数: sub_14058b9f0
// 地址: 0x14058b9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u< 0x1000)
    if (arg1 == 0)
        return 0
    
    return j_sub_140a82f30(arg1) __tailcall

if (arg1 + 0x27 u<= arg1)
    stdext::threads::_Throw_lock_error()
    noreturn

int64_t rax_1 = j_sub_140a82f30(arg1 + 0x27)

if (rax_1 == 0)
    _invalid_parameter_noinfo_noreturn()
    noreturn

void* result = (rax_1 + 0x27) & 0xffffffffffffffe0
*(result - 8) = rax_1
return result

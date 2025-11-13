// 函数: sub_14058ac70
// 地址: 0x14058ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp_1 = arg1[1] - *arg1
void* const rbx_1

if (arg2 u>= 0x1000)
    if (arg2 + 0x27 u<= arg2)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    int64_t rax_1 = j_sub_140a82f30(arg2 + 0x27)
    
    if (rax_1 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx_1 = (rax_1 + 0x27) & 0xffffffffffffffe0
    *(rbx_1 - 8) = rax_1
else if (arg2 == 0)
    rbx_1 = nullptr
else
    rbx_1 = j_sub_140a82f30(arg2)

int64_t rdx = *arg1
memmove(rbx_1, rdx, (arg1[1]).d - rdx.d)
return sub_14058b070(arg1, rbx_1, rbp_1, arg2) __tailcall

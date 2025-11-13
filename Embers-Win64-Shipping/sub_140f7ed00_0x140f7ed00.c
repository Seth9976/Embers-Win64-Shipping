// 函数: sub_140f7ed00
// 地址: 0x140f7ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rdi = nullptr
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
void var_f8

if (*(arg1 + 0x430) != 0)
    int64_t* rcx = *(arg1 + 0x428)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        if (*(arg1 + 0x430) != 0)
            rdi = *(arg1 + 0x428)
        
        (*(*rdi + 0x48))(rdi, &var_f8, arg3, arg4)
        sub_1405979f0(arg2, &var_f8)
        sub_140597700(&var_f8)

if (*arg2 == 0)
    sub_1405979f0(arg2, sub_140f77fb0(*(arg1 + 0x2b0), &var_f8, arg4))
    sub_140597700(&var_f8)

__security_check_cookie(rax_1 ^ &var_118)
return arg2

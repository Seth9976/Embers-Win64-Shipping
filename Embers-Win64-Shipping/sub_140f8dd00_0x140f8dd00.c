// 函数: sub_140f8dd00
// 地址: 0x140f8dd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7a8
int64_t rax_1 = __security_cookie ^ &var_7a8
int64_t result
void** var_788

if (arg2 == 0)
    void var_520
    sub_140f1edc0(&var_520)
    void* rsi_2 = *(arg1 + 0x2b0)
    void* var_298
    sub_140de1940(rsi_2 + 0x60, var_298)
    sub_140f15670(*(rsi_2 + 0x48), sub_140ddd070(&var_788, rsi_2 + 0x60))
    int64_t* rcx_8 = *(rsi_2 + 0x18)
    (*(*rcx_8 + 0x20))(rcx_8)
    result = sub_140f243e0(&var_520)
else
    void* rsi_1 = *(arg1 + 0x2b0)
    sub_140de1940(rsi_1 + 0x60, arg2)
    sub_140f15670(*(rsi_1 + 0x48), sub_140ddd070(&var_788, rsi_1 + 0x60))
    int64_t* rcx_3 = *(rsi_1 + 0x18)
    result = (*(*rcx_3 + 0x20))(rcx_3)
__security_check_cookie(rax_1 ^ &var_7a8)
return result

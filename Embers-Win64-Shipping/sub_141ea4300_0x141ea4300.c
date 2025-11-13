// 函数: sub_141ea4300
// 地址: 0x141ea4300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* rcx = *(arg1 + 0x118)

if (rcx != 0)
    void var_18
    int64_t* rax_2 = (*(*rcx + 0x190))(rcx, &var_18)
    *arg2 = *rax_2
    arg2[1] = rax_2[1]

return arg2

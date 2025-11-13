// 函数: sub_141ab2830
// 地址: 0x141ab2830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x31)
void* rcx_8

if ((rax & 4) == 0)
    rcx_8 = arg1 + 0x10
else
    if ((rax & 2) != 0)
        void var_58
        sub_140dd5b90(&var_58, *arg2)
        *arg2
        bool cond:0_1 = arg2[8].b != 0
        int64_t var_50
        __builtin_memset(&var_50, 0, 0x33)
        bool var_18_1 = cond:0_1
        sub_141e295c0(&var_58)
        void var_a8
        sub_140dd5b90(&var_a8, *arg2)
        *arg2
        bool var_68_1 = arg2[8].b != 0
        int64_t var_a0
        __builtin_memset(&var_a0, 0, 0x33)
        sub_141e1c570(arg1 + 0x20, &var_a8, 
            sub_141e1c570(arg1 + 0x10, &var_58, sub_141e295c0(&var_a8)))
        int64_t var_88
        int64_t var_38
        return sub_141de4b20(&var_50, &var_a0, &var_38, &var_88, 1f f- *(arg1 + 0xc0), &arg2[1], 
            &arg2[4])
    
    rcx_8 = arg1 + 0x20

return sub_141e1c570(rcx_8, arg2, arg3)

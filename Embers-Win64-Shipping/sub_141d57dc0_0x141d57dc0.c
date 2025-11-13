// 函数: sub_141d57dc0
// 地址: 0x141d57dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141d58500(arg1 - 0x28, arg3)

if (rax == 0 || *rax != 0x18)
    sub_140596d10(arg2, arg4)
else
    *arg2 = 0
    arg2[1] = 0
    void** const var_b8
    memset(&var_b8, 0, 0x90)
    sub_140b4c2a0(&var_b8)
    int64_t var_28_1 = 0
    var_b8 = &data_142d6b230
    void* var_20_1 = rax + 8
    int64_t var_18_1 = 0x7fffffffffffffff
    sub_140b55290(&var_b8, 1)
    var_b8[0x1b](&var_b8, 1)
    sub_140a1d9d0(&var_b8, arg2, arg5)
    sub_140b4cb40(&var_b8)

return arg2

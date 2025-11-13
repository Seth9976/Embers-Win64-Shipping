// 函数: sub_141da5090
// 地址: 0x141da5090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0
int32_t var_10 = 0
int64_t* rcx = nullptr
int64_t* var_18 = nullptr

if (arg4 != &var_18 && arg4[1].d != 0)
    int64_t* r8 = *arg4
    
    if (r8 != 0)
        (*(*r8 + 0x40))(r8, &var_18)
        rax = var_10
        rcx = var_18

arg1[1] = arg2
*arg1 = &data_14323ab28
arg1[2] = arg3
arg1[3] = 0
arg1[4].d = 0

if (&var_18 != &arg1[3] && rax != 0 && rcx != 0)
    (*(*rcx + 0x40))()

arg1[5] = sub_140a387b0()
sub_140745b20(&var_18)
*arg1 = &data_14323ab80
sub_140745b20(arg4)
return arg1

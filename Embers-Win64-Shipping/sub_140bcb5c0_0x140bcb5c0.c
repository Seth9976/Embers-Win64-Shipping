// 函数: sub_140bcb5c0
// 地址: 0x140bcb5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0
int64_t* rcx = nullptr
int64_t* var_28 = nullptr
int32_t var_20 = 0

if (arg2 != &var_28 && arg2[1].d != 0)
    int64_t* r8 = *arg2
    
    if (r8 != 0)
        (*(*r8 + 0x40))(r8, &var_28)
        rax = var_20
        rcx = var_28

int64_t* rbx = data_143e1a820
int64_t var_18 = 0
int32_t var_10 = 0

if (rax != 0 && rcx != 0)
    (*(*rcx + 0x40))(rcx, &var_18)

int32_t rax_4 = (*(*rbx + 0x20))(rbx, arg1, 0, 0, &var_18, arg4, arg5, arg3)
sub_140745b20(&var_28)
sub_140745b20(arg2)
return zx.q(rax_4)

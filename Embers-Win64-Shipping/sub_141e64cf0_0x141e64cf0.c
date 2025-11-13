// 函数: sub_141e64cf0
// 地址: 0x141e64cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg1
int64_t var_28 = 0
int64_t var_20 = 0
(*(r10 + 0x2e8))(arg1, arg3, &var_28, 0)
int64_t var_18 = 0
int32_t var_10 = 0

if (arg5 != &var_18 && arg5[1].d != 0)
    int64_t* rcx = *arg5
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_18)

(*(*arg1 + 0x300))(arg1, arg2, &var_28, arg4, &var_18, arg6)
int64_t rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140745b20(arg5)
return arg2

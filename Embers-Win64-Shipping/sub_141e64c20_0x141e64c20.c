// 函数: sub_141e64c20
// 地址: 0x141e64c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0

if (arg5 != &var_38 && arg5[1].d != 0)
    int64_t* rcx = *arg5
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_38)

int64_t r10 = *arg1
int64_t var_28 = 0
int64_t var_20 = 0
(*(r10 + 0x330))(arg1, arg2, arg3, arg4, &var_28, 1, &var_38, arg6)
int64_t rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140745b20(arg5)
return arg2

// 函数: sub_140963b90
// 地址: 0x140963b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
sub_140961370(&var_28, arg3, arg5)
int64_t* rcx_1 = var_28

if (rcx_1 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t var_18
    (*(*rcx_1 + 0xf0))(rcx_1, &var_18, zx.q(arg4))
    *arg2 = var_18
    int64_t var_10
    arg2[1] = var_10
    int64_t var_10_1 = 0
    var_18 = 0

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rsi_1))

return arg2

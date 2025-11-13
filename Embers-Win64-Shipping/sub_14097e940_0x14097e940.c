// 函数: sub_14097e940
// 地址: 0x14097e940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
sub_140964600(&var_18, arg2, *(arg1 + 0x28))
int64_t* rcx_1 = var_18
char rdi

if (rcx_1 == 0)
    rdi = 0
else
    rdi = (*(*rcx_1 + 0xb8))(rcx_1, zx.q(arg3), arg4, zx.q(arg5))

int64_t* var_10

if (var_10 == 0)
    return zx.q(rdi)

var_10[1].d -= 1

if (var_10[1].d == 1)
    (**var_10)(var_10)
    int32_t rsi_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*var_10 + 8))(var_10, zx.q(rsi_1))

return zx.q(rdi)

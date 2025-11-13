// 函数: sub_140d42130
// 地址: 0x140d42130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
__builtin_memset(&var_28, 0, 0x14)
int64_t var_10 = 0
sub_140a96170(&var_28)
int64_t var_10_1 = 0
int64_t* var_20
int64_t* rbx_1 = var_20
int64_t rax_1 = var_28
*arg2 = **arg1
arg2[1] = rax_1
arg2[2] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = var_20

int32_t var_18
arg2[3].d = var_18
arg2[4] = var_10_1

if (rbx_1 == 0)
    return arg2

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    (**rbx_1)(rbx_1)
    int32_t rsi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg2

// 函数: sub_14095ad80
// 地址: 0x14095ad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t arg_20 = 0
int64_t* var_18
sub_1409633d0(&var_18, arg2, 0)
int64_t* rcx_1 = var_18

if (rcx_1 != 0)
    rdi = (*(*rcx_1 + 0x2d8))(rcx_1, arg3)

rdi.b = rdi != 0
int64_t* var_10

if (var_10 == 0)
    return zx.q(rdi.b)

var_10[1].d -= 1

if (var_10[1].d == 1)
    int64_t rdx_1 = *var_10
    (*rdx_1)(var_10, rdx_1)
    int32_t rsi_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (rsi_1 == 1)
        int64_t r8 = *var_10
        (*(r8 + 8))(var_10, zx.q(rsi_1), r8)

return zx.q(rdi.b)

// 函数: sub_14095d640
// 地址: 0x14095d640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
*arg2 = 0
int64_t* var_18
(*(rax + 0x2a0))(arg1, &var_18)
int64_t* rcx = var_18

if (rcx == 0)
    int64_t r8
    r8.b = 1
    sub_14095ebe0(arg4, arg3, r8)
else
    void arg_8
    *arg2 = *(*(*rcx + 0xc8))(rcx, &arg_8, arg4)
    int64_t* rcx_2 = var_18
    (*(*rcx_2 + 0xc0))(rcx_2, arg3)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rsi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_10 + 8))(var_10, zx.q(rsi_1))

return arg2

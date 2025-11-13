// 函数: sub_140ab1260
// 地址: 0x140ab1260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* rax = sub_140aaedb0(arg1 + 8, &var_18, arg3)
*arg2 = *rax
void* rcx_2 = rax[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

int64_t* var_10

if (var_10 == 0)
    return arg2

var_10[1].d -= 1

if (var_10[1].d == 1)
    (**var_10)(var_10)
    int32_t rsi_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*var_10 + 8))(var_10, zx.q(rsi_1))

return arg2

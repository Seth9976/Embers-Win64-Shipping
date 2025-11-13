// 函数: sub_1420c2cd0
// 地址: 0x1420c2cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_18
sub_140596d10(arg1, sub_140903440(*sub_140a78a10(sub_140a752e0(), &var_18, &arg_10)))
int64_t* var_10

if (var_10 == 0)
    return arg1

var_10[1].d -= 1

if (var_10[1].d == 1)
    (**var_10)(var_10)
    int32_t rdi_1 = *(var_10 + 0xc)
    *(var_10 + 0xc) -= 1
    
    if (rdi_1 == 1)
        (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return arg1

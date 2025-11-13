// 函数: sub_1406c6550
// 地址: 0x1406c6550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20

if (arg1[1].d == 0)
    var_20 = nullptr
else
    var_20 = *arg1

if (var_20 != 0)
    (*(*var_20 + 0x38))(var_20, 0)

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 + 0xf)
int32_t rax_11 = (temp1 + (temp0 & 0xf)) s>> 4

if (arg1[1].d != rax_11)
    if (*arg1 != 0 || rax_11 != 0)
        *arg1 = sub_140a84c80(*arg1, sx.q(rax_11) * 0x10, 0)
    
    arg1[1].d = rax_11

return *arg1

// 函数: sub_1420c83f0
// 地址: 0x1420c83f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140aae6a0()
int64_t var_18
sub_140aac030(&data_143db9ce0, &var_18, arg1)
int64_t rdi
rdi.b = var_18 != 0
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
        int64_t r8_1 = *var_10
        (*(r8_1 + 8))(var_10, zx.q(rsi_1), r8_1)

return zx.q(rdi.b)

// 函数: sub_1420c6010
// 地址: 0x1420c6010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_140aae6a0()
void* var_18
sub_140aac030(&data_143db9ce0, &var_18, arg2)
void* rcx = var_18

if (rcx != 0)
    sub_140a7c6b0(rcx, arg3, arg1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rsi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_10 + 8))(var_10, zx.q(rsi_1))

return arg1

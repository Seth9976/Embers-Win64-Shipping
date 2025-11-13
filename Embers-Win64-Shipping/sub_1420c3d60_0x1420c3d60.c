// 函数: sub_1420c3d60
// 地址: 0x1420c3d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_140aae6a0()
void* var_18
sub_140aac030(&data_143db9ce0, &var_18, arg2)
void* rcx = var_18

if (rcx != 0)
    int64_t* arg_8 = arg1
    int64_t** var_20_1 = &arg_8
    int64_t (* var_28)(int64_t* arg1, int64_t* arg2) = sub_1420b5010
    sub_140a723b0(rcx, arg3, &var_28)

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

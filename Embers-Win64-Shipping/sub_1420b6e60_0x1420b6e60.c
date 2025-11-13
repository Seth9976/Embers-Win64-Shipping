// 函数: sub_1420b6e60
// 地址: 0x1420b6e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = zx.o(0)
sub_140aa6020()
XXH_memcpy(arg1, arg2, &data_143db9df8, &var_18)
int64_t* rbx_1 = var_18:8.q

if (rbx_1 == 0)
    return arg1

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    (**rbx_1)(rbx_1)
    int32_t rsi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return arg1

// 函数: sub_140faae50
// 地址: 0x140faae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14065da90(arg1 + 0x1f8, arg2)
int64_t* rbx_1 = arg2[1]

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

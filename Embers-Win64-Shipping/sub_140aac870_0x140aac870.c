// 函数: sub_140aac870
// 地址: 0x140aac870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140aacf70(arg1, arg2, arg3, 0, 0)
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

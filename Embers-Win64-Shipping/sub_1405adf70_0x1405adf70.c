// 函数: sub_1405adf70
// 地址: 0x1405adf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae080(&arg1[3])
int64_t* rbx = arg1[2]

if (rbx == 0)
    *arg1 = &data_142d4cb20
    return &data_142d4cb20

rbx[1].d -= 1

if (rbx[1].d == 1)
    (**rbx)(rbx)
    int32_t rsi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx + 8))(rbx, zx.q(rsi_1))

*arg1 = &data_142d4cb20
return &data_142d4cb20

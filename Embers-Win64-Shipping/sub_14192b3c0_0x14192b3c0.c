// 函数: sub_14192b3c0
// 地址: 0x14192b3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[3]

if (rbx == 0)
    *arg1 = &data_142d4cb20
    return &data_142d4cb20

rbx[1].d -= 1

if (rbx[1].d != 1)
    *arg1 = &data_142d4cb20
    return &data_142d4cb20

(**rbx)(rbx)
int32_t rsi = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rsi == 1)
    (*(*rbx + 8))(rbx, zx.q(rsi))

*arg1 = &data_142d4cb20
return &data_142d4cb20

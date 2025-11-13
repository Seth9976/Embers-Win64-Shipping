// 函数: sub_141865e10
// 地址: 0x141865e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]

if (rbx == 0)
    *arg1 = &data_142d42cf8
    return &data_142d42cf8

rbx[1].d -= 1

if (rbx[1].d != 1)
    *arg1 = &data_142d42cf8
    return &data_142d42cf8

(**rbx)(rbx)
int32_t rsi = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rsi == 1)
    (*(*rbx + 8))(rbx, zx.q(rsi))

*arg1 = &data_142d42cf8
return &data_142d42cf8

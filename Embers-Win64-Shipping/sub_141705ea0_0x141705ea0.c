// 函数: sub_141705ea0
// 地址: 0x141705ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc4df8
int64_t* rbx = arg1[4]

if (rbx == 0)
    *arg1 = &data_142fc3cd0
    return &data_142fc3cd0

rbx[1].d -= 1

if (rbx[1].d != 1)
    *arg1 = &data_142fc3cd0
    return &data_142fc3cd0

(**rbx)(rbx)
int32_t rsi = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rsi == 1)
    (*(*rbx + 8))(rbx, zx.q(rsi))

*arg1 = &data_142fc3cd0
return &data_142fc3cd0

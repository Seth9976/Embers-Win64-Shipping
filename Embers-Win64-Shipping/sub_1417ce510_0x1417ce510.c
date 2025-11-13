// 函数: sub_1417ce510
// 地址: 0x1417ce510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[5]

if (rbx == 0)
    *arg1 = &IDelegateInstance::`vftable'
    return &IDelegateInstance::`vftable'

rbx[1].d -= 1

if (rbx[1].d != 1)
    *arg1 = &IDelegateInstance::`vftable'
    return &IDelegateInstance::`vftable'

(**rbx)(rbx)
int32_t rsi = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rsi == 1)
    (*(*rbx + 8))(rbx, zx.q(rsi))

*arg1 = &IDelegateInstance::`vftable'
return &IDelegateInstance::`vftable'

// 函数: sub_140e13b60
// 地址: 0x140e13b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d44910(arg1 + 0x738)
int64_t* rbx = rax[1]

if (rbx != 0)
    rbx[1].d += 1

int32_t rax_1 = rax[2].d
*arg2 = *rax
arg2[1] = rbx

if (rbx != 0)
    rbx[1].d += 1

arg2[2].d = rax_1
arg2[3].b = 1

if (rbx == 0)
    return arg2

rbx[1].d -= 1

if (rbx[1].d == 1)
    (**rbx)(rbx)
    int32_t rsi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*rbx + 8))(rbx, zx.q(rsi_1))

return arg2

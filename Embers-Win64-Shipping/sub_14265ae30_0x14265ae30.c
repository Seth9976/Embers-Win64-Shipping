// 函数: sub_14265ae30
// 地址: 0x14265ae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg3 + 8)
int32_t rax = data_143dbb200
*arg2 = data_143dbb1f8.q
arg2[1].d = rax
arg2[2] = 0

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

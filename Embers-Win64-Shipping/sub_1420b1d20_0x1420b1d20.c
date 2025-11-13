// 函数: sub_1420b1d20
// 地址: 0x1420b1d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = zx.o(0)
sub_140aa0310(arg1, arg2, 0, 0, arg3, &var_18)
int64_t* rbx = var_18:8.q

if (rbx == 0)
    return arg1

rbx[1].d -= 1

if (rbx[1].d == 1)
    (**rbx)(rbx)
    int32_t rdi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rdi_1 == 1)
        (*(*rbx + 8))(rbx, zx.q(rdi_1))

return arg1

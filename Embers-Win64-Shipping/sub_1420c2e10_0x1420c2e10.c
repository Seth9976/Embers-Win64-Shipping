// 函数: sub_1420c2e10
// 地址: 0x1420c2e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = sub_140a752e0()
int64_t* rbx = *(rax + 0x30)

if (rbx != 0)
    rbx[1].d += 1

sub_140596d10(arg1, sub_140903440(*(rax + 0x28)))

if (rbx == 0)
    return arg1

rbx[1].d -= 1

if (rbx[1].d == 1)
    (**rbx)(rbx)
    int32_t rbp_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rbp_1 == 1)
        (*(*rbx + 8))(rbx, zx.q(rbp_1))

return arg1

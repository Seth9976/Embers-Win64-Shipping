// 函数: sub_140ab5760
// 地址: 0x140ab5760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0)
    return 

char* rax_1 = sub_140a752e0()
int64_t* rbx_1 = *(rax_1 + 0x30)

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140ab51b0(arg1, sub_140903440(*(rax_1 + 0x28)), 0x1d)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t rsi_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rsi_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

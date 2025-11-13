// 函数: sub_1419445a0
// 地址: 0x1419445a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rsi = arg6
void*** rbx = nullptr
int64_t rbp = 0
int64_t* rcx = rsi[1]

if (rcx != 0)
    rbp = (*(*rcx + 0x10))(rcx)

void*** rax_3 = j_sub_140a82f30(0x68)

if (rax_3 != 0)
    rbx = sub_141927470(rax_3, arg3, arg4, arg5, rbp, 0, 0, 0)

arg6 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t* rcx_2 = rsi[1]

if (rcx_2 != 0)
    (*(*rcx_2 + 0x20))(rcx_2)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

sub_14081c9d0(&arg6)
return arg2

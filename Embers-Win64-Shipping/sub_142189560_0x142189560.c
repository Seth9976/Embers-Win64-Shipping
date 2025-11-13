// 函数: sub_142189560
// 地址: 0x142189560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rcx

if (arg3[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg3

if (sub_140a54510(rcx, u"StatelessConnectHandlerComponent") != 0)
    *arg2 = nullptr
    arg2[1] = 0
    return arg2

void*** rax_1 = j_sub_140a82f30(0xf0)
void*** rdi

if (rax_1 == 0)
    rdi = nullptr
else
    rdi = sub_1421810b0(rax_1)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 != 0)
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rdi

*arg2 = rdi
arg2[1] = rax_3
return arg2

// 函数: sub_140ae8ea0
// 地址: 0x140ae8ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140af9190(arg2, arg3)
int64_t* rsi = arg3[0x1b]
int64_t* rdi = nullptr

if (rsi != 0)
    sub_140ae7280(rsi)
    j_sub_140a74f90(rsi)
    arg3[0x1b] = 0

int64_t* rax_1 = j_sub_140a82f30(0x140)

if (rax_1 != 0)
    rdi = sub_140ae68e0(rax_1, arg3)

arg3[0x1b] = rdi
arg3[0xa].b = 1
return zx.q(rax)

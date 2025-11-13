// 函数: sub_140a5b4f0
// 地址: 0x140a5b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 8

if (arg2 u>= 0x10)
    rax = 0x10

if (rax u>= arg3)
    arg3 = rax

uint64_t rbx = zx.q(arg3)
int64_t rax_1 = malloc(arg2 + 0x10 + rbx)

if (rax_1 == 0)
    return rax_1

void* rax_4 = (rbx + 0xf + rax_1) & neg.q(rbx)
*(rax_4 - 8) = rax_1
*(rax_4 - 0x10) = arg2
return rax_4

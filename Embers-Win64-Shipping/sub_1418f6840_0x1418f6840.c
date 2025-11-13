// 函数: sub_1418f6840
// 地址: 0x1418f6840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
int64_t r8 = sx.q(*(rcx + 0x190))

if (r8.d == 0xffffffff)
    return 0

void* rdx = rcx + 0x60
void* rax_1 = *(rdx + 0x30)

if (rax_1 != 0)
    rdx = rax_1

return sub_1418e5120(*(rcx + 0x198), *arg1, arg1[1], *(rdx + (r8 << 3))) __tailcall

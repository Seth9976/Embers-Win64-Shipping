// 函数: sub_140808240
// 地址: 0x140808240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xb8)
void* rbx = arg1 + 0xa8

if (rax != 0)
    rbx = rax

int64_t rdi = 0
int64_t rsi = sx.q(*(arg1 + 0xc0)) << 3
void* result = rbx + rsi
uint64_t rsi_1 = rsi u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        result = sub_1408299c0(arg2, *rbx + 0x48)
        rdi += 1
        rbx += 8
    while (rdi != rsi_1)

return result

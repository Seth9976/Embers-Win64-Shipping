// 函数: sub_142b912d0
// 地址: 0x142b912d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[1]
void* rdi = arg1[2]
void* rsi = *arg1

if (rax != 0 && *(rax + 0x130) == arg1)
    *(rax + 0x130) = 0

if ((**arg1 & 2) != 0)
    sub_142b9a390(arg1)

if ((**arg1 & 1) != 0)
    sub_142b91240(arg1)

int64_t rax_3 = *(rsi + 0x28)

if (rax_3 != 0)
    rax_3(arg1)

jump(*(rdi + 0x10))

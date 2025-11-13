// 函数: sub_142c594f0
// 地址: 0x142c594f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1
int64_t rdi = -1

do
    rdi += 1
while (arg1[rdi] != 0)

do
    rbx += 1
while (arg2[rbx] != 0)

if (rbx u< rdi)
    int64_t rax
    rax.b = 0
    return rax

char* rsi_2 = rbx - rdi + arg2
int32_t rax_1 = sub_142c70460(arg1, rsi_2)

if (rax_1 == 0)
    return rax_1

if (rbx != rdi)
    rax_1.b = rsi_2[-1] == 0x2e
    return rax_1

rax_1.b = 1
return rax_1

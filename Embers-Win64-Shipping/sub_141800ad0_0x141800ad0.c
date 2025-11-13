// 函数: sub_141800ad0
// 地址: 0x141800ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1

if (arg1 == 0)
    return 0

int64_t rax = -1

do
    rax += 1
while (arg1[rax] != 0)

int64_t result = sub_140a82f30(sx.q(rax.d) + 1, 0)

if (result == 0)
    return result

char* rcx_3 = result - rbx
char i

do
    i = *rbx
    *(rcx_3 + rbx) = i
    rbx = &rbx[1]
while (i != 0)
return result

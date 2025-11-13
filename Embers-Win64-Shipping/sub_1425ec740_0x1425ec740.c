// 函数: sub_1425ec740
// 地址: 0x1425ec740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1

if (arg1 == 0)
    return 0

int64_t rcx = -1

do
    rcx += 1
while (rbx[rcx] != 0)

int64_t result = CoTaskMemAlloc(rcx + 1)

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

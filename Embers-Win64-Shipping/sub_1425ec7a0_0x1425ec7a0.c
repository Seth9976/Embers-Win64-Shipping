// 函数: sub_1425ec7a0
// 地址: 0x1425ec7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg1

if (arg1 == 0)
    return 0

int64_t rcx = -1
bool cond:0_1

do
    cond:0_1 = rbx[rcx + 1] != 0
    rcx += 1
while (cond:0_1)
int64_t result = CoTaskMemAlloc((rcx << 1) + 2)

if (result == 0)
    return result

int16_t* rcx_3 = result - rbx
int16_t i

do
    i = *rbx
    *(rcx_3 + rbx) = i
    rbx = &rbx[1]
while (i != 0)
return result

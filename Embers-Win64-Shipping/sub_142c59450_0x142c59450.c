// 函数: sub_142c59450
// 地址: 0x142c59450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = data_143ccb8b0()

if (result == 0)
    return result

int64_t rbx = -1

do
    rbx += 1
while (result[rbx] != 0)

if (*result == 0x22)
    memmove(result, &result[1], rbx.d)
    rbx -= 1

if (rbx != 0 && result[rbx - 1] == 0x22)
    result[rbx - 1] = 0
    rbx -= 1

if (*result != 0x2f)
    data_143ccb8a0(result)
    jump(data_143ccb8b0)

if (rbx != 0 && result[rbx - 1] == 0x2f)
    result[rbx - 1] = 0

return result

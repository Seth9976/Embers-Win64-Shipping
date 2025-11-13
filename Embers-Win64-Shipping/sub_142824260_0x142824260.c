// 函数: sub_142824260
// 地址: 0x142824260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* buffer2 = arg2

if (arg2[3] u>= 0x10)
    buffer2 = *arg2

int64_t* buffer1 = arg1

if (arg1[3] u>= 0x10)
    buffer1 = *arg1

uint64_t count_2 = arg2[2]
uint64_t count_1 = arg1[2]
uint64_t count = count_1

if (count_2 u< count_1)
    count = count_2

int32_t rax = memcmp(buffer1, buffer2, count)

if (rax == 0)
    if (count_1 u>= count_2)
        rax.b = count_1 u> count_2
    else
        rax = -1

return zx.q(rax u>> 0x1f)

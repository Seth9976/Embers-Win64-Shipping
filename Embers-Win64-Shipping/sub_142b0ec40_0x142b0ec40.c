// 函数: sub_142b0ec40
// 地址: 0x142b0ec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* buffer1 = *arg1
void* buffer2 = *arg2

if (buffer1 == buffer2)
    int64_t rax
    rax.b = 1
    return rax

uint64_t count = zx.q(*(buffer1 + 8))

if (count.d == *(buffer2 + 8))
    int32_t rax_1
    rax_1.b = memcmp(buffer1, buffer2, count) == 0
    return rax_1

count.b = 0
return count

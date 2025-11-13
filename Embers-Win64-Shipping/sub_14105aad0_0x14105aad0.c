// 函数: sub_14105aad0
// 地址: 0x14105aad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = arg1 + 0xf8
uint64_t rbx = zx.q(arg2)
sub_14104a820(result_1, arg2)
int64_t rsi = sx.q(*(result_1 + 0x10))
int32_t rax = (rsi + rbx).d
*(result_1 + 0x10) = rax

if (rax s> *(result_1 + 0x14))
    sub_140809610(result_1, rsi.d)

void* result = *(result_1 + 8)

if (result != 0)
    result_1 = result

if (rbx.d != 0)
    result = nullptr
    __builtin_memset(result_1 + (rsi << 3), 0, rbx << 3)

return result

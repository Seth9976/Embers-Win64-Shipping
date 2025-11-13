// 函数: sub_140ff9320
// 地址: 0x140ff9320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = zx.d(arg5)
uint32_t rdi = zx.d(arg4)
void* rsi = *(*(arg1 + 0x4410) + (sx.q(arg3) << 3))
memcpy(zx.q(rdi) + *(rsi + 0x30), arg6, count)
uint32_t result = *(rsi + 0x38)
uint32_t result_1 = rdi + count

if (result_1 u>= result)
    result = result_1

*(rsi + 0x38) = result
return result

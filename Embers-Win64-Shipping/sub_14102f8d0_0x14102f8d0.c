// 函数: sub_14102f8d0
// 地址: 0x14102f8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count = zx.d(arg5)
uint64_t rdi = zx.q(arg4)
memcpy(arg1 + 0x8d00 + rdi, arg6, count)
int32_t result = *(arg1 + 0x9d00)
int32_t result_1 = rdi.d + count
*(arg1 + 0x9d08) = 1

if (result_1 u>= result)
    result = result_1

*(arg1 + 0x9d00) = result
return result

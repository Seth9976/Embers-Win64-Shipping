// 函数: sub_14176ffa0
// 地址: 0x14176ffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int32_t* r8 = *(r9 + 0x18) + sx.q(*arg2) * 0x18
*((sx.q(*r8) << 5) + *(r9 + 8) + 0x18) = 0xffffffff
int64_t result = sx.q(r8[1])

if (result.d != 0xffffffff)
    int64_t result_1 = result
    result = *arg1
    *((result_1 << 5) + *(result + 8) + 0x18) = 0xffffffff

return result

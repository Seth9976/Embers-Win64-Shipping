// 函数: sub_1409d7eb0
// 地址: 0x1409d7eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x18)
void* r8_2 = &result[sx.q(*(arg1 + 0x20)) * 2]

while (result != r8_2)
    int64_t rcx = *result
    result = &result[2]
    *(rcx + sx.q(arg2) * 0x10) = *(arg1 + 0x30)

return result

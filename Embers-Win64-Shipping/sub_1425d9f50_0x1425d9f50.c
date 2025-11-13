// 函数: sub_1425d9f50
// 地址: 0x1425d9f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg2 + 0x28))
int64_t zmm1 = *(arg1 + 8)
int32_t r8 = *(arg1 + 0x10)
int64_t rcx = *(arg2 + 0x20)
int64_t rdx_1 = result * 0x1f0 + rcx

if (rcx != rdx_1)
    result = rcx + 0x14
    
    do
        *result = zmm1
        rcx += 0x1f0
        *(result - 4) = 1
        *(result + 8) = r8
        result += 0x1f0
    while (rcx != rdx_1)

return result

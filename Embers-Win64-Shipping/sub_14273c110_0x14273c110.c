// 函数: sub_14273c110
// 地址: 0x14273c110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rsi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x170
    int32_t i
    
    do
        *(rbx_1 - 0x170) = *(rsi_1 + rbx_1 - 0x170)
        sub_1426cac00(rbx_1 - 0x168, &rsi_1[-0x2d] + rbx_1)
        *rbx_1 = *(rsi_1 + rbx_1)
        rbx_1 += 0x178
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result

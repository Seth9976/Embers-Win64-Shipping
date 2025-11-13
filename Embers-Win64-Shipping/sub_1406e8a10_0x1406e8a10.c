// 函数: sub_1406e8a10
// 地址: 0x1406e8a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg3

if (arg1 != arg2)
    void* rbx_1 = arg1 + 8
    void* rsi_2 = arg3 - arg1
    
    do
        *result = *(rbx_1 - 8)
        *(rsi_2 + rbx_1 + 0x38) = 0
        sub_1406ec540(rsi_2 + rbx_1, rbx_1)
        rbx_1 += 0x48
        result = &result[0x12]
    while (rbx_1 - 8 != arg2)

return result

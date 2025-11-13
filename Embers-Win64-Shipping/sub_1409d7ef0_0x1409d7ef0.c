// 函数: sub_1409d7ef0
// 地址: 0x1409d7ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** result = *(arg1 + 0x18)
void* r9_2 = &result[sx.q(*(arg1 + 0x20)) * 2]

if (result != r9_2)
    int64_t r10_1 = sx.q(arg2) * 0xc
    
    do
        int64_t* rdx_1 = *result
        result = &result[2]
        *(rdx_1 + r10_1) = *(arg1 + 0x28)
        *(rdx_1 + r10_1 + 8) = *(arg1 + 0x30)
    while (result != r9_2)

return result

// 函数: sub_140d30490
// 地址: 0x140d30490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(test_bit(zx.q(arg3[8].d), 8)))
    *(arg1 + 0x38) = sx.q(*(arg3 + 0x4c)) + *(arg1 + 0x28)
    jump(*(*arg3 + 0xc8))

int64_t* result = *(arg1 + 0x78)

while (*result != arg3)
    result = result[2]

*(arg1 + 0x38) = result[1]
return result

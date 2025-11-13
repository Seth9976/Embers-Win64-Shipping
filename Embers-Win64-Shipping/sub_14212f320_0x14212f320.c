// 函数: sub_14212f320
// 地址: 0x14212f320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) == 0)
    result = j_sub_140a82f30(0x1e8)
    
    if (result != 0)
        sub_142118c70(result)
        *(result + 0x198) = arg1
        *result = &data_1432d77a8
        *(result + 0x190) = 0
        __builtin_memset(result + 0x1a0, 0, 0x48)
        *(arg1 + 0x140) = result
        return 0
    
    *(arg1 + 0x140) = result

return result

// 函数: sub_14141ff40
// 地址: 0x14141ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *arg1
uint32_t result = zx.d(*(arg1 + 0xe))
uint64_t i_1 = zx.q(arg2)

if (not(test_bit(r9, i_1.d)))
    return 0xffffffff

if (i_1.d s> 0)
    int32_t rdx = 1
    uint64_t i
    
    do
        uint32_t result_1 = result + 1
        
        if ((rdx & r9) == 0)
            result_1 = result
        
        rdx = rol.d(rdx, 1)
        result = result_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

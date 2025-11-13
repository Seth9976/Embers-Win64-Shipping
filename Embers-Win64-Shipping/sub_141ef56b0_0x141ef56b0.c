// 函数: sub_141ef56b0
// 地址: 0x141ef56b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x1e].b & 8) != 0 && (*(*arg1 + 0x448))() != 0)
    *(arg1 + 0x385)
    jump(*(*arg1 + 0x590))

uint64_t result

if (arg1[0x29] != 0)
    result = zx.q(*(arg1 + 0x384))

if (arg1[0x29] == 0 || arg1[0x2d].b != result.b)
    int128_t zmm6 = *(arg1 + 0xcc)
    result = (*(*arg1 + 0x590))(arg1, zx.q(*(arg1 + 0x384)), 0)
    
    if (arg1[0x2d].b == 1)
        result = arg1[0x29]
        
        if (result == 0 || *(result + 0x298) == 0)
            int64_t rax_5 = *arg1
            *(arg1 + 0xcc) = zmm6.d
            return (*(rax_5 + 0x590))(arg1, 3, 0)

return result

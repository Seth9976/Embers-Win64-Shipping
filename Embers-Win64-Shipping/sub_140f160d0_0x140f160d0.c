// 函数: sub_140f160d0
// 地址: 0x140f160d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result

if (not((*arg2).d f!= *(arg1 + 0x98)) && not((*(arg2 + 8)).d f!= *(arg1 + 0xa0))
        && not((*(arg2 + 4)).d f!= *(arg1 + 0x9c)))
    result = *(arg2 + 0xc)

if ((*arg2).d f!= *(arg1 + 0x98) || (*(arg2 + 8)).d f!= *(arg1 + 0xa0)
        || (*(arg2 + 4)).d f!= *(arg1 + 0x9c) || not(result.d f== *(arg1 + 0xa4)))
    result = *arg2
    *(arg1 + 0x88) |= 1
    *(arg1 + 0x98) = result

return result

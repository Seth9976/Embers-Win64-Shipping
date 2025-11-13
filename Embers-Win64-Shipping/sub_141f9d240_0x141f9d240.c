// 函数: sub_141f9d240
// 地址: 0x141f9d240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result

if (not((*arg2).d f!= *(arg1 + 0x214)) && not((*(arg2 + 4)).d f!= *(arg1 + 0x218))
        && not((*(arg2 + 8)).d f!= *(arg1 + 0x21c)))
    result = *(arg2 + 0xc)

if ((*arg2).d f!= *(arg1 + 0x214) || (*(arg2 + 4)).d f!= *(arg1 + 0x218)
        || (*(arg2 + 8)).d f!= *(arg1 + 0x21c) || not(result.d f== *(arg1 + 0x220)))
    result = *arg2
    int32_t rax_1 = arg2[1].d
    *(arg1 + 0x28c) = 1
    *(arg1 + 0x214) = result
    *(arg1 + 0x224) = rax_1

return result

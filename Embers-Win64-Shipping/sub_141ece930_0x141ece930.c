// 函数: sub_141ece930
// 地址: 0x141ece930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*(arg1 + 0x5c) = data_143dbb1f8.q
uint64_t result = zx.q(data_143dbb200)
*(arg1 + 0x64) = result.d
*(arg1 + 0x50) = *(arg1 + 0x5c)
*(arg1 + 0x58) = result.d
*(arg1 + 0x68) = 0

if (*(arg1 + 0x38) s> 0)
    int64_t rdx_1 = 0
    
    do
        result = *(arg1 + 0x30)
        
        if (*(arg1 + 0x68) == 0)
            *(arg1 + 0x5c) = *(rdx_1 + result)
            result = zx.q(*(rdx_1 + result + 8))
            *(arg1 + 0x64) = result.d
            *(arg1 + 0x50) = *(arg1 + 0x5c)
            *(arg1 + 0x58) = result.d
            *(arg1 + 0x68) = 1
        else
            *(arg1 + 0x50) = __minss_xmmss_memss((*(arg1 + 0x50)).d, *(rdx_1 + result)).d
            *(arg1 + 0x54) = __minss_xmmss_memss((*(arg1 + 0x54)).d, *(rdx_1 + result + 4)).d
            *(arg1 + 0x58) = __minss_xmmss_memss((*(arg1 + 0x58)).d, *(rdx_1 + result + 8)).d
            *(arg1 + 0x5c) = __maxss_xmmss_memss(*(rdx_1 + result), *(arg1 + 0x5c))
            *(arg1 + 0x60) = __maxss_xmmss_memss((*(rdx_1 + result + 4)).d, *(arg1 + 0x60)).d
            *(arg1 + 0x64) = __maxss_xmmss_memss(*(rdx_1 + result + 8), *(arg1 + 0x64))
        
        i += 1
        rdx_1 += 0xc
    while (i s< *(arg1 + 0x38))

return result

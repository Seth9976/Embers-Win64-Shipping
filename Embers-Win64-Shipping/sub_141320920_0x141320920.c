// 函数: sub_141320920
// 地址: 0x141320920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*arg1)
uint64_t result

if ((rcx - 0x19).d u> 1 && *(&data_143f025f0 + rcx * 0x14) != data_143f025d0)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(arg1[1])
    result = zx.q(divs.dp.d(temp2_1:temp3_1, 2)) & 0x80000001
    
    if (result.d s< 0)
        result = zx.q(((result.d - 1) | 0xfffffffe) + 1)
    
    if (mods.dp.d(temp2_1:temp3_1, 2) == 1 || result.d == 1)
        return sub_1413198a0(rcx.d) __tailcall

result.b = 0
return result

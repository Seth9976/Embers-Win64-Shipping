// 函数: sub_140b1d1d0
// 地址: 0x140b1d1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1 & 0x80000003

if (result s< 0)
    result = ((result - 1) | 0xfffffffc) + 1

if (result == 0)
    int32_t rdx_6
    
    if (arg1 == arg1 s/ 0x64 * 0x64)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0x51eb851f, arg1)
        rdx_6 = temp2_1 s>> 7
    
    if (arg1 != arg1 s/ 0x64 * 0x64 || arg1 == (rdx_6 + (rdx_6 u>> 0x1f)) * 0x190)
        result.b = 1
        return result

result.b = 0
return result

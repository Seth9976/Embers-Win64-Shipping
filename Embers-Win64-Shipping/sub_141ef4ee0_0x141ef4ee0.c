// 函数: sub_141ef4ee0
// 地址: 0x141ef4ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg1 + 0x389)
uint64_t result
result.b = rcx u>> 4
result.b &= 1

if (result.b != arg2)
    *(arg1 + 0x3ac) = 0
    result.b = arg2 << 4
    bool cond:0_1 = *(arg1 + 0x148) == 0
    *(arg1 + 0x389) = (rcx & 0xef) | result.b
    
    if (not(cond:0_1))
        result = sub_1405be820(arg1)
        void* rcx_2 = *(result + 0x140)
        
        if (rcx_2 != 0 && arg2 != 0)
            return sub_141dd3b30(rcx_2, arg1, *(arg1 + 0x3bc))

return result

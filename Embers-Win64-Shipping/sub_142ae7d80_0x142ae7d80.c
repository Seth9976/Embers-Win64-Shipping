// 函数: sub_142ae7d80
// 地址: 0x142ae7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg2 + 8)
int32_t result

if (rdx s< 0 || *(arg1 + 0xc) s< rdx)
    result = sub_142ae7df0(arg1, rdx, arg3)

if ((rdx s>= 0 && *(arg1 + 0xc) s>= rdx) || result.b != 0)
    result = sub_142ae7f90(arg1, *(arg2 + 8))
    int32_t i = 0
    
    if (*(arg2 + 8) s> 0)
        int64_t rdx_2 = 0
        
        do
            rdx_2 += 4
            i += 1
            result = *(rdx_2 + *(arg2 + 0x18) - 4)
            *(rdx_2 + *(arg1 + 0x18) - 4) = result
        while (i s< *(arg2 + 8))

return result

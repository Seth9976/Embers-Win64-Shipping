// 函数: sub_141f8d290
// 地址: 0x141f8d290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2

if ((*(*arg2 + 0x268))(arg2) != 0)
    rdi = rdi[0x346]

*(arg1 + 0x28) = rdi
*(arg1 + 0x34) = arg3
*(arg1 + 0x38) = -1
int32_t result = *(arg1 + 0x30) & 0xfffff4ff
*(arg1 + 0x30) = (arg4 u>> 1 & 1) << 0xb | result
return result

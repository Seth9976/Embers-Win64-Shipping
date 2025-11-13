// 函数: sub_1429ceb80
// 地址: 0x1429ceb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 0x30) - *(arg1 + 0x28)) & 0xfffffffffffffff8) == 0)
    __builtin_memset(arg1 + 0x14, 0, 0x14)
    return 0

int32_t* rdx = **(arg1 + 0x28)
*(arg1 + 0x14) = rdx[2]
*(arg1 + 0x18) = rdx[1]
*(arg1 + 0x1c) = *rdx
*(arg1 + 0x20) = ((*(rdx + 0x38) - *(rdx + 0x30)) s>> 2).d
int32_t result = rdx[5]
*(arg1 + 0x24) = result
return result

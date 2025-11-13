// 函数: sub_142c36dd0
// 地址: 0x142c36dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg2)
int32_t* result = sub_142c381e0(((rbx + 6) << 4) + arg1)
int32_t rcx_3 = *(arg1 + (rbx << 2) + 0x44)
*(result + 8) = arg3
*result = rcx_3
*(arg1 + (rbx << 2) + 0x44) += 1
return result

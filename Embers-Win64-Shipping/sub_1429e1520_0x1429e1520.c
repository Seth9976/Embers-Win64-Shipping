// 函数: sub_1429e1520
// 地址: 0x1429e1520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = (arg2 + 7) s>> 3
int32_t r8_1 = (arg3 + 7) s>> 3
*(arg1 + 0x364) = rdx
*(arg1 + 0x35c) = r8_1
*(arg1 + 0x368) = rdx + 8
int32_t rax_2 = (r8_1 + 1) s>> 1
int32_t rdx_2 = (rdx + 1) s>> 1
*(arg1 + 0x358) = rax_2
int32_t result = rax_2 * rdx_2
*(arg1 + 0x360) = rdx_2
*(arg1 + 0x354) = result
return result

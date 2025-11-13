// 函数: sub_142740a40
// 地址: 0x142740a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
char result = DBI1::UpdateGlobalDataAddr(arg1)
*arg3 = result
return result

// 函数: sub_140684040
// 地址: 0x140684040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
int64_t result = Concurrency::details::VirtualProcessor::GetOwningRing(arg1)
*arg3 = result
return result

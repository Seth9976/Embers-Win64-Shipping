// 函数: sub_142c191b0
// 地址: 0x142c191b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
void* rax = *(rdx + 0x28)
int64_t rcx = *(rax + 0x10)
*(rdx + 8) = rcx
int64_t result = zx.q(*(rax + 0x18)) + rcx
*(rdx + 0x10) = result
return result

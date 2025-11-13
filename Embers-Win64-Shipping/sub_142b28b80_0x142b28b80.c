// 函数: sub_142b28b80
// 地址: 0x142b28b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142b23ec0(arg1)
int64_t rax = *(arg1 + 0x188)
int64_t result = (*(rax + 0x28))(rax, zx.q(arg2), 0)
*(arg1 + 0x194) = arg2
*(arg1 + 0x190) = 0
return result

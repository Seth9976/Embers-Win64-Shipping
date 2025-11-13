// 函数: sub_14266db50
// 地址: 0x14266db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg1[0x44].b
void* rdi = &arg1[1]

if (arg1 == 0)
    rdi = nullptr

*rdi = &data_14344d6a0
sub_142602460(rdi + 8)
*(rdi + 0x218) = rbx
jump(*(*arg1 + 0x20))

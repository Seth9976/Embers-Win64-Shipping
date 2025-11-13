// 函数: sub_140ce9fa0
// 地址: 0x140ce9fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[0x17].d)
int32_t rax = (rdi + 1).d
arg1[0x17].d = rax

if (rax s> *(arg1 + 0xbc))
    sub_1405a4d70(&arg1[0x16])

*(arg1[0x16] + (rdi << 3)) = arg2
int64_t result = (*(*arg1 + 0x18))(arg1)
*(arg2 + 0xe8) = result
return result

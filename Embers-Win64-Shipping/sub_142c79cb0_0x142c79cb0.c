// 函数: sub_142c79cb0
// 地址: 0x142c79cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3f8) == 0)
    *(arg1 + 0x708) = 0
    return 0

char* rax_1 = sub_142c78cd0(*(arg1 + 0x1f0), 0, arg1)
char* rax_2 = sub_142c78cd0(*(arg1 + 0x1f8), 0, arg1)
int32_t rax_3 = sub_142c79fe0(arg1)
data_143ccb8a0(rax_1)
data_143ccb8a0(rax_2)

if (rax_3 == 0)
    *(arg1 + 0x708) = 6

return zx.q(rax_3)

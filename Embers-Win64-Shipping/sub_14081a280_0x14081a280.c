// 函数: sub_14081a280
// 地址: 0x14081a280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dd6c10
arg1[1] = 0
void* r8 = *(arg2 + 0x778)
char rax = *(r8 + 0x38)
arg1[2].b = rax

if (rax != 0)
    arg1[3] = *(arg2 + 0x728)
    return arg1

void* rax_1 = *(r8 + 0x98)
arg1[3] = rax_1
*(rax_1 + 8) += 1
return arg1

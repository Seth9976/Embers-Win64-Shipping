// 函数: sub_14193d680
// 地址: 0x14193d680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg1 + 0x18))

if (*(arg1 + 0x40) != 2)
    int32_t arg_8 = 0
    data_143effcd0(rcx, 0x8866, &arg_8)
    uint64_t rax_1 = zx.q(arg_8)
    *(arg1 + 0x28) = rax_1
    *(arg1 + 0x3c) = 1
    *(arg1 + 0x38) += 1
    return rax_1

int64_t arg_10 = 0
data_143f001e8(rcx, 0x8866, &arg_10)
int64_t rax = arg_10
*(arg1 + 0x28) = rax
*(arg1 + 0x3c) = 1
*(arg1 + 0x38) += 1
return rax

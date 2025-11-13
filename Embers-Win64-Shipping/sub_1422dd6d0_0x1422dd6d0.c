// 函数: sub_1422dd6d0
// 地址: 0x1422dd6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142006940()
int64_t rdx = *rax
int64_t rax_1 = (*(rdx + 0x70))(rax, rdx)
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 8) = rax_1
*(arg1 + 0x20) = arg1
void* rax_2 = data_143f564d8

if (rax_2 != 0)
    *(rax_2 + 8) = arg1 + 0x10
    rax_2 = data_143f564d8

*(arg1 + 0x10) = rax_2
*(arg1 + 0x18) = &data_143f564d8
data_143f564d8 = arg1 + 0x10
return &data_143f564d8

// 函数: sub_142bf3960
// 地址: 0x142bf3960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1

if (arg1 == 0)
    rdi = &data_143ccb6b0

int32_t* result = sub_140dc0ea0(1, 0x68)

if (result == 0)
    return &data_14369a0e0

*result = 1
result[1] = 1
*(result + 8) = 0
sub_142bf2880(rdi)
*(result + 0x10) = &data_14369a0e0
*(result + 0x18) = sub_142bf2890(rdi)
*(result + 0x58) = result
*(result + 0x40) = &data_14369a300
int32_t rax_1 = sub_142bfb140(rdi)
result[9] = rax_1
result[8] = rax_1
return result

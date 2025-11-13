// 函数: sub_142222130
// 地址: 0x142222130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
int32_t rdx
rax, rdx = memcmp(arg1 + 0x28, arg2, 0x20)

if (rax == 0)
    rax.b = 0
    return rax

*(arg1 + 0x28) = *arg2
*(arg1 + 0x38) = arg2[1]
sub_142226270(arg1 + 0x28, rdx)
*(arg1 + 0x1c) = data_143f3a508
int64_t arg_8
sub_140d3a3a0(&arg_8, nullptr)
int64_t rax_2 = arg_8
*(arg1 + 0xf) &= 0xfd
*(arg1 + 0x60) = rax_2
sub_142227570(arg1)
int64_t rax_3
rax_3.b = 1
return rax_3

// 函数: sub_1409399d0
// 地址: 0x1409399d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14067f880(*(arg1 + 8))
*(arg1 + 0x24) -= 1
int32_t i_2 = *(arg1 + 0x24)
int64_t* rbx = *(arg1 + 8)
int16_t arg_8

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax = *rbx
        arg_8 = 9
        (*(rax + 0x150))(rbx, &arg_8, 2)
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 8)

arg_8 = 0x7d
(*(*rbx + 0x150))(rbx, &arg_8, 2)
*(arg1 + 0x18) -= 1
int64_t result = sub_140679af0(arg1 + 0x10)
*(arg1 + 0x20) = 3
return result

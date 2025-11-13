// 函数: sub_140baf550
// 地址: 0x140baf550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_c = arg2
int32_t var_10 = arg3.d
int32_t temp0 = arg3.d

if (temp0 == 0)
    int64_t rax_2 = sx.q((var_10.q u>> 0x20).d)
    *(arg1 + 0x500 + rax_2 * 0x18 + 0x14) = 1
    return rax_2

int32_t rax_6

if (temp0 s>= 0)
    rax_6 = (arg3 - 1).d * 3 + (var_10.q u>> 0x20).d + *(arg1 + 0x564)
else
    rax_6 = (var_10.q u>> 0x20).d - ((arg3 << 1) + 2).d + *(arg1 + 0x560)

int64_t rax_10 = *(arg1 + 0x548)
*(rax_10 + sx.q(rax_6) * 0x18 + 0x14) = 1
return rax_10

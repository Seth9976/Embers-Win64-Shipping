// 函数: sub_1407879a0
// 地址: 0x1407879a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_14074d7c0(arg1, arg2)

if (rax == 0)
    return rax

*(arg2 + 0x30) = *(arg1 + 0x30)
sub_140747710(arg2 + 0x38, arg1 + 0x38)
*(arg2 + 0x68) = *(arg1 + 0x68)
sub_140780c40(arg2 + 0x70, arg1 + 0x70)
*(arg2 + 0x80) = *(arg1 + 0x80)
sub_140780c40(arg2 + 0x88, arg1 + 0x88)
sub_140780c40(arg2 + 0x98, arg1 + 0x98)
*(arg2 + 0xb0) ^= (*(arg1 + 0xb0) ^ *(arg2 + 0xb0)) & 1
*(arg2 + 0xa8) = *(arg1 + 0xa8)
int64_t rax_5
rax_5.b = 1
return rax_5

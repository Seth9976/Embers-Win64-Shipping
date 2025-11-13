// 函数: sub_142a358a0
// 地址: 0x142a358a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg2[2]
int32_t r8 = arg2[3]
int32_t r11 = *(arg1 + 8)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r10)
int32_t r9 = *(arg1 + 0xc)
int32_t rax_3 = (temp1 - temp0) s>> 1
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8)
int32_t rax_7 = (temp3 - temp2) s>> 1

if (r10 * 2 == r11 && r8 * 2 == r9)
    sub_142a35170(*(arg1 + 0x38), sx.q(*(arg1 + 0x10)), *(arg2 + 0x38), sx.q(arg2[4]), r10, r8)
    sub_142a35170(*(arg1 + 0x40), sx.q(*(arg1 + 0x24)), *(arg2 + 0x40), sx.q(arg2[9]), rax_3, rax_7)
    sub_142a35170(*(arg1 + 0x48), sx.q(*(arg1 + 0x24)), *(arg2 + 0x48), sx.q(arg2[9]), rax_3, rax_7)
    return sub_142a218c0(arg2)

if (r10 != r11 * 2 || r8 != r9 * 2 || rax_3 s> 0x780)
    return sub_142a34e50(arg1, arg2)

sub_142a35310(*(arg1 + 0x38), sx.q(*(arg1 + 0x10)), *(arg2 + 0x38), sx.q(arg2[4]), r10, r8)
sub_142a35310(*(arg1 + 0x40), sx.q(*(arg1 + 0x24)), *(arg2 + 0x40), sx.q(arg2[9]), rax_3, rax_7)
sub_142a35310(*(arg1 + 0x48), sx.q(*(arg1 + 0x24)), *(arg2 + 0x48), sx.q(arg2[9]), rax_3, rax_7)
return sub_142a218c0(arg2)

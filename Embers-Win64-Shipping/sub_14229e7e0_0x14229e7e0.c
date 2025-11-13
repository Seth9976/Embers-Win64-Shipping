// 函数: sub_14229e7e0
// 地址: 0x14229e7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = *(arg1 + 0x3c)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0x28))
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0x28))
void* rcx = *(arg1 + 0x20)
int32_t rax_6 = (temp3 + (temp2 & 3)) s>> 2

if (r11 == 0)
    rax_6 = (temp1 - temp0) s>> 1

if ((rcx.b & 1) != 0)
    rcx = (rcx s>> 1) + arg1 + 0x20

arg2[1].d = rax_6
*arg2 = rcx
*(arg2 + 0xc) = r11
return arg2

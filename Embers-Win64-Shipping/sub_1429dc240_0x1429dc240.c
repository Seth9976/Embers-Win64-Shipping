// 函数: sub_1429dc240
// 地址: 0x1429dc240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = *(arg1 + 0x30)
*(arg2 + 0x40) = *(arg1 + 0x38)
*(arg2 + 0x48) = *(arg1 + 0x40)
arg2[2] = *(arg1 + 0x18)
arg2[3] = *(arg1 + 0x1c)
arg2[0x20] = *(arg1 + 0x20)
arg2[0x21] = *(arg1 + 0x24)
int32_t rax_6 = *(arg1 + 0x18)
*arg2 = rax_6
arg2[1] = *(arg1 + 0x1c)

if (*(arg1 + 0x28) == 1)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_6 + 1)
    rax_6 = (temp1_1 - temp0_1) s>> 1

arg2[5] = rax_6
int32_t rax_10 = arg2[1]

if (*(arg1 + 0x2c) == 1)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_10 + 1)
    rax_10 = (temp3_1 - temp2_1) s>> 1

arg2[6] = rax_10
arg2[8] = rax_10
arg2[7] = rax_6
arg2[4] = *(arg1 + 0x50)
arg2[9] = *(arg1 + 0x54)
arg2[0x1e] = *(arg1 + 4)
arg2[0x1f] = *(arg1 + 8)
arg2[0x19] = (*(arg1 + 0x50) - *(arg1 + 0xc)) u>> 1
arg2[0x1b] = *(arg1 + 0x28)
arg2[0x1c] = *(arg1 + 0x2c)
return 0

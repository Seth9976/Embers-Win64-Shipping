// 函数: sub_142b9de80
// 地址: 0x142b9de80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[2]
int32_t r9 = arg1[6]
int32_t r10 = arg1[4]
int32_t rax_1 = *arg1 + r11
arg1[0xc] = r9
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_1)
int32_t rax_4 = (temp1 - temp0) s>> 1
arg1[2] = rax_4
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r9 + r10)
int32_t rax_8 = (temp3 - temp2) s>> 1
arg1[0xa] = rax_8
int32_t r11_1 = arg1[3]
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r10 + r11)
int32_t r10_1 = arg1[5]
int32_t rax_12 = (temp5 - temp4) s>> 1
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_12 + rax_4)
int32_t rax_16 = (temp7 - temp6) s>> 1
arg1[4] = rax_16
int32_t rcx_1 = arg1[7]
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(rax_8 + rax_12)
arg1[0xd] = rcx_1
int32_t rax_20 = (temp9 - temp8) s>> 1
arg1[8] = rax_20
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(rax_20 + rax_16)
arg1[6] = (temp11 - temp10) s>> 1
int32_t temp12
int32_t temp13
temp12:temp13 = sx.q(arg1[1] + r11_1)
int32_t rax_29 = (temp13 - temp12) s>> 1
arg1[3] = rax_29
int32_t temp14
int32_t temp15
temp14:temp15 = sx.q(rcx_1 + r10_1)
int32_t rax_33 = (temp15 - temp14) s>> 1
arg1[0xb] = rax_33
int32_t temp16
int32_t temp17
temp16:temp17 = sx.q(r10_1 + r11_1)
int32_t rax_37 = (temp17 - temp16) s>> 1
int32_t temp18
int32_t temp19
temp18:temp19 = sx.q(rax_37 + rax_29)
int32_t rax_41 = (temp19 - temp18) s>> 1
arg1[5] = rax_41
int32_t temp20
int32_t temp21
temp20:temp21 = sx.q(rax_33 + rax_37)
int32_t rax_45 = (temp21 - temp20) s>> 1
arg1[9] = rax_45
int32_t temp22
int32_t temp23
temp22:temp23 = sx.q(rax_45 + rax_41)
int32_t result = (temp23 - temp22) s>> 1
arg1[7] = result
return result

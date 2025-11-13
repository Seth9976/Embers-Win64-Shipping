// 函数: sub_142bdf0f0
// 地址: 0x142bdf0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_26 = arg1[4]
arg1[8] = rax_26
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_26 + arg1[2])
int32_t rax_3 = (temp1 - temp0) s>> 1
arg1[6] = rax_3
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*arg1 + arg1[2])
int32_t rax_8 = (temp3 - temp2) s>> 1
arg1[2] = rax_8
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_8 + rax_3)
arg1[4] = (temp5 - temp4) s>> 1
int32_t rax_13 = arg1[5]
arg1[9] = rax_13
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rax_13 + arg1[3])
int32_t rax_17 = (temp7 - temp6) s>> 1
arg1[7] = rax_17
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(arg1[1] + arg1[3])
int32_t rax_22 = (temp9 - temp8) s>> 1
arg1[3] = rax_22
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(rax_22 + rax_17)
int32_t result = (temp11 - temp10) s>> 1
arg1[5] = result
return result

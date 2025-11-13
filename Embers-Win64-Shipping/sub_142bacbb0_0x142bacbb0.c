// 函数: sub_142bacbb0
// 地址: 0x142bacbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg3 & 0xc0

if (r9 == 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    *(arg1 + 0x2c0) = (temp1_1 - temp0_1) s>> 1
else if (r9 == 0x40)
    *(arg1 + 0x2c0) = sx.d(arg2)
else if (r9 == 0x80)
    *(arg1 + 0x2c0) = sx.d(arg2) * 2
else if (r9 == 0xc0)
    *(arg1 + 0x2c0) = sx.d(arg2)

int32_t rax_7 = arg3 & 0x30

if (rax_7 == 0)
    *(arg1 + 0x2c4) = 0
else if (rax_7 == 0x10)
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(*(arg1 + 0x2c0))
    *(arg1 + 0x2c4) = (temp5_1 + (temp4_1 & 3)) s>> 2
else if (rax_7 == 0x20)
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(*(arg1 + 0x2c0))
    *(arg1 + 0x2c4) = (temp9_1 - temp8_1) s>> 1
else if (rax_7 == 0x30)
    int32_t temp10_1
    int32_t temp11_1
    temp10_1:temp11_1 = sx.q(*(arg1 + 0x2c0) * 3)
    *(arg1 + 0x2c4) = (temp11_1 + (temp10_1 & 3)) s>> 2

int32_t r8 = *(arg1 + 0x2c0)
int32_t r10_1 = arg3 & 0xf
int32_t result

if (r10_1 != 0)
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q((r10_1 - 4) * r8)
    result = (temp7_1 + (temp6_1 & 7)) s>> 3
else
    result = r8 - 1

*(arg1 + 0x2c4) s>>= 8
*(arg1 + 0x2c8) = result
*(arg1 + 0x2c8) s>>= 8
*(arg1 + 0x2c0) = r8 s>> 8
return result

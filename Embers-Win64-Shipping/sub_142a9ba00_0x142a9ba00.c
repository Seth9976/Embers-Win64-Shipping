// 函数: sub_142a9ba00
// 地址: 0x142a9ba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9 = *(arg2 + 0x28)
char* rdx = *arg1
char i

do
    i = *r9
    r9 = &r9[1]
    *rdx = i
    rdx = &rdx[1]
while (i != 0)
char* rdx_1 = *(arg3 + 0x28)
char* result = arg1[1]
char i_1

do
    i_1 = *rdx_1
    rdx_1 = &rdx_1[1]
    *result = i_1
    result = &result[1]
while (i_1 != 0)
return result

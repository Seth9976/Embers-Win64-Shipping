// 函数: sub_1414e05d0
// 地址: 0x1414e05d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg1[1])
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(divs.dp.d(temp2:temp3, 2))
int32_t temp14
int32_t temp15
temp14:temp15 = sx.q(divs.dp.d(temp8:temp9, 2))
int32_t temp0_2 = divs.dp.d(temp14:temp15, 2)
int32_t temp1_2 = mods.dp.d(temp14:temp15, 2)
int32_t rcx_1 = temp0_2 & 0x80000001

if (rcx_1 s< 0)
    rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1

int32_t temp20
int32_t temp21
temp20:temp21 = sx.q(temp0_2)
int32_t result = (temp21 + (temp20 & 3)) s>> 2 & 0x80000001

if (result s< 0)
    result = ((result - 1) | 0xfffffffe) + 1

if (result == 1)
label_1414e0628:
    
    if (temp1_2 != 1 || mods.dp.d(temp2:temp3, 2) != temp1_2)
        return sub_14076f990(*arg1) __tailcall
else if (mods.dp.d(temp8:temp9, 2) != 1 && rcx_1 != 1)
    goto label_1414e0628

result.b = 0
return result

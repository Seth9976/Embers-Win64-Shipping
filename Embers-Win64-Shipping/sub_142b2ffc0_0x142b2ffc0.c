// 函数: sub_142b2ffc0
// 地址: 0x142b2ffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = arg2

if (arg2 == 0)
    return 0xffffffff

int32_t result_1 = 0
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t result = (temp1 - temp0) s>> 1
int32_t rcx_2 = (*(arg3 + (sx.q(*(arg1 + (sx.q(result) << 2))) << 3)) s>> 0x20).d
bool cond:0 = arg4 u>= rcx_2

if (arg4 == rcx_2)
    return result

int32_t rcx_5

do
    if (cond:0)
        if (result == result_1)
            return not.d(result_1 + 1)
        
        result_1 = result
    else
        if (result == result_1)
            return zx.q(not.d(result_1))
        
        result_2 = result
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(result_2 + result_1)
    result = (temp3_1 - temp2_1) s>> 1
    rcx_5 = (*(arg3 + (sx.q(*(arg1 + (sx.q(result) << 2))) << 3)) s>> 0x20).d
    cond:0 = arg4 u>= rcx_5
while (arg4 != rcx_5)
return result

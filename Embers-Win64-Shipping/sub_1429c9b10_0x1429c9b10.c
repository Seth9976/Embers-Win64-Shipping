// 函数: sub_1429c9b10
// 地址: 0x1429c9b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_8 = arg1
int64_t var_18 = -2
int32_t* result = arg1
*arg1 = 0
arg1[1] = arg4
*(arg1 + 8) = arg2
*(arg1 + 0x10) = arg3
void* arg_10 = &arg1[6]
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x18) = sub_1429ca6b0()
int64_t* rcx_1 = *(result + 8)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(((rcx_1[1] - *rcx_1) s>> 2).d)
int32_t rax_6 = (temp1 - temp0) s>> 1
*result = rax_6
int32_t i = 0

if (rax_6 s> 0)
    int32_t* rax_7 = nullptr
    
    do
        *(rax_7 + **(result + 8)) = 0
        *(rax_7 + **(result + 8) + 4) = result[1] * i
        i += 1
        rax_7 = &rax_7[2]
    while (i s< *result)

sub_14058d4e0(*(result + 0x10), sx.q(result[1] * *result))
return result

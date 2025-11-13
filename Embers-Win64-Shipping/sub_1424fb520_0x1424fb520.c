// 函数: sub_1424fb520
// 地址: 0x1424fb520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

float var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_3 = *(arg2 + 0x20)
float result = result_1
int64_t rcx_2
rcx_2.b = rax_3 != 0
bool cond:2 = result != var_18
*(arg2 + 0x20) = rcx_2 + rax_3

if (not(cond:2))
    float result_2
    result = result_2
    int32_t var_14
    
    if (not(result f!= var_14))
        float result_3
        result = result_3
        int32_t var_10
        
        if (not(result f!= var_10))
            *arg3 = 0
            return result

*arg3 = 1
return result

// 函数: sub_140b9b500
// 地址: 0x140b9b500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = arg2
EnterCriticalSection(arg1 + 0xe8)
int64_t i = i_1
int64_t* result = *(arg1 + 0x88)
int64_t r10 = sx.q(*(arg1 + 0x90))
void* r9 = &result[r10]

if (result == r9)
label_140b9b55e:
    int32_t rax = (r10 + 1).d
    *(arg1 + 0x90) = rax
    
    if (rax s> *(arg1 + 0x94))
        sub_1405a4d70(arg1 + 0x88)
        i = i_1
    
    *((r10 << 3) + *(arg1 + 0x88)) = i
    int64_t var_28 = i_1 + 0x14
    int64_t* var_20_1 = &i_1
    void arg_8
    result = sub_140b92920(arg1 + 0x98, &arg_8, &var_28, nullptr)
else
    while (*result != i)
        result = &result[1]
        
        if (result == r9)
            goto label_140b9b55e

if (arg1 == -0xe8)
    return result

return LeaveCriticalSection(arg1 + 0xe8)

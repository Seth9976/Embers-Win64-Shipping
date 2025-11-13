// 函数: sub_141cbf0a0
// 地址: 0x141cbf0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)
int64_t r9 = sx.q(arg2[1].d)

if (result.d != r9.d)
label_141cbf0e2:
    result.b = 0
    return result

int64_t* i = *arg1

for (void* r10_1 = &i[result]; i != r10_1; i = &i[1])
    if (r9.d == 0)
        goto label_141cbf0e2
    
    result = *arg2
    int64_t rdx = result + (r9 << 3)
    
    if (result == rdx)
        goto label_141cbf0e2
    
    while (*result != *i)
        result += 8
        
        if (result == rdx)
            goto label_141cbf0e2

result.b = 1
return result

// 函数: sub_1423d6c20
// 地址: 0x1423d6c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
void* r10 = &rax[sx.q(*(arg1 + 0xc40))]
char* r9

if (rax == r10)
label_1423d6c73:
    r9 = sub_1423d6f90(data_143f5b298, 0)
else
    while (true)
        r9 = *rax
        
        if (*(r9 + 0x278) == arg2)
            break
        
        rax = &rax[1]
        
        if (rax == r10)
            goto label_1423d6c73

int64_t rax_2 = sx.q(*(r9 + 0x228))
void* result

if (rax_2.d s> 0)
    void** rdx = *(r9 + 0x220)
    int64_t rcx_1 = 0
    
    do
        result = *rdx
        
        if (result != 0 && *(result + 0x190) == arg3)
            goto label_1423d6ce6
        
        rcx_1 += 1
        rdx = &rdx[2]
    while (rcx_1 s< rax_2)

result = sub_1423d6d70(arg1, r9, arg4)

if (result != 0)
    sub_14217b820(result, arg3)
    result.b = 1
    return result

label_1423d6ce6:
result.b = 0
return result

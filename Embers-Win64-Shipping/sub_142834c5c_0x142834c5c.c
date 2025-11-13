// 函数: sub_142834c5c
// 地址: 0x142834c5c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1428372d4()

if (rax != 0)
    int64_t* result = *arg1
    
    if (result != 0)
    label_142834cbb:
        *result = rax
        result[2] = sub_142835068
        result[3] = sub_142835094
        result[4] = sub_14283509c
        result[5] = sub_142835170
        result[6] = sub_14283512c
        
        if (sub_142834e48(rax, arg2, arg1[3]) != 0xffffffff)
            return result
        
        sub_142834420(rax)
    else
        int64_t* result_1
        int64_t r8_1
        result_1, r8_1 = malloc(zx.q((&result[7]).d))
        result = result_1
        
        if (result_1 != 0)
            goto label_142834cbb
        
        sub_142833a04((result_1 + 1).d, "Out of memory", r8_1)

return nullptr

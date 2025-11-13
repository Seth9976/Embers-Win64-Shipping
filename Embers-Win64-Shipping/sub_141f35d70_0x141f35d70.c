// 函数: sub_141f35d70
// 地址: 0x141f35d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xa0)
void* result

if (rbx == 0)
label_141f35da2:
    result = *(arg1 + 0xa8)
    char rcx_3
    
    if (result != 0)
    label_141f35dbe:
        
        if (sub_14243ade0(result).b == 0)
            rcx_3 = 0
        else
            rcx_3 = 1
    else
        result = sub_141ee69e0(arg1)
        
        if (result != 0)
            goto label_141f35dbe
        
        rcx_3 = 0
    
    if (rbx == 0 || (*(rbx + 0x58) & 0x20) == 0)
        result.b = 1
    else
        result.b = 0
    
    if (rcx_3 != 0 && result.b != 0)
        result.b = 1
        return result
else
    int64_t rax_1 = sub_141dcb240(rbx)
    
    if (rax_1 == 0)
        goto label_141f35da2
    
    if (sub_141f35d70(rax_1).b != 0)
        goto label_141f35da2

result.b = 0
return result

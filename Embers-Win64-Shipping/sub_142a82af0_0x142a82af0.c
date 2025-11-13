// 函数: sub_142a82af0
// 地址: 0x142a82af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg4)
int64_t rcx = *arg1
void* result

if (rcx != 0)
    if (rbx.d s<= *arg2)
        result.b = 1
        return result
    
    if (arg3 != 0)
        result = sub_142a7dd30(rcx, rbx)
        
        if (result != 0)
            *arg1 = result
        label_142a82b67:
            result.b = 1
            *arg2 = rbx.d
            return result
else if (arg3 != 0)
    result = sub_142a7dd00(rbx)
    *arg1 = result
    
    if (result != 0)
        goto label_142a82b67

result.b = 0
return result

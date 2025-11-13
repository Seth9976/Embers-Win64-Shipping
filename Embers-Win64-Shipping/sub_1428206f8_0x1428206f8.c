// 函数: sub_1428206f8
// 地址: 0x1428206f8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = arg3
void** rbx = arg1
char* result

if (arg2 != 1)
    if (arg1[3] u>= 0x10)
        arg1 = *arg1
    
    int64_t rax = sub_14058e700(arg1)
    int64_t rdi_2 = rbx[2] + rax
    
    if (rbx[3] u>= 0x10)
        rbx = *rbx
    
    result = sub_14058e700(rbx)
    void** rcx
    
    if (result == rdi_2)
    label_142820757:
        rcx.b = 1
    else
        rcx.b = 0
        
        while (rsi.b == 0 || *result u< 0x80)
            result = &result[1]
            
            if (result == rdi_2)
                goto label_142820757
    
    result.b = rcx.b
else
    result.b = 0

return result

// 函数: sub_142112f10
// 地址: 0x142112f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x80)
void* rdi_2 = sx.q(*(arg1 + 0x88)) * 0x30 + rbx
int64_t result

if (rbx == rdi_2)
label_142112f70:
    result.b = 0
else
    while (true)
        int64_t arg_8
        sub_140b4c620(&arg_8, rbx)
        
        if (arg_8 == *arg2)
            *arg3 = *(rbx + 0x10)
            *arg4 = *(rbx + 0x18)
            result.b = 1
            break
        
        rbx += 0x30
        
        if (rbx == rdi_2)
            goto label_142112f70

return result

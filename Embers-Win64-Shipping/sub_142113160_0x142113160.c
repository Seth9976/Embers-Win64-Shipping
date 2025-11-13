// 函数: sub_142113160
// 地址: 0x142113160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x90)
void* rdi = rbx + sx.q(*(arg1 + 0x98)) * 0x28
int64_t result

if (rbx == rdi)
label_1421131c0:
    result.b = 0
else
    while (true)
        int64_t arg_8
        sub_140b4c620(&arg_8, rbx)
        
        if (arg_8 == *arg2)
            *arg3 = *(rbx + 0x24)
            result.b = 1
            *arg4 = *(rbx + 0x14)
            break
        
        rbx += 0x28
        
        if (rbx == rdi)
            goto label_1421131c0

return result

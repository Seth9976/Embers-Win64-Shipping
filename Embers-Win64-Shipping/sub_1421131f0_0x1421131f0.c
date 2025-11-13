// 函数: sub_1421131f0
// 地址: 0x1421131f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x70)
void* rdi = rbx + sx.q(*(arg1 + 0x78)) * 0x28
int64_t result

if (rbx == rdi)
label_142113240:
    result.b = 0
else
    while (true)
        int64_t arg_8
        sub_140b4c620(&arg_8, rbx)
        
        if (arg_8 == *arg2)
            *arg3 = *(rbx + 0x10)
            result.b = 1
            break
        
        rbx += 0x28
        
        if (rbx == rdi)
            goto label_142113240

return result

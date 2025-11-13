// 函数: sub_1423199e0
// 地址: 0x1423199e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = *(arg1 + 0x800)
void* rdi = &rbx[sx.q(*(arg1 + 0x808))]
int64_t result

if (rbx == rdi)
label_142319a43:
    result.b = 0
else
    while (true)
        int64_t var_28_1 = 0
        
        if (sub_14221da40(*rbx, arg2, arg3).b != 0)
            result.b = 1
            break
        
        rbx = &rbx[1]
        
        if (rbx == rdi)
            goto label_142319a43

return result

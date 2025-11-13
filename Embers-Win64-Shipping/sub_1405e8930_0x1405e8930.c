// 函数: sub_1405e8930
// 地址: 0x1405e8930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)
void* rdi = &rbx[sx.q(*(arg1 + 0x10))]
int64_t result

if (rbx == rdi)
label_1405e897c:
    result.b = 0
else
    while (true)
        int64_t* rcx = *rbx
        
        if ((*(*rcx + 0x10))(rcx, arg2, arg3).b != 0)
            result.b = 1
            break
        
        rbx = &rbx[1]
        
        if (rbx == rdi)
            goto label_1405e897c

return result

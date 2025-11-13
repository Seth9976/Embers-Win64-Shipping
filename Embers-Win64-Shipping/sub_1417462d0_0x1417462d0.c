// 函数: sub_1417462d0
// 地址: 0x1417462d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
void* rdi = &rbx[sx.q(*(arg1 + 0x18))]
int64_t result

if (rbx == rdi)
label_14174631c:
    result.b = 0
else
    while (true)
        int64_t* rcx = *rbx
        
        if ((*(*rcx + 0x60))(rcx, arg2, arg3).b != 0)
            result.b = 1
            break
        
        rbx = &rbx[1]
        
        if (rbx == rdi)
            goto label_14174631c

return result

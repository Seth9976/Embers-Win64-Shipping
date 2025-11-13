// 函数: sub_1421130b0
// 地址: 0x1421130b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0xa0)
void* rdi = &rbx[sx.q(*(arg1 + 0xa8)) * 0xa]
int64_t result

if (rbx == rdi)
label_142113110:
    result.b = 0
else
    while (true)
        int64_t arg_8
        sub_140b4c620(&arg_8, rbx)
        
        if (arg_8 == *arg2)
            *arg3 = rbx[9].b
            *arg4 = *(rbx + 0x25)
            *arg5 = *(rbx + 0x26)
            *arg6 = *(rbx + 0x27)
            *arg7 = *(rbx + 0x14)
            result.b = 1
            break
        
        rbx = &rbx[0xa]
        
        if (rbx == rdi)
            goto label_142113110

return result

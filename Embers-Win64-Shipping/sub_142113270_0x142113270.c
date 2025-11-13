// 函数: sub_142113270
// 地址: 0x142113270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x60)
void* rdi_2 = &rbx[sx.q(*(arg1 + 0x68)) * 0xc]
int64_t result

if (rbx == rdi_2)
label_1421132c2:
    result.b = 0
else
    while (true)
        int64_t arg_8
        sub_140b4c620(&arg_8, rbx)
        
        if (arg_8 == *arg2)
            result.b = 1
            *arg3 = *(rbx + 0x10)
            break
        
        rbx = &rbx[0xc]
        
        if (rbx == rdi_2)
            goto label_1421132c2

return result

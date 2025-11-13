// 函数: sub_140b55bd0
// 地址: 0x140b55bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg1 == arg2)
    *arg3 = 0
    result.b = 1
    return result

int32_t rbx = 0
void* rdi = *(arg1 + 0x10)

if (*(arg1 + 0x65) u<= 0)
label_140b55c47:
    result.b = 0
else
    while (true)
        uint32_t arg_8 = 0
        
        if (sub_140b55bd0(*(rdi + 8), arg2, &arg_8) != 0)
            *arg3 = *(rdi + 0x20) + arg_8
            result.b = 1
            break
        
        rbx += 1
        rdi = *(rdi + 0x10)
        
        if (rbx u>= zx.d(*(arg1 + 0x65)))
            goto label_140b55c47

return result

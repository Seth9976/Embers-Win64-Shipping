// 函数: sub_1423b1790
// 地址: 0x1423b1790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1

if (result != 0)
    int32_t arg_8
    sub_140865c40(result + 0x30, &arg_8, arg2)
    int64_t rax = sx.q(arg_8)
    void* const rcx_1
    
    if (rax.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(result + 0x30) + rax * 0x18
    
    result = rcx_1 + 8
    
    if (rcx_1 == 0)
        result = nullptr
    
    if (result != 0 && *result != 0xffffffff)
        result.b = 1
        return result

result.b = 0
return result

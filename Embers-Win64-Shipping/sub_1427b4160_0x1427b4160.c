// 函数: sub_1427b4160
// 地址: 0x1427b4160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t* result

if (*sub_1408f1b50(arg1 + 0x90, &arg_8, arg3) == 0xffffffff)
    result.b = 0
else
    sub_1408f1b50(arg1 + 0x90, &arg_8, arg3)
    int64_t rax = sx.q(arg_8)
    void* const rcx_4
    
    if (rax.d == 0xffffffff)
        rcx_4 = nullptr
    else
        rcx_4 = (rax << 5) + *(arg1 + 0x90)
    
    int64_t rax_1 = *(rcx_4 + 0x10)
    
    if (arg2 != 2)
        *(arg1 + 0xf0) = rax_1
        sub_140597df0(0xe0 + arg1, arg3)
        result.b = 1
    else
        *(arg1 + 0x108) = rax_1
        sub_140597df0(0xf8 + arg1, arg3)
        result.b = 1

return result

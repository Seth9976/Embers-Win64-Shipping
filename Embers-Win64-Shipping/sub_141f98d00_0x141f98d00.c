// 函数: sub_141f98d00
// 地址: 0x141f98d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
int32_t* result
void arg_18

if (arg1 != 0x28)
    result = sub_140865c40(arg2 + 0x10, &arg_18, arg1 - 0x28)

if (arg1 == 0x28 || *result == 0xffffffff)
    result.b = 0
else
    int32_t result_1
    sub_140865c40(arg2 + 0x10, &result_1, arg1 - 0x28)
    result = sx.q(result_1)
    
    if (result.d != 0xffffffff)
        rbx = &(*(arg2 + 0x10))[result * 6]
    
    rbx = *(rbx + 8)
    result.b = 1

void* rcx_2 = rbx + 0x28

if (rbx == 0)
    rcx_2 = nullptr

*arg3 = rcx_2
return result

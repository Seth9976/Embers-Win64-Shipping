// 函数: sub_1421487d0
// 地址: 0x1421487d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = arg4
void* result

if (*arg1 == 0)
    result = sub_1421368e0(arg3, *(arg1 + 0x20))
    *rdi = result
else
    int64_t rbp_1 = data_143f4ca00
    int64_t r10_1
    
    if (data_143de5480 == 0)
        r10_1 = 0
    else
        uint32_t rax_1
        rax_1, arg4 = GetCurrentThreadId()
        r10_1.b = rax_1 != data_143de5470
    
    arg4.b = *(rbp_1 + (r10_1 << 2)) != 1
    result = (*(*arg2 + 0x3c8))(arg2, arg1, rdi, arg4)
    
    if (result.b == 0)
        result = sub_1421368e0(arg3, *(arg1 + 0x20))
        *rdi = result

return result

// 函数: sub_14236d8f0
// 地址: 0x14236d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (arg1[6].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        result = (*(*arg1 + 0x2a8))(arg1)
        
        if (i s>= result.d)
            break
        
        result = arg1[5]
        int64_t* r15_1 = *(r14_1 + result)
        
        if (r15_1 != 0)
            result =
                (*(*r15_1 + 0x298))(r15_1, arg2, sub_142365fb0(arg3, r15_1, i), arg4, arg5, arg6)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[6].d)

return result

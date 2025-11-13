// 函数: sub_141983280
// 地址: 0x141983280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = arg1

if (arg2 s> *(arg1 + 0x2c))
    return sub_14196c760(arg1, arg2) __tailcall

void* result = *(arg1 + 0x20)
int32_t i_1 = *(arg1 + 0x28)

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx = *result_1
        
        if (rcx != 0)
            result = zx.q(rcx[9].d)
            rcx[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx)
        
        result_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x28) = 0
return result

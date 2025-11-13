// 函数: sub_140846320
// 地址: 0x140846320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = *(arg1 + 0x80)
void* result = arg1

if (result_1 != 0)
    result = result_1

int32_t i_1 = *(arg1 + 0x88)

if (i_1 != 0)
    int32_t i
    
    do
        void* rcx = *(result + 8)
        
        if (rcx != 0)
            *(rcx + 8) -= 1
        
        __builtin_memset(result, 0, 0x18)
        *(result + 0x18) = 0xffffffff
        *(result + 0x1c) = 0
        result += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)
    result_1 = *(arg1 + 0x80)

if (result_1 != 0)
    return sub_140a74f90(result_1) __tailcall

return result

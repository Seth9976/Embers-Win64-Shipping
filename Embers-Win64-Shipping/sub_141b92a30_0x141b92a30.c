// 函数: sub_141b92a30
// 地址: 0x141b92a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*(arg1 + 0x218) + 0x48))(arg1 + 0x218)
void* result_1 = result

if (result != 0)
    if (*(result + 0x490) != 0)
        int64_t* rcx_1 = *(result + 0x488)
        
        if (rcx_1 != 0)
            int64_t rdx = *rcx_1
            result = (*(rdx + 0x28))(rcx_1, rdx)
            
            if (result.b != 0)
                int64_t* rcx_2
                
                if (*(result_1 + 0x490) == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = *(result_1 + 0x488)
                
                result = (*(*rcx_2 + 0x48))(rcx_2)
                *(result_1 + 0x480) = result.d
    
    if (*(result_1 + 0x480) != 0)
        (*(*(result_1 + 0x4f8) + 0x28))(result_1 + 0x4f8, arg2, zx.q(arg3), 0)
        return (*(*(result_1 + 0x4f8) + 0x40))(result_1 + 0x4f8, 3)

return result

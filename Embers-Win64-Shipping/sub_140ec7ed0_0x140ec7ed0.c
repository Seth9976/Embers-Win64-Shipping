// 函数: sub_140ec7ed0
// 地址: 0x140ec7ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1 + 0x508
void arg_8

if (&arg_8 != result && *(result + 4) != 0)
    *(result + 4) = 0

if (*(arg1 + 0x538) != 0)
    int64_t* rcx = *(arg1 + 0x530)
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result.b != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x538) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x530)
            
            return (*(*rcx_1 + 0x48))(rcx_1, arg2)

return result

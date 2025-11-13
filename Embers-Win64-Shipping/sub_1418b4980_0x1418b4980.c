// 函数: sub_1418b4980
// 地址: 0x1418b4980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x30))
int64_t result

if (r9.d s>= 0)
    int32_t r10_1 = *(arg1 + 0x28)
    
    if (r9.d s< r10_1)
        int64_t* rcx = *(*(arg1 + 0x20) + r9 * 0x10)
        
        if (rcx != 0)
            if (r9.d s< 0 || r9.d s>= r10_1)
                rcx = nullptr
            
            if ((*(*rcx + 0x50))(rcx).b == arg2)
                result.b = 1
                return result

result.b = 0
return result

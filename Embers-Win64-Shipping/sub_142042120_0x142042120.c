// 函数: sub_142042120
// 地址: 0x142042120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x150))()
int32_t result = sub_141dcdc50(arg1)

if (result != 0)
    int64_t* rcx_1 = *(arg3 + 8)
    
    if (rcx_1 != 0)
        int64_t rdx = *rcx_1
        result = (*(rdx + 0x28))(rcx_1, rdx)
        
        if (result.b != 0)
            int64_t* rcx_2 = *(arg3 + 8)
            result = (*(*rcx_2 + 0x28))(rcx_2)
            
            if (result.b != 0)
                int64_t* rax_3 = sub_142168400()
                return (*(*rax_3 + 0x300))(rax_3, rax_1, arg2, *(arg3 + 8))

return result

// 函数: sub_14227b450
// 地址: 0x14227b450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if ((*(arg1 + 0x4d8) & 4) == 0)
    int64_t* rcx = *(data_143f5b298 + 0xaf8)
    
    if (rcx == 0)
        result.b = 0
        return result
    
    if ((*(*rcx + 8))(rcx).b == 0)
        result.b = 0
        return result
    
    int64_t* rcx_1 = *(data_143f5b298 + 0xb08)
    
    if (rcx_1 == 0)
        result.b = 0
        return result
    
    if ((*(*rcx_1 + 0x100))(rcx_1) == 0)
        result.b = 0
        return result
    
    int64_t* rcx_2 = *(data_143f5b298 + 0xb08)
    int64_t* rax_4 = (*(*rcx_2 + 0x100))(rcx_2)
    int64_t rdx_1 = *rax_4
    
    if ((*(rdx_1 + 0x40))(rax_4, rdx_1).b == 0)
        result.b = 0
        return result

result.b = 1
return result

// 函数: sub_1420a5450
// 地址: 0x1420a5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (sub_14243ac50((*(*arg1 + 0x150))()).d == 3)
    result.b = 0
    return result

int64_t* rcx_1 = arg1[4]

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x260))(rcx_1)
    
    if (result != 0)
        if (data_143f5b298 == 0)
            result.b = 0
            return result
        
        int64_t rdx_1 = *arg1
        int64_t rax_3 = (*(rdx_1 + 0x150))(arg1, rdx_1)
        
        if (sub_1423dd1b0(data_143f5b298, rax_3) == 0)
            result.b = 0
            return result
        
        int64_t rax_5 = (*(*arg1 + 0x150))(arg1)
        
        if (*(sub_1423dd1b0(data_143f5b298, rax_5) + 0x30) != result)
            result.b = 0
            return result

result.b = 1
return result

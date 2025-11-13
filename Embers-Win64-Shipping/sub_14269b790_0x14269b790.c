// 函数: sub_14269b790
// 地址: 0x14269b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()
void* result_1 = result

if (result != 0)
    int64_t rdx_1
    result, rdx_1 = sub_142437e30(result, 0, 1)
    
    if (result != 0)
        result = sub_142450240(result, arg1[0x44])
    
    if ((*(result_1 + 0x11b) & 0x40) != 0)
        int64_t* r8_2 = arg1[0x44]
        
        if (r8_2 != 0)
            char rcx_2 = *(result_1 + 0x11a)
            
            if (rcx_2 == 2)
                rdx_1.b = 2
                return sub_141de0ff0(result_1, rdx_1.b, r8_2, 0, 1)
            
            char rax_1 = 1
            
            if (rcx_2 == 3)
                rax_1 = 4
            
            return sub_141de0ff0(result_1, rax_1, r8_2, 1, 1)

return result

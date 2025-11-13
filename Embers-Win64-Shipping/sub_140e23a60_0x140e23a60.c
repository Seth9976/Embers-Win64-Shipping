// 函数: sub_140e23a60
// 地址: 0x140e23a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x29)
uint64_t result
result.b = r8 u>> 7

if (result.b != arg2)
    *(arg1 + 0x29) = (r8 & 0x7f) | arg2 << 7
    result = data_143e20d08
    int64_t* rbx_1 = *(result + 0xb0)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    *(*(result + 0xa8) + 0x78) = 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                jump(*(*rbx_1 + 8))

return result

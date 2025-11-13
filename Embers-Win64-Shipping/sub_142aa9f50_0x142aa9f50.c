// 函数: sub_142aa9f50
// 地址: 0x142aa9f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_142a86c30(**arg1, arg1[2])

if (result != 0)
    void* rdx_1 = arg1[1]
    bool cond:1_1
    
    if ((*(result + 8) & 1) == 0)
        int16_t rax_2 = *(result + 8)
        int32_t r8_2
        
        if (rax_2 s< 0)
            r8_2 = *(result + 0xc)
        else
            r8_2 = sx.d(rax_2) s>> 5
        
        int16_t rax_3 = *(rdx_1 + 8)
        int32_t rax_5
        
        if (rax_3 s< 0)
            rax_5 = *(rdx_1 + 0xc)
        else
            rax_5 = sx.d(rax_3) s>> 5
        
        if ((*(rdx_1 + 8) & 1) != 0 || r8_2 != rax_5)
            arg1[2] = result
            return result
        
        cond:1_1 = sub_142a490e0(result, rdx_1, r8_2) != 0
    else
        cond:1_1 = (*(rdx_1 + 8) & 1) != 0
    
    if (not(cond:1_1))
        arg1[2] = result
        return result

return 0

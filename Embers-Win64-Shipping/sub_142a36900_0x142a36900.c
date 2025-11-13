// 函数: sub_142a36900
// 地址: 0x142a36900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1)
    *arg2 = *arg1
    arg2[1] = arg1[1]
    *(arg2 + 0x10) = *(arg1 + 0x10)
    *(arg2 + 0x18) = *(arg1 + 0x18)
    *(arg2 + 0x20) = *(arg1 + 0x20)
    *(arg2 + 8) = *(arg1 + 8)
    uint32_t rax_7 = zx.d(arg1[0x16].b)
    arg2[0x16].b = rax_7.b
    *(arg2 + 0x60) = *(arg1 + 0x60)
    int32_t result = sub_142a36a30(arg1, 0x28, arg2, rax_7)
    
    if (result != 0)
        return result
    
    result = sub_142a36a30(arg1, result + 0x30, arg2, result)
    
    if (result != 0)
        return result
    
    result = sub_142a36a30(arg1, result + 0x38, arg2, result)
    
    if (result != 0)
        return result
    
    result = sub_142a36a30(arg1, result + 0x40, arg2, result)
    
    if (result != 0)
        return result
    
    int64_t rcx_3 = *(arg1 + 0x50)
    
    if (rcx_3 != 0)
        int64_t rax_9
        
        if (*(arg1 + 0x48) != 0 && *(arg2 + 0x48) == 0 && *(arg2 + 0x50) == 0)
            if (rcx_3 == 0)
                rax_9 = 0
            else if (rcx_3 u<= 0x80000000)
                rax_9 = j_sub_140a82f30(rcx_3)
            else
                rax_9 = 0
            
            *(arg2 + 0x48) = rax_9
        
        if (*(arg1 + 0x48) == 0 || *(arg2 + 0x48) != 0 || *(arg2 + 0x50) != 0 || rax_9 == 0)
            return 0xffffffff
        
        memcpy(rax_9, *(arg1 + 0x48), (*(arg1 + 0x50)).d)
        *(arg2 + 0x50) = *(arg1 + 0x50)

return 0

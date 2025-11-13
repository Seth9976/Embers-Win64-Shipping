// 函数: sub_14222bc40
// 地址: 0x14222bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0xc)
int32_t rcx = *(arg2 + 0xc)
int32_t r11_2 = r9 u>> 0x15 & 0x1f
uint32_t result

if (((r9 u>> 0x1a).b & (rcx u>> 0x1a).b) == 0)
    result = 1 << ((rcx u>> 0x15).b & 0x1f)
    
    if (*arg1 != 0)
        int32_t rdx = 1 << r11_2.b
        
        if ((*(arg2 + 4) & rdx) == 0)
            arg3 = 0
            
            if ((*(arg2 + 8) & rdx) != 0)
                arg3 = 1
        else
            arg3 = 2
        
        if ((*(arg1 + 4) & result) != 0)
            if (arg3 u<= 2)
                return zx.q(arg3)
            
            return 2
        
        char rdx_1 = 0
        
        if ((*(arg1 + 8) & result) != 0)
            rdx_1 = 1
        
        if (arg3 u<= rdx_1)
            return zx.q(arg3)
        
        return zx.q(rdx_1)
    
    if ((*(arg1 + 4) & result) != 0)
        if (arg3 == 0)
            result.b = 2
            return result
        
        result.b = r11_2 == 0
        result.b += 1
        return result

result.b = 0
return result

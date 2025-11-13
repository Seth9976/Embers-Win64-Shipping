// 函数: sub_142bdf3f0
// 地址: 0x142bdf3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg5
int32_t rcx = arg1[1]
int32_t r10_1 = neg.d(rcx)
int32_t r11_2 = (arg3 - 1 + rcx) & r10_1
int32_t r10_2 = r10_1 & arg4

if ((result[0x18] & 7) != 2)
    result = zx.q(arg4 - rcx - arg3)
    
    if (result.d s<= arg1[5] && r11_2 != arg3 && r10_2 != arg4)
        r10_2 = r11_2

char rcx_1 = (*arg1).b
int32_t r11_3 = r11_2 s>> rcx_1
int32_t r10_3 = r10_2 s>> rcx_1

if (r10_3 s>= 0)
    result = zx.q(arg1[0x12].w)
    
    if (r11_3 s< result.d)
        int32_t rcx_2 = 0
        
        if (r11_3 s>= 0)
            rcx_2 = r11_3
        
        if (r10_3 s>= result.d)
            r10_3 = (&result[-1]).d
        
        char r9 = (0xff s>> (rcx_2.b & 7)).b
        int64_t rdx_1 = sx.q((rcx_2 s>> 3).w)
        result = sx.q(arg1[0x38]) + *(arg1 + 0x50) + rdx_1
        char r8 = not.b((0x7f s>> (r10_3.b & 7)).b)
        int32_t rcx_7 = sx.d((r10_3 s>> 3).w) - rdx_1.d
        
        if (rcx_7 s> 0)
            *result |= r9
            int32_t i = rcx_7 - 1
            
            while (i s> 0)
                result = &result[1]
                i -= 1
                *result = 0xff
            
            result[1] |= r8
            return result
        
        *result |= r8 & r9

return result

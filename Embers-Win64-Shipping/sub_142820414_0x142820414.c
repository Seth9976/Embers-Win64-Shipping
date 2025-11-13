// 函数: sub_142820414
// 地址: 0x142820414
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9 = *arg2
int32_t* r10 = arg1
int32_t result

if (r9 != arg3)
    arg1.b = *r9
    result = sub_142821e08(arg1.b)
    int32_t result_1 = result
    
    if (result s< 1)
        *arg2 = &r9[1]
        *r10 = 0xfffd
    else if (result != 1)
        *r10 = not.d(0xff << (7 - result_1).b) & zx.d(*r9)
        char* rax_3 = *arg2 + 1
        *arg2 = rax_3
        
        while (true)
            result_1 -= 1
            
            if (result_1 s<= 0)
                break
            
            if (rax_3 != arg3)
                int32_t rcx
                rcx.b = *rax_3
                
                if (sub_1428206ec(rcx.b) != 0)
                    *r10 <<= 6
                    *r10 |= sx.d(**arg2) & 0x3f
                    *arg2 += 1
                    rax_3 = *arg2
                    continue
            
            *r10 = 0xfffd
            break
        
        int32_t rcx_2 = *r10
        
        if (rcx_2 s<= 0xd7ff)
            if ((rcx_2 & 0xfffe) == 0xfffe || rcx_2 - 0xfdd0 u<= 0x1f)
                *r10 = 0xfffd
        else if (rcx_2 - 0xe000 u> 0x101fff || (rcx_2 & 0xfffe) == 0xfffe
                || rcx_2 - 0xfdd0 u<= 0x1f)
            *r10 = 0xfffd
    else
        *arg2 = &r9[1]
        *r10 = sx.d(*r9)
    
    result.b = 1
else
    result.b = 0

return result

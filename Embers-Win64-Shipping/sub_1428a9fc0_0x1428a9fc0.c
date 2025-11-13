// 函数: sub_1428a9fc0
// 地址: 0x1428a9fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t r8 = *_Str1
int32_t result = r8 - *_Str2

if (r8 == *_Str2)
    char** rcx = *(_Str1 + 8)
    int64_t* rdx = *(_Str2 + 8)
    
    if (r8 != 0)
        char* rax_3
        
        if (r8 == 1)
            rax_3 = *rcx
            
            if (rax_3 == 0)
                return 0xffffffff
            
            int64_t rdx_3 = *rdx
            
            if (rdx_3 == 0)
                return 1
            
            void* rdx_4 = rdx_3 - rax_3
            char rcx_2
            char temp6_1
            
            while (true)
                rcx_2 = *rax_3
                temp6_1 = *(rax_3 + rdx_4)
                
                if (rcx_2 != temp6_1)
                    break
                
                rax_3 = &rax_3[1]
                
                if (rcx_2 == 0)
                    return 0
            
            return sbb.d(rax_3.d, rax_3.d, rcx_2 u< temp6_1) | 1
        
        if (r8 != 2)
            if (r8 != 3)
                return 0
            
            return rcx[2].d - rdx[2].d
        
        rax_3 = rcx[1]
        
        if (rax_3 == 0)
            return 0xffffffff
        
        int64_t rdx_1 = rdx[1]
        
        if (rdx_1 != 0)
            void* rdx_2 = rdx_1 - rax_3
            
            while (true)
                char rcx_1 = *rax_3
                char temp7_1 = *(rax_3 + rdx_2)
                
                if (rcx_1 != temp7_1)
                    return sbb.d(rax_3.d, rax_3.d, rcx_1 u< temp7_1) | 1
                
                rax_3 = &rax_3[1]
                
                if (rcx_1 == 0)
                    return 0
        
        return 1
    
    int64_t r8_3 = sx.q(*(rcx + 0x14))
    int32_t rax_10 = r8_3.d
    result = rax_10 - *(rdx + 0x14)
    
    if (rax_10 == *(rdx + 0x14))
        return memcmp(rcx[3], rdx[3], r8_3) __tailcall

return result

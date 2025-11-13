// 函数: sub_142a31d50
// 地址: 0x142a31d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
void* r10 = *(arg2 + 0x1b8)
void* r9 = *(arg2 + 0x1b0)
int32_t rdi
rdi.b = *(arg1 + (sx.q(*(arg1 + 0x1160)) << 2) + 0x10a4) == 0
bool cond:1_1

if (r10 == 0)
    if (r9 == 0)
        return 2
    
label_142a31f2f:
    
    if (r10 != 0)
        r9 = r10
    
    char rax_12 = *(r9 + 8)
    
    if (rax_12 s<= 0)
        return 2
    
    if (*(r9 + 9) s> 0)
        int32_t rdx_1 = 0
        
        if (*(zx.q(rdi) + r9 + 8) != *(arg1 + 0x1162))
            rdx_1 = 4
        
        return zx.q(rdx_1)
    
    cond:1_1 = rax_12 != *(arg1 + 0x1162)
else
    if (r9 == 0)
        goto label_142a31f2f
    
    char rcx = *(r10 + 8)
    char rdx = *(r9 + 8)
    
    if (rcx s> 0)
        if (rdx s> 0)
            char rbx_1 = *(r10 + 9)
            char rsi_1 = *(r9 + 9)
            
            if (rbx_1 s> 0)
                rcx = *(zx.q(rdi) + r10 + 8)
            
            if (rsi_1 s> 0)
                rdx = *(zx.q(rdi) + r9 + 8)
            
            if (rcx == rdx && *(arg1 + 0x1162) == rcx)
                return zx.q(r8)
            
            if (rsi_1 s> 0)
                if (rbx_1 s> 0)
                    if (rcx == rdx)
                        return 4
                    
                    return 2
            else if (rbx_1 s<= 0)
                if ((rcx == *(arg1 + 0x1160) && rdx == *(arg1 + 0x1161))
                        || (rdx == *(arg1 + 0x1160) && rcx == *(arg1 + 0x1161)))
                    return 4
                
                int32_t r8_1 = 1
                
                if (rcx == rdx)
                    r8_1 = 3
                
                return zx.q(r8_1)
            
            char r9_1 = rdx
            
            if (rsi_1 s<= 0)
                r9_1 = rcx
            
            char r8_3 = rdx
            
            if (rbx_1 s<= 0)
                r8_3 = rcx
            
            char rax_8 = *(arg1 + 0x1162)
            
            if (r9_1 != rax_8)
                if (r8_3 != rax_8 || r9_1 == rax_8)
                    return 4
                
                return 2
            
            if (r8_3 != rax_8)
                return 1
            
            if (r9_1 != rax_8)
                return 2
            
            return 4
    else if (rdx s<= 0)
        return 2
    
    char rax_11 = *(arg1 + 0x1162)
    
    if (rcx s<= 0)
        r10 = r9
    
    r8 = 1
    
    if (*(r10 + 9) s> 0)
        cond:1_1 = *(zx.q(rdi) + r10 + 8) != rax_11
    else
        cond:1_1 = *(r10 + 8) != rax_11

if (not(cond:1_1))
    return zx.q(r8)

return 3

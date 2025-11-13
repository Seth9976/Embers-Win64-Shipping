// 函数: sub_142c7af70
// 地址: 0x142c7af70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i = *(arg1 + 0x200)
int32_t rdi = 0
*(arg1 + 0x738) = 1

while (i != 0)
    char j = *i
    
    if (j == 0)
        break
    
    char* i_2 = i
    
    while (j != 0x3d)
        j = i[1]
        i = &i[1]
        
        if (j == 0)
            break
    
    char j_1 = *i
    char* r14_1 = &i[1]
    
    if (j_1 != 0)
        while (j_1 != 0x3b)
            j_1 = i[1]
            i = &i[1]
            
            if (j_1 == 0)
                break
    
    if (sub_142c704d0(i_2, "AUTH=", 5) == 0)
        rdi = 3
    else
        uint64_t rsi_2 = i - r14_1
        int32_t rax_2 = sub_142c8f9d0(arg1 + 0x720, r14_1, rsi_2)
        rdi = rax_2
        
        if (rax_2 != 0 && sub_142c704d0(r14_1, "+APOP", rsi_2) != 0)
            *(arg1 + 0x744) = 2
            rdi = 0
            *(arg1 + 0x730) = 0
    
    char* i_1 = &i[1]
    
    if (*i != 0x3b)
        i_1 = i
    
    i = i_1
    
    if (rdi != 0)
        break

if (*(arg1 + 0x744) != 2)
    int32_t rcx_2 = *(arg1 + 0x730)
    
    if (rcx_2 != 0)
        int32_t rax_4 = -1
        
        if (rcx_2 != 0xffffffdf)
            rax_4 = 4
        
        *(arg1 + 0x744) = rax_4
        return zx.q(rdi)
    
    *(arg1 + 0x744) = 0

return zx.q(rdi)

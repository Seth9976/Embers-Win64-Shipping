// 函数: sub_142c7c2e0
// 地址: 0x142c7c2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x200)
*(arg1 + 0x730) = 1
int32_t rdx = 0

while (i != 0)
    char j = *i
    
    if (j == 0)
        break
    
    void* i_2 = i
    
    while (j != 0x3d)
        j = *(i + 1)
        i += 1
        
        if (j == 0)
            break
    
    char j_1 = *i
    char* rdi_1 = i + 1
    
    if (j_1 != 0)
        while (j_1 != 0x3b)
            j_1 = *(i + 1)
            i += 1
            
            if (j_1 == 0)
                break
    
    if (sub_142c704d0(i_2, "AUTH=", 5) == 0)
        rdx = 3
    else
        rdx = sub_142c8f9d0(arg1 + 0x718, rdi_1, i - rdi_1)
    
    void* i_1 = i + 1
    
    if (*i != 0x3b)
        i_1 = i
    
    i = i_1
    
    if (rdx != 0)
        break

return zx.q(rdx)

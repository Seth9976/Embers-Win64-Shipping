// 函数: sub_142c79450
// 地址: 0x142c79450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i = *(arg1 + 0x200)
int32_t rdx = 0
*(arg1 + 0x728) = 1

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
    char* rdi_1 = &i[1]
    
    if (j_1 != 0)
        while (j_1 != 0x3b)
            j_1 = i[1]
            i = &i[1]
            
            if (j_1 == 0)
                break
    
    if (sub_142c704d0(i_2, "AUTH=", 5) == 0)
        rdx = 3
    else
        rdx = sub_142c8f9d0(arg1 + 0x710, rdi_1, i - rdi_1)
    
    char* i_1 = &i[1]
    
    if (*i != 0x3b)
        i_1 = i
    
    i = i_1
    
    if (rdx != 0)
        break

int32_t rcx_1 = *(arg1 + 0x720)

if (rcx_1 == 0)
    *(arg1 + 0x730) = 0
    return zx.q(rdx)

int32_t rax_3 = -1

if (rcx_1 != 0xffffffdf)
    rax_3 = 2

*(arg1 + 0x730) = rax_3
return zx.q(rdx)

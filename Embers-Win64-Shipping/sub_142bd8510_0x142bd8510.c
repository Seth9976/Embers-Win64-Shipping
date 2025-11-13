// 函数: sub_142bd8510
// 地址: 0x142bd8510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* j = *arg1
int32_t rdi = 0
char* j_1 = j
int32_t i = 0

if (j u>= arg2)
    *arg1 = j
    return 0

while (i == 0)
    char rcx = *j
    
    if (rcx == 0x25)
        for (; j u< arg2; j = &j[1])
            char rcx_3 = *j
            
            if (rcx_3 == 0xd)
                break
            
            if (rcx_3 == 0xa)
                break
    else if (rcx == 0x28)
        i = sub_142bd83f0(&j_1, arg2)
        j = j_1
    else if (rcx == 0x3c)
        i = sub_142bd8610(&j_1, arg2)
        j = j_1
    else if (rcx == 0x7b)
        rdi += 1
    else if (rcx == 0x7d)
        int32_t temp0_1 = rdi
        rdi -= 1
        
        if (temp0_1 == 1)
            *arg1 = &j[1]
            return zx.q(i)
    
    j = &j[1]
    j_1 = j
    
    if (j u>= arg2)
        break

*arg1 = j

if (rdi != 0)
    i = 3

return zx.q(i)

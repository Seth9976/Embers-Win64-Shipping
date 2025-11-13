// 函数: sub_142ba67f0
// 地址: 0x142ba67f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1
uint32_t i_2 = 0

if (*arg1 == 0x20)
    do
        rbx = &rbx[1]
    while (*rbx == 0x20)

uint32_t r9 = zx.d(*rbx)
void* result = &rbx[1]

if (r9 u>= 0x80)
    int32_t rax_1
    int32_t i_3
    
    if (r9 u< 0xe0)
        rax_1 = 0x1f
        i_3 = 1
    else if (r9 u>= 0xf0)
        rax_1 = 7
        i_3 = 3
    else
        rax_1 = 0xf
        i_3 = 2
    
    r9 &= rax_1
    int32_t i
    
    do
        int32_t rcx_1 = sx.d(*result) & 0x3f
        result += 1
        r9 = rcx_1 | r9 << 6
        i = i_3
        i_3 -= 1
    while (i != 1)

char i_1 = *result

if (i_1 != 0x20)
    while (i_1 != 0)
        i_2 = zx.d(i_1)
        result += 1
        
        if (i_2 u>= 0x80)
            int32_t rax_4
            int32_t j_1
            
            if (i_2 u< 0xe0)
                rax_4 = 0x1f
                j_1 = 1
            else if (i_2 u>= 0xf0)
                rax_4 = 7
                j_1 = 3
            else
                rax_4 = 0xf
                j_1 = 2
            
            i_2 &= rax_4
            int32_t j
            
            do
                int32_t rcx_3 = sx.d(*result) & 0x3f
                result += 1
                i_2 = rcx_3 | i_2 << 6
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i_1 = *result
        
        if (i_1 == 0x20)
            break
    
    if (i_2 != 0)
        *arg3 = 0
        *arg4 = 0
        return result

*arg3 = sub_142b91fc0(**(arg2 + 0x30))
*arg4 = 1
return result

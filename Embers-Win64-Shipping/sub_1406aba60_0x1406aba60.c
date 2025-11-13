// 函数: sub_1406aba60
// 地址: 0x1406aba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x74) = 0
int32_t i

for (i = 0x7fffffff; i != 0; )
    int32_t rcx = sx.d(arg1[0xf].b)
    
    if (rcx.b - 0x30 u> 9)
        break
    
    if (rcx == 0x2f)
        break
    
    i -= 1
    char* rcx_2 = *arg1
    *(arg1 + 0x74) = rcx - 0x30 + *(arg1 + 0x74) * 0xa
    int64_t rax_4 = arg1[2]
    
    if (rcx_2 != rax_4)
        if (*rcx_2 == 0x5c)
            void* rdx_2 = &rcx_2[1]
            rcx_2 = rdx_2
            
            if (rdx_2 == rax_4)
                rcx_2 = *arg1
            else
                char r8_1 = (arg1[0x10].d).b
                
                if (((r8_1 & 8) != 0 || *rdx_2 - 0x28 u> 1)
                        && ((r8_1 & 0x10) != 0 || ((*rdx_2 - 0x7b) & 0xfd) != 0))
                    rcx_2 = *arg1
        
        *arg1 = &rcx_2[1]
    
    sub_1406af960(arg1)

return i != 0x7fffffff

// 函数: sub_14058eef0
// 地址: 0x14058eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = (arg2 - arg1) s>> 1

if (r8_1 s< 2)
    goto label_14058efde

int32_t r10_1 = *arg1
uint16_t r9_2 = (r10_1 u>> 0x10).w

if ((r10_1 & 0xffffffdf) - 0x3a0041 u>= 0x1a)
    if (r10_1.w != 0x5c && r10_1.w != 0x2f)
        goto label_14058efde
    
    if (r8_1 s>= 4)
        int16_t rax_4 = *(arg1 + 6)
        
        if (rax_4 == 0x5c || rax_4 == 0x2f)
            int16_t rax_5
            
            if (r8_1 != 4)
                rax_5 = arg1[2].w
            
            if (r8_1 != 4 && (rax_5 == 0x5c || rax_5 == 0x2f))
                goto label_14058ef9c
            
            if (r9_2 == 0x5c || r9_2 == 0x2f)
                int16_t rax_6 = arg1[1].w
                
                if (rax_6 == 0x3f || rax_6 == 0x2e || (r9_2 == 0x3f && arg1[1].w == r9_2))
                label_14058ef90:
                    arg1 += 6
                    goto label_14058efde
            else if (r9_2 == 0x3f && arg1[1].w == r9_2)
                goto label_14058ef90
        
    label_14058ef9c:
        
        if (r9_2 == 0x5c || r9_2 == 0x2f)
            goto label_14058efaa
        
        goto label_14058efde
    
    if (r8_1 s< 3 || (r9_2 != 0x5c && r9_2 != 0x2f))
        goto label_14058efde
    
label_14058efaa:
    int16_t rax_7 = arg1[1].w
    
    if (rax_7 == 0x5c || rax_7 == 0x2f)
        goto label_14058efde
    
    arg1 += 6
    
    if (arg1 != arg2)
        do
            int16_t rax_8 = *arg1
            
            if (rax_8 == 0x5c)
                break
            
            if (rax_8 == 0x2f)
                break
            
            arg1 += 2
        while (arg1 != arg2)
        
        goto label_14058efde
else
    arg1 = &arg1[1]
label_14058efde:
    
    for (; arg1 != arg2; arg1 += 2)
        int16_t rax_9 = *arg1
        
        if (rax_9 != 0x5c && rax_9 != 0x2f)
            break

return arg1

// 函数: sub_142b8c510
// 地址: 0x142b8c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int32_t i = 0
int32_t* rdx = arg1 + 0x23330
int32_t i_4 = 0xc0

do
    *rdx = i
    rdx = &rdx[1]
    i += 0x20
while (i s< 0xc0)

int32_t r13 = 0x40
int32_t i_1 = 0xc0
int32_t j_4 = 2

if (*(arg1 + 0x23318) s> 0xc0)
    do
        if (i_1 == 0x880)
            r13 = 0x20
            j_4 = 1
        
        int64_t i_5 = sx.q(i_1)
        void* r8_4 = arg1 + (((i_5 s>> 5) + 0x8ccc) << 2)
        
        if (*(arg1 + (((i_5 s>> 5) + 0x8ccc) << 2)) s> 0)
            int64_t r15_1 = *(arg1 + 0x23300)
            
            if (i_4 - r13 s>= 0)
                int32_t* rbx_1 = r15_1 + (i_5 << 2)
                
                while (true)
                    int32_t rdx_1 = r13
                    int32_t* rcx = rbx_1
                    
                    if (r13 s> 0)
                        while (*((sx.q(i_2) << 2) - rbx_1 + r15_1 + rcx) == *rcx)
                            rcx = &rcx[1]
                            rdx_1 -= 1
                            
                            if (rdx_1 s<= 0)
                                break
                    
                    if (rdx_1 == 0)
                        break
                    
                    i_2 += 4
                    
                    if (i_2 s> i_4 - r13)
                        goto label_142b8c607
            
            if (i_4 - r13 s< 0 || i_2 s< 0)
            label_142b8c607:
                int32_t r9 = r13 - 4
                
                if (r9 s> 0)
                    int32_t* rdi_3 = r15_1 + (i_5 << 2)
                    int32_t rbx_3 = i_4 - r9
                    
                    while (true)
                        int32_t rdx_2 = r9
                        int32_t* rax_1 = rdi_3
                        
                        if (r9 s> 0)
                            while (*((sx.q(rbx_3) << 2) - rdi_3 + r15_1 + rax_1) == *rax_1)
                                rax_1 = &rax_1[1]
                                rdx_2 -= 1
                                
                                if (rdx_2 s<= 0)
                                    break
                        
                        if (rdx_2 == 0)
                            break
                        
                        r9 -= 4
                        rbx_3 += 4
                        
                        if (r9 s<= 0)
                            goto label_142b8c68e
                    
                    if (r9 s> 0)
                        goto label_142b8c6b8
                
            label_142b8c68e:
                
                if (i_4 s< i_1)
                label_142b8c6b8:
                    int32_t j = j_4
                    int32_t rax_3 = i_4 - r9
                    
                    if (j_4 s> 0)
                        do
                            *r8_4 = rax_3
                            r8_4 += 4
                            rax_3 += 0x20
                            j -= 1
                        while (j s> 0)
                    
                    i_1 += r9
                    int32_t j_1 = r13 - r9
                    
                    if (j_1 s> 0)
                        int64_t i_3 = sx.q(i_1)
                        int64_t i_6 = sx.q(i_4)
                        i_4 += j_1
                        i_1 += j_1
                        int64_t r9_1 = i_3 << 2
                        int64_t r8_5 = i_6 << 2
                        
                        do
                            int64_t rcx_2 = *(arg1 + 0x23300)
                            r8_5 += 4
                            j_1 -= 1
                            r9_1 += 4
                            *(r8_5 + rcx_2 - 4) = *(r9_1 + rcx_2 - 4)
                        while (j_1 s> 0)
                else
                    int32_t j_2 = j_4
                    
                    if (j_4 s> 0)
                        do
                            *r8_4 = i_1
                            r8_4 += 4
                            i_1 += 0x20
                            j_2 -= 1
                        while (j_2 s> 0)
                    
                    i_4 = i_1
            else
                int32_t j_3 = j_4
                
                if (j_4 s> 0)
                    do
                        *r8_4 = i_2
                        r8_4 += 4
                        i_2 += 0x20
                        j_3 -= 1
                    while (j_3 s> 0)
                
                i_1 += r13
            
            i_2 = 0
        else
            i_1 += r13
    while (i_1 s< *(arg1 + 0x23318))

if (*(arg1 + 0x23310) s> 0)
    int64_t rcx_3 = 0
    
    do
        if (rcx_3 == 0x820)
            i_2 += 0x240
            rcx_3 = 0xa60
        
        i_2 += 1
        *(arg1 + (rcx_3 << 2) + 0x880) =
            *(arg1 + (sx.q(*(arg1 + (rcx_3 << 2) + 0x880)) s>> 5 << 2) + 0x23330)
        rcx_3 += 1
    while (i_2 s< *(arg1 + 0x23310))

int32_t result = *(arg1 + (sx.q(*(arg1 + 0x23324)) s>> 5 << 2) + 0x23330)
*(arg1 + 0x23324) = result

if ((i_4.b & 3) != 0)
    int64_t rdx_4 = sx.q(i_4) << 2
    
    do
        rdx_4 += 4
        result = *(arg1 + 0x23308)
        i_4 += 1
        *(rdx_4 + *(arg1 + 0x23300) - 4) = result
    while ((i_4.b & 3) != 0)

*(arg1 + 0x23318) = i_4
return result

// 函数: sub_142a7ffd0
// 地址: 0x142a7ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
void* rbx_1 = &arg1[0x3f + sx.q(*(arg1 + 0x1f4)) * 2]
int64_t r14 = sx.q(arg2)
char* r12_1 = *(rcx + 0x70) + r14
bool rbp = *r12_1
void* result

if (rbp != 0xa)
label_142a80196:
    bool rdx_7 = *(r14 + *(*arg1 + 0x78))
    
    if (rdx_7 s< 0)
        rdx_7 &= 1
        
        if (rbp - 8 u> 2)
            *r12_1 = rdx_7
        
        *(rbx_1 + 0xa) = rdx_7
        *(rbx_1 + 9) = rdx_7
        goto label_142a8026e
    
    if (rbp u<= 1 || rbp == 0xd)
        *(rbx_1 + 0xa) = rbp
        *(rbx_1 + 9) = rbp
        rdx_7 = rbp != 0
    label_142a8026e:
        *(rbx_1 + 0xc) = zx.d(rdx_7)
        *rbx_1 = r14.d
    label_142a80274:
        
        if (rdx_7 u<= 1 || rdx_7 == 0xd)
            goto label_142a8027e
    else
        if (rbp == 2)
            char rcx_15 = *(rbx_1 + 9)
            *(rbx_1 + 0xa) = rbp
            
            if (rcx_15 != 0)
                char rax_13 = 0x18
                rdx_7 = true
                
                if (rcx_15 == 0xd)
                    rax_13 = 5
                
                *r12_1 = rax_13
                *(rbx_1 + 0xc) = 1
                *rbx_1 = r14.d
            else
                rdx_7 = false
                
                if (arg1[0x13d].b == 0)
                    *r12_1 = 0x17
                
                *(rbx_1 + 0xc) = 0
                *rbx_1 = r14.d
            
            goto label_142a8027e
        
        if (rbp != 5)
            if (rbp != 0x11)
                rdx_7 = rbp
                *(rbx_1 + 0xa) = rbp
                goto label_142a80274
            
            rdx_7 = *(rbx_1 + 0xa)
            
            if (rdx_7 != 0xa)
                goto label_142a80274
            
            *r12_1 = rdx_7
        else
            *(rbx_1 + 0xa) = rbp
            *(rbx_1 + 0xc) = 1
            rdx_7 = true
            *rbx_1 = r14.d
        label_142a8027e:
            uint64_t rcx_16 = zx.q(*(rbx_1 + 4))
            int16_t r9_2
            r9_2.b = rdx_7 != 0
            
            if (rcx_16.d u< zx.d(*(rbx_1 + 6)))
                int32_t* rdx_9 = rcx_16 * 0x18
                
                do
                    int64_t rax_14 = arg1[0x3d]
                    
                    if (r14.d s> *(rdx_9 + rax_14))
                        *(rdx_9 + rax_14 + 0xc) |= r9_2 + 1
                    
                    rcx_16 = zx.q(rcx_16.d + 1)
                    rdx_9 = &rdx_9[6]
                while (rcx_16.d s< zx.d(*(rbx_1 + 6)))
    
label_142a802c1:
    result.b = 1
else
    uint32_t r8_1 = zx.d(*(rbx_1 + 4))
    int32_t r15_2 = zx.d(*(rbx_1 + 6)) - 1
    int16_t r13_1 = *(*(rcx + 8) + (r14 << 1))
    
    if (r15_2 s>= r8_1)
        int64_t rsi_1 = sx.q(r15_2)
        int32_t* rdx_2 = arg1[0x3d] + 4 + rsi_1 * 0x18
        
        do
            if (*rdx_2 == zx.d(r13_1))
                char rax_5 = sub_142a802e0(arg1, r15_2, r14.d)
                
                if (rax_5 == 0xa)
                    goto label_142a80196
                
                *(rbx_1 + 0xa) = 0xa
                *rbx_1 = r14.d
                *(rbx_1 + 0xc) = zx.d(rax_5)
                char rcx_7 = *(r14 + *(*arg1 + 0x78))
                
                if (rcx_7 s< 0)
                    uint64_t rax_8 = zx.q(*(rbx_1 + 4))
                    rcx_7 &= 1
                    *(rbx_1 + 9) = rcx_7
                    
                    if (rax_8 s< rsi_1)
                        uint64_t rcx_9 = rax_8 * 0x18
                        int64_t i_1 = rsi_1 - rax_8
                        int64_t i
                        
                        do
                            int64_t rax_9 = arg1[0x3d]
                            rcx_9 += 0x18
                            *(rcx_9 + rax_9 - 0xc) |= 1 << rcx_7
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    char* rcx_10 = *(*arg1 + 0x78)
                    rcx_10[r14] &= 0x7f
                
                int64_t rdx_5 = sx.q(*(arg1[0x3d] + sx.q(r15_2) * 0x18))
                int64_t rcx_12 = *(*arg1 + 0x78)
                *(rdx_5 + rcx_12) &= 0x7f
                goto label_142a802c1
            
            r15_2 -= 1
            rsi_1 -= 1
            rdx_2 -= 0x18
        while (r15_2 s>= r8_1)
    
    if (r13_1 == 0)
        goto label_142a80196
    
    uint32_t r15_3 = zx.d(r13_1)
    int16_t rax_3 = j_sub_142af6080(r15_3)
    
    if (rax_3 == r13_1)
        goto label_142a80196
    
    if (sub_142af5fa0(r15_3) != 1)
        goto label_142a80196
    
    int16_t rdx_3 = 0x232a
    
    if (rax_3 != 0x232a)
        if (rax_3 == 0x3009)
            goto label_142a800b5
        
    label_142a8017c:
        
        if (sub_142a7fc10(arg1, rax_3, r14.d).b != 0)
            goto label_142a80196
        
        result.b = 0
    else
        rdx_3 = 0x3009
    label_142a800b5:
        
        if (sub_142a7fc10(arg1, rdx_3, r14.d).b != 0)
            goto label_142a8017c
        
        result.b = 0

return result

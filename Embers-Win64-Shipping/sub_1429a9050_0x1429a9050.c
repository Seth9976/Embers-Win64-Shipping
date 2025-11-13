// 函数: sub_1429a9050
// 地址: 0x1429a9050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t var_38 = -2
int64_t* r10 = *(arg1 + 0x18)
int32_t r15

if (*r10 != 0)
    r15 = 1
else
    int32_t r11_1 = 0
    void* rdi_1 = *(arg1 + 0x10)
    int32_t rdx_1 = *(rdi_1 + 0x90)
    int32_t r8_1 = 0
    int32_t r9_1 = 0
    
    if (rdx_1 s>= r10[3].d)
        rdx_1 = r10[3].d
    
    int32_t rcx = *(rdi_1 + 0x8c)
    int64_t i = sx.q(*(r10 + 0x14) - rcx)
    int64_t rbx_1 = sx.q(rdx_1 - rcx)
    
    if (i s<= rbx_1)
        if (rbx_1 - i + 1 s>= 2)
            int64_t rax_6 = *(rdi_1 + 0xb8)
            
            do
                r8_1 += *(rax_6 + (i << 3))
                r9_1 += *(rax_6 + (i << 3) + 8)
                i += 2
            while (i s<= rbx_1 - 1)
        
        if (i s<= rbx_1)
            r11_1 = *(*(rdi_1 + 0xb8) + (i << 3))
        
        r11_1 += r9_1 + r8_1
    
    int64_t* rcx_1 = r10[4]
    
    if (rcx_1 == 0 || r10[2].d s>= r11_1)
        r15 = 1
        r10[5].d = 1
        uint64_t* rcx_5 = *(arg1 + 0x18)
        *rcx_5 = rcx_5[1]
    else
        *(*(arg1 + 0x18) + 0x28) = (*(*rcx_1 + 0x10))(rcx_1)
        void* rdx_4 = *(arg1 + 0x18)
        int64_t* rcx_3 = *(rdx_4 + 0x20)
        *(*(arg1 + 0x18) + 0x10) = (*(*rcx_3 + 0x28))(rcx_3, *(rdx_4 + 8), zx.q(*(rdx_4 + 0x10)), 
            zx.q(*(rdx_4 + 0x14)), rdx_4).d
        r15 = 1

void* r9_3 = *(arg1 + 0x10)
int32_t rbx_2
int32_t r14_1

if (*(r9_3 + 0x80) != 0)
    rbx_2 = *(arg1 + 0x24)
    r14_1 = *(arg1 + 0x20) - 1
    r15 = -1
else
    rbx_2 = *(arg1 + 0x20)
    r14_1 = *(arg1 + 0x24) + 1

while (rbx_2 != r14_1)
    void* arg_10 = *(*(r9_3 + 0xd0) + (sx.q(rbx_2 - *(r9_3 + 0x8c)) << 3)) + **(arg1 + 0x18)
    int32_t rdi_2 = 0
    
    while (true)
        r9_3 = *(arg1 + 0x10)
        int64_t r8_3 = *(r9_3 + 0xe8)
        int64_t rax_15
        int64_t rdx_9
        rdx_9:rax_15 = muls.dp.q(0x4924924924924925, *(r9_3 + 0xf0) - r8_3)
        int64_t rdx_10 = rdx_9 s>> 4
        uint64_t rax = zx.q(rdi_2)
        
        if (rax u>= rdx_10 + (rdx_10 u>> 0x3f))
            break
        
        int32_t* r10_2 = rax * 0x38 + r8_3
        int32_t rcx_9 = r10_2[9]
        int32_t r8_4
        
        if (rbx_2 s< 0)
            int32_t rax_23
            
            if (rcx_9 s< 0)
                rax_23 = not.d(rcx_9) - rbx_2
            else
                rax_23 = rcx_9 - rbx_2 - 1
            
            r8_4 = neg.d(divs.dp.d(sx.q(rax_23), rcx_9))
        else
            r8_4 = divs.dp.d(sx.q(rbx_2), rcx_9)
        
        if (rbx_2 == r8_4 * rcx_9)
            int32_t r8_7 = r10_2[8]
            int32_t rdx_16 = *(r9_3 + 0x84)
            int32_t r11_2
            
            if (rdx_16 s< 0)
                int32_t rax_32
                
                if (r8_7 s< 0)
                    rax_32 = not.d(rdx_16) - r8_7
                else
                    rax_32 = r8_7 - rdx_16 - 1
                
                r11_2 = neg.d(divs.dp.d(sx.q(rax_32), r8_7))
            else
                r11_2 = divs.dp.d(sx.q(rdx_16), r8_7)
            
            int32_t rdx_23 = *(r9_3 + 0x88)
            int32_t r8_8
            
            if (rdx_23 s< 0)
                int32_t rax_40
                
                if (r8_7 s< 0)
                    rax_40 = not.d(rdx_23) - r8_7
                else
                    rax_40 = r8_7 - rdx_23 - 1
                
                r8_8 = neg.d(divs.dp.d(sx.q(rax_40), r8_7))
            else
                r8_8 = divs.dp.d(sx.q(rdx_23), r8_7)
            
            if (*(r10_2 + 0x29) == 0)
                int32_t rax_45
                
                if (rbx_2 s< 0)
                    int32_t rax_48
                    
                    if (rcx_9 s< 0)
                        rax_48 = not.d(rcx_9) - rbx_2
                    else
                        rax_48 = rcx_9 - rbx_2 - 1
                    
                    rax_45 = neg.d(divs.dp.d(sx.q(rax_48), rcx_9))
                else
                    rax_45 = divs.dp.d(sx.q(rbx_2), rcx_9)
                
                int64_t rcx_13 = *(r10_2 + 0x18) * sx.q(rax_45) + *(r10_2 + 8)
                int64_t r9_4 = *(r10_2 + 0x10)
                void* var_68
                var_68.b = r10_2[0xa].b
                sub_1429a5710(&arg_10, sx.q(r11_2) * r9_4 + rcx_13, sx.q(r8_8) * r9_4 + rcx_13, 
                    r9_4, var_68.b, *(r10_2 + 0x30), *(*(arg1 + 0x18) + 0x28), *r10_2, r10_2[1])
            else
                sub_1429a6610(&arg_10, r10_2[1], sx.q(r8_8 - r11_2 + 1))
                rdi_2 += 1
                continue
        
        rdi_2 += 1
    
    rbx_2 += r15

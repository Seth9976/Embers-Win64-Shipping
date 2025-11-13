// 函数: sub_1422549e0
// 地址: 0x1422549e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (*(arg1 + 0xc) s<= 0xffffffff)
    sub_1405a5410(arg1, 0)

int64_t* i = arg1[0x40f]

for (void* rbp_2 = &i[sx.q(arg1[0x410].d) * 2]; i != rbp_2; i = &i[2])
    uint64_t* r9_1 = *i
    int64_t* r8_1 = nullptr
    char r11_1 = *(r9_1 + 0xc)
    
    if (r11_1 u>= 2)
        r8_1 = r9_1
    
    char r10
    
    if (r8_1 == 0)
    label_142254a8e:
        int64_t* r8_2 = i[1]
        int64_t* rax_4 = nullptr
        r10 = *(r8_2 + 0xc)
        
        if (r10 u>= 2)
            rax_4 = r8_2
        
        if (rax_4 == 0)
            r10 = 0
        else
            int64_t* rax_5 = nullptr
            
            if (r10 u>= 1)
                rax_5 = r8_2
            
            if (rax_5 == 0)
                r10 = 0
            else
                int64_t* rcx_3 = nullptr
                
                if (*(rax_5 + 0xc) u>= 2)
                    rcx_3 = rax_5
                
                if (rcx_3 == 0 || *(sx.q(rcx_3[1].d) + *(*rcx_3 + 0x398)) != 4)
                    r10 = 0
                else
                    int64_t* rax_7 = nullptr
                    
                    if (r10 u>= 2)
                        rax_7 = r8_2
                    
                    if (*(sx.q(rax_7[1].d) + *(*rax_7 + 0x368)) == 0)
                        r10 = 0
                    else
                        r10 = 1
    else
        uint64_t* rax_1 = nullptr
        
        if (r11_1 u>= 1)
            rax_1 = r9_1
        
        if (rax_1 == 0)
            goto label_142254a8e
        
        int64_t* rcx = nullptr
        
        if (*(rax_1 + 0xc) u>= 2)
            rcx = rax_1
        
        if (rcx == 0 || *(sx.q(rcx[1].d) + *(*rcx + 0x398)) != 4
                || *(sx.q(r8_1[1].d) + *(*r8_1 + 0x368)) == 0)
            goto label_142254a8e
        
        r10 = 1
    
    uint64_t* r8_3 = nullptr
    
    if (r11_1 u>= 1)
        r8_3 = r9_1
    
    if (r8_3 == 0)
    label_142254b5f:
        uint64_t rax = i[1]
        uint64_t r8_4 = 0
        
        if (*(rax + 0xc) u>= 1)
            r8_4 = rax
        
        if (r8_4 != 0)
            rax = 0
            
            if (*(r8_4 + 0xc) u>= 2)
                rax = r8_4
            
            int64_t rcx_8
            int64_t rdx_7
            
            if (rax != 0)
                rdx_7 = sx.q(*(rax + 8))
                rcx_8 = *(*rax + 0x398)
            
            if (rax != 0 && *(rdx_7 + rcx_8) == 4)
                goto label_142254bc0
            
            if (r8_4 != 0)
                rax = 0
                
                if (*(r8_4 + 0xc) u>= 2)
                    rax = r8_4
                
                if (rax != 0 && *(sx.q(*(rax + 8)) + *(*rax + 0x398)) == 1)
                    goto label_142254bc0
    else
        uint64_t* rax_9 = nullptr
        
        if (*(r8_3 + 0xc) u>= 2)
            rax_9 = r8_3
        
        if (rax_9 == 0 || *(sx.q(rax_9[1].d) + *(*rax_9 + 0x398)) != 4)
            if (r8_3 == 0)
                goto label_142254b5f
            
            uint64_t* rax_10 = nullptr
            
            if (*(r8_3 + 0xc) u>= 2)
                rax_10 = r8_3
            
            if (rax_10 == 0 || *(sx.q(rax_10[1].d) + *(*rax_10 + 0x398)) != 1)
                goto label_142254b5f
            
            goto label_142254bc0
        
    label_142254bc0:
        
        if (r10 == 0)
            int64_t rdi_1 = sx.q(arg1[1].d)
            int32_t rax_11 = (rdi_1 + 1).d
            arg1[1].d = rax_11
            
            if (rax_11 s> *(arg1 + 0xc))
                sub_1405a4f90(arg1)
            
            *(*arg1 + rdi_1 * 0x10) = *i

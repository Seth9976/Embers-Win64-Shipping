// 函数: sub_140b35eb0
// 地址: 0x140b35eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg2[1].d
int64_t r14
r14.b = 1
int32_t rdi = rdx - 1

if (rdx == 0)
    rdi = -1

int32_t rax = rdx - 1

if (rdx == 0)
    rax = -1

if (rdx == 0)
    rax = 0

int16_t* rcx

if (rax s> 0)
    rcx = *arg2

if (rax s<= 0 || *rcx != 0x2b)
    if (rdx == 0)
        rdi = 0
    
    char rax_4
    
    if (rdi s> 2)
        rax_4 = sub_140a32ae0(arg2, &data_142e1f8a0, 0)
    
    int32_t rax_5
    int64_t rcx_2
    int64_t rdx_5
    int32_t rdi_1
    int32_t r8_3
    
    if (rdi s<= 2 || rax_4 == 0)
        int32_t rax_7 = arg2[1].d
        int32_t rcx_3 = rax_7 - 1
        
        if (rax_7 == 0)
            rcx_3 = 0
        
        if (rcx_3 s> 2 && sub_140a237d0(arg2, &data_142e1f8a0, 0) != 0)
            rax_5 = arg2[1].d
            r14.b = 2
            int32_t rdi_2 = rax_5 - 1
            
            if (rax_5 == 0)
                rdi_2 = -1
            
            int32_t r10_1 = rax_5 - 4
            
            if (rax_5 == 0)
                rdi_2 = 0
            
            if (rax_5 == 0)
                r10_1 = -3
            
            rdi_1 = rdi_2 - r10_1
            
            if (rdi_1 s> 3)
                rdi_1 = 3
            
            if (rdi_1 != 0)
                int32_t rcx_6 = rax_5 - r10_1
                
                if (rcx_6 != rdi_1)
                    int64_t r9_1 = *arg2
                    r8_3 = rcx_6 - rdi_1
                    rdx_5 = r9_1 + (sx.q(r10_1 + rdi_1) << 1)
                    rcx_2 = r9_1 + (sx.q(r10_1) << 1)
                    goto label_140b3601d
                
                arg2[1].d = rax_5 - rdi_1
    else
        rax_5 = arg2[1].d
        r14.b = 3
        rdi_1 = rax_5 - 1
        
        if (rax_5 == 0)
            rdi_1 = 0
        
        if (rdi_1 s> 3)
            rdi_1 = 3
        
        if (rdi_1 != 0)
            if (rax_5 == rdi_1)
                arg2[1].d = rax_5 - rdi_1
            else
                rcx_2 = *arg2
                r8_3 = rax_5 - rdi_1
                rdx_5 = rcx_2 + (sx.q(rdi_1) << 1)
            label_140b3601d:
                memmove(rcx_2, rdx_5, r8_3 * 2)
                arg2[1].d -= rdi_1
else
    r14.b = 0
    
    if (rdx == 0)
        rdi = 0
    
    if (rdi s> 1)
        rdi = 1
    
    if (rdi != 0)
        if (rdx != rdi)
            memmove(rcx, &rcx[sx.q(rdi)], (rdx - rdi) * 2)
            rdx = arg2[1].d
        
        arg2[1].d = rdx - rdi

int32_t rdx_6 = arg2[1].d
int64_t rbp
rbp.b = 0
int32_t rcx_9 = rdx_6
int32_t rax_12 = rdx_6 - 1

if (rdx_6 == 0)
    rax_12 = -1

int32_t rdi_3 = rdx_6 - 1

if (rdx_6 == 0)
    rax_12 = 0

if (rdx_6 == 0)
    rdi_3 = -1

if (rax_12 s> 0)
    int16_t* r9_2 = *arg2
    
    if (*r9_2 == 0x2d)
        rbp = 1
        
        if (rdx_6 == 0)
            rdi_3 = 0
        
        if (rdi_3 s> 1)
            rdi_3 = 1
        
        if (rdi_3 != 0)
            if (rdx_6 != rdi_3)
                memmove(r9_2, &r9_2[sx.q(rdi_3)], (rdx_6 - rdi_3) * 2)
                rcx_9 = arg2[1].d
            
            rcx_9 -= rdi_3
            arg2[1].d = rcx_9

int32_t rax_16 = rcx_9 - 1

if (rcx_9 == 0)
    rax_16 = 0

if (rax_16 s> 1)
    int16_t* r9_3 = *arg2
    int16_t rdx_8 = *r9_3
    
    if (rdx_8 == 0x22 || rdx_8 == 0x27)
        int32_t rax_17 = rcx_9 - 2
        
        if (rcx_9 == 0)
            rax_17 = -1
        
        if (r9_3[sx.q(rax_17)] == rdx_8)
            int32_t rdi_4 = rcx_9 - 1
            
            if (rcx_9 == 0)
                rdi_4 = 0
            
            if (rdi_4 s> 1)
                rdi_4 = 1
            
            if (rdi_4 != 0)
                if (rcx_9 != rdi_4)
                    memmove(r9_3, &r9_3[sx.q(rdi_4)], (rcx_9 - rdi_4) * 2)
                    rcx_9 = arg2[1].d
                
                rcx_9 -= rdi_4
                arg2[1].d = rcx_9
            
            int32_t r10_2 = rcx_9 - 2
            int32_t rdi_5 = rcx_9 - 1
            
            if (rcx_9 == 0)
                rdi_5 = 0
            
            if (rcx_9 == 0)
                r10_2 = -1
            
            int32_t rdi_6 = rdi_5 - r10_2
            
            if (rdi_6 s> 1)
                rdi_6 = 1
            
            if (rdi_6 != 0)
                int32_t rax_23 = rcx_9 - r10_2
                
                if (rax_23 != rdi_6)
                    int64_t r9_4 = *arg2
                    memmove(r9_4 + (sx.q(r10_2) << 1), r9_4 + (sx.q(r10_2 + rdi_6) << 1), 
                        (rax_23 - rdi_6) * 2)
                    rcx_9 = arg2[1].d
                
                arg2[1].d = rcx_9 - rdi_6

int64_t rax_27 = *arg2
*arg2 = 0
int64_t var_48 = rax_27
int32_t var_40 = arg2[1].d
int32_t var_3c = *(arg2 + 0xc)
arg2[1] = 0
int64_t var_38 = 0
int64_t var_30 = 0
sub_140b4ae80(&var_48)
sub_140b2f970(arg1, &var_48, r14.b, rbp.b)
int64_t rcx_17 = *arg2

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg1

// 函数: sub_1428e85d0
// 地址: 0x1428e85d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r8 = *arg2
int32_t rbx_1

if (r8 == 1)
    int32_t* r14_2 = *(arg2 + 8)
    int32_t* r15_1 = *(arg1 + 8)
    char* rbx_5 = *(r14_2 + 8)
    char* rsi_2 = *(r15_1 + 8)
    char* rax_31 = strchr(rbx_5, 0x40)
    char* rax_32 = strchr(rsi_2, 0x40)
    
    if (rax_32 == 0)
        rbx_1 = (&rax_32[0x35]).d
    else if (rax_31 == 0)
        if (*rbx_5 != 0x2e)
            goto label_1428e8982
        
        int32_t rcx_16 = *r14_2
        int32_t rax_33 = *r15_1
        
        if (rax_33 s<= rcx_16)
        labelid_63:
            rbx_1 = 0x2f
        else if (sub_1428e83f0(rbx_5, &rsi_2[sx.q(rax_33 - rcx_16)]) == 0)
            rbx_1 = 0
        else
        label_1428e8951:
            rbx_1 = 0x2f
    else if (rax_31 == rbx_5)
    label_1428e897e:
        rbx_5 = &rax_31[1]
    label_1428e8982:
        void* r9_3 = &rax_32[1]
        int64_t i_1 = -1
        char* rbx_6 = rbx_5 - r9_3
        int64_t i
        
        do
            char rdx_10 = *(rbx_6 + r9_3)
            char r8_13 = *r9_3
            
            if (rdx_10 != r8_13)
                if (rdx_10 - 0x41 u<= 0x19)
                    rdx_10 += 0x20
                
                if (r8_13 - 0x41 u<= 0x19)
                    r8_13 += 0x20
                
                if (rdx_10 != r8_13)
                    goto label_1428e8951_2
            else if (rdx_10 == 0)
                break
            
            r9_3 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = 0
    else
        uint64_t _MaxCount = rax_32 - rsi_2
        
        if (rax_31 - rbx_5 != _MaxCount)
        label_1428e8951_1:
            rbx_1 = 0x2f
        else
            if (strncmp(rbx_5, rsi_2, _MaxCount) == 0)
                goto label_1428e897e
            
        label_1428e8951_2:
            rbx_1 = 0x2f
else
    if (r8 == 2)
        int32_t* rcx_12 = *(arg2 + 8)
        int32_t* rax_24 = *(arg1 + 8)
        char* r10_2 = *(rcx_12 + 8)
        void* r9_2 = *(rax_24 + 8)
        char r8_10 = *r10_2
        
        if (r8_10 == 0)
            return 0
        
        int32_t rax_25 = *rax_24
        int32_t rdx_5 = *rcx_12
        
        if (rax_25 s> rdx_5)
            r9_2 += sx.q(rax_25 - rdx_5)
        
        if (rax_25 s<= rdx_5 || r8_10 == 0x2e || *(r9_2 - 1) == 0x2e)
            int64_t rcx_13 = -1
            void* r10_3 = r10_2 - r9_2
            
            while (true)
                char rdx_6 = *(r10_3 + r9_2)
                char r8_11 = *r9_2
                
                if (rdx_6 != r8_11)
                    if (rdx_6 - 0x41 u<= 0x19)
                        rdx_6 += 0x20
                    
                    if (r8_11 - 0x41 u<= 0x19)
                        r8_11 += 0x20
                    
                    if (rdx_6 != r8_11)
                        return 0x2f
                else if (rdx_6 == 0)
                    return 0
                
                r9_2 += 1
                int64_t temp6_1 = rcx_13
                rcx_13 -= 1
                
                if (temp6_1 == 1)
                    return 0
        
        return 0x2f
    
    if (r8 == 4)
        void* rdi_2 = *(arg1 + 8)
        void* rbx_2 = *(arg2 + 8)
        int32_t rax_19
        
        if (*(rdi_2 + 8) != 0)
            rax_19 = sub_1428ac180(rdi_2, nullptr)
        
        if (*(rdi_2 + 8) != 0 && rax_19 s< 0)
            return 0x11
        
        if (*(rbx_2 + 8) != 0 && sub_1428ac180(rbx_2, nullptr) s< 0)
            return 0x11
        
        int64_t count = sx.q(*(rbx_2 + 0x20))
        
        if (count.d s<= *(rdi_2 + 0x20))
            return zx.q(sbb.d(rbx_2.d, rbx_2.d, 
                memcmp(*(rbx_2 + 0x18), *(rdi_2 + 0x18), count) != 0)) & 0x2f
        
        return 0x2f
    
    if (r8 != 6)
        if (r8 != 7)
            return 0x33
        
        int32_t* rcx = *(arg2 + 8)
        int32_t* rax_2 = *(arg1 + 8)
        char* r10_1 = *(rcx + 8)
        int64_t rdx = sx.q(*rax_2)
        int32_t r8_5 = *rcx
        
        if ((rdx.d != 4 && rdx.d != 0x10) || (r8_5 != 8 && r8_5 != 0x20))
            return 0x35
        
        if ((rdx * 2).d != r8_5)
            return 0x2f
        
        if (rdx.d s<= 0)
            return 0
        
        char* r8_6 = r10_1
        
        while ((*(*(rax_2 + 8) - r10_1 + r8_6) & r8_6[rdx]) == (*r8_6 & r8_6[rdx]))
            r8_6 = &r8_6[1]
            
            if (r8_6 - r10_1 s>= rdx)
                return 0
        
        return 0x2f
    
    int32_t* r14_1 = *(arg2 + 8)
    char* rsi_1 = *(r14_1 + 8)
    char* rax_11 = strchr(*(*(arg1 + 8) + 8), 0x3a)
    
    if (rax_11 == 0 || rax_11[1] != 0x2f || rax_11[2] != 0x2f)
        return 0x35
    
    char* rax_12 = strchr(&rax_11[3], 0x3a)
    rbx_1 = 0x2f
    uint64_t rcx_4
    
    if (rax_12 != 0)
        rcx_4 = zx.q(rax_12.d - (&rax_11[3]).d)
    else
        rax_12 = strchr(&rax_11[3], 0x2f)
        
        if (rax_12 != 0)
            rcx_4 = zx.q(rax_12.d - (&rax_11[3]).d)
        else
            rcx_4 = -1
            
            do
                rcx_4 += 1
            while (rax_11[3 + rcx_4] != 0)
    
    if (rcx_4.d == 0)
        return 0x35
    
    int64_t rax_14 = sx.q(*r14_1)
    
    if (*rsi_1 != 0x2e)
        if (rax_14.d == rcx_4.d && sub_1428e8450(&rax_11[3], rsi_1, sx.q(rcx_4.d)) == 0)
            return 0
    else if (rcx_4.d s> rax_14.d
            && sub_1428e8450(&rax_11[3 + sx.q(rcx_4.d) - rax_14], rsi_1, rax_14) == 0)
        return 0

return zx.q(rbx_1)

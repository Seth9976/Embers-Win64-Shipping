// 函数: sub_1412710d0
// 地址: 0x1412710d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbp = arg2
void* r13 = arg1
int64_t r10_1

if (*(arg1 + 0x70) == arg2[0xe].w)
    r10_1 = sx.q(*(arg1 + 0x18))

uint64_t result

if (*(arg1 + 0x70) != arg2[0xe].w || r10_1.d != arg2[3].d)
label_1412713d9:
    result.b = 0
else
    if (r10_1.d s> 0)
        uint64_t* rax = arg2[2]
        int64_t r8_1 = 0
        void* rcx = *(arg1 + 0x10)
        void* r9_1 = r13
        
        if (rax != 0)
            arg2 = rax
        
        if (rcx != 0)
            r9_1 = rcx
        
        void* r9_2 = r9_1 - arg2
        
        do
            if (*(r9_2 + arg2) != *arg2)
                goto label_1412713d9
            
            r8_1 += 1
            arg2 = &arg2[1]
        while (r8_1 s< r10_1)
    
    int64_t* r14_1 = r13 + 0x20
    
    if (*(r13 + 0x72) u> 0x50)
        r14_1 = *r14_1
    
    void* r15_1 = &rbp[4]
    
    if (*(rbp + 0x72) u> 0x50)
        r15_1 = *r15_1
    
    if (r10_1.d s> 0)
        void* rax_1 = *(r13 + 0x10)
        int64_t r12_1 = 0
        uint64_t* rcx_1 = rbp[2]
        int64_t rsi_1 = r10_1
        
        if (rax_1 != 0)
            r13 = rax_1
        
        if (rcx_1 != 0)
            rbp = rcx_1
        
        result = r13 - rbp
        uint64_t result_1 = result
        
        do
            void* rbx_2 = &rbp[r12_1]
            void* rdi_1 = *(rbx_2 + result)
            void* rbx_3 = *rbx_2
            
            if (*(rdi_1 + 0x38) != 0)
                int32_t rax_3 = *(rdi_1 + 0x28)
                int32_t rax_4 = rax_3 + 7
                
                if (rax_3 + 7 s< 0)
                    rax_4 += 7
                
                int32_t rax_6 = *(rbx_3 + 0x28)
                int32_t rax_7 = rax_6 + 7
                
                if (rax_6 + 7 s< 0)
                    rax_7 += 7
                
                void* rdx = *(rdi_1 + 0x30)
                uint32_t r9_3 = 0
                
                if ((rdx.b & 1) != 0)
                    rdx = (rdx s>> 1) + rdi_1 + 0x30
                
                void* r10_2 = rdx + sx.q(*(rdi_1 + 0x38)) * 0x18
                
                while (rdx != r10_2)
                    uint32_t r8_3 = zx.d(*(rdx + 2)) + zx.d(*rdx)
                    
                    if (r9_3 u>= r8_3)
                        r8_3 = r9_3
                    
                    rdx += 0x18
                    r9_3 = r8_3
                
                result = memcmp(
                    zx.q((rax_4 s>> 3) + ((*(rdi_1 + 0x18) + *(rdi_1 + 8) + rax_3) << 3)) + r14_1, 
                    zx.q((rax_7 s>> 3) + ((*(rbx_3 + 0x18) + *(rbx_3 + 8) + rax_6) << 3)) + r15_1, 
                    zx.q(r9_3))
                
                if (result.d != 0)
                    goto label_1412713d9
                
                rsi_1 = r10_1
            
            int64_t rdx_3 = 0
            int64_t r10_3 = sx.q(*(rdi_1 + 8))
            int64_t r11_3 = sx.q(*(rdi_1 + 0x18))
            void* rcx_11 = zx.q((r10_3 << 3).d) + r14_1
            
            if (r11_3.d s> 0)
                void* r8_8 = zx.q(*(rbx_3 + 8) << 3) + r15_1 - rcx_11
                
                do
                    if (*rcx_11 != *(r8_8 + rcx_11))
                        goto label_1412713d9
                    
                    rdx_3 += 1
                    rcx_11 += 8
                while (rdx_3 s< r11_3)
            
            int64_t rdx_4 = sx.q(*(rdi_1 + 0x28))
            int64_t rax_12 = 0
            void* rcx_14 = zx.q((r10_3 + r11_3).d << 3) + r14_1
            
            if (rdx_4 s> 0)
                do
                    rax_12 += 1
                    rcx_14 += 8
                while (rax_12 s< rdx_4)
            
            int64_t rdx_5 = 0
            
            if (r10_3.d s> 0)
                int64_t* rcx_15 = r14_1
                
                do
                    if (*rcx_15 != *(r15_1 - r14_1 + rcx_15))
                        goto label_1412713d9
                    
                    rdx_5 += 1
                    rcx_15 = &rcx_15[1]
                while (rdx_5 s< r10_3)
            
            void* rdx_6 = *(r13 + (r12_1 << 3))
            int32_t rax_13 = *(rdx_6 + 0x28)
            int32_t rax_14 = rax_13 + 7
            
            if (rax_13 + 7 s< 0)
                rax_14 += 7
            
            int64_t i_2 = sx.q(*(rdx_6 + 0x38))
            int32_t r9_4 = 0
            
            if (i_2 s> 0)
                int64_t rcx_19 = 0
                int64_t i
                
                do
                    void* rax_17 = *(rdx_6 + 0x30)
                    
                    if ((*(rdx_6 + 0x30) & 1) != 0)
                        rax_17 = (rax_17 s>> 1) + rdx_6 + 0x30
                    
                    uint32_t rax_18 = zx.d(*(rcx_19 + rax_17 + 2))
                    rcx_19 += 0x18
                    r9_4 += rax_18
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            void* rcx_20 = rbp[r12_1]
            r14_1 +=
                zx.q((rax_14 s>> 3) + ((*(rdx_6 + 0x18) + *(rdx_6 + 8) + rax_13) << 3) + 7 + r9_4)
                & 0xfffffff8
            int32_t rax_22 = *(rcx_20 + 0x28)
            int32_t rax_23 = rax_22 + 7
            
            if (rax_22 + 7 s< 0)
                rax_23 += 7
            
            int64_t i_3 = sx.q(*(rcx_20 + 0x38))
            int32_t r8_11 = 0
            
            if (i_3 s> 0)
                int64_t rdx_11 = 0
                int64_t i_1
                
                do
                    void* rax_26 = *(rcx_20 + 0x30)
                    
                    if ((*(rcx_20 + 0x30) & 1) != 0)
                        rax_26 = (rax_26 s>> 1) + rcx_20 + 0x30
                    
                    uint32_t rcx_21 = zx.d(*(rdx_11 + rax_26 + 2))
                    rdx_11 += 0x18
                    r8_11 += rcx_21
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            r12_1 += 1
            r15_1 += zx.q((rax_23 s>> 3) + ((*(rcx_20 + 0x18) + *(rcx_20 + 8) + rax_22) << 3) + 7
                + r8_11) & 0xfffffff8
            result = result_1
        while (r12_1 s< rsi_1)
    
    result.b = 1

return result

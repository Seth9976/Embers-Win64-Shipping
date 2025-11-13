// 函数: sub_142ba0da0
// 地址: 0x142ba0da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int64_t r9 = r10 * 0x898
void* r15 = *(r9 + arg1 + 0x40)
int32_t rbp = *(r9 + arg1 + 0x58)
void* i = r15 + sx.q(*(r9 + arg1 + 0x38)) * 0x48
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(*(arg1 + 0x1170) + 0x38) << 3)
int32_t rdx_2

if (r10.d != 0)
    rdx_2 = *(arg1 + 0x10)
else
    rdx_2 = *(arg1 + 8)

void* result = sub_142b91790(0xc0, rdx_2)
int32_t r12 = result.d

if (r15 u< i)
    char* r8_1 = r15 + 1
    
    do
        if (sx.d(*r8_1) == rbp)
            int16_t* rdx_3 = r15 + 6
            
            do
                if (&rdx_3[-3] != &r8_1[-1] && sx.d(*(rdx_3 - 5)) == neg.d(sx.d(*r8_1)))
                    int32_t rax_6 = sx.d(*(r8_1 + 1))
                    int32_t r10_1 = sx.d(rdx_3[-2])
                    uint64_t r10_2 = zx.q(r10_1 - rax_6)
                    
                    if (r10_1 - rax_6 s>= 0)
                        int32_t rax_7 = sx.d(*rdx_3)
                        int32_t rcx_3 = sx.d(*(r8_1 + 5))
                        int32_t r9_1 = sx.d(*(r8_1 + 7))
                        
                        if (rcx_3 s< rax_7)
                            rcx_3 = rax_7
                        
                        int32_t rax_8 = sx.d(rdx_3[1])
                        
                        if (r9_1 s> rax_8)
                            r9_1 = rax_8
                        
                        int32_t r9_2 = r9_1 - rcx_3
                        
                        if (r9_2 s>= ((temp0 & 0x7ff) + temp1) s>> 0xb)
                            uint64_t r11_1 = zx.q(*(r8_1 + 0x2f))
                            uint32_t rcx_4 = (r10_2 << 3).d
                            
                            if (rcx_4 s< (r11_1 * 9).d
                                    && (rcx_4 s< r11_1.d * 7 || *(r8_1 + 0x33) s< r9_2))
                                *(r8_1 + 0x2f) = r10_2.d
                                *(r8_1 + 0x33) = r9_2
                                *(r8_1 + 0x1f) = &rdx_3[-3]
                            
                            uint64_t r11_2 = zx.q(*(rdx_3 + 0x2a))
                            
                            if (rcx_4 s< (r11_2 * 9).d
                                    && (rcx_4 s< r11_2.d * 7 || *(rdx_3 + 0x2e) s< r9_2))
                                *(rdx_3 + 0x2a) = r10_2.d
                                *(rdx_3 + 0x2e) = r9_2
                                *(rdx_3 + 0x1a) = &r8_1[-1]
                
                rdx_3 = &rdx_3[0x24]
            while (&rdx_3[-3] u< i)
        
        r8_1 = &r8_1[0x48]
        result = &r8_1[-1]
    while (result u< i)

if (r15 u< i)
    int32_t* rdi_2 = r15 + 0x30
    
    do
        void* rbx_2 = *(rdi_2 - 0x10)
        
        if (rbx_2 != 0 && *(rbx_2 + 0x20) == &rdi_2[-0xc] && *(rbx_2 + 2) s> *(rdi_2 - 0x2e)
                && *rdi_2 s< r12)
            int16_t* r8_2 = r15 + 2
            
            do
                int16_t rdx_4 = *r8_2
                int16_t r10_3 = *(rdi_2 - 0x2e)
                
                if (rdx_4 s<= r10_3 && &rdi_2[-0xc] != &r8_2[-1])
                    void* r9_3 = *(r8_2 + 0x1e)
                    
                    if (r9_3 != 0 && *(r9_3 + 0x20) == &r8_2[-1])
                        int16_t rax_15 = *(r9_3 + 2)
                        int16_t rcx_5 = *(rbx_2 + 2)
                        
                        if (rax_15 s>= rcx_5 && (r10_3 != rdx_4 || rcx_5 != rax_15))
                            int32_t rcx_6 = *(r8_2 + 0x2e)
                            uint64_t rax_16 = zx.q(*rdi_2)
                            
                            if (rcx_6 s> rax_16.d && (rax_16 << 2).d s> rcx_6)
                                if (rdi_2[1] s< *(r8_2 + 0x32) * 3)
                                    *(rbx_2 + 0x20) = 0
                                    *(rdi_2 - 0x10) = 0
                                    break
                                
                                void* rcx_8 = r15 + 0x20
                                int64_t j_1 = (i - r15 - 1) u/ 0x48 + 1
                                int64_t j
                                
                                do
                                    int64_t rax_20 = *rcx_8
                                    
                                    if (rax_20 == &r8_2[-1])
                                        *(rcx_8 + 8) = rbx_2
                                        *rcx_8 = 0
                                    else if (rax_20 == r9_3)
                                        *(rcx_8 + 8) = &rdi_2[-0xc]
                                        *rcx_8 = 0
                                    
                                    rcx_8 += 0x48
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                
                r8_2 = &r8_2[0x24]
            while (&r8_2[-1] u< i)
        
        rdi_2 = &rdi_2[0x12]
        result = &rdi_2[-0xc]
    while (result u< i)

if (r15 u< i)
    int64_t* rcx_9 = r15 + 0x20
    
    do
        void* rdx_10 = *rcx_9
        
        if (rdx_10 != 0 && *(rdx_10 + 0x20) != &rcx_9[-4])
            *rcx_9 = 0
            uint64_t rax_23 = zx.q(*(rdx_10 + 0x30))
            
            if (rax_23.d s< r12 || rcx_9[2].d s< (rax_23 << 2).d)
                rcx_9[1] = *(rdx_10 + 0x20)
        
        rcx_9 = &rcx_9[9]
        result = &rcx_9[-4]
    while (result u< i)

return result

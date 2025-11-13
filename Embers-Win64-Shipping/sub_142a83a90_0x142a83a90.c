// 函数: sub_142a83a90
// 地址: 0x142a83a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0 || *arg3 s> 0)
    return 

if (arg2 == 0)
    *arg3 = 1
    return 

if (arg1 == 0)
    *arg3 = 0x1b
    return 

int64_t rax = *arg1

if (rax != arg1 && (rax == 0 || *rax != rax))
    *arg3 = 0x1b
    return 

sub_142a83690(arg1)

if (*arg3 s> 0)
    return 

int32_t* r8 = arg2
int32_t* i = arg1[0x26]
void* r11_1 = &i[sx.q(arg1[0x25].d) * 3]

if (arg1[3].d s<= 0)
    return 

int32_t rdx_1 = 0

for (; i u< r11_1; i = &i[3])
    rax = zx.q(*i)
    int32_t r9_1 = i[1]
    
    if ((not.b((rax.d u>> 0x1f).b) & 1) == 0)
        rax = zx.q((rax.d & 0x7fffffff) - rdx_1 + r9_1)
        
        do
            rax = zx.q(rax.d - 1)
            rdx_1 += 1
            *r8 = rax.d
            r8 = &r8[1]
        while (rdx_1 s< r9_1)
    else
        do
            *r8 = rax.d
            rdx_1 += 1
            r8 = &r8[1]
            rax = zx.q(rax.d + 1)
        while (rdx_1 s< r9_1)

if (*(arg1 + 0x1a4) s> 0)
    int64_t i_8 = sx.q(arg1[0x25].d)
    int32_t i_2 = 0
    void* r11_2 = arg1[0x26]
    int64_t i_6 = i_8
    
    if (i_8.d s> 0)
        int32_t* rdx_2 = r11_2 + 8
        int64_t i_1
        
        do
            char rax_3 = (*rdx_2).b
            int32_t i_4 = i_2 + 1
            rdx_2 = &rdx_2[3]
            
            if ((rax_3 & 5) == 0)
                i_4 = i_2
            
            i_2 = i_4 + 1
            
            if ((rax_3 & 0xa) == 0)
                i_2 = i_4
            
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    rax = zx.q((i_8 - 1).d)
    int64_t rdi_2 = sx.q(rax.d)
    
    if (rax.d s>= 0)
        int64_t rcx_3 = sx.q(arg1[3].d)
        void* r10_3 = r11_2 + ((rdi_2 + ((rdi_2 - 1) << 1)) << 2)
        
        while (i_2 s> 0)
            char rsi_1 = (*(r10_3 + 0x10)).b
            
            if ((rsi_1 & 0xa) != 0)
                rcx_3 -= 1
                i_2 -= 1
                arg2[rcx_3] = 0xffffffff
            
            int32_t r9_2
            
            if (rdi_2 s<= 0)
                r9_2 = 0
            else
                r9_2 = *r10_3
            
            int64_t r9_3 = sx.q(r9_2)
            int64_t rdx_3 = sx.q(*(r10_3 + 0xc) - 1)
            
            if (rdx_3 s>= r9_3)
                while (i_2 s> 0)
                    rax = zx.q(arg2[rdx_3])
                    rcx_3 -= 1
                    rdx_3 -= 1
                    arg2[rcx_3] = rax.d
                    
                    if (rdx_3 s< r9_3)
                        break
            
            if ((rsi_1 & 5) != 0)
                rcx_3 -= 1
                i_2 -= 1
                arg2[rcx_3] = 0xffffffff
            
            r10_3 -= 0xc
            int64_t temp2_1 = rdi_2
            rdi_2 -= 1
            
            if (temp2_1 - 1 s< 0)
                break
else if (arg1[0x37].d s> 0)
    int64_t i_5 = sx.q(arg1[0x25].d)
    int32_t rcx_4 = 0
    int32_t r9_4 = 0
    int64_t i_7 = i_5
    
    if (i_5 s> 0)
        int32_t* r15 = arg1[0x26] + 4
        int64_t i_3
        
        do
            int64_t rdi_4 = sx.q(*r15)
            int32_t rdx_4 = r15[1]
            int32_t rax_6 = rdi_4.d - rcx_4
            
            if (rdx_4 != 0 || r9_4 != rcx_4)
                int64_t r10_4 = sx.q(r9_4)
                
                if (rdx_4 != 0)
                    int32_t r8_1 = r15[-1]
                    int32_t r8_2 = r8_1 & 0x7fffffff
                    int32_t r11_4 = r8_2 - 1 + rax_6
                    
                    if (rax_6 s> 0)
                        uint64_t r13_1 = zx.q(r8_2)
                        void* rsi_2 = &arg2[r10_4]
                        int64_t rdi_3 = sx.q(r11_4)
                        int64_t j = 0
                        
                        do
                            int64_t rcx_6
                            int32_t r10_5
                            
                            if ((not.b((r8_1 u>> 0x1f).b) & 1) == 0)
                                r10_5 = r11_4
                                rcx_6 = rdi_3
                            else
                                r10_5 = r8_2
                                rcx_6 = j + r13_1
                            
                            uint32_t rcx_7 = zx.d(*(arg1[1] + (rcx_6 << 1)))
                            
                            if ((rcx_7 & 0xfffffffc) != 0x200c && rcx_7 - 0x202a u>= 5
                                    && rcx_7 - 0x2066 u>= 4)
                                r9_4 += 1
                                *rsi_2 = r10_5
                                rsi_2 += 4
                            
                            r8_2 += 1
                            r11_4 -= 1
                            j += 1
                            rdi_3 -= 1
                        while (j s< sx.q(rax_6))
                        
                        rdi_4 = zx.q(rdi_4.d)
                        i_5 = i_7
                else
                    int64_t rcx_5 = sx.q(rcx_4)
                    
                    if (rcx_5 s< rdi_4)
                        void* rdx_5 = &arg2[r10_4]
                        r9_4 += rdi_4.d - rcx_5.d
                        
                        do
                            rax_6 = arg2[rcx_5]
                            rcx_5 += 1
                            *rdx_5 = rax_6
                            rdx_5 += 4
                        while (rcx_5 s< rdi_4)
            else
                r9_4 += rax_6
            
            r15 = &r15[3]
            rcx_4 = rdi_4.d
            i_3 = i_5
            i_5 -= 1
            i_7 = i_5
        while (i_3 != 1)

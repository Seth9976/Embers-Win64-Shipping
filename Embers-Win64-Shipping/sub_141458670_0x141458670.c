// 函数: sub_141458670
// 地址: 0x141458670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg3[2]

if (r8 == 0)
    return 

void* rax = sub_141438000(arg2 + 0x3c8, *(r8 + 0x10), r8 + 0x10, arg4)
int16_t rcx_1 = *(arg2 + 0x3c0)

if (*rax == rcx_1)
    return 

*rax = rcx_1
int64_t* rdi_1 = *arg3
int64_t rsi_1 = 0
uint64_t r14_2 = sx.q(arg3[1].d) << 3 u>> 3

if (rdi_1 u> &rdi_1[arg3[1]])
    r14_2 = 0

if (r14_2 == 0)
    return 

do
    void* r11_1 = *rdi_1
    
    if (r11_1 != 0 && *(r11_1 + 0x10) u> 0)
        int32_t rcx_2 = *(r11_1 + 0x110)
        
        if (((rcx_2 + 1) & 0x7fffffff) != 0 && rcx_2 s>= 0 && rcx_2 s< *(arg2 + 0x3b0))
            void* r10_1 = arg2 + 0x398
            void* r8_2 = *(r10_1 + 0x10)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rcx_2)
            int64_t r9 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            
            if (r8_2 != 0)
                r10_1 = r8_2
            
            int32_t rdx_3 = 1 << (rcx_2.b & 0x1f)
            void* rcx_4 = arg2 + 0x378
            *(r10_1 + (r9 << 2)) |= rdx_3
            void* rax_6 = *(rcx_4 + 0x10)
            
            if (rax_6 != 0)
                rcx_4 = rax_6
            
            *(rcx_4 + (r9 << 2)) &= not.d(rdx_3)
            void* const rcx_9
            
            if (*(arg1 + 0x10) == *(arg1 + 0x3c))
            label_1414587d0:
                rcx_9 = nullptr
            else
                void* rdx_5 = *(arg1 + 0x48)
                void* r8_3 = arg1 + 0x40
                r9 = sx.q(*(r11_1 + 0x10))
                
                if (rdx_5 != 0)
                    r8_3 = rdx_5
                
                rax = zx.q(*(r8_3 + (((sx.q(*(arg1 + 0x50)) - 1) & r9) << 2)))
                
                if (rax.d == 0xffffffff)
                label_1414587d0_1:
                    rcx_9 = nullptr
                else
                    int64_t r8_4 = *(arg1 + 8)
                    
                    while (true)
                        int64_t rdx_6 = sx.q(rax.d) * 5
                        rcx_9 = r8_4 + (rdx_6 << 3)
                        
                        if (*(r8_4 + (rdx_6 << 3)) == r9.d)
                            break
                        
                        rax = zx.q(*(rcx_9 + 0x20))
                        
                        if (rax.d == 0xffffffff)
                            goto label_1414587d0_2
                    
                    if (rax.d == 0xffffffff)
                    label_1414587d0_2:
                        rcx_9 = nullptr
            
            void* r8_5 = rcx_9 + 8
            
            if (rcx_9 == 0)
                r8_5 = nullptr
            
            if (r8_5 != 0)
                sub_141458670(arg1, arg2, r8_5, r9)
    
    rdi_1 = &rdi_1[1]
    rsi_1 += 1
while (rsi_1 != r14_2)

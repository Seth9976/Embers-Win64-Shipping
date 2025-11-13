// 函数: sub_141447140
// 地址: 0x141447140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[2] == 0)
    return 

int64_t rbp_1 = 0
*arg4 = *(arg2 + 0x3c0)
int64_t* r14_1 = *arg3
uint64_t r15_2 = sx.q(arg3[1].d) << 3 u>> 3

if (r14_1 u> &r14_1[arg3[1]])
    r15_2 = 0

if (r15_2 == 0)
    return 

do
    void* r10_1 = *r14_1
    
    if (r10_1 != 0 && *(r10_1 + 0x10) u> 0)
        int32_t rcx = *(r10_1 + 0x110)
        
        if (((rcx + 1) & 0x7fffffff) != 0 && rcx s>= 0 && rcx s< *(arg2 + 0x350))
            void* rdx = *(arg2 + 0x348)
            int32_t rax_3 = rcx
            
            if (rcx s< 0)
                rax_3 = rcx + 0x1f
            
            int64_t rsi_1 = sx.q(rax_3 s>> 5) << 2
            void* rax_6 = arg2 + 0x338
            
            if (rdx != 0)
                rax_6 = rdx
            
            int32_t r11_1 = 1 << (rcx.b & 0x1f)
            void* rdx_1 = rax_6 + rsi_1
            int32_t rcx_2 = *rdx_1
            int64_t r9_1 = zx.q(not.d(r11_1))
            int32_t rax_8
            
            if (arg5 == 0)
                rax_8 = rcx_2 & r9_1.d
            else
                rax_8 = r11_1 | rcx_2
            
            *rdx_1 = rax_8
            void* rcx_3 = arg2 + 0x358
            void* rax_10 = *(rcx_3 + 0x10)
            
            if (rax_10 != 0)
                rcx_3 = rax_10
            
            void* r8 = rcx_3 + rsi_1
            int32_t rcx_5 = r9_1.d & *r8
            
            if (arg6 != 0)
                rcx_5 = r11_1 | *(rcx_3 + rsi_1)
            
            *r8 = rcx_5
            int32_t* rcx_6 = arg2 + 0x398
            int32_t* rax_11 = *(rcx_6 + 0x10)
            
            if (rax_11 != 0)
                rcx_6 = rax_11
            
            rcx_6[sx.q(rax_3 s>> 5)] &= r9_1.d
            
            if (arg5 != 0)
                void* rax_12 = *(arg2 + 0x388)
                void* rcx_7 = arg2 + 0x378
                
                if (rax_12 != 0)
                    rcx_7 = rax_12
                
                *(rcx_7 + rsi_1) |= r11_1
            
            void* const rcx_12
            
            if (*(arg1 + 0x10) == *(arg1 + 0x3c))
            label_1414472fb:
                rcx_12 = nullptr
            else
                void* rdx_4 = *(arg1 + 0x48)
                void* r8_1 = arg1 + 0x40
                r9_1 = sx.q(*(r10_1 + 0x10))
                
                if (rdx_4 != 0)
                    r8_1 = rdx_4
                
                int32_t rax_14 = *(r8_1 + (((sx.q(*(arg1 + 0x50)) - 1) & r9_1) << 2))
                
                if (rax_14 == 0xffffffff)
                label_1414472fb_1:
                    rcx_12 = nullptr
                else
                    int64_t r8_2 = *(arg1 + 8)
                    
                    while (true)
                        int64_t rdx_5 = sx.q(rax_14) * 5
                        rcx_12 = r8_2 + (rdx_5 << 3)
                        
                        if (*(r8_2 + (rdx_5 << 3)) == r9_1.d)
                            break
                        
                        rax_14 = *(rcx_12 + 0x20)
                        
                        if (rax_14 == 0xffffffff)
                            goto label_1414472fb_2
                    
                    if (rax_14 == 0xffffffff)
                    label_1414472fb_2:
                        rcx_12 = nullptr
            
            int64_t* r8_3 = rcx_12 + 8
            
            if (rcx_12 == 0)
                r8_3 = nullptr
            
            if (r8_3 != 0)
                sub_141458670(arg1, arg2, r8_3, r9_1)
    
    r14_1 = &r14_1[1]
    rbp_1 += 1
while (rbp_1 != r15_2)

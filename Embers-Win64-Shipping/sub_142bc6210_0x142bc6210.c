// 函数: sub_142bc6210
// 地址: 0x142bc6210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x28)
char* rbx = &arg2[1]
int32_t r8 = 0
int32_t arg_8 = 0
int64_t r10 = *rax

if (rbx u<= arg3)
    uint32_t rax_1 = zx.d(*arg2)
    
    if (rax_1.b s< 0)
        int32_t r12_2 = rax_1 & 0x3f
        
        if ((rax_1.b & 0x40) != 0)
            if (&rbx[1] u> arg3)
            label_142bc6292:
                r8 = 8
            else
                uint32_t i_1 = zx.d(*rbx)
                rbx = &rbx[1]
                
                if (i_1 != 0)
                    uint32_t i
                    
                    do
                        void* rcx = &rbx[2]
                        
                        if (rcx u> arg3)
                            goto label_142bc6292
                        
                        uint64_t rax_3 = zx.q(*rbx)
                        rbx = rcx
                        void* rcx_1 = rcx + rax_3
                        
                        if (rcx_1 u> arg3)
                            goto label_142bc6292
                        
                        rbx = rcx_1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
            
            arg_8 = r8
            
            if (r8 != 0)
                return zx.q(r8)
        
        uint64_t r14_1 = zx.q(*(arg1 + 0x18))
        int32_t rcx_2 = *(arg1 + 0x1c)
        int32_t rsi_1 = r14_1.d + r12_2
        
        if (rsi_1 u<= rcx_2)
            goto label_142bc6309
        
        int32_t rsi_3 = (rsi_1 + 3) & 0xfffffffc
        
        if (rsi_3 u<= 0x40)
            int64_t rax_5 = sub_142b99a90(r10, 0x18, rcx_2, rsi_3, *(arg1 + 0x20), &arg_8)
            r8 = arg_8
            *(arg1 + 0x20) = rax_5
            
            if (r8 != 0)
                return zx.q(r8)
            
            *(arg1 + 0x1c) = rsi_3
        label_142bc6309:
            int32_t r14_2 = 0
            int32_t* r10_1 = *(arg1 + 0x20) + r14_1 * 0x18
            
            if (r12_2 == 0)
                return zx.q(r8)
            
            void* rdx = &rbx[2]
            void* r9_2 = &rbx[3]
            void* r8_2 = &rbx[1]
            
            while (true)
                int32_t rsi_4 = 0
                int32_t rbp_1 = 0
                
                if (r8_2 u> arg3)
                    break
                
                uint32_t r11_1 = zx.d(*rbx)
                void* r8_3 = r8_2 + 1
                void* rbx_1 = &rbx[1]
                *r10_1 = 0x10000
                void* r9_3 = r9_2 + 1
                void* rdx_1 = rdx + 1
                
                if ((r11_1.b & 0x10) != 0)
                    if (rdx_1 u> arg3)
                        break
                    
                    uint16_t rax_7 = zx.w(*rbx_1)
                    rbx_1 += 2
                    r8_3 += 2
                    r9_3 += 2
                    rdx_1 += 2
                    *r10_1 = (sx.d(rax_7 << 8) | zx.d(*(rbx_1 - 1))) << 4
                
                r10_1[1] = 0x10000
                
                if ((r11_1.b & 0x20) != 0)
                    if (rdx_1 u> arg3)
                        break
                    
                    uint16_t rax_9 = zx.w(*rbx_1)
                    rbx_1 += 2
                    r8_3 += 2
                    r9_3 += 2
                    rdx_1 += 2
                    r10_1[1] = (sx.d(rax_9 << 8) | zx.d(*(rbx_1 - 1))) << 4
                
                int32_t rax_12 = r11_1 & 3
                
                if (rax_12 == 1)
                    if (rdx_1 u> arg3)
                        break
                    
                    uint16_t rax_14 = zx.w(*rbx_1)
                    rbx_1 += 2
                    r8_3 += 2
                    r9_3 += 2
                    rdx_1 += 2
                    rsi_4 = sx.d(rax_14 << 8) | zx.d(*(rbx_1 - 1))
                else if (rax_12 == 2)
                    if (r8_3 u> arg3)
                        break
                    
                    rsi_4 = sx.d(*rbx_1)
                    r8_3 += 1
                    rbx_1 += 1
                    r9_3 += 1
                    rdx_1 += 1
                
                int32_t rax_18 = r11_1 u>> 2 & 3
                
                if (rax_18 == 1)
                    if (rdx_1 u> arg3)
                        break
                    
                    uint16_t rax_20 = zx.w(*rbx_1)
                    rbx_1 += 2
                    r8_3 += 2
                    r9_3 += 2
                    rdx_1 += 2
                    rbp_1 = sx.d(rax_20 << 8) | zx.d(*(rbx_1 - 1))
                else if (rax_18 == 2)
                    if (r8_3 u> arg3)
                        break
                    
                    rbp_1 = sx.d(*rbx_1)
                    r8_3 += 1
                    rbx_1 += 1
                    r9_3 += 1
                    rdx_1 += 1
                
                r10_1[2] = rsi_4
                r10_1[3] = rbp_1
                void* rdx_2
                void* rbx_2
                void* r8_4
                void* r9_4
                
                if ((r11_1.b & 0x40) == 0)
                    if (r8_3 u> arg3)
                        break
                    
                    r8_4 = r8_3 + 1
                    rbx_2 = rbx_1 + 1
                    r10_1[5] = zx.d(*rbx_1)
                    r9_4 = r9_3 + 1
                    rdx_2 = rdx_1 + 1
                else
                    if (rdx_1 u> arg3)
                        break
                    
                    rbx_2 = rbx_1 + 2
                    r8_4 = r8_3 + 2
                    r9_4 = r9_3 + 2
                    rdx_2 = rdx_1 + 2
                    r10_1[5] = zx.d(*rbx_1) << 8 | zx.d(*(rbx_2 - 1))
                
                uint32_t rcx_16
                
                if (r11_1.b s>= 0)
                    if (rdx_2 u> arg3)
                        break
                    
                    rcx_16 = zx.d(*rbx_2)
                    rbx = rbx_2 + 2
                    r8_2 = r8_4 + 2
                    r9_2 = r9_4 + 2
                    rdx = rdx_2 + 2
                else
                    if (r9_4 u> arg3)
                        break
                    
                    rbx = rbx_2 + 3
                    r8_2 = r8_4 + 3
                    r9_2 = r9_4 + 3
                    rdx = rdx_2 + 3
                    rcx_16 = zx.d(*rbx_2) << 8 | zx.d(rbx[-2])
                
                r14_2 += 1
                r10_1[4] = rcx_16 << 8 | zx.d(rbx[-1])
                r10_1 = &r10_1[6]
                *(arg1 + 0x18) += 1
                
                if (r14_2 u>= r12_2)
                    return zx.q(arg_8)

return 8

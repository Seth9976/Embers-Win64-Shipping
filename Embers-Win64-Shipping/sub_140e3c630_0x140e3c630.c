// 函数: sub_140e3c630
// 地址: 0x140e3c630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg1 + 0x278) - *(arg1 + 0x2b8)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r8_1)
char* r8_4 = *(arg1 + 0x3570)
int32_t i = *(arg1 + 0x2508)
int64_t r11_2 = sx.q((*(arg1 + 0x1d0) * ((temp1 + (temp0 & 7)) s>> 3)) << 6) + zx.q((r8_1 & 7) << 3)
    + *(arg1 + 0x2568)
int64_t arg_10 = r11_2
int32_t i_1 = i

if (i s> 0)
    int32_t rsi_1 = data_143e29b34
    
    do
        int32_t j = 0
        
        if (*(arg1 + 0x274) s> 0)
            int64_t r10_1 = 0
            int64_t arg_18 = 0
            int32_t r13_1 = 0
            
            do
                int32_t rcx = *(arg1 + 0x2518)
                int64_t k_1 = 2
                int64_t rdx_5 = sx.q((rcx << 6) + r13_1)
                int64_t r15_2 = r10_1 - rdx_5
                int64_t r14_2 = sx.q((rcx << 7) + r13_1) - rdx_5
                void* rdi_1 = rdx_5 + r11_2
                int64_t k
                
                do
                    uint32_t rdx_6 = zx.d(*(rdi_1 + r15_2))
                    char r11_3 = *rdi_1
                    char rbx_1 = *(r14_2 + rdi_1)
                    int32_t rcx_8
                    
                    if (rsi_1 != 1)
                        uint64_t r10_3 = zx.q(rbx_1)
                        uint32_t rcx_10 = *(arg1 + (r10_3 << 2) + 0x2570) + rdx_6
                        
                        if (rcx_10 u> 0xff)
                            rcx_10 = zx.d((not.d(rcx_10) s>> 0x1f).b)
                        
                        *r8_4 = rcx_10.b
                        uint64_t rcx_13 = zx.q(r11_3)
                        int32_t rax_17 = ((*(arg1 + (r10_3 << 2) + 0x2d70)
                            + *(arg1 + (rcx_13 << 2) + 0x3170)) s>> 0x10) + rdx_6
                        
                        if (rax_17 u> 0xff)
                            rax_17 = zx.d((not.d(rax_17) s>> 0x1f).b)
                        
                        r8_4[1] = rax_17.b
                        rcx_8 = *(arg1 + (rcx_13 << 2) + 0x2970)
                    else
                        uint64_t r10_2 = zx.q(r11_3)
                        uint32_t rcx_4 = *(arg1 + (r10_2 << 2) + 0x2970) + rdx_6
                        
                        if (rcx_4 u> 0xff)
                            rcx_4 = zx.d((not.d(rcx_4) s>> 0x1f).b)
                        
                        *r8_4 = rcx_4.b
                        uint64_t rcx_7 = zx.q(rbx_1)
                        int32_t rax_11 = ((*(arg1 + (r10_2 << 2) + 0x3170)
                            + *(arg1 + (rcx_7 << 2) + 0x2d70)) s>> 0x10) + rdx_6
                        
                        if (rax_11 u> 0xff)
                            rax_11 = zx.d((not.d(rax_11) s>> 0x1f).b)
                        
                        r8_4[1] = rax_11.b
                        rcx_8 = *(arg1 + (rcx_7 << 2) + 0x2570)
                    
                    uint32_t rcx_16 = rcx_8 + rdx_6
                    
                    if (rcx_16 u> 0xff)
                        rcx_16 = zx.d((not.d(rcx_16) s>> 0x1f).b)
                    
                    r8_4[2] = rcx_16.b
                    r8_4[3] = 0xff
                    uint32_t rdx_7 = zx.d(*(rdi_1 + r15_2 + 1))
                    char r11_4 = *(rdi_1 + 1)
                    char rbx_2 = *(r14_2 + rdi_1 + 1)
                    int32_t rcx_22
                    
                    if (rsi_1 != 1)
                        uint64_t r10_5 = zx.q(rbx_2)
                        uint32_t rcx_24 = *(arg1 + (r10_5 << 2) + 0x2570) + rdx_7
                        
                        if (rcx_24 u> 0xff)
                            rcx_24 = zx.d((not.d(rcx_24) s>> 0x1f).b)
                        
                        r8_4[4] = rcx_24.b
                        uint64_t rcx_27 = zx.q(r11_4)
                        int32_t rax_29 = ((*(arg1 + (r10_5 << 2) + 0x2d70)
                            + *(arg1 + (rcx_27 << 2) + 0x3170)) s>> 0x10) + rdx_7
                        
                        if (rax_29 u> 0xff)
                            rax_29 = zx.d((not.d(rax_29) s>> 0x1f).b)
                        
                        r8_4[5] = rax_29.b
                        rcx_22 = *(arg1 + (rcx_27 << 2) + 0x2970)
                    else
                        uint64_t r10_4 = zx.q(r11_4)
                        uint32_t rcx_18 = *(arg1 + (r10_4 << 2) + 0x2970) + rdx_7
                        
                        if (rcx_18 u> 0xff)
                            rcx_18 = zx.d((not.d(rcx_18) s>> 0x1f).b)
                        
                        r8_4[4] = rcx_18.b
                        uint64_t rcx_21 = zx.q(rbx_2)
                        int32_t rax_23 = ((*(arg1 + (r10_4 << 2) + 0x3170)
                            + *(arg1 + (rcx_21 << 2) + 0x2d70)) s>> 0x10) + rdx_7
                        
                        if (rax_23 u> 0xff)
                            rax_23 = zx.d((not.d(rax_23) s>> 0x1f).b)
                        
                        r8_4[5] = rax_23.b
                        rcx_22 = *(arg1 + (rcx_21 << 2) + 0x2570)
                    
                    uint32_t rcx_30 = rcx_22 + rdx_7
                    
                    if (rcx_30 u> 0xff)
                        rcx_30 = zx.d((not.d(rcx_30) s>> 0x1f).b)
                    
                    r8_4[6] = rcx_30.b
                    r8_4[7] = 0xff
                    uint32_t rdx_8 = zx.d(*(rdi_1 + r15_2 + 2))
                    char r11_5 = *(rdi_1 + 2)
                    char rbx_3 = *(r14_2 + rdi_1 + 2)
                    int32_t rcx_36
                    
                    if (rsi_1 != 1)
                        uint64_t r10_7 = zx.q(rbx_3)
                        uint32_t rcx_38 = *(arg1 + (r10_7 << 2) + 0x2570) + rdx_8
                        
                        if (rcx_38 u> 0xff)
                            rcx_38 = zx.d((not.d(rcx_38) s>> 0x1f).b)
                        
                        r8_4[8] = rcx_38.b
                        uint64_t rcx_41 = zx.q(r11_5)
                        int32_t rax_41 = ((*(arg1 + (rcx_41 << 2) + 0x3170)
                            + *(arg1 + (r10_7 << 2) + 0x2d70)) s>> 0x10) + rdx_8
                        
                        if (rax_41 u> 0xff)
                            rax_41 = zx.d((not.d(rax_41) s>> 0x1f).b)
                        
                        r8_4[9] = rax_41.b
                        rcx_36 = *(arg1 + (rcx_41 << 2) + 0x2970)
                    else
                        uint64_t r10_6 = zx.q(r11_5)
                        uint32_t rcx_32 = *(arg1 + (r10_6 << 2) + 0x2970) + rdx_8
                        
                        if (rcx_32 u> 0xff)
                            rcx_32 = zx.d((not.d(rcx_32) s>> 0x1f).b)
                        
                        r8_4[8] = rcx_32.b
                        uint64_t rcx_35 = zx.q(rbx_3)
                        int32_t rax_35 = ((*(arg1 + (rcx_35 << 2) + 0x2d70)
                            + *(arg1 + (r10_6 << 2) + 0x3170)) s>> 0x10) + rdx_8
                        
                        if (rax_35 u> 0xff)
                            rax_35 = zx.d((not.d(rax_35) s>> 0x1f).b)
                        
                        r8_4[9] = rax_35.b
                        rcx_36 = *(arg1 + (rcx_35 << 2) + 0x2570)
                    
                    uint32_t rcx_44 = rcx_36 + rdx_8
                    
                    if (rcx_44 u> 0xff)
                        rcx_44 = zx.d((not.d(rcx_44) s>> 0x1f).b)
                    
                    r8_4[0xa] = rcx_44.b
                    r8_4[0xb] = 0xff
                    uint32_t rdx_9 = zx.d(*(rdi_1 + r15_2 + 3))
                    char r11_6 = *(rdi_1 + 3)
                    char rbx_4 = *(r14_2 + rdi_1 + 3)
                    int32_t rax_50
                    
                    if (rsi_1 != 1)
                        uint64_t r10_9 = zx.q(rbx_4)
                        uint32_t rcx_51 = *(arg1 + (r10_9 << 2) + 0x2570) + rdx_9
                        
                        if (rcx_51 u> 0xff)
                            rcx_51 = zx.d((not.d(rcx_51) s>> 0x1f).b)
                        
                        r8_4[0xc] = rcx_51.b
                        uint64_t rcx_54 = zx.q(r11_6)
                        int32_t rax_54 = ((*(arg1 + (rcx_54 << 2) + 0x3170)
                            + *(arg1 + (r10_9 << 2) + 0x2d70)) s>> 0x10) + rdx_9
                        
                        if (rax_54 u> 0xff)
                            rax_54 = zx.d((not.d(rax_54) s>> 0x1f).b)
                        
                        r8_4[0xd] = rax_54.b
                        rax_50 = *(arg1 + (rcx_54 << 2) + 0x2970)
                    else
                        uint64_t r10_8 = zx.q(r11_6)
                        uint32_t rcx_46 = *(arg1 + (r10_8 << 2) + 0x2970) + rdx_9
                        
                        if (rcx_46 u> 0xff)
                            rcx_46 = zx.d((not.d(rcx_46) s>> 0x1f).b)
                        
                        r8_4[0xc] = rcx_46.b
                        uint64_t rcx_49 = zx.q(rbx_4)
                        int32_t rax_47 = ((*(arg1 + (rcx_49 << 2) + 0x2d70)
                            + *(arg1 + (r10_8 << 2) + 0x3170)) s>> 0x10) + rdx_9
                        
                        if (rax_47 u> 0xff)
                            rax_47 = zx.d((not.d(rax_47) s>> 0x1f).b)
                        
                        r8_4[0xd] = rax_47.b
                        rax_50 = *(arg1 + (rcx_49 << 2) + 0x2570)
                    
                    uint32_t rax_59 = rax_50 + rdx_9
                    
                    if (rax_59 u> 0xff)
                        rax_59 = zx.d((not.d(rax_59) s>> 0x1f).b)
                    
                    r8_4[0xe] = rax_59.b
                    rdi_1 += 4
                    r8_4[0xf] = 0xff
                    r8_4 = &r8_4[0x10]
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                j += 8
                r11_2 = arg_10
                r10_1 = arg_18 + 0x40
                r13_1 += 0x40
                arg_18 = r10_1
            while (j s< *(arg1 + 0x274))
        
        r11_2 += sx.q(*(arg1 + 0x2510) << 6)
        i = i_1 - 1
        arg_10 = r11_2
        i_1 = i
    while (i s> 0)

return i

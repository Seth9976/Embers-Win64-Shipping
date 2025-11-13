// 函数: sub_142273620
// 地址: 0x142273620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg3[3]
int32_t r11 = arg5[3]
uint8_t rbp_1 = (arg4 u>> 4).b & 1
uint8_t r15_1 = (arg2 u>> 4).b & 1

if (r15_1 != 0 && rbp_1 != 0 && ((r11.b | r12.b) & 0x40) == 0)
    *arg1 = 2
else if (r15_1 != 0)
    if ((arg2 & 0xf) != 0 && (arg4 & 0xf) != 0)
        goto label_1422736af
    
    *arg1 = 2
else if (rbp_1 == 0 || ((arg2 & 0xf) != 0 && (arg4 & 0xf) != 0))
label_1422736af:
    int64_t r10_1 = sx.q(arg5[2])
    
    if (arg3[2] != r10_1.d)
    label_1422737fd:
        
        if (not(test_bit(arg3[1], r11 u>> 0x15 & 0x1f))
                || not(test_bit(arg5[1], r12 u>> 0x15 & 0x1f)))
            *arg1 = 2
        else
            int16_t rcx_14 = 0x401
            *arg6 = 0x401
            
            if ((r15_1 == 0 || rbp_1 == 0) && ((r11.b | r12.b) & 4) != 0)
                rcx_14 = 0xc01
                *arg6 = 0xc01
            
            char r11_2 = (r11.b | r12.b) & 0xff
            
            if ((r11_2 & 8) != 0)
                rcx_14 |= 0x20c
                *arg6 = rcx_14
            
            if ((r11_2 & 0x20) != 0)
                *arg6 = rcx_14 | 2
            
            *arg1 = 0
    else
        void* r9_1 = *arg7
        void* const rcx_3
        
        if (*(r9_1 + 0x130) == *(r9_1 + 0x15c))
        label_142273721:
            rcx_3 = nullptr
        else
            void* r8 = r9_1 + 0x160
            void* rcx_1 = *(r8 + 8)
            
            if (rcx_1 != 0)
                r8 = rcx_1
            
            int32_t rax_5 = *(r8 + (((sx.q(*(r9_1 + 0x170)) - 1) & r10_1) << 2))
            
            if (rax_5 == 0xffffffff)
            label_142273721_1:
                rcx_3 = nullptr
            else
                int64_t r8_1 = *(r9_1 + 0x128)
                
                while (true)
                    int64_t rdx_4 = sx.q(rax_5) * 3
                    rcx_3 = r8_1 + (rdx_4 << 3)
                    
                    if (*(r8_1 + (rdx_4 << 3)) == r10_1.d)
                        break
                    
                    rax_5 = *(rcx_3 + 0x10)
                    
                    if (rax_5 == 0xffffffff)
                        goto label_142273721_2
                
                if (rax_5 == 0xffffffff)
                label_142273721_2:
                    rcx_3 = nullptr
        
        void* rdx_5 = rcx_3 + 8
        
        if (rcx_3 == 0)
            rdx_5 = nullptr
        
        if (rdx_5 == 0)
            goto label_1422737fd
        
        int32_t r10_2 = *arg5
        int32_t rsi_1 = r10_2
        int32_t rax_6 = *arg3
        int64_t* rdi_1 = *rdx_5
        
        if (rax_6 s<= r10_2)
            rsi_1 = rax_6
        
        if (rax_6 s>= r10_2)
            r10_2 = rax_6
        
        int32_t var_34_1 = r10_2
        void* const r8_3
        
        if (rdi_1[1].d == *(rdi_1 + 0x34))
        label_1422737c2:
            r8_3 = nullptr
        else
            void* r8_2 = rdi_1[8]
            void* r9_2 = &rdi_1[7]
            
            if (r8_2 != 0)
                r9_2 = r8_2
            
            int32_t rax_12 = *(r9_2
                + ((sx.q((rsi_1.q u>> 0x20).d * 0x17 + rsi_1) & (sx.q(rdi_1[9].d) - 1)) << 2))
            
            if (rax_12 == 0xffffffff)
            label_1422737c2_1:
                r8_3 = nullptr
            else
                int64_t r9_3 = *rdi_1
                
                while (true)
                    int64_t rdx_8 = sx.q(rax_12) * 5
                    r8_3 = r9_3 + (rdx_8 << 2)
                    
                    if (*(r9_3 + (rdx_8 << 2)) == rsi_1 && *(r8_3 + 4) == r10_2)
                        break
                    
                    rax_12 = *(r8_3 + 0xc)
                    
                    if (rax_12 == 0xffffffff)
                        goto label_1422737c2_2
                
                if (rax_12 == 0xffffffff)
                label_1422737c2_2:
                    r8_3 = nullptr
        
        void* rcx_7 = r8_3 + 8
        
        if (r8_3 == 0)
            rcx_7 = nullptr
        
        if (rcx_7 == 0)
            goto label_1422737fd
        
        *arg1 = 1
else
    *arg1 = 2

return arg1

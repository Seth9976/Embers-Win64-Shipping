// 函数: sub_140e31df0
// 地址: 0x140e31df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x3570)
int32_t result = (*(arg1 + 0x278) - *(arg1 + 0x2b8)) << 3
int32_t i = *(arg1 + 0x2508)

if (i s> 0)
    int32_t rsi_1 = data_143e29b34
    void* r15_1 = sx.q(result) + *(arg1 + 0x2568) + 0x40
    
    do
        void* rdi_1 = r15_1
        int64_t j_1 = 2
        int64_t j
        
        do
            uint32_t r9_1 = zx.d(*(rdi_1 - 0x40))
            char r11_1 = *rdi_1
            char rbx_1 = *(rdi_1 + 0x40)
            int32_t rcx_7
            
            if (rsi_1 != 1)
                uint64_t r10_2 = zx.q(rbx_1)
                uint32_t rcx_9 = *(arg1 + (r10_2 << 2) + 0x2570) + r9_1
                
                if (rcx_9 u> 0xff)
                    rcx_9 = zx.d((not.d(rcx_9) s>> 0x1f).b)
                
                *r8 = rcx_9.b
                uint64_t rcx_12 = zx.q(r11_1)
                int32_t rax_11 = ((*(arg1 + (r10_2 << 2) + 0x2d70)
                    + *(arg1 + (rcx_12 << 2) + 0x3170)) s>> 0x10) + r9_1
                
                if (rax_11 u> 0xff)
                    rax_11 = zx.d((not.d(rax_11) s>> 0x1f).b)
                
                *(r8 + 1) = rax_11.b
                rcx_7 = *(arg1 + (rcx_12 << 2) + 0x2970)
            else
                uint64_t r10_1 = zx.q(r11_1)
                uint32_t rcx_3 = *(arg1 + (r10_1 << 2) + 0x2970) + r9_1
                
                if (rcx_3 u> 0xff)
                    rcx_3 = zx.d((not.d(rcx_3) s>> 0x1f).b)
                
                *r8 = rcx_3.b
                uint64_t rcx_6 = zx.q(rbx_1)
                int32_t rax_5 = ((*(arg1 + (r10_1 << 2) + 0x3170) + *(arg1 + (rcx_6 << 2) + 0x2d70))
                    s>> 0x10) + r9_1
                
                if (rax_5 u> 0xff)
                    rax_5 = zx.d((not.d(rax_5) s>> 0x1f).b)
                
                *(r8 + 1) = rax_5.b
                rcx_7 = *(arg1 + (rcx_6 << 2) + 0x2570)
            
            uint32_t rcx_15 = rcx_7 + r9_1
            
            if (rcx_15 u> 0xff)
                rcx_15 = zx.d((not.d(rcx_15) s>> 0x1f).b)
            
            *(r8 + 2) = rcx_15.b
            *(r8 + 3) = 0xff
            uint32_t r9_2 = zx.d(*(rdi_1 - 0x3f))
            char r11_2 = *(rdi_1 + 1)
            char rbx_2 = *(rdi_1 + 0x41)
            int32_t rcx_21
            
            if (rsi_1 != 1)
                uint64_t r10_4 = zx.q(rbx_2)
                uint32_t rcx_23 = *(arg1 + (r10_4 << 2) + 0x2570) + r9_2
                
                if (rcx_23 u> 0xff)
                    rcx_23 = zx.d((not.d(rcx_23) s>> 0x1f).b)
                
                *(r8 + 4) = rcx_23.b
                uint64_t rcx_26 = zx.q(r11_2)
                int32_t rax_23 = ((*(arg1 + (r10_4 << 2) + 0x2d70)
                    + *(arg1 + (rcx_26 << 2) + 0x3170)) s>> 0x10) + r9_2
                
                if (rax_23 u> 0xff)
                    rax_23 = zx.d((not.d(rax_23) s>> 0x1f).b)
                
                *(r8 + 5) = rax_23.b
                rcx_21 = *(arg1 + (rcx_26 << 2) + 0x2970)
            else
                uint64_t r10_3 = zx.q(r11_2)
                uint32_t rcx_17 = *(arg1 + (r10_3 << 2) + 0x2970) + r9_2
                
                if (rcx_17 u> 0xff)
                    rcx_17 = zx.d((not.d(rcx_17) s>> 0x1f).b)
                
                *(r8 + 4) = rcx_17.b
                uint64_t rcx_20 = zx.q(rbx_2)
                int32_t rax_17 = ((*(arg1 + (r10_3 << 2) + 0x3170)
                    + *(arg1 + (rcx_20 << 2) + 0x2d70)) s>> 0x10) + r9_2
                
                if (rax_17 u> 0xff)
                    rax_17 = zx.d((not.d(rax_17) s>> 0x1f).b)
                
                *(r8 + 5) = rax_17.b
                rcx_21 = *(arg1 + (rcx_20 << 2) + 0x2570)
            
            uint32_t rcx_29 = rcx_21 + r9_2
            
            if (rcx_29 u> 0xff)
                rcx_29 = zx.d((not.d(rcx_29) s>> 0x1f).b)
            
            *(r8 + 6) = rcx_29.b
            *(r8 + 7) = 0xff
            uint32_t r9_3 = zx.d(*(rdi_1 - 0x3e))
            char r11_3 = *(rdi_1 + 2)
            char rbx_3 = *(rdi_1 + 0x42)
            int32_t rcx_35
            
            if (rsi_1 != 1)
                uint64_t r10_6 = zx.q(rbx_3)
                uint32_t rcx_37 = *(arg1 + (r10_6 << 2) + 0x2570) + r9_3
                
                if (rcx_37 u> 0xff)
                    rcx_37 = zx.d((not.d(rcx_37) s>> 0x1f).b)
                
                *(r8 + 8) = rcx_37.b
                uint64_t rcx_40 = zx.q(r11_3)
                int32_t rax_35 = ((*(arg1 + (r10_6 << 2) + 0x2d70)
                    + *(arg1 + (rcx_40 << 2) + 0x3170)) s>> 0x10) + r9_3
                
                if (rax_35 u> 0xff)
                    rax_35 = zx.d((not.d(rax_35) s>> 0x1f).b)
                
                *(r8 + 9) = rax_35.b
                rcx_35 = *(arg1 + (rcx_40 << 2) + 0x2970)
            else
                uint64_t r10_5 = zx.q(r11_3)
                uint32_t rcx_31 = *(arg1 + (r10_5 << 2) + 0x2970) + r9_3
                
                if (rcx_31 u> 0xff)
                    rcx_31 = zx.d((not.d(rcx_31) s>> 0x1f).b)
                
                *(r8 + 8) = rcx_31.b
                uint64_t rcx_34 = zx.q(rbx_3)
                int32_t rax_29 = ((*(arg1 + (r10_5 << 2) + 0x3170)
                    + *(arg1 + (rcx_34 << 2) + 0x2d70)) s>> 0x10) + r9_3
                
                if (rax_29 u> 0xff)
                    rax_29 = zx.d((not.d(rax_29) s>> 0x1f).b)
                
                *(r8 + 9) = rax_29.b
                rcx_35 = *(arg1 + (rcx_34 << 2) + 0x2570)
            
            uint32_t rcx_43 = rcx_35 + r9_3
            
            if (rcx_43 u> 0xff)
                rcx_43 = zx.d((not.d(rcx_43) s>> 0x1f).b)
            
            *(r8 + 0xa) = rcx_43.b
            *(r8 + 0xb) = 0xff
            uint32_t r9_4 = zx.d(*(rdi_1 - 0x3d))
            char r11_4 = *(rdi_1 + 3)
            char rbx_4 = *(rdi_1 + 0x43)
            int32_t rax_44
            
            if (rsi_1 != 1)
                uint64_t r10_8 = zx.q(rbx_4)
                uint32_t rcx_50 = *(arg1 + (r10_8 << 2) + 0x2570) + r9_4
                
                if (rcx_50 u> 0xff)
                    rcx_50 = zx.d((not.d(rcx_50) s>> 0x1f).b)
                
                *(r8 + 0xc) = rcx_50.b
                uint64_t rcx_53 = zx.q(r11_4)
                int32_t rax_48 = ((*(arg1 + (rcx_53 << 2) + 0x3170)
                    + *(arg1 + (r10_8 << 2) + 0x2d70)) s>> 0x10) + r9_4
                
                if (rax_48 u> 0xff)
                    rax_48 = zx.d((not.d(rax_48) s>> 0x1f).b)
                
                *(r8 + 0xd) = rax_48.b
                rax_44 = *(arg1 + (rcx_53 << 2) + 0x2970)
            else
                uint64_t r10_7 = zx.q(r11_4)
                uint32_t rcx_45 = *(arg1 + (r10_7 << 2) + 0x2970) + r9_4
                
                if (rcx_45 u> 0xff)
                    rcx_45 = zx.d((not.d(rcx_45) s>> 0x1f).b)
                
                *(r8 + 0xc) = rcx_45.b
                uint64_t rcx_48 = zx.q(rbx_4)
                int32_t rax_41 = ((*(arg1 + (rcx_48 << 2) + 0x2d70)
                    + *(arg1 + (r10_7 << 2) + 0x3170)) s>> 0x10) + r9_4
                
                if (rax_41 u> 0xff)
                    rax_41 = zx.d((not.d(rax_41) s>> 0x1f).b)
                
                *(r8 + 0xd) = rax_41.b
                rax_44 = *(arg1 + (rcx_48 << 2) + 0x2570)
            
            result = rax_44 + r9_4
            
            if (result u> 0xff)
                result = zx.d((not.d(result) s>> 0x1f).b)
            
            *(r8 + 0xe) = result.b
            rdi_1 += 4
            *(r8 + 0xf) = 0xff
            r8 += 0x10
            j = j_1
            j_1 -= 1
        while (j != 1)
        r15_1 += 0xc0
        i -= 1
    while (i s> 0)

return result

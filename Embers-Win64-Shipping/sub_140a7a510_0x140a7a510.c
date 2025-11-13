// 函数: sub_140a7a510
// 地址: 0x140a7a510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*(arg1 + 0x3c)
uint32_t rax_1
char* rcx_2

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_140a7a584:
    rcx_2 = nullptr
else
    void* r9_1 = *(arg1 + 0x48)
    void* r11_1 = arg1 + 0x40
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    rax_1 = *(r11_1 + (((sx.q(*(arg1 + 0x50)) - 1) & zx.q(arg2)) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140a7a584_1:
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax_1) * 0xb0 + *(arg1 + 8)
            
            if (*rcx_2 == arg2)
                break
            
            rax_1 = *(rcx_2 + 0xa8)
            
            if (rax_1 == 0xffffffff)
                goto label_140a7a584_2
        
        if (rax_1 == 0xffffffff)
        label_140a7a584_2:
            rcx_2 = nullptr

void* r11_2 = &rcx_2[8]

if (rcx_2 == 0)
    r11_2 = nullptr

if (r11_2 != 0)
    void* r10_4 = r11_2 + 0x10
    int32_t r8_1 = 0
    int32_t rsi_1 = *(r10_4 + 0x18)
    
    if (rsi_1 != 0)
        void* rax_3 = *(r10_4 + 0x10)
        void* r9_2 = r10_4
        
        if (rax_3 != 0)
            r9_2 = rax_3
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_1 - 1)
        int32_t rcx_3 = *r9_2
        
        if (rcx_3 != 0)
        label_140a7a5fa:
            int32_t rax_10 = neg.d(rcx_3) & rcx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_1
            
            int32_t rax_12 = r8_1 - rax_11 + 0x1f
            
            if (rax_12 s> rsi_1)
                rax_12 = rsi_1
            
            rbx = rax_12
        else
            while (true)
                int64_t rcx_4 = sx.q(rbx)
                r8_1 += 0x20
                rbx += 1
                
                if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    rbx = rsi_1
                    break
                
                rcx_3 = *(r9_2 + (rcx_4 << 2) + 4)
                
                if (rcx_3 != 0)
                    goto label_140a7a5fa
    
    int32_t rdx_2 = *(r11_2 + 0x28)
    int32_t var_24_1 = rdx_2
    int32_t r14_1 = 0xffffffff << (rdx_2.b & 0x1f)
    int32_t r8_4 = rdx_2 s>> 5
    int32_t r9_4 = rdx_2 & 0xffffffe0
    int32_t var_28_1 = r14_1
    
    if (rdx_2 != rsi_1)
        void* rax_13 = *(r10_4 + 0x10)
        
        if (rax_13 != 0)
            r10_4 = rax_13
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rsi_1 - 1)
        int32_t rdx_6 = *(r10_4 + (sx.q(r8_4) << 2)) & r14_1
        int32_t var_24_3
        
        if (rdx_6 != 0)
        label_140a7a693:
            int32_t rax_20 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t rdi_1
            
            if (rax_20 == 0)
                rdi_1 = 0x20
            else
                rdi_1 = 0x1f - temp0_2
            
            int32_t var_24_2 = r9_4 - rdi_1 + 0x1f
            
            if (r9_4 - rdi_1 + 0x1f s> rsi_1)
                var_24_3 = rsi_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_4)
                r9_4 += 0x20
                r8_4 += 1
                
                if (rcx_9.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = *(r10_4 + (rcx_9 << 2) + 4)
                var_28_1 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_140a7a693
            
            var_24_3 = rsi_1
    
    if (rbx != (var_28_1.q u>> 0x20).d)
        sub_140597df0(arg3, (sx.q(rbx) << 5) + *r11_2)
        int64_t* rax_23
        rax_23.b = 1
        return rax_23

rax_1.b = 0
return rax_1

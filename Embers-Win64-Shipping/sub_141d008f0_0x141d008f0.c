// 函数: sub_141d008f0
// 地址: 0x141d008f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = *(arg1 + 8) - *(arg1 + 0x24)
int32_t r15 = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_6

if (rax_1 == 1)
    rdi_6 = arg5
label_141d00ad7:
    int32_t r8_6 = *(arg1 + 8) - *(arg1 + 0x24)
    
    if (r8_6 u>= 4)
        uint32_t rax_19 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_19 + 8)
        int32_t rcx_10
        
        if (rax_19 == 0xfffffff8)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_19 + 7)
        char r9_1
        
        if (rax_19 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        r15 = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_22
    
    if (r8_6 s> 0)
        rax_22 = *(arg1 + 0x30)
    
    if (r8_6 s> 0 && (rax_22 == 0 || rax_22 s< r15))
        *(arg1 + 0x30) = r15
        sub_141d0d530(arg1)
    else
        int32_t rax_25 = (*(arg1 + 0x30) - 1) & r11.d
        *(arg4 + 0x1c) = rax_25
        void* rcx_16 = *(arg1 + 0x28)
        
        if ((rcx_16.b & 1) != 0)
            rcx_16 = &arg1[0x28 + (rcx_16 s>> 1)]
        
        int64_t r8_7 = sx.q(rax_25)
        arg4[3].d = *(rcx_16 + (((sx.q(*(arg1 + 0x30)) - 1) & r8_7) << 2))
        void* rcx_18 = *(arg1 + 0x28)
        
        if ((rcx_18.b & 1) != 0)
            rcx_18 = &arg1[0x28 + (rcx_18 s>> 1)]
        
        *(rcx_18 + (((sx.q(*(arg1 + 0x30)) - 1) & r8_7) << 2)) = rdi_6
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* rdx = *(arg1 + 0x28)
        
        if ((1 & rdx.b) != 0)
            rdx = &arg1[0x28 + (rdx s>> 1)]
        
        rbx_1 = *(rdx + (((sx.q(*(arg1 + 0x30)) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141d009ed:
        rbx_1 = -1
    else
        uint64_t rcx_3 = zx.q(*arg1)
        void* rax_3 = *arg1
        
        while (true)
            if ((1 & rcx_3.b) != 0)
                rax_3 = &arg1[rax_3 s>> 1]
            
            int64_t rdi_2 = sx.q(rbx_1) << 5
            void* r8 = rdi_2 + rax_3
            void* rdx_2
            
            if (arg4[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *arg4
                
                if ((1 & rdx_2.b) != 0)
                    rdx_2 = (rdx_2 s>> 1) + arg4
            
            void* rcx_4
            
            if (*(r8 + 8) == 0)
                rcx_4 = &data_142d40450
            else
                rcx_4 = *r8
                
                if ((1 & rcx_4.b) != 0)
                    rcx_4 = (rcx_4 s>> 1) + r8
            
            if (sub_140a54510(rcx_4, rdx_2) == 0)
                break
            
            rcx_3 = *arg1
            void* rax_6 = rcx_3
            
            if ((1 & rcx_3.b) != 0)
                rax_6 = &arg1[rax_6 s>> 1]
            
            rbx_1 = *(rdi_2 + rax_6 + 0x18)
            rax_3 = rcx_3
            
            if (rbx_1 == 0xffffffff)
                goto label_141d009ed
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_6 = arg5
    else
        void* rax_8 = *arg1
        
        if ((1 & rax_8.b) != 0)
            rax_8 = &arg1[rax_8 s>> 1]
        
        void* rdi_5 = (sx.q(rbx_1) << 5) + rax_8
        sub_140a1d5c0(rdi_5)
        memmove(rdi_5, arg4, 0x18)
        int64_t rcx_8 = sx.q(arg5)
        
        if (*(arg1 + 0x24) != 0)
            void* rdx_5 = *arg1
            
            if ((1 & rdx_5.b) != 0)
                rdx_5 = &arg1[rdx_5 s>> 1]
            
            *((sx.q(*(arg1 + 0x20)) << 5) + rdx_5) = rcx_8.d
        
        void* rax_13 = *arg1
        
        if ((1 & rax_13.b) != 0)
            rax_13 = &arg1[rax_13 s>> 1]
        
        int64_t r8_2 = rcx_8 << 5
        *(r8_2 + rax_13) = 0xffffffff
        
        if (*(arg1 + 0x24) s> 0)
            r12_1 = *(arg1 + 0x20)
        
        *(r8_2 + rax_13 + 4) = r12_1
        *(arg1 + 0x24) += 1
        *(arg1 + 0x20) = rcx_8.d
        void* r8_3 = *(arg1 + 0x10)
        
        if ((1 & r8_3.b) != 0)
            r8_3 = &arg1[0x10 + (r8_3 s>> 1)]
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_8.d)
        rdi_6 = rbx_1
        int64_t rcx_9 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r8_3 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_141d00ad7

*arg2 = rdi_6

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

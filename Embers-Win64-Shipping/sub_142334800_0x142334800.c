// 函数: sub_142334800
// 地址: 0x142334800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_6

if (rax_1 == 1)
    rdi_6 = arg5
label_1423349b0:
    int32_t r8_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_7 u>= 4)
        uint32_t rax_17 = r8_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_17 + 8)
        int32_t rcx_5
        
        if (rax_17 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_17 + 7)
        char r9
        
        if (rax_17 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_20
    
    if (r8_7 s> 0)
        rax_20 = arg1[9].d
    
    if (r8_7 s> 0 && (rax_20 == 0 || rax_20 s< rbp))
        arg1[9].d = rbp
        sub_142343aa0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_23 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x2c) = rax_23
        void* rdx_9 = *(r9_1 + 8)
        int64_t r8_8 = sx.q(rax_23)
        void* rax_24 = r9_1
        
        if (rdx_9 != 0)
            rax_24 = rdx_9
        
        *(arg4 + 0x28) = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2))
        void* rax_26 = *(r9_1 + 8)
        
        if (rax_26 != 0)
            r9_1 = rax_26
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2)) = rdi_6
else
    int32_t r14_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1423348d6:
        rbx_1 = r14_1
    else
        int64_t r14_2 = *arg1
        r15 = zx.q(*(arg4 + 0x18))
        
        while (true)
            void* buffer1_1 = sx.q(rbx_1) * 0x30 + r14_2
            int32_t rax_3 = *(buffer1_1 + 0x18)
            
            if (rax_3 == r15.d)
                void* buffer2_1 = *(arg4 + 0x10)
                void* buffer1_2 = *(buffer1_1 + 0x10)
                void* buffer2 = arg4
                
                if (buffer2_1 != 0)
                    buffer2 = buffer2_1
                
                void* buffer1 = buffer1_1
                
                if (buffer1_2 != 0)
                    buffer1 = buffer1_2
                
                if (memcmp(buffer1, buffer2, zx.q(rax_3 + 0x1f) u>> 5 << 2) == 0)
                    r14_1 = -1
                    break
            
            rbx_1 = *(buffer1_1 + 0x28)
            
            if (rbx_1 == 0xffffffff)
                r14_1 = rbx_1
                goto label_1423348d6
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_6 = arg5
    else
        void* rdi_5 = sx.q(rbx_1) * 0x30 + *arg1
        int64_t rcx_1 = *(rdi_5 + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        memmove(rdi_5, arg4, 0x28)
        int64_t rcx_3 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = rcx_3.d
        
        int32_t* rax_10 = rcx_3 * 0x30 + *arg1
        *rax_10 = r14_1
        
        if (*(arg1 + 0x34) s> 0)
            r14_1 = arg1[6].d
        
        rax_10[1] = r14_1
        *(arg1 + 0x34) += 1
        rdi_6 = rbx_1
        arg1[6].d = rcx_3.d
        void* rax_11 = *(r10_1 + 0x10)
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_3.d)
        int64_t rcx_4 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_4 << 2)) &= not.d(rol.d(1, rcx_3.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_1423349b0

*arg2 = rdi_6

if (arg6 != 0)
    *arg6 = r15.b

return arg2

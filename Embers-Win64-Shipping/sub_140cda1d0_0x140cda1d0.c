// 函数: sub_140cda1d0
// 地址: 0x140cda1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r14 = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140cda361:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_15 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_9
        
        if (rax_15 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r9_1
        
        if (rax_15 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_18
    
    if (r8_6 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_18 == 0 || rax_18 s< r14))
        arg1[9].d = r14
        sub_140ce3db0(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x14) = rax_21
        void* rdx_10 = *(r9_2 + 8)
        int64_t r8_7 = sx.q(rax_21)
        void* rax_22 = r9_2
        
        if (rdx_10 != 0)
            rax_22 = rdx_10
        
        arg4[2].d = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_24 = *(r9_2 + 8)
        
        if (rax_24 != 0)
            r9_2 = rax_24
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi_3
else
    int32_t r13_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140cda297:
        rbx_1 = -1
    else
        int64_t r11_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            int64_t* r10_1 = r11_1 + (rcx_1 << 3)
            int64_t rcx_2 = sx.q(*(r11_1 + (rcx_1 << 3) + 8))
            
            if (rcx_2.d == arg4[1].d)
                int64_t rdx_3 = 0
                
                if (rcx_2.d s<= 0)
                    break
                
                int64_t* rax_3 = *r10_1
                int64_t* r8_2 = *arg4 - rax_3
                
                while (*rax_3 == *(r8_2 + rax_3))
                    rdx_3 += 1
                    rax_3 = &rax_3[2]
                    
                    if (rdx_3 s>= rcx_2)
                        goto label_140cda29d
            
            rbx_1 = r10_1[2].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140cda297
    
label_140cda29d:
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_4 = sx.q(rbx_1) * 3
        int64_t rax_5 = *arg1
        int64_t rcx_5 = *(rax_5 + (rcx_4 << 3))
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        memmove(rax_5 + (rcx_4 << 3), arg4, 0x10)
        int64_t rcx_7 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x18) = rcx_7.d
        
        int64_t rax_8 = *arg1
        int64_t rdx_6 = rcx_7 * 3
        *(rax_8 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        *(rax_8 + (rdx_6 << 3) + 4) = r13_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_7.d
        void* rax_9 = *(r10_2 + 0x10)
        
        if (rax_9 != 0)
            r10_2 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_140cda361

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

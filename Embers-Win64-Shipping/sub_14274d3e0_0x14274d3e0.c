// 函数: sub_14274d3e0
// 地址: 0x14274d3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_3

if (rcx_1 == 1)
    rdi_3 = arg5
label_14274d588:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_12 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_9
        
        if (rax_12 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        char r9_3
        
        if (rax_12 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_15
    
    if (r8_6 s> 0)
        rax_15 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_15 == 0 || rax_15 s< rbp))
        arg1[9].d = rbp
        sub_14276fbb0(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r11.d
        arg4[7] = rax_18
        void* rdx_10 = *(r9_4 + 8)
        int64_t r8_7 = sx.q(rax_18)
        void* rax_19 = r9_4
        
        if (rdx_10 != 0)
            rax_19 = rdx_10
        
        arg4[6] = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_21 = *(r9_4 + 8)
        
        if (rax_21 != 0)
            r9_4 = rax_21
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi_3
else
    int32_t rax_1 = *arg4
    int16_t rax_2 = arg4[1].w
    int32_t r12_1 = -1
    int16_t arg_c = rax_2
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rcx_2 = arg1[8]
        void* r8 = &arg1[7]
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_14274d4b8:
        rbx_1 = -1
    else
        int64_t r9 = *arg1
        
        while (true)
            int64_t rcx_4 = sx.q(rbx_1) << 5
            int32_t rax_3 = *(rcx_4 + r9)
            int16_t rax_4 = *(rcx_4 + r9 + 4)
            arg_c = rax_4
            
            if (rax_3.w == rax_1.w && rax_3:2.w == rax_1:2.w && rax_4.b == rax_2.b)
                break
            
            rbx_1 = *(rcx_4 + r9 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_14274d4b8
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = (sx.q(rbx_1) << 5) + *arg1
        int64_t rcx_5 = *(rdi_2 + 8)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        memmove(rdi_2, arg4, 0x18)
        int64_t rcx_7 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_7.d
        
        int32_t* r8_4 = (rcx_7 << 5) + *arg1
        *r8_4 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        r8_4[1] = r12_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_7.d
        void* rax_6 = *(r10_2 + 0x10)
        
        if (rax_6 != 0)
            r10_2 = rax_6
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14274d588

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return arg2

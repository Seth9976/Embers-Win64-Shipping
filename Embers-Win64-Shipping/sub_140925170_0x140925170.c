// 函数: sub_140925170
// 地址: 0x140925170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1409252e0:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_16 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16 + 8)
        int32_t rcx_8
        
        if (rax_16 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_16 + 7)
        char r9_2
        
        if (rax_16 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_19
    
    if (r8_2 s> 0)
        rax_19 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_19 == 0 || rax_19 s< rbp))
        arg1[9].d = rbp
        sub_14092f1e0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_22 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x44) = rax_22
        void* rdx_11 = *(r9_3 + 8)
        int64_t r8_3 = sx.q(rax_22)
        void* rax_23 = r9_3
        
        if (rdx_11 != 0)
            rax_23 = rdx_11
        
        *(arg4 + 0x40) = *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_25 = *(r9_3 + 8)
        
        if (rax_25 != 0)
            r9_3 = rax_25
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_3
else
    int32_t r15_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14092521c:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rdi_1 = sx.q(rbx_1) * 0x48
            
            if ((**(rdi_1 + rdx_3))(rdi_1 + rdx_3, arg4) != 0)
                break
            
            rdx_3 = *arg1
            rbx_1 = *(rdi_1 + rdx_3 + 0x40)
            
            if (rbx_1 == 0xffffffff)
                goto label_14092521c
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = *arg1 + sx.q(rbx_1) * 0x48
        sub_14091b190(rdi_2)
        memmove(rdi_2, arg4, 0x40)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x48) = rcx_6.d
        
        int64_t rax_9 = *arg1
        int64_t rdx_7 = rcx_6 * 9
        *(rax_9 + (rdx_7 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        *(rax_9 + (rdx_7 << 3) + 4) = r15_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_1409252e0

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r12.b

return arg2

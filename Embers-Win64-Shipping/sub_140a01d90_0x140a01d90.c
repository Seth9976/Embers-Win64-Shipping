// 函数: sub_140a01d90
// 地址: 0x140a01d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140a01ef8:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_15 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_7
        
        if (rax_15 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r9_2
        
        if (rax_15 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_18
    
    if (r8_3 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_18 == 0 || rax_18 s< rbp))
        arg1[9].d = rbp
        sub_140a059e0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r11.d
        arg4[0x2f] = rax_21
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_21)
        void* rax_22 = r9_3
        
        if (rdx_10 != 0)
            rax_22 = rdx_10
        
        arg4[0x2e] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_24 = *(r9_3 + 8)
        
        if (rax_24 != 0)
            r9_3 = rax_24
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_3
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
    label_140a01e2d:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 0xc0
            
            if (*(rcx_2 + rdx_3) == *arg4)
                break
            
            rbx_1 = *(rcx_2 + rdx_3 + 0xb8)
            
            if (rbx_1 == 0xffffffff)
                goto label_140a01e2d
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0xc0 + *arg1
        sub_1409fb390(rdi_2 + 8)
        memmove(rdi_2, arg4, 0xb8)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0xc0 + *arg1) = rcx_5.d
        
        int32_t* rax_8 = rcx_5 * 0xc0 + *arg1
        *rax_8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        rax_8[1] = r15_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140a01ef8

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r12.b

return arg2

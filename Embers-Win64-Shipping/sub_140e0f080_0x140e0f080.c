// 函数: sub_140e0f080
// 地址: 0x140e0f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int64_t* rbx = arg4
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_140e0f20a:
    int32_t r8_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_7 u>= 4)
        uint32_t rax_11 = r8_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11 + 8)
        int32_t rcx_9
        
        if (rax_11 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_11 + 7)
        char r9_3
        
        if (rax_11 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_14
    
    if (r8_7 s> 0)
        rax_14 = arg1[9].d
    
    if (r8_7 s> 0 && (rax_14 == 0 || rax_14 s< rbp))
        arg1[9].d = rbp
        sub_1405c1a70(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & r11.d
        *(rbx + 0x1c) = rax_17
        void* rdx_8 = *(r9_4 + 8)
        int64_t r8_8 = sx.q(rax_17)
        void* rax_18 = r9_4
        
        if (rdx_8 != 0)
            rax_18 = rdx_8
        
        rbx[3].d = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2))
        void* rax_20 = *(r9_4 + 8)
        
        if (rax_20 != 0)
            r9_4 = rax_20
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2)) = rdi_1
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_140e0f116:
        rbx_1 = -1
    else
        int64_t rdx_1 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) << 5
            
            if (*(rcx_3 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_3 + rdx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140e0f116
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* r14_3 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi = *(r14_3 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp3_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(r14_3, arg4, 0x18)
        int64_t rcx_7 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_7.d
        
        int32_t* r8_5 = (rcx_7 << 5) + *arg1
        *r8_5 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        r8_5[1] = r12_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_7.d
        void* rax_5 = *(r10_1 + 0x10)
        
        if (rax_5 != 0)
            r10_1 = rax_5
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = arg4
        goto label_140e0f20a

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

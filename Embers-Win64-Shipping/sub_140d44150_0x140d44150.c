// 函数: sub_140d44150
// 地址: 0x140d44150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t* r14 = arg4
int64_t r11 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140d442d5:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_13 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13 + 8)
        int32_t rcx_7
        
        if (rax_13 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_13 + 7)
        char r9_2
        
        if (rax_13 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_16
    
    if (r8_5 s> 0)
        rax_16 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_16 == 0 || rax_16 s< rbp))
        arg1[9].d = rbp
        sub_1405c1a70(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r11.d
        *(r14 + 0x1c) = rax_19
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_6 = sx.q(rax_19)
        void* rax_20 = r9_3
        
        if (rdx_10 != 0)
            rax_20 = rdx_10
        
        r14[3].d = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_22 = *(r9_3 + 8)
        
        if (rax_22 != 0)
            r9_3 = rax_22
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_1
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140d441e6:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 5
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d441e6
    
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
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_5.d
        
        int32_t* r8_3 = (rcx_5 << 5) + *arg1
        *r8_3 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r14 = arg4
        r11 = zx.q(arg3)
        rdi_1 = rbx_1
        r8_3[1] = r12_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_5.d
        void* rax_7 = *(r10_1 + 0x10)
        
        if (rax_7 != 0)
            r10_1 = rax_7
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140d442d5

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

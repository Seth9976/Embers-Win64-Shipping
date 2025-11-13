// 函数: sub_1409253c0
// 地址: 0x1409253c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140925555:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_17 = r8_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_17 + 8)
        int32_t rcx_10
        
        if (rax_17 == 0xfffffff8)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_17 + 7)
        char r9
        
        if (rax_17 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_20
    
    if (r8_4 s> 0)
        rax_20 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_20 == 0 || rax_20 s< rbp))
        arg1[9].d = rbp
        sub_14092f1e0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_23 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x44) = rax_23
        void* rdx_11 = *(r9_1 + 8)
        int64_t r8_5 = sx.q(rax_23)
        void* rax_24 = r9_1
        
        if (rdx_11 != 0)
            rax_24 = rdx_11
        
        *(arg4 + 0x40) = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_26 = *(r9_1 + 8)
        
        if (rax_26 != 0)
            r9_1 = rax_26
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_3
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
    label_14092546c:
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
                goto label_14092546c
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = *arg1 + sx.q(rbx_1) * 0x48
        sub_14091aa80(rdi_2 + 0x30)
        int64_t rcx_5 = *(rdi_2 + 0x18)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t* rcx_6 = *(rdi_2 + 0x10)
        
        if (rcx_6 != 0)
            int32_t temp2_1 = *(rcx_6 + 0xc)
            *(rcx_6 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_6 + 8))(rcx_6, 1)
        
        memmove(rdi_2, arg4, 0x40)
        int64_t rcx_8 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x48) = rcx_8.d
        
        int64_t rax_10 = *arg1
        int64_t rdx_7 = rcx_8 * 9
        *(rax_10 + (rdx_7 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        *(rax_10 + (rdx_7 << 3) + 4) = r15_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_8.d
        void* rax_11 = *(r10_1 + 0x10)
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_140925555

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r12.b

return arg2

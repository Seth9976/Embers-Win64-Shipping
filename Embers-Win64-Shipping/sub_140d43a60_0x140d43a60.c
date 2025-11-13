// 函数: sub_140d43a60
// 地址: 0x140d43a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* rbx = arg4
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140d43beb:
    int32_t rdx_10 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_10 u>= 4)
        uint32_t rax_16 = rdx_10 u>> 1
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
        char r8_3
        
        if (rax_16 == 0xfffffff9)
            r8_3 = 0x20
        else
            r8_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r8_3))
    
    int32_t rax_19
    
    if (rdx_10 s> 0)
        rax_19 = arg1[9].d
    
    if (rdx_10 s> 0 && (rax_19 == 0 || rax_19 s< rbp))
        arg1[9].d = rbp
        sub_140837b00(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_22 = (arg1[9].d - 1) & r10.d
        rbx[9] = rax_22
        void* rdx_11 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_22)
        void* rax_23 = r9_3
        
        if (rdx_11 != 0)
            rax_23 = rdx_11
        
        rbx[8] = *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_25 = *(r9_3 + 8)
        
        if (rax_25 != 0)
            r9_3 = rax_25
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140d43af6:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d43af6
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 5
        int64_t rax_4 = *arg1
        int64_t* rdi = *(rax_4 + (rcx_2 << 3) + 0x18)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp3_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rax_4 + (rcx_2 << 3), arg4, 0x20)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_6.d
        
        int64_t rax_9 = *arg1
        int64_t rdx_6 = rcx_6 * 5
        *(rax_9 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r13 = zx.q(r13.b)
        *(rax_9 + (rdx_6 << 3) + 4) = r12_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_6.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
        r10 = zx.q(arg3)
    
    if (rbx_1 == 0xffffffff)
        rbx = arg4
        goto label_140d43beb

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

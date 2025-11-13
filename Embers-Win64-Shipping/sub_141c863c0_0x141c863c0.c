// 函数: sub_141c863c0
// 地址: 0x141c863c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_141c86579:
    int32_t rdx_10 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_10 u>= 4)
        uint32_t rax_23 = rdx_10 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_23 + 8)
        int32_t rcx_13
        
        if (rax_23 == 0xfffffff8)
            rcx_13 = 0x20
        else
            rcx_13 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_23 + 7)
        char r8_4
        
        if (rax_23 == 0xfffffff9)
            r8_4 = 0x20
        else
            r8_4 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_13 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    int32_t rax_26
    
    if (rdx_10 s> 0)
        rax_26 = arg1[9].d
    
    if (rdx_10 s> 0 && (rax_26 == 0 || rax_26 s< rbp))
        arg1[9].d = rbp
        sub_140911b00(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_29 = (arg1[9].d - 1) & r10.d
        arg4[9] = rax_29
        void* rdx_11 = *(r9_4 + 8)
        int64_t r8_5 = sx.q(rax_29)
        void* rax_30 = r9_4
        
        if (rdx_11 != 0)
            rax_30 = rdx_11
        
        arg4[8] = *(rax_30 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_32 = *(r9_4 + 8)
        
        if (rax_32 != 0)
            r9_4 = rax_32
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141c86483:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            int32_t* rdx_3 = r8_1 + (rcx_1 << 3)
            
            if (((rdx_3[1] ^ arg4[1]) | (*(r8_1 + (rcx_1 << 3) + 8) ^ arg4[2])
                    | (rdx_3[3] ^ arg4[3]) | (*rdx_3 ^ *arg4)) == 0)
                break
            
            rbx_1 = rdx_3[8]
            
            if (rbx_1 == 0xffffffff)
                goto label_141c86483
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_7 = sx.q(rbx_1) * 5
        int64_t rax_10 = *arg1
        int64_t* rdi_2 = *(rax_10 + (rcx_7 << 3) + 0x18)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        memmove(rax_10 + (rcx_7 << 3), arg4, 0x20)
        int64_t rcx_11 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_11.d
        
        int32_t* r9_1 = *arg1 + rcx_11 * 0x28
        int32_t rax_16 = -1
        *r9_1 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_16 = arg1[6].d
        
        r13 = zx.q(r13.b)
        r9_1[1] = rax_16
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_11.d
        void* rax_17 = *(r10_2 + 0x10)
        
        if (rax_17 != 0)
            r10_2 = rax_17
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rcx_11.d)
        int64_t rcx_12 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_12 << 2)) &= not.d(rol.d(1, rcx_11.b))
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_141c86579

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return arg2

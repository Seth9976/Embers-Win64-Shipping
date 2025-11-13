// 函数: sub_140ad33f0
// 地址: 0x140ad33f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
bool arg_8 = false
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_140ad3572:
    int32_t rdx_10 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_10 u>= 4)
        uint32_t rax_20 = rdx_10 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_20 + 8)
        int32_t rcx_11
        
        if (rax_20 == 0xfffffff8)
            rcx_11 = 0x20
        else
            rcx_11 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20 + 7)
        char r8_2
        
        if (rax_20 == 0xfffffff9)
            r8_2 = 0x20
        else
            r8_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_11 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))
    
    int32_t rax_23
    
    if (rdx_10 s> 0)
        rax_23 = arg1[9].d
    
    if (rdx_10 s> 0 && (rax_23 == 0 || rax_23 s< rbp))
        arg1[9].d = rbp
        sub_140911b00(arg1)
    else
        void* r9_5 = &arg1[7]
        int32_t rax_26 = (arg1[9].d - 1) & r10.d
        arg4[9] = rax_26
        void* rdx_11 = *(r9_5 + 8)
        int64_t r8_3 = sx.q(rax_26)
        void* rax_27 = r9_5
        
        if (rdx_11 != 0)
            rax_27 = rdx_11
        
        arg4[8] = *(rax_27 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_29 = *(r9_5 + 8)
        
        if (rax_29 != 0)
            r9_5 = rax_29
        
        *(r9_5 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_2
else
    int32_t r13_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140ad34b3:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            void* rdx_3 = r8_1 + (rcx_1 << 3)
            
            if (((*(rdx_3 + 4) ^ arg4[1]) | (*(r8_1 + (rcx_1 << 3) + 8) ^ arg4[2])
                    | (*(rdx_3 + 0xc) ^ arg4[3]) | (*arg4 ^ *rdx_3)) == 0)
                break
            
            rbx_1 = *(rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_140ad34b3
    
    arg_8 = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x28, arg4, 0x20)
        int64_t rcx_9 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_9.d
        
        int64_t rax_13 = *arg1
        int64_t rdx_6 = rcx_9 * 5
        *(rax_13 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        *(rax_13 + (rdx_6 << 3) + 4) = r13_1
        *(arg1 + 0x34) += 1
        rdi_2 = rbx_1
        arg1[6].d = rcx_9.d
        void* rax_14 = *(r10_2 + 0x10)
        
        if (rax_14 != 0)
            r10_2 = rax_14
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_9.d)
        int64_t rcx_10 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_10 << 2)) &= not.d(rol.d(1, rcx_9.b))
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_140ad3572

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = arg_8

return arg2

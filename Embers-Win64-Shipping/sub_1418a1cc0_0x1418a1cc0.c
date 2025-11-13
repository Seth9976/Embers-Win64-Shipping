// 函数: sub_1418a1cc0
// 地址: 0x1418a1cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
bool arg_8 = false
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1418a1e54:
    int32_t rdx_10 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_10 u>= 4)
        uint32_t rax_20 = rdx_10 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_20 + 8)
        int32_t rcx_12
        
        if (rax_20 == 0xfffffff8)
            rcx_12 = 0x20
        else
            rcx_12 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20 + 7)
        char r8_4
        
        if (rax_20 == 0xfffffff9)
            r8_4 = 0x20
        else
            r8_4 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_12 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    int32_t rax_23
    
    if (rdx_10 s> 0)
        rax_23 = arg1[9].d
    
    if (rdx_10 s> 0 && (rax_23 == 0 || rax_23 s< rbp))
        arg1[9].d = rbp
        sub_140911b00(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_26 = (arg1[9].d - 1) & r10.d
        arg4[9] = rax_26
        void* rdx_11 = *(r9_3 + 8)
        int64_t r8_5 = sx.q(rax_26)
        void* rax_27 = r9_3
        
        if (rdx_11 != 0)
            rax_27 = rdx_11
        
        arg4[8] = *(rax_27 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_29 = *(r9_3 + 8)
        
        if (rax_29 != 0)
            r9_3 = rax_29
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_3
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
    label_1418a1d83:
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
                goto label_1418a1d83
    
    arg_8 = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_7 = sx.q(rbx_1) * 5
        int64_t rax_10 = *arg1
        int64_t rcx_8 = *(rax_10 + (rcx_7 << 3) + 0x10)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        memmove(rax_10 + (rcx_7 << 3), arg4, 0x20)
        int64_t rcx_10 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_10.d
        
        int64_t rax_13 = *arg1
        int64_t rdx_6 = rcx_10 * 5
        *(rax_13 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        *(rax_13 + (rdx_6 << 3) + 4) = r13_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_10.d
        void* rax_14 = *(r10_2 + 0x10)
        
        if (rax_14 != 0)
            r10_2 = rax_14
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_10.d)
        int64_t rcx_11 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_11 << 2)) &= not.d(rol.d(1, rcx_10.b))
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_1418a1e54

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = arg_8

return arg2

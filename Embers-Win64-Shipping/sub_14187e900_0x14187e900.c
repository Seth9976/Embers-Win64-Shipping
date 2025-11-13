// 函数: sub_14187e900
// 地址: 0x14187e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* rbp = arg4
int32_t r14 = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14187eac5:
    int32_t rdx_10 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_10 u>= 4)
        uint32_t rax_20 = rdx_10 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_20 + 8)
        int32_t rcx_13
        
        if (rax_20 == 0xfffffff8)
            rcx_13 = 0x20
        else
            rcx_13 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20 + 7)
        char r8_4
        
        if (rax_20 == 0xfffffff9)
            r8_4 = 0x20
        else
            r8_4 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_13 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    int32_t rax_23
    
    if (rdx_10 s> 0)
        rax_23 = arg1[9].d
    
    if (rdx_10 s> 0 && (rax_23 == 0 || rax_23 s< r14))
        arg1[9].d = r14
        sub_140911b00(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_26 = (arg1[9].d - 1) & r10.d
        rbp[9] = rax_26
        void* rdx_11 = *(r9_4 + 8)
        int64_t r8_5 = sx.q(rax_26)
        void* rax_27 = r9_4
        
        if (rdx_11 != 0)
            rax_27 = rdx_11
        
        rbp[8] = *(rax_27 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_29 = *(r9_4 + 8)
        
        if (rax_29 != 0)
            r9_4 = rax_29
        
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
    label_14187e9c3:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            void* rdx_3 = r8_1 + (rcx_1 << 3)
            
            if (((*(rdx_3 + 4) ^ rbp[1]) | (*(r8_1 + (rcx_1 << 3) + 8) ^ rbp[2])
                    | (*(rdx_3 + 0xc) ^ arg4[3]) | (*rbp ^ *rdx_3)) == 0)
                break
            
            rbx_1 = *(rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_14187e9c3
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_7 = sx.q(rbx_1) * 5
        int64_t rax_10 = *arg1
        int32_t i_1 = *(rax_10 + (rcx_7 << 3) + 0x18)
        void* r13_1 = rax_10 + (rcx_7 << 3)
        int64_t* rdi_2 = *(r13_1 + 0x10)
        
        if (i_1 != 0)
            int32_t i
            
            do
                sub_1418221b0(rdi_2)
                rdi_2 = &rdi_2[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdi_2 = *(r13_1 + 0x10)
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
        
        rbp = arg4
        memmove(r13_1, rbp, 0x20)
        int64_t rcx_11 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_11.d
        
        int64_t rax_13 = *arg1
        int64_t rdx_6 = rcx_11 * 5
        int32_t r9_1 = -1
        *(rax_13 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r9_1 = arg1[6].d
        
        r13 = zx.q(r13.b)
        *(rax_13 + (rdx_6 << 3) + 4) = r9_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_11.d
        void* rax_14 = *(r10_2 + 0x10)
        
        if (rax_14 != 0)
            r10_2 = rax_14
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_11.d)
        int64_t rcx_12 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_12 << 2)) &= not.d(rol.d(1, rcx_11.b))
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_14187eac5

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return arg2

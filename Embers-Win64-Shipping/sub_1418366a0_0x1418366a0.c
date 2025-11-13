// 函数: sub_1418366a0
// 地址: 0x1418366a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r14 = 1
int64_t r10 = sx.q(arg3)
bool arg_8 = false
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14183685d:
    int32_t rdx_11 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_11 u>= 4)
        uint32_t rax_21 = rdx_11 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_21 + 8)
        int32_t rcx_11
        
        if (rax_21 == 0xfffffff8)
            rcx_11 = 0x20
        else
            rcx_11 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_21 + 7)
        char r8_4
        
        if (rax_21 == 0xfffffff9)
            r8_4 = 0x20
        else
            r8_4 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_11 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    int32_t rax_24
    
    if (rdx_11 s> 0)
        rax_24 = arg1[9].d
    
    if (rdx_11 s> 0 && (rax_24 == 0 || rax_24 s< r14))
        arg1[9].d = r14
        sub_140911b00(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_27 = (arg1[9].d - 1) & r10.d
        arg4[9] = rax_27
        void* rdx_12 = *(r9_3 + 8)
        int64_t r8_5 = sx.q(rax_27)
        void* rax_28 = r9_3
        
        if (rdx_12 != 0)
            rax_28 = rdx_12
        
        arg4[8] = *(rax_28 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_30 = *(r9_3 + 8)
        
        if (rax_30 != 0)
            r9_3 = rax_30
        
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
    label_141836763:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            int32_t* rdx_3 = r8_1 + (rcx_1 << 3)
            
            if (((rdx_3[3] ^ arg4[3]) | (*(r8_1 + (rcx_1 << 3) + 4) ^ arg4[1])
                    | (rdx_3[2] ^ arg4[2]) | (*rdx_3 ^ *arg4)) == 0)
                break
            
            rbx_1 = rdx_3[8]
            
            if (rbx_1 == 0xffffffff)
                goto label_141836763
    
    arg_8 = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_7 = sx.q(rbx_1) * 5
        int64_t rax_10 = *arg1
        void* rdi_2 = rax_10 + (rcx_7 << 3)
        void* i = *(rax_10 + (rcx_7 << 3) + 0x10)
        
        while (i != 0)
            *(rdi_2 + 0x18) = *(i + 0x18)
            *(i + 0x10) = 0
            *(i + 0x18) = 0
            j_sub_140a74f90(i)
            i = *(rdi_2 + 0x18)
            *(rdi_2 + 0x10) = i
        
        memmove(rdi_2, arg4, 0x20)
        int64_t rcx_9 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_9.d
        
        int64_t rax_14 = *arg1
        int64_t rdx_7 = rcx_9 * 5
        *(rax_14 + (rdx_7 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        *(rax_14 + (rdx_7 << 3) + 4) = r13_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_9.d
        void* rax_15 = *(r10_2 + 0x10)
        
        if (rax_15 != 0)
            r10_2 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_9.d)
        int64_t rcx_10 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_10 << 2)) &= not.d(rol.d(1, rcx_9.b))
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_14183685d

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = arg_8

return arg2

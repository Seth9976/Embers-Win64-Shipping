// 函数: sub_140fe5360
// 地址: 0x140fe5360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r15 = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_6

if (rax_1 == 1)
    rdi_6 = arg5
label_140fe552d:
    int32_t rdx_11 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_11 u>= 4)
        uint32_t rax_18 = rdx_11 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_18 + 8)
        int32_t rcx_7
        
        if (rax_18 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18 + 7)
        char r8_3
        
        if (rax_18 == 0xfffffff9)
            r8_3 = 0x20
        else
            r8_3 = 0x1f - temp0_3
        
        r15 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r8_3))
    
    int32_t rax_21
    
    if (rdx_11 s> 0)
        rax_21 = arg1[9].d
    
    if (rdx_11 s> 0 && (rax_21 == 0 || rax_21 s< r15))
        arg1[9].d = r15
        sub_140ffbb90(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_24 = (arg1[9].d - 1) & r10.d
        *(arg4 + 0x23c) = rax_24
        void* rdx_12 = *(r9_4 + 8)
        int64_t r8_4 = sx.q(rax_24)
        void* rax_25 = r9_4
        
        if (rdx_12 != 0)
            rax_25 = rdx_12
        
        *(arg4 + 0x238) = *(rax_25 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_27 = *(r9_4 + 8)
        
        if (rax_27 != 0)
            r9_4 = rax_27
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_6
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
    label_140fe544c:
        rbx_1 = r13_1
    else
        r12 = *arg1
        int32_t r13_2 = *(arg4 + 0x200)
        
        while (true)
            void* buffer1 = sx.q(rbx_1) * 0x240 + r12
            int64_t rax_3 = sx.q(*(buffer1 + 0x200))
            
            if (rax_3.d == r13_2 && memcmp(buffer1, arg4, rax_3 << 5) == 0
                    && memcmp(buffer1 + 0x20c, arg4 + 0x20c, 0x20) == 0)
                r13_1 = -1
                break
            
            rbx_1 = *(buffer1 + 0x238)
            
            if (rbx_1 == 0xffffffff)
                r13_1 = rbx_1
                goto label_140fe544c
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_6 = arg5
    else
        void* rdi_5 = sx.q(rbx_1) * 0x240 + *arg1
        sub_14081c9d0(rdi_5 + 0x230)
        memmove(rdi_5, arg4, 0x238)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x240 + *arg1) = rcx_5.d
        
        int32_t* rax_11 = rcx_5 * 0x240 + *arg1
        *rax_11 = r13_1
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        rax_11[1] = r13_1
        *(arg1 + 0x34) += 1
        rdi_6 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_12 = *(r10_1 + 0x10)
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_140fe552d

if (arg6 != 0)
    *arg6 = r12.b

*arg2 = rdi_6
return arg2

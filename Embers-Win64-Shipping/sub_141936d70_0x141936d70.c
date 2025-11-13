// 函数: sub_141936d70
// 地址: 0x141936d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r15 = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141936efa:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_18 = r8_6 u>> 1
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
        char r9_2
        
        if (rax_18 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        r15 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_21
    
    if (r8_6 s> 0)
        rax_21 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_21 == 0 || rax_21 s< r15))
        arg1[9].d = r15
        sub_141949b30(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_24 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x84) = rax_24
        void* rdx_9 = *(r9_3 + 8)
        int64_t r8_7 = sx.q(rax_24)
        void* rax_25 = r9_3
        
        if (rdx_9 != 0)
            rax_25 = rdx_9
        
        *(arg4 + 0x80) = *(rax_25 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_27 = *(r9_3 + 8)
        
        if (rax_27 != 0)
            r9_3 = rax_27
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141936e4a:
        rbx_1 = -1
    else
        while (true)
            uint64_t rax_3 = 1
            void* r8_2 = sx.q(rbx_1) * 0x88 + *arg1
            uint64_t rdx_3 = 0
            
            do
                if (rax_3.b == 0)
                    goto label_141936e3f
                
                uint64_t rcx_1 = rdx_3 * 5
                int64_t rax_4 = *(r8_2 + (rcx_1 << 2))
                rax_3 = rax_4 - *(arg4 + (rcx_1 << 2))
                
                if (rax_4 == *(arg4 + (rcx_1 << 2)))
                    int64_t rax_5 = *(r8_2 + (rcx_1 << 2) + 8)
                    rax_3 = rax_5 - *(arg4 + (rcx_1 << 2) + 8)
                    
                    if (rax_5 == *(arg4 + (rcx_1 << 2) + 8))
                        rax_3 = zx.q(*(r8_2 + (rcx_1 << 2) + 0x10))
                            - zx.q(*(arg4 + (rcx_1 << 2) + 0x10))
                
                rax_3.b = rax_3 == 0
                rdx_3 = zx.q(rdx_3.d + 1)
            while (rdx_3.d u< 6)
            
            if (rax_3.b != 0)
                break
            
        label_141936e3f:
            rbx_1 = *(r8_2 + 0x80)
            
            if (rbx_1 == 0xffffffff)
                goto label_141936e4a
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(sx.q(rbx_1) * 0x88 + *arg1, arg4, 0x80)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x88 + *arg1) = rcx_5.d
        
        int32_t* rax_11 = rcx_5 * 0x88 + *arg1
        *rax_11 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        rax_11[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
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
        goto label_141936efa

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

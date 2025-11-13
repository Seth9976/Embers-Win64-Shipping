// 函数: sub_1405d2a60
// 地址: 0x1405d2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1405d2c05:
    int32_t rdx_11 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_11 u>= 4)
        uint32_t rax_16 = rdx_11 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16 + 8)
        int32_t rcx_9
        
        if (rax_16 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_16 + 7)
        char r8_3
        
        if (rax_16 == 0xfffffff9)
            r8_3 = 0x20
        else
            r8_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r8_3))
    
    int32_t rax_19
    
    if (rdx_11 s> 0)
        rax_19 = arg1[9].d
    
    if (rdx_11 s> 0 && (rax_19 == 0 || rax_19 s< rbp))
        arg1[9].d = rbp
        sub_1405d3260(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_22 = (arg1[9].d - 1) & r10.d
        *(arg4 + 0x24) = rax_22
        void* rdx_12 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_22)
        void* rax_23 = r9_3
        
        if (rdx_12 != 0)
            rax_23 = rdx_12
        
        arg4[4].d = *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_25 = *(r9_3 + 8)
        
        if (rax_25 != 0)
            r9_3 = rax_25
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1405d2b2e:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rdi_1 = sx.q(rbx_1) * 0x28
            int16_t* rax_3
            
            if (arg4[1].d == 0)
                rax_3 = &data_142d40450
            else
                rax_3 = *arg4
            
            int16_t* const rcx_2
            
            if (*(rdi_1 + rdx_3 + 8) == 0)
                rcx_2 = &data_142d40450
            else
                rcx_2 = *(rdi_1 + rdx_3)
            
            if (sub_140a54510(rcx_2, rax_3) == 0)
                break
            
            rdx_3 = *arg1
            rbx_1 = *(rdi_1 + rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_1405d2b2e
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 5
        int64_t rax_6 = *arg1
        int64_t* rdi_2 = rax_6 + (rcx_3 << 3)
        int64_t rcx_4 = *(rax_6 + (rcx_3 << 3) + 0x10)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *rdi_2
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        memmove(rdi_2, arg4, 0x20)
        int64_t rcx_7 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_7.d
        
        int64_t rax_9 = *arg1
        int64_t rdx_7 = rcx_7 * 5
        int32_t r9 = -1
        *(rax_9 + (rdx_7 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r9 = arg1[6].d
        
        *(rax_9 + (rdx_7 << 3) + 4) = r9
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_7.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_7.d)
        int64_t rcx_8 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_8 << 2)) &= not.d(rol.d(1, rcx_7.b))
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_1405d2c05

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r12.b

return arg2

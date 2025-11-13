// 函数: sub_14187e700
// 地址: 0x14187e700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_5

if (rax_1 == 1)
    rdi_5 = arg5
label_14187e816:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_9 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9 + 8)
        int32_t rcx_9
        
        if (rax_9 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_9 + 7)
        char r9_1
        
        if (rax_9 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_12
    
    if (r8_3 s> 0)
        rax_12 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_12 == 0 || rax_12 s< rbp))
        arg1[9].d = rbp
        sub_141892120(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & r13.d
        arg4[0xf] = rax_15
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_15)
        void* rax_16 = r9_2
        
        if (rdx_9 != 0)
            rax_16 = rdx_9
        
        arg4[0xe] = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_18 = *(r9_2 + 8)
        
        if (rax_18 != 0)
            r9_2 = rax_18
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_5
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14187e7b0:
        rbx_1 = -1
    else
        while (true)
            void* rdx_5 = (sx.q(rbx_1) << 6) + *arg1
            
            if (((*(rdx_5 + 4) ^ arg4[1]) | (*(rdx_5 + 8) ^ arg4[2]) | (*(rdx_5 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_5)) == 0)
                break
            
            rbx_1 = *(rdx_5 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_14187e7b0
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_5 = arg5
    else
        void* rdi_4 = (sx.q(rbx_1) << 6) + *arg1
        int64_t rcx_6 = *(rdi_4 + 0x10)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        memmove(rdi_4, arg4, 0x38)
        sub_1405c37b0(arg1, arg5, 1)
        rdi_5 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14187e816

*arg2 = rdi_5

if (arg6 != 0)
    *arg6 = r12.b

return arg2

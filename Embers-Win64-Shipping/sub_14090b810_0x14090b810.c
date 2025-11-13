// 函数: sub_14090b810
// 地址: 0x14090b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_14090b905:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_6 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_6 + 8)
        int32_t rcx_7
        
        if (rax_6 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_6 + 7)
        char r9_1
        
        if (rax_6 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_9
    
    if (r8_5 s> 0)
        rax_9 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_9 == 0 || rax_9 s< rbp))
        arg1[9].d = rbp
        sub_1405c1850(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x14) = rax_12
        void* rdx_5 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_12)
        void* rax_13 = r9_2
        
        if (rdx_5 != 0)
            rax_13 = rdx_5
        
        arg4[2].d = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_15 = *(r9_2 + 8)
        
        if (rax_15 != 0)
            r9_2 = rax_15
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_14090b898:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 3
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_14090b898
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 3
        int64_t rax_3 = *arg1
        int64_t* rcx_4 = *(rax_3 + (rcx_3 << 3) + 8)
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
        
        memmove(rax_3 + (rcx_3 << 3), arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14090b905

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r15.b

return arg2

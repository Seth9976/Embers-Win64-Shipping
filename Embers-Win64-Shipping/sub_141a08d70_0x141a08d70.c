// 函数: sub_141a08d70
// 地址: 0x141a08d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141a08e7d:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_11 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11 + 8)
        int32_t rcx_9
        
        if (rax_11 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_11 + 7)
        char r9_1
        
        if (rax_11 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_14
    
    if (r8_3 s> 0)
        rax_14 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_14 == 0 || rax_14 s< rbp))
        arg1[9].d = rbp
        sub_141a12c20(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x6c) = rax_17
        void* rdx_8 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_17)
        void* rax_18 = r9_2
        
        if (rdx_8 != 0)
            rax_18 = rdx_8
        
        arg4[0xd].d = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_20 = *(r9_2 + 8)
        
        if (rax_20 != 0)
            r9_2 = rax_20
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141a08e1c:
        rbx_1 = -1
    else
        while (true)
            int64_t* rdx_4 = sx.q(rbx_1) * 0x70 + *arg1
            
            if (*rdx_4 == *arg4)
                int32_t rcx_5 = (*(rdx_4 + 0x14) ^ *(arg4 + 0x14)) | (rdx_4[2].d ^ arg4[2].d)
                    | (*(rdx_4 + 0xc) ^ *(arg4 + 0xc)) | (rdx_4[1].d ^ arg4[1].d)
                
                if (rcx_5 == 0)
                    break
            
            rbx_1 = rdx_4[0xd].d
            
            if (rbx_1 == 0xffffffff)
                goto label_141a08e1c
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rdi_1 = sx.q(rbx_1) * 0x70 + *arg1
        sub_1405ae080(rdi_1 + 0x18)
        memmove(rdi_1, arg4, 0x68)
        sub_140ac00b0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141a08e7d

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r12.b

return arg2

// 函数: sub_141c5acf0
// 地址: 0x141c5acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* result = arg2
int32_t rbp = 1
int64_t r13 = sx.q(arg3.d)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141c5add8:
    int32_t r8_1 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_1 u>= 4)
        uint32_t rax_5 = r8_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_5 + 8)
        int32_t rcx_5
        
        if (rax_5 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_5 + 7)
        char r9_1
        
        if (rax_5 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_8
    
    if (r8_1 s> 0)
        rax_8 = arg1[9].d
    
    if (r8_1 s> 0 && (rax_8 == 0 || rax_8 s< rbp))
        arg1[9].d = rbp
        sub_140afdae0(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & r13.d
        arg4[0xd] = rax_11
        void* rdx_5 = *(r9_2 + 8)
        int64_t r8_2 = sx.q(rax_11)
        void* rax_12 = r9_2
        
        if (rdx_5 != 0)
            rax_12 = rdx_5
        
        arg4[0xc] = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_14 = *(r9_2 + 8)
        
        if (rax_14 != 0)
            r9_2 = rax_14
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        arg3 = &arg1[7]
        void* rcx = arg1[8]
        arg2 = (sx.q(arg1[9].d) - 1) & r13
        
        if (rcx != 0)
            arg3 = rcx
        
        rbx_1 = *(arg3 + (arg2 << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141c5ad77:
        rbx_1 = -1
    else
        arg2 = *arg1
        
        while (true)
            int32_t* rcx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rcx_1 + arg2) == *arg4)
                break
            
            rbx_1 = *(rcx_1 + arg2 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_141c5ad77
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rdi_1 = sx.q(rbx_1) * 0x38 + *arg1
        sub_141c50a90(rdi_1 + 8, arg2, arg3)
        memmove(rdi_1, arg4, 0x30)
        sub_140afe9e0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141c5add8

*result = rdi_2

if (arg6 != 0)
    *arg6 = r15.b

return result

// 函数: sub_141b11be0
// 地址: 0x141b11be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_3

if (rcx_1 == 1)
    rdi_3 = arg5
label_141b11cee:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_4 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_4 + 8)
        int32_t rcx_6
        
        if (rax_4 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_4 + 7)
        char r9_1
        
        if (rax_4 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_7
    
    if (r8_5 s> 0)
        rax_7 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_7 == 0 || rax_7 s< rbp))
        arg1[9].d = rbp
        sub_141b2eb40(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_10 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x4c) = rax_10
        void* rdx_6 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_10)
        void* rax_11 = r9_2
        
        if (rdx_6 != 0)
            rax_11 = rdx_6
        
        arg4[9].d = *(rax_11 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_13 = *(r9_2 + 8)
        
        if (rax_13 != 0)
            r9_2 = rax_13
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_141b11c7a:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_2 = sx.q(rbx_1) * 0xa
            
            if (*(r8_3 + (rdx_2 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_2 << 3) + 0x48)
            
            if (rbx_1 == 0xffffffff)
                goto label_141b11c7a
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x50 + *arg1
        int64_t rcx_3 = *(rdi_2 + 0x38)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        if (*(rdi_2 + 9) != 0)
            *(rdi_2 + 9) = 0
        
        memmove(rdi_2, arg4, 0x48)
        sub_1407c2c60(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141b11cee

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return arg2

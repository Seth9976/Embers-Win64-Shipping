// 函数: sub_141a08b70
// 地址: 0x141a08b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_141a08c87:
    int32_t rdx_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_7 u>= 4)
        uint32_t rax_12 = rdx_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_10
        
        if (rax_12 == 0xfffffff8)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        char r8_2
        
        if (rax_12 == 0xfffffff9)
            r8_2 = 0x20
        else
            r8_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))
    
    int32_t rax_15
    
    if (rdx_7 s> 0)
        rax_15 = arg1[9].d
    
    if (rdx_7 s> 0 && (rax_15 == 0 || rax_15 s< rbp))
        arg1[9].d = rbp
        sub_141a12a20(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r10.d
        *(arg4 + 0x24) = rax_18
        void* rdx_8 = *(r9_3 + 8)
        int64_t r8_3 = sx.q(rax_18)
        void* rax_19 = r9_3
        
        if (rdx_8 != 0)
            rax_19 = rdx_8
        
        arg4[4].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_21 = *(r9_3 + 8)
        
        if (rax_21 != 0)
            r9_3 = rax_21
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141a08c2d:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            void* rdx_3 = r8_1 + (rcx_1 << 3)
            
            if (*(r8_1 + (rcx_1 << 3)) == *arg4)
                int32_t rcx_6 = (*(rdx_3 + 0x14) ^ *(arg4 + 0x14)) | (*(rdx_3 + 0x10) ^ arg4[2].d)
                    | (*(rdx_3 + 0xc) ^ *(arg4 + 0xc)) | (*(rdx_3 + 8) ^ arg4[1].d)
                
                if (rcx_6 == 0)
                    break
            
            rbx_1 = *(rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_141a08c2d
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x28, arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        r10 = zx.q(arg3)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141a08c87

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r13.b

return arg2

// 函数: sub_1421650b0
// 地址: 0x1421650b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_142165190:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_6 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_6 + 8)
        int32_t rcx_5
        
        if (rax_6 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_6 + 7)
        char r9
        
        if (rax_6 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_9
    
    if (r8_3 s> 0)
        rax_9 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_9 == 0 || rax_9 s< rbp))
        arg1[9].d = rbp
        sub_142173670(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r13.d
        arg4[5] = rax_12
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_12)
        void* rax_13 = r9_1
        
        if (rdx_7 != 0)
            rax_13 = rdx_7
        
        arg4[4] = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_15 = *(r9_1 + 8)
        
        if (rax_15 != 0)
            r9_1 = rax_15
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_142165137:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_142165137
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x18, arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_142165190

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r15.b

return arg2

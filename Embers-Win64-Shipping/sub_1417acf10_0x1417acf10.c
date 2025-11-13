// 函数: sub_1417acf10
// 地址: 0x1417acf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_1417acffb:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_7 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7 + 8)
        int32_t rcx_5
        
        if (rax_7 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_7 + 7)
        char r9
        
        if (rax_7 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_10
    
    if (r8_3 s> 0)
        rax_10 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_10 == 0 || rax_10 s< rbp))
        arg1[9].d = rbp
        sub_1417b2500(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_13 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x14) = rax_13
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_13)
        void* rax_14 = r9_1
        
        if (rdx_7 != 0)
            rax_14 = rdx_7
        
        arg4[2].d = *(rax_14 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_16 = *(r9_1 + 8)
        
        if (rax_16 != 0)
            r9_1 = rax_16
        
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
    label_1417acfa2:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4 && *(rdx_3 + (rcx_1 << 3) + 8) == arg4[1])
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1417acfa2
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x18, arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1417acffb

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r12.b

return arg2

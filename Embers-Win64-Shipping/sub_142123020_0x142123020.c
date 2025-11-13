// 函数: sub_142123020
// 地址: 0x142123020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_14212314b:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_12 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_5
        
        if (rax_12 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        char r9
        
        if (rax_12 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_15
    
    if (r8_2 s> 0)
        rax_15 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_15 == 0 || rax_15 s< rbp))
        arg1[9].d = rbp
        sub_140afdae0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x34) = rax_18
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_18)
        void* rax_19 = r9_1
        
        if (rdx_7 != 0)
            rax_19 = rdx_7
        
        arg4[6].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_21 = *(r9_1 + 8)
        
        if (rax_21 != 0)
            r9_1 = rax_21
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1421230f6:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t* rcx_1 = sx.q(rbx_1) * 0x38
            
            if (*(rcx_1 + rdx_3) == *arg4 && *(rcx_1 + rdx_3 + 8) == arg4[1]
                    && *(rcx_1 + rdx_3 + 0x10) == arg4[2].d
                    && *(rcx_1 + rdx_3 + 0x14) == *(arg4 + 0x14)
                    && *(rcx_1 + rdx_3 + 0x18) == arg4[3].d && *(rcx_1 + rdx_3 + 0x20) == arg4[4].d
                    && *(rcx_1 + rdx_3 + 0x1c) == *(arg4 + 0x1c))
                break
            
            rbx_1 = *(rcx_1 + rdx_3 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_1421230f6
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(sx.q(rbx_1) * 0x38 + *arg1, arg4, 0x30)
        sub_140afe9e0(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_14212314b

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r15.b

return arg2

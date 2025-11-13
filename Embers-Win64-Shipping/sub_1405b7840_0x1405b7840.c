// 函数: sub_1405b7840
// 地址: 0x1405b7840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1405b79c8:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_21 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_21 + 8)
        int32_t rcx_10
        
        if (rax_21 == 0xfffffff8)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_21 + 7)
        char r9_3
        
        if (rax_21 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_24
    
    if (r8_3 s> 0)
        rax_24 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_24 == 0 || rax_24 s< rbp))
        arg1[9].d = rbp
        sub_1405c0b10(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_27 = (arg1[9].d - 1) & r11.d
        arg4[0xb] = rax_27
        void* rdx_12 = *(r9_4 + 8)
        int64_t r8_4 = sx.q(rax_27)
        void* rax_28 = r9_4
        
        if (rdx_12 != 0)
            rax_28 = rdx_12
        
        arg4[0xa] = *(rax_28 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_30 = *(r9_4 + 8)
        
        if (rax_30 != 0)
            r9_4 = rax_30
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_3
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1405b78fe:
        rbx_1 = -1
    else
        while (true)
            void* rdx_5 = sx.q(rbx_1) * 0x30 + *arg1
            
            if (*(rdx_5 + 0x10) == arg4[4] && ((*(rdx_5 + 0xc) ^ arg4[3]) | (*(rdx_5 + 8) ^ arg4[2])
                    | (*(rdx_5 + 4) ^ arg4[1]) | (*arg4 ^ *rdx_5)) == 0)
                break
            
            rbx_1 = *(rdx_5 + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_1405b78fe
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x30 + *arg1
        sub_1405ade70(rdi_2 + 0x18)
        memmove(rdi_2, arg4, 0x28)
        int64_t rcx_8 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x30) = rcx_8.d
        
        int32_t* rax_14 = rcx_8 * 0x30 + *arg1
        *rax_14 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r11 = zx.q(arg3)
        rax_14[1] = r12_1
        rdi_3 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_8.d
        void* rax_15 = *(r10_1 + 0x10)
        
        if (rax_15 != 0)
            r10_1 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1405b79c8

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return arg2

// 函数: sub_140a70210
// 地址: 0x140a70210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15
r15.b = 0
int64_t* r11 = arg4
int32_t rbp = 1
int64_t rbx = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_3

if (rcx_1 == 1)
    rdi_3 = arg5
label_140a703c6:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_15 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_8
        
        if (rax_15 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r9_3
        
        if (rax_15 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_18
    
    if (r8_5 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_18 == 0 || rax_18 s< rbp))
        arg1[9].d = rbp
        sub_140a86380(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & rbx.d
        *(r11 + 0x5c) = rax_21
        void* rdx_10 = *(r9_4 + 8)
        int64_t r8_6 = sx.q(rax_21)
        void* rax_22 = r9_4
        
        if (rdx_10 != 0)
            rax_22 = rdx_10
        
        r11[0xb].d = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_24 = *(r9_4 + 8)
        
        if (rax_24 != 0)
            r9_4 = rax_24
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_3
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_140a702ab:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_2 = sx.q(rbx_1) * 0x60
            
            if (*(rdx_2 + r8_3) == *arg4)
                break
            
            rbx_1 = *(rdx_2 + r8_3 + 0x58)
            
            if (rbx_1 == 0xffffffff)
                goto label_140a702ab
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x60 + *arg1
        *(rdi_2 + 0x50) = 0
        int64_t r15_1 = *(rdi_2 + 0x48)
        
        if (r15_1 != 0)
            int64_t* rcx_3 = data_143ddb3f0
            
            if (rcx_3 == 0)
                sub_140a750a0()
                rcx_3 = data_143ddb3f0
            
            (*(*rcx_3 + 0x30))(rcx_3, r15_1)
        
        sub_140681eb0(rdi_2 + 8)
        memmove(rdi_2, arg4, 0x58)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x60 + *arg1) = rcx_6.d
        
        int32_t* rax_8 = rcx_6 * 0x60 + *arg1
        *rax_8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r15 = zx.q(r15.b)
        r11 = arg4
        rdi_3 = rbx_1
        rax_8[1] = r12_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_6.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140a703c6

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r15.b

return arg2

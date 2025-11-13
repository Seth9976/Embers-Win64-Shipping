// 函数: sub_140824e80
// 地址: 0x140824e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* r10 = arg4
int32_t r14 = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140825027:
    int32_t rdx_10 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_10 u>= 4)
        uint32_t rax_15 = rdx_10 u>> 1
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
        char r8_3
        
        if (rax_15 == 0xfffffff9)
            r8_3 = 0x20
        else
            r8_3 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r8_3))
    
    int32_t rax_18
    
    if (rdx_10 s> 0)
        rax_18 = arg1[9].d
    
    if (rdx_10 s> 0 && (rax_18 == 0 || rax_18 s< r14))
        arg1[9].d = r14
        sub_140837b00(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r11.d
        r10[9] = rax_21
        void* rdx_11 = *(r9_4 + 8)
        int64_t r8_4 = sx.q(rax_21)
        void* rax_22 = r9_4
        
        if (rdx_11 != 0)
            rax_22 = rdx_11
        
        r10[8] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_24 = *(r9_4 + 8)
        
        if (rax_24 != 0)
            r9_4 = rax_24
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140824f16:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_140824f16
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 5
        int64_t rax_4 = *arg1
        int32_t i_1 = *(rax_4 + (rcx_2 << 3) + 0x18)
        void* r13_1 = rax_4 + (rcx_2 << 3)
        int64_t* rdi = *(r13_1 + 0x10)
        
        if (i_1 != 0)
            int32_t i
            
            do
                sub_14081ca40(rdi)
                rdi = &rdi[3]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdi = *(r13_1 + 0x10)
        
        if (rdi != 0)
            sub_140a74f90(rdi)
        
        memmove(r13_1, arg4, 0x20)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_6.d
        
        int32_t* r9_1 = *arg1 + rcx_6 * 0x28
        int32_t rax_8 = -1
        *r9_1 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rax_8 = arg1[6].d
        
        rbp = zx.q(rbp.b)
        r11 = zx.q(arg3)
        rdi_1 = rbx_1
        r9_1[1] = rax_8
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_6.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
        r10 = arg4
    
    if (rbx_1 == 0xffffffff)
        goto label_140825027

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

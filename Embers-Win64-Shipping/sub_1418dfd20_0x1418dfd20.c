// 函数: sub_1418dfd20
// 地址: 0x1418dfd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
void* r11 = arg4
int32_t r15 = 1
int64_t rbx = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_1418dfee8:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_15 = r8_4 u>> 1
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
        char r9_1
        
        if (rax_15 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        r15 = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_18
    
    if (r8_4 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_18 == 0 || rax_18 s< r15))
        arg1[9].d = r15
        sub_1418ebc70(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & rbx.d
        *(r11 + 0x18c) = rax_21
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_21)
        void* rax_22 = r9_2
        
        if (rdx_9 != 0)
            rax_22 = rdx_9
        
        *(r11 + 0x188) = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_24 = *(r9_2 + 8)
        
        if (rax_24 != 0)
            r9_2 = rax_24
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_4
else
    int32_t r13_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1418dfdcc:
        rbx_1 = -1
    else
        rbp = *arg1
        
        while (true)
            void* rdi_2 = sx.q(rbx_1) * 0x190 + rbp
            
            if (sub_1418d7450(rdi_2, r11) != 0)
                break
            
            rbx_1 = *(rdi_2 + 0x188)
            r11 = arg4
            
            if (rbx_1 == 0xffffffff)
                goto label_1418dfdcc
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* r14_2 = sx.q(rbx_1) * 0x190 + *arg1
        sub_1418d2510(r14_2 + 0x48)
        int32_t i_1 = *(r14_2 + 0x38)
        int64_t* rdi_3 = *(r14_2 + 0x30)
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_3 = *rdi_3
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                rdi_3 = &rdi_3[3]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdi_3 = *(r14_2 + 0x30)
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
        
        memmove(r14_2, arg4, 0x188)
        int64_t rcx_6 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x190 + *arg1) = rcx_6.d
        
        int32_t* rax_8 = rcx_6 * 0x190 + *arg1
        *rax_8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r13_1 = arg1[6].d
        
        rbp = zx.q(rbp.b)
        rax_8[1] = r13_1
        rdi_4 = rbx_1
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
    
    if (rbx_1 == 0xffffffff)
        r11 = arg4
        rbx = zx.q(arg3)
        goto label_1418dfee8

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

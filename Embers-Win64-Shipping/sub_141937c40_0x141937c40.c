// 函数: sub_141937c40
// 地址: 0x141937c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15
r15.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t i_1

if (rax_1 == 1)
    i_1 = arg5
label_141937dc7:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_10 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10 + 8)
        int32_t rcx_6
        
        if (rax_10 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_10 + 7)
        char r9_2
        
        if (rax_10 == 0xfffffff9)
            r9_2 = 0x20
        else
            r9_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_2))
    
    int32_t rax_13
    
    if (r8_6 s> 0)
        rax_13 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_13 == 0 || rax_13 s< rbp))
        arg1[9].d = rbp
        sub_14194a3a0(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x1c) = rax_16
        void* rdx_10 = *(r9_3 + 8)
        int64_t r8_7 = sx.q(rax_16)
        void* rax_17 = r9_3
        
        if (rdx_10 != 0)
            rax_17 = rdx_10
        
        arg4[3].d = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_19 = *(r9_3 + 8)
        
        if (rax_19 != 0)
            r9_3 = rax_19
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = i_1
else
    int32_t i_2 = -1
    int32_t i
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        i = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
        
        if (i != 0xffffffff)
            int64_t r14_1 = *arg1
            r15 = zx.q(arg4[1].d)
            
            do
                int64_t rdi_2 = sx.q(i) << 5
                int64_t count = sx.q(*(rdi_2 + r14_1 + 8))
                
                if (count.d == r15.d && memcmp(*(rdi_2 + r14_1), *arg4, count) == 0)
                    i_2 = -1
                    goto label_141937cfc
                
                i = *(rdi_2 + r14_1 + 0x18)
            while (i != 0xffffffff)
            
            i_2 = i
    
    i = i_2
label_141937cfc:
    r15.b = i != 0xffffffff
    
    if (i == 0xffffffff)
        i_1 = arg5
    else
        int64_t* rdi_5 = (sx.q(i) << 5) + *arg1
        int64_t rcx_2 = *rdi_5
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        memmove(rdi_5, arg4, 0x18)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_4.d
        
        int32_t* r8_4 = (rcx_4 << 5) + *arg1
        *r8_4 = i_2
        
        if (*(arg1 + 0x34) s> 0)
            i_2 = arg1[6].d
        
        r8_4[1] = i_2
        *(arg1 + 0x34) += 1
        i_1 = i
        arg1[6].d = rcx_4.d
        void* rax_4 = *(r10_1 + 0x10)
        
        if (rax_4 != 0)
            r10_1 = rax_4
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (i == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_141937dc7

*arg2 = i_1

if (arg6 != 0)
    *arg6 = r15.b

return arg2

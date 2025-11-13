// 函数: sub_14101dae0
// 地址: 0x14101dae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t i_2

if (rax_1 == 1)
    i_2 = arg5
label_14101dc65:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_16 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16 + 8)
        int32_t rcx_7
        
        if (rax_16 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_16 + 7)
        char r9_1
        
        if (rax_16 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_19
    
    if (r8_6 s> 0)
        rax_19 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_19 == 0 || rax_19 s< rbp))
        arg1[9].d = rbp
        sub_141031e40(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_22 = (arg1[9].d - 1) & r11.d
        arg4[0x2d] = rax_22
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_7 = sx.q(rax_22)
        void* rax_23 = r9_2
        
        if (rdx_9 != 0)
            rax_23 = rdx_9
        
        arg4[0x2c] = *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_25 = *(r9_2 + 8)
        
        if (rax_25 != 0)
            r9_2 = rax_25
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = i_2
else
    int32_t i_1 = -1
    int32_t i
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        i = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
        
        if (i != 0xffffffff)
            r14 = *arg1
            int32_t r15_1 = *arg4
            
            do
                int32_t* rdi = sx.q(i) * 0xb8
                int32_t rax_3 = *(rdi + r14)
                
                if (rax_3 == r15_1 && memcmp(r14 + 4 + rdi, &arg4[1], zx.q(rax_3) * 2) == 0)
                    i_1 = -1
                    goto label_14101dbaa
                
                i = *(rdi + r14 + 0xb0)
            while (i != 0xffffffff)
            
            i_1 = i
    
    i = i_1
label_14101dbaa:
    r14.b = i != 0xffffffff
    
    if (i == 0xffffffff)
        i_2 = arg5
    else
        memmove(sx.q(i) * 0xb8 + *arg1, arg4, 0xb0)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0xb8 + *arg1) = rcx_5.d
        
        int32_t* rax_9 = rcx_5 * 0xb8 + *arg1
        *rax_9 = i_1
        
        if (*(arg1 + 0x34) s> 0)
            i_1 = arg1[6].d
        
        rax_9[1] = i_1
        *(arg1 + 0x34) += 1
        i_2 = i
        arg1[6].d = rcx_5.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (i == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_14101dc65

*arg2 = i_2

if (arg6 != 0)
    *arg6 = r14.b

return arg2

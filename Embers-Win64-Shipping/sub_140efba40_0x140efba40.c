// 函数: sub_140efba40
// 地址: 0x140efba40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_140efbbee:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_18 = r8_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_18 + 8)
        int32_t rcx_7
        
        if (rax_18 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18 + 7)
        char r9_1
        
        if (rax_18 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_21
    
    if (r8_4 s> 0)
        rax_21 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_21 == 0 || rax_21 s< rbp))
        arg1[9].d = rbp
        sub_140f14120(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_24 = (arg1[9].d - 1) & r11.d
        arg4[0x1d] = rax_24
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_24)
        void* rax_25 = r9_2
        
        if (rdx_9 != 0)
            rax_25 = rdx_9
        
        arg4[0x1c] = *(rax_25 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_27 = *(r9_2 + 8)
        
        if (rax_27 != 0)
            r9_2 = rax_27
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_4
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
    label_140efbb1e:
        rbx_1 = r12_1
    else
        rsi = *arg1
        int32_t r12_2 = *arg4
        
        while (true)
            int32_t* rdi_1 = sx.q(rbx_1) * 0x78
            
            if (*(rdi_1 + rsi) == r12_2 && *(rdi_1 + rsi + 4) == arg4[1]
                    && not(arg4[2] f!= *(rdi_1 + rsi + 8)) && *(rdi_1 + rsi + 0xc) == arg4[3].b
                    && *(rdi_1 + rsi + 0xd) == *(arg4 + 0xd)
                    && sub_140f07570(rsi + 0x10 + rdi_1, &arg4[4]) != 0)
                r12_1 = -1
                break
            
            rbx_1 = *(rdi_1 + rsi + 0x70)
            
            if (rbx_1 == 0xffffffff)
                r12_1 = rbx_1
                goto label_140efbb1e
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = sx.q(rbx_1) * 0x78 + *arg1
        sub_140ee3dd0(rdi_3)
        memmove(rdi_3, arg4, 0x70)
        int64_t rcx_5 = sx.q(arg5)
        void* r9 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x78 + *arg1) = rcx_5.d
        
        int32_t* rax_11 = rcx_5 * 0x78 + *arg1
        *rax_11 = r12_1
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_11[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_4 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_12 = *(r9 + 0x10)
        
        if (rax_12 != 0)
            r9 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r9 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_140efbbee

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = rsi.b

return arg2

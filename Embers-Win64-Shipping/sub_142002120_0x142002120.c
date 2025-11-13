// 函数: sub_142002120
// 地址: 0x142002120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3.d
int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
void* result = arg2
int32_t rbp = 1
int32_t* r12 = arg4
int64_t r11 = sx.q(arg3.d)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_142002250:
    int32_t r8_1 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_1 u>= 4)
        uint32_t rax_12 = r8_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12 + 8)
        int32_t rcx_12
        
        if (rax_12 == 0xfffffff8)
            rcx_12 = 0x20
        else
            rcx_12 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_12 + 7)
        char r9
        
        if (rax_12 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_12 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_15
    
    if (r8_1 s> 0)
        rax_15 = arg1[9].d
    
    if (r8_1 s> 0 && (rax_15 == 0 || rax_15 s< rbp))
        arg1[9].d = rbp
        sub_14200d4a0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r11.d
        r12[0x11] = rax_18
        void* rdx_5 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_18)
        void* rax_19 = r9_1
        
        if (rdx_5 != 0)
            rax_19 = rdx_5
        
        r12[0x10] = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_21 = *(r9_1 + 8)
        
        if (rax_21 != 0)
            r9_1 = rax_21
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        arg3 = &arg1[7]
        void* rcx = arg1[8]
        arg2 = (sx.q(arg1[9].d) - 1) & r11
        
        if (rcx != 0)
            arg3 = rcx
        
        rbx_1 = *(arg3 + (arg2 << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1420021d3:
        rbx_1 = -1
    else
        arg3 = *arg1
        arg4 = zx.q(*(arg4 + 0xc))
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 9
            arg2 = arg3 + (rcx_1 << 3)
            int32_t rcx_6 = (*(arg2 + 4) ^ r12[1]) | (*(arg3 + (rcx_1 << 3) + 8) ^ r12[2])
                | (*(arg2 + 0xc) ^ arg4.d) | (*r12 ^ *arg2)
            
            if (rcx_6 == 0)
                break
            
            rbx_1 = *(arg2 + 0x40)
            
            if (rbx_1 == 0xffffffff)
                goto label_1420021d3
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rsi_1 = *arg1 + sx.q(rbx_1) * 0x48
        sub_1405d1550(rsi_1 + 0x18, arg2, arg3, arg4)
        sub_1405d1550(rsi_1 + 0x10)
        memmove(rsi_1, r12, 0x40)
        sub_1407c2d20(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg_18)
        goto label_142002250

*result = rdi_2

if (arg6 != 0)
    *arg6 = r13.b

return result

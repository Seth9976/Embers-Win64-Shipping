// 函数: sub_140aa7ef0
// 地址: 0x140aa7ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_140aa8063:
    int32_t r8_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_5 u>= 4)
        uint32_t rax_15 = r8_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_7
        
        if (rax_15 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r9_1
        
        if (rax_15 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_18
    
    if (r8_5 s> 0)
        rax_18 = arg1[9].d
    
    if (r8_5 s> 0 && (rax_18 == 0 || rax_18 s< rbp))
        arg1[9].d = rbp
        sub_140abf250(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x34) = rax_21
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_21)
        void* rax_22 = r9_2
        
        if (rdx_9 != 0)
            rax_22 = rdx_9
        
        arg4[6].d = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_24 = *(r9_2 + 8)
        
        if (rax_24 != 0)
            r9_2 = rax_24
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi_4
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
    label_140aa7fa2:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t* rdi_1 = sx.q(rbx_1) * 0x38
            int64_t _MaxCount = sx.q(*(rdi_1 + rcx_1 + 8))
            
            if (_MaxCount.d == arg4[1].d && wcsncmp(*(rdi_1 + rcx_1), *arg4, _MaxCount) == 0)
                break
            
            rcx_1 = *arg1
            rbx_1 = *(rdi_1 + rcx_1 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa7fa2
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = sx.q(rbx_1) * 0x38 + *arg1
        sub_140a98f70(rdi_3)
        memmove(rdi_3, arg4, 0x30)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_5.d
        
        int32_t* rax_8 = rcx_5 * 0x38 + *arg1
        *rax_8 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        rax_8[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_4 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_140aa8063

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = r13.b

return arg2

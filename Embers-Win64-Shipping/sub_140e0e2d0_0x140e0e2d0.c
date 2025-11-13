// 函数: sub_140e0e2d0
// 地址: 0x140e0e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* r11 = arg4
int32_t rbp = 1
int64_t rbx = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140e0e416:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_8 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_8 + 8)
        int32_t rcx_7
        
        if (rax_8 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_3
        
        uint64_t rflags_2
        char temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_8 + 7)
        char r9_1
        
        if (rax_8 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_4
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_11
    
    if (r8_2 s> 0)
        rax_11 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_11 == 0 || rax_11 s< rbp))
        arg1[9].d = rbp
        sub_140837330(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & rbx.d
        *(r11 + 0x3c) = rax_14
        void* rdx_6 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_14)
        void* rax_15 = r9_2
        
        if (rdx_6 != 0)
            rax_15 = rdx_6
        
        r11[7].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_17 = *(r9_2 + 8)
        
        if (rax_17 != 0)
            r9_2 = rax_17
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140e0e366:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 6
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x38)
            
            if (rbx_1 == 0xffffffff)
                goto label_140e0e366
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* r14_3 = (sx.q(rbx_1) << 6) + *arg1
        sub_140745b20(r14_3 + 0x28)
        int64_t* rdi = *(r14_3 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t r15_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (r15_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(r14_3, arg4, 0x38)
        sub_1405c37b0(arg1, arg5, 1)
        r11 = arg4
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140e0e416

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

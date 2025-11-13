// 函数: sub_141b5c130
// 地址: 0x141b5c130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141b5c275:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_8 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8 + 8)
        int32_t rcx_6
        
        if (rax_8 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_8 + 7)
        char r9
        
        if (rax_8 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_11
    
    if (r8_2 s> 0)
        rax_11 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_11 == 0 || rax_11 s< rbp))
        arg1[9].d = rbp
        sub_1417f3bd0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x1c) = rax_14
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_14)
        void* rax_15 = r9_1
        
        if (rdx_7 != 0)
            rax_15 = rdx_7
        
        arg4[3].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_17 = *(r9_1 + 8)
        
        if (rax_17 != 0)
            r9_1 = rax_17
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_2
else
    int64_t rdi = *arg4
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141b5c1e4:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            int64_t rsi_2 = sx.q(rbx_1) << 5
            int64_t arg_8 = rdi
            int64_t arg_10 = *(rsi_2 + rax_2)
            
            if (sub_140664af0(&arg_10, &arg_8) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rsi_2 + rax_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_141b5c1e4
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* rsi_5 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi_1 = *(rsi_5 + 0x10)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        memmove(rsi_5, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_141b5c275

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r12.b

return arg2

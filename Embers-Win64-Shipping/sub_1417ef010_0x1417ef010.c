// 函数: sub_1417ef010
// 地址: 0x1417ef010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* r11 = arg4
int32_t rbp = 1
int64_t rbx = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_1417ef170:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_9 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_9 + 8)
        int32_t rcx_6
        
        if (rax_9 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_3
        
        uint64_t rflags_2
        char temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_9 + 7)
        char r9
        
        if (rax_9 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_4
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_12
    
    if (r8_2 s> 0)
        rax_12 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_12 == 0 || rax_12 s< rbp))
        arg1[9].d = rbp
        sub_1417f3bd0(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & rbx.d
        *(r11 + 0x1c) = rax_15
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_15)
        void* rax_16 = r9_1
        
        if (rdx_7 != 0)
            rax_16 = rdx_7
        
        r11[3].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_18 = *(r9_1 + 8)
        
        if (rax_18 != 0)
            r9_1 = rax_18
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_2
else
    int64_t rdi = *arg4
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1417ef0c5:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            int64_t r14_2 = sx.q(rbx_1) << 5
            int64_t arg_8 = rdi
            int64_t arg_10 = *(r14_2 + rax_2)
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rax_2 = *arg1
            rbx_1 = *(r14_2 + rax_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1417ef0c5
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* r14_5 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi_1 = *(r14_5 + 0x10)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t r15_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (r15_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        memmove(r14_5, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        r11 = arg4
        rbx = zx.q(arg3)
        goto label_1417ef170

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r13.b

return arg2

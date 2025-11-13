// 函数: sub_14078ab80
// 地址: 0x14078ab80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_14078accd:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_9 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9 + 8)
        int32_t rcx_7
        
        if (rax_9 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_9 + 7)
        char r9
        
        if (rax_9 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_12
    
    if (r8_2 s> 0)
        rax_12 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_12 == 0 || rax_12 s< rbp))
        arg1[9].d = rbp
        sub_1407c1460(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x2c) = rax_15
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_15)
        void* rax_16 = r9_1
        
        if (rdx_7 != 0)
            rax_16 = rdx_7
        
        arg4[5].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
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
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14078ac38:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t arg_8 = rdi
            int64_t r14_2 = sx.q(rbx_1) * 6
            int64_t arg_10 = *(rcx_1 + (r14_2 << 3))
            
            if (sub_14077a170(&arg_10, &arg_8) != 0)
                break
            
            rcx_1 = *arg1
            rbx_1 = *(rcx_1 + (r14_2 << 3) + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_14078ac38
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        void* r14_5 = sx.q(rbx_1) * 0x30 + *arg1
        int64_t* rdi_1 = *(r14_5 + 0x18)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        memmove(r14_5, arg4, 0x28)
        sub_1407c2ba0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_14078accd

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r12.b

return arg2

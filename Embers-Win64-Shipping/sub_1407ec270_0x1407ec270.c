// 函数: sub_1407ec270
// 地址: 0x1407ec270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_1407ec383:
    int32_t r8_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_2 u>= 4)
        uint32_t rax_7 = r8_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7 + 8)
        int32_t rcx_6
        
        if (rax_7 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_7 + 7)
        char r9_1
        
        if (rax_7 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_10
    
    if (r8_2 s> 0)
        rax_10 = arg1[9].d
    
    if (r8_2 s> 0 && (rax_10 == 0 || rax_10 s< rbp))
        arg1[9].d = rbp
        sub_1408076e0(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_13 = (arg1[9].d - 1) & r11.d
        arg4[7] = rax_13
        void* rdx_6 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_13)
        void* rax_14 = r9_2
        
        if (rdx_6 != 0)
            rax_14 = rdx_6
        
        arg4[6] = *(rax_14 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_16 = *(r9_2 + 8)
        
        if (rax_16 != 0)
            r9_2 = rax_16
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1407ec2f6:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t rax_3 = sx.q(rbx_1) << 5
            
            if (*(rax_3 + rcx_1) == *arg4)
                break
            
            rbx_1 = *(rax_3 + rcx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1407ec2f6
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* r14_3 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rdi = *(r14_3 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp3_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(r14_3, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        r11 = zx.q(arg3)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1407ec383

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

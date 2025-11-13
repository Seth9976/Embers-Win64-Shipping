// 函数: sub_140d1f060
// 地址: 0x140d1f060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_140d1f173:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_5 = r8_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_5 + 8)
        int32_t rcx_8
        
        if (rax_5 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_5 + 7)
        char r9_1
        
        if (rax_5 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_8
    
    if (r8_4 s> 0)
        rax_8 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_8 == 0 || rax_8 s< rbp))
        arg1[9].d = rbp
        sub_1405c1a70(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0x1c) = rax_11
        void* rdx_5 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_11)
        void* rax_12 = r9_2
        
        if (rdx_5 != 0)
            rax_12 = rdx_5
        
        arg4[3].d = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_14 = *(r9_2 + 8)
        
        if (rax_14 != 0)
            r9_2 = rax_14
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_140d1f0e6:
        rbx_1 = -1
    else
        int64_t rdx_1 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) << 5
            
            if (*(rcx_3 + rdx_1) == *arg4)
                break
            
            rbx_1 = *(rcx_3 + rdx_1 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d1f0e6
    
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
        goto label_140d1f173

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

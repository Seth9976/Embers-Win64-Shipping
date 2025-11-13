// 函数: sub_141b5c710
// 地址: 0x141b5c710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13
r13.b = 0
int64_t* rbx = arg4
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_141b5c851:
    int32_t rdx_5 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_5 u>= 4)
        uint32_t rax_8 = rdx_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_8 + 8)
        int32_t rcx_8
        
        if (rax_8 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_3
        
        uint64_t rflags_2
        char temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_8 + 7)
        char r8_4
        
        if (rax_8 == 0xfffffff9)
            r8_4 = 0x20
        else
            r8_4 = 0x1f - temp0_4
        
        rbp = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    int32_t rax_11
    
    if (rdx_5 s> 0)
        rax_11 = arg1[9].d
    
    if (rdx_5 s> 0 && (rax_11 == 0 || rax_11 s< rbp))
        arg1[9].d = rbp
        sub_14092ed80(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r10.d
        *(rbx + 0x24) = rax_14
        void* rdx_6 = *(r9_3 + 8)
        int64_t r8_5 = sx.q(rax_14)
        void* rax_15 = r9_3
        
        if (rdx_6 != 0)
            rax_15 = rdx_6
        
        rbx[4].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_17 = *(r9_3 + 8)
        
        if (rax_17 != 0)
            r9_3 = rax_17
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_141b5c7a7:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 5
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_141b5c7a7
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 5
        int64_t rax_3 = *arg1
        int64_t* rdi = *(rax_3 + (rcx_3 << 3) + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t r14_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rax_3 + (rcx_3 << 3), arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        r10 = zx.q(arg3)
        rdi_1 = rbx_1
        r13 = zx.q(r13.b)
    
    if (rbx_1 == 0xffffffff)
        rbx = arg4
        goto label_141b5c851

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r13.b

return arg2

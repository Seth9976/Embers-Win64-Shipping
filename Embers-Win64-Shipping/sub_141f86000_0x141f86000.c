// 函数: sub_141f86000
// 地址: 0x141f86000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
bool arg_8 = false
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_141f86146:
    int32_t rdx_8 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_8 u>= 4)
        uint32_t rax_10 = rdx_8 u>> 1
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_10 + 8)
        int32_t rcx_7
        
        if (rax_10 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_3
        
        uint64_t rflags_2
        char temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_10 + 7)
        char r8_2
        
        if (rax_10 == 0xfffffff9)
            r8_2 = 0x20
        else
            r8_2 = 0x1f - temp0_4
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))
    
    int32_t rax_13
    
    if (rdx_8 s> 0)
        rax_13 = arg1[9].d
    
    if (rdx_8 s> 0 && (rax_13 == 0 || rax_13 s< rbp))
        arg1[9].d = rbp
        sub_141f95b90(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r10.d
        *(arg4 + 0x24) = rax_16
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_16)
        void* rax_17 = r9_2
        
        if (rdx_9 != 0)
            rax_17 = rdx_9
        
        arg4[4].d = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_19 = *(r9_2 + 8)
        
        if (rax_19 != 0)
            r9_2 = rax_19
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141f860a1:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4 && *(rdx_3 + (rcx_1 << 3) + 8) == arg4[1])
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_141f860a1
    
    arg_8 = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 5
        int64_t rax_5 = *arg1
        int64_t* rdi = *(rax_5 + (rcx_2 << 3) + 0x18)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t r14_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rax_5 + (rcx_2 << 3), arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        r10 = zx.q(arg3)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141f86146

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = arg_8

return arg2

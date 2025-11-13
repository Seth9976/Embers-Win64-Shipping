// 函数: sub_14090f9b0
// 地址: 0x14090f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_14090fb0b:
    int32_t rdx_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_7 u>= 4)
        uint32_t rax_14 = rdx_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14 + 8)
        int32_t rcx_12
        
        if (rax_14 == 0xfffffff8)
            rcx_12 = 0x20
        else
            rcx_12 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_14 + 7)
        char r8_2
        
        if (rax_14 == 0xfffffff9)
            r8_2 = 0x20
        else
            r8_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_12 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))
    
    int32_t rax_17
    
    if (rdx_7 s> 0)
        rax_17 = arg1[9].d
    
    if (rdx_7 s> 0 && (rax_17 == 0 || rax_17 s< rbp))
        arg1[9].d = rbp
        sub_140911b00(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & r10.d
        arg4[9] = rax_20
        void* rdx_8 = *(r9_3 + 8)
        int64_t r8_3 = sx.q(rax_20)
        void* rax_21 = r9_3
        
        if (rdx_8 != 0)
            rax_21 = rdx_8
        
        arg4[8] = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_23 = *(r9_3 + 8)
        
        if (rax_23 != 0)
            r9_3 = rax_23
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14090fa73:
        rbx_1 = -1
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            void* rdx_3 = r8_1 + (rcx_1 << 3)
            
            if (((*(rdx_3 + 4) ^ arg4[1]) | (*(r8_1 + (rcx_1 << 3) + 8) ^ arg4[2])
                    | (*(rdx_3 + 0xc) ^ arg4[3]) | (*arg4 ^ *rdx_3)) == 0)
                break
            
            rbx_1 = *(rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_14090fa73
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_7 = sx.q(rbx_1) * 5
        int64_t rax_10 = *arg1
        int64_t* rdi_2 = *(rax_10 + (rcx_7 << 3) + 0x18)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        memmove(rax_10 + (rcx_7 << 3), arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        r13 = zx.q(r13.b)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_14090fb0b

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return arg2

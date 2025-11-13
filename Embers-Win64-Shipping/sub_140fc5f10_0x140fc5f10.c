// 函数: sub_140fc5f10
// 地址: 0x140fc5f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* result = arg2
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140fc607d:
    int32_t rdx_8 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_8 u>= 4)
        uint32_t rax_10 = rdx_8 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10 + 8)
        int32_t rcx_9
        
        if (rax_10 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_10 + 7)
        char r8_1
        
        if (rax_10 == 0xfffffff9)
            r8_1 = 0x20
        else
            r8_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r8_1))
    
    int32_t rax_13
    
    if (rdx_8 s> 0)
        rax_13 = arg1[9].d
    
    if (rdx_8 s> 0 && (rax_13 == 0 || rax_13 s< rbp))
        arg1[9].d = rbp
        sub_1405d3260(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r10.d
        *(arg4 + 0x24) = rax_16
        void* rdx_9 = *(r9_2 + 8)
        int64_t r8_2 = sx.q(rax_16)
        void* rax_17 = r9_2
        
        if (rdx_9 != 0)
            rax_17 = rdx_9
        
        arg4[4].d = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_19 = *(r9_2 + 8)
        
        if (rax_19 != 0)
            r9_2 = rax_19
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140fc5fde:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rdi_1 = sx.q(rbx_1) * 0x28
            int16_t* rax_3
            
            if (arg4[1].d == 0)
                rax_3 = &data_142d40450
            else
                rax_3 = *arg4
            
            int16_t* const rcx_2
            
            if (*(rdi_1 + rdx_3 + 8) == 0)
                rcx_2 = &data_142d40450
            else
                rcx_2 = *(rdi_1 + rdx_3)
            
            if (sub_140a54510(rcx_2, rax_3) == 0)
                break
            
            rdx_3 = *arg1
            rbx_1 = *(rdi_1 + rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_140fc5fde
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 5
        int64_t rax_6 = *arg1
        int64_t* rdi_2 = *(rax_6 + (rcx_3 << 3) + 0x18)
        int64_t* r15 = rax_6 + (rcx_3 << 3)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        int64_t rcx_6 = *r15
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        memmove(r15, arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        result = arg2
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_140fc607d

*result = rdi_3

if (arg6 != 0)
    *arg6 = r13.b

return result

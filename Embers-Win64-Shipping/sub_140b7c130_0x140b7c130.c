// 函数: sub_140b7c130
// 地址: 0x140b7c130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140b7c288:
    
    if (sub_1405e1160(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x24) = rax_12
        void* rdx_9 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_12)
        void* rax_13 = r9
        
        if (rdx_9 != 0)
            rax_13 = rdx_9
        
        arg4[4].d = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_15 = *(r9 + 8)
        
        if (rax_15 != 0)
            r9 = rax_15
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140b7c1e2:
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
                goto label_140b7c1e2
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_3 = sx.q(rbx_1) * 5
        int64_t rax_6 = *arg1
        int64_t* rdi_2 = *(rax_6 + (rcx_3 << 3) + 0x18)
        int64_t* r15_1 = rax_6 + (rcx_3 << 3)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp1_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        int64_t rcx_6 = *r15_1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        memmove(r15_1, arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140b7c288

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

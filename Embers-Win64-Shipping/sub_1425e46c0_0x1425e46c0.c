// 函数: sub_1425e46c0
// 地址: 0x1425e46c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbx = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1425e4871:
    
    if (sub_1425e4330(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_24 = (arg1[9].d - 1) & rbx.d
        arg4[9] = rax_24
        void* rdx_11 = *(r9_2 + 8)
        int64_t r8_2 = sx.q(rax_24)
        void* rax_25 = r9_2
        
        if (rdx_11 != 0)
            rax_25 = rdx_11
        
        arg4[8] = *(rax_25 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_27 = *(r9_2 + 8)
        
        if (rax_27 != 0)
            r9_2 = rax_27
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_3
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1425e4773:
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
                goto label_1425e4773
    
    rbp.b = rbx_1 != 0xffffffff
    
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
                int32_t temp1_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        memmove(rax_10 + (rcx_7 << 3), arg4, 0x20)
        int64_t rcx_11 = sx.q(arg5)
        void* r9_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_11.d
        
        int64_t rax_15 = *arg1
        int64_t rdx_6 = rcx_11 * 5
        *(rax_15 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        *(rax_15 + (rdx_6 << 3) + 4) = r12_1
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_11.d
        void* rax_16 = *(r9_1 + 0x10)
        
        if (rax_16 != 0)
            r9_1 = rax_16
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_11.d)
        int64_t rcx_12 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r9_1 + (rcx_12 << 2)) &= not.d(rol.d(1, rcx_11.b))
        rbp = zx.q(rbp.b)
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_1425e4871

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

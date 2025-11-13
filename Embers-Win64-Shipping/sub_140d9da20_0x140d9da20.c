// 函数: sub_140d9da20
// 地址: 0x140d9da20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbx = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140d9dc12:
    
    if (sub_140d9c030(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_23 = (arg1[9].d - 1) & rbx.d
        *(arg4 + 0x34) = rax_23
        void* rdx_11 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_23)
        void* rax_24 = r9_1
        
        if (rdx_11 != 0)
            rax_24 = rdx_11
        
        arg4[6].d = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_26 = *(r9_1 + 8)
        
        if (rax_26 != 0)
            r9_1 = rax_26
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140d9db13:
        rbx_1 = -1
    else
        int64_t rdi_1 = *arg1
        
        while (true)
            int64_t* r15_1 = sx.q(rbx_1) * 0x38
            int64_t rax_3 = *(r15_1 + rdi_1 + 0x18)
            
            if (rax_3 == arg4[3])
                if (rax_3 != 0)
                    break
                
                int16_t* rdx_3
                
                if (arg4[1].d == rax_3.d)
                    rdx_3 = &data_142d40450
                else
                    rdx_3 = *arg4
                
                int16_t* const rcx_1
                
                if (*(r15_1 + rdi_1 + 8) == 0)
                    rcx_1 = &data_142d40450
                else
                    rcx_1 = *(r15_1 + rdi_1)
                
                if (sub_140a54510(rcx_1, rdx_3) == 0 && *(r15_1 + rdi_1 + 0x10) == arg4[2].b
                        && *(r15_1 + rdi_1 + 0x11) == *(arg4 + 0x11)
                        && *(r15_1 + rdi_1 + 0x14) == *(arg4 + 0x14))
                    break
            
            rdi_1 = *arg1
            rbx_1 = *(r15_1 + rdi_1 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d9db13
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t* r15_3 = sx.q(rbx_1) * 0x38 + *arg1
        int64_t* rdi_2 = r15_3[5]
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp1_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        int64_t rcx_4 = *r15_3
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(r15_3, arg4, 0x30)
        int64_t rcx_6 = sx.q(arg5)
        void* r9 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x38 + *arg1) = rcx_6.d
        
        int32_t rdx_6 = -1
        int32_t* rax_14 = rcx_6 * 0x38 + *arg1
        *rax_14 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdx_6 = arg1[6].d
        
        rax_14[1] = rdx_6
        *(arg1 + 0x34) += 1
        rdi_3 = rbx_1
        arg1[6].d = rcx_6.d
        void* rax_15 = *(r9 + 0x10)
        
        if (rax_15 != 0)
            r9 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_6.d)
        int64_t rcx_7 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r9 + (rcx_7 << 2)) &= not.d(rol.d(1, rcx_6.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_140d9dc12

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r12.b

return arg2

// 函数: sub_141936ff0
// 地址: 0x141936ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_14193716f:
    
    if (sub_1419347c0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x84) = rax_19
        void* rdx_10 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_19)
        void* rax_20 = r9_2
        
        if (rdx_10 != 0)
            rax_20 = rdx_10
        
        *(arg4 + 0x80) = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_22 = *(r9_2 + 8)
        
        if (rax_22 != 0)
            r9_2 = rax_22
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_1
else
    int32_t rdi = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1419370b8:
        rbx_1 = -1
    else
        while (true)
            int64_t rax_2
            rax_2.b = 1
            void* r8_2 = sx.q(rbx_1) * 0x88 + *arg1
            uint64_t rdx_3 = 0
            
            do
                if (rax_2.b == 0)
                    goto label_1419370ad
                
                uint64_t rcx_1 = rdx_3 * 5
                int64_t rax_3 = *(r8_2 + (rcx_1 << 2))
                rax_2 = rax_3 - *(arg4 + (rcx_1 << 2))
                
                if (rax_3 == *(arg4 + (rcx_1 << 2)))
                    int64_t rax_4 = *(r8_2 + (rcx_1 << 2) + 8)
                    rax_2 = rax_4 - *(arg4 + (rcx_1 << 2) + 8)
                    
                    if (rax_4 == *(arg4 + (rcx_1 << 2) + 8))
                        rax_2 = zx.q(*(r8_2 + (rcx_1 << 2) + 0x10))
                            - zx.q(*(arg4 + (rcx_1 << 2) + 0x10))
                
                rax_2.b = rax_2 == 0
                rdx_3 = zx.q(rdx_3.d + 1)
            while (rdx_3.d u< 6)
            
            if (rax_2.b != 0)
                break
            
        label_1419370ad:
            rbx_1 = *(r8_2 + 0x80)
            
            if (rbx_1 == 0xffffffff)
                goto label_1419370b8
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        memmove(sx.q(rbx_1) * 0x88 + *arg1, arg4, 0x80)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0x88 + *arg1) = rcx_5.d
        
        int32_t* rax_10 = rcx_5 * 0x88 + *arg1
        *rax_10 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        rax_10[1] = rdi
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_11 = *(r10_1 + 0x10)
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_14193716f

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

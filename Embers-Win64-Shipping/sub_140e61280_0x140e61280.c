// 函数: sub_140e61280
// 地址: 0x140e61280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140e613ca:
    
    if (sub_140e5b6a0(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x2c) = rax_15
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_15)
        void* rax_16 = r9_1
        
        if (rdx_8 != 0)
            rax_16 = rdx_8
        
        arg4[5].d = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_18 = *(r9_1 + 8)
        
        if (rax_18 != 0)
            r9_1 = rax_18
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140e61332:
        rbx_1 = -1
    else
        int64_t r9 = *arg1
        
        while (true)
            int64_t r8_2 = sx.q(rbx_1) * 6
            
            if (*(r9 + (r8_2 << 3)) == *arg4)
                char rcx_1 = (*(r9 + (r8_2 << 3) + 0x18)).b
                char rdx_3 = (arg4[3].d).b
                
                if (((rcx_1 ^ rdx_3) & 1) == 0 && ((rcx_1 ^ rdx_3) & 2) == 0
                        && ((rcx_1 ^ rdx_3) & 4) == 0 && ((rcx_1 ^ rdx_3) & 8) == 0)
                    break
            
            rbx_1 = *(r9 + (r8_2 << 3) + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_140e61332
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        void* rbp_3 = sx.q(rbx_1) * 0x30 + *arg1
        int64_t* rdi = *(rbp_3 + 0x10)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp1_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rbp_3, arg4, 0x28)
        sub_1407c2ba0(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140e613ca

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2

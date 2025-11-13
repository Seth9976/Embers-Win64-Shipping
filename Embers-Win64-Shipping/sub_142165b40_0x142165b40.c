// 函数: sub_142165b40
// 地址: 0x142165b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int64_t r13 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi_1

if (rcx_1 == 1)
    rdi_1 = arg5
label_142165c62:
    
    if (sub_142162850(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x14) = rax_11
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_1 = sx.q(rax_11)
        void* rax_12 = r9_1
        
        if (rdx_8 != 0)
            rax_12 = rdx_8
        
        arg4[2].d = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_14 = *(r9_1 + 8)
        
        if (rax_14 != 0)
            r9_1 = rax_14
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_1
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rcx_2 = arg1[8]
        void* r8 = &arg1[7]
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_142165bc9:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_3 = sx.q(rbx_1) * 3
            
            if (**(rdx_3 + (rcx_3 << 3)) == **arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_3 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_142165bc9
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_4 = sx.q(rbx_1) * 3
        int64_t rax_5 = *arg1
        int64_t* rdi = *(rax_5 + (rcx_4 << 3) + 8)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp1_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        memmove(rax_5 + (rcx_4 << 3), arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi_1 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_142165c62

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

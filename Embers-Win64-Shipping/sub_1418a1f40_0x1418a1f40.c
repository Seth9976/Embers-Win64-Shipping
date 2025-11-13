// 函数: sub_1418a1f40
// 地址: 0x1418a1f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_5

if (rax_1 == 1)
    rdi_5 = arg5
label_1418a2062:
    
    if (sub_140cb1970(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_12 = (arg1[9].d - 1) & r12.d
        arg4[7] = rax_12
        void* rdx_10 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_12)
        void* rax_13 = r9_1
        
        if (rdx_10 != 0)
            rax_13 = rdx_10
        
        arg4[6] = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_15 = *(r9_1 + 8)
        
        if (rax_15 != 0)
            r9_1 = rax_15
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_5
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1418a1ff0:
        rbx_1 = -1
    else
        while (true)
            void* rdx_5 = (sx.q(rbx_1) << 5) + *arg1
            
            if (((*(rdx_5 + 4) ^ arg4[1]) | (*(rdx_5 + 8) ^ arg4[2]) | (*(rdx_5 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_5)) == 0)
                break
            
            rbx_1 = *(rdx_5 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1418a1ff0
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_5 = arg5
    else
        void* rdi_4 = (sx.q(rbx_1) << 5) + *arg1
        int64_t* rcx_6 = *(rdi_4 + 0x10)
        
        if (rcx_6 != 0)
            (**rcx_6)(rcx_6, 1)
        
        memmove(rdi_4, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rdi_5 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1418a2062

*arg2 = rdi_5

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

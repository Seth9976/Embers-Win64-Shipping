// 函数: sub_141a45ca0
// 地址: 0x141a45ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_141a45db5:
    
    if (sub_141a40850(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r12.d
        arg4[0xd] = rax_14
        void* rdx_9 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_14)
        void* rax_15 = r9_1
        
        if (rdx_9 != 0)
            rax_15 = rdx_9
        
        arg4[0xc] = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_17 = *(r9_1 + 8)
        
        if (rax_17 != 0)
            r9_1 = rax_17
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141a45d59:
        rbx_1 = -1
    else
        while (true)
            void* rdx_4 = sx.q(rbx_1) * 0x38 + *arg1
            
            if (((*(rdx_4 + 4) ^ arg4[1]) | (*(rdx_4 + 8) ^ arg4[2]) | (*(rdx_4 + 0xc) ^ arg4[3])
                    | (*arg4 ^ *rdx_4)) == 0 && *(rdx_4 + 0x10) == arg4[4])
                break
            
            rbx_1 = *(rdx_4 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_141a45d59
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        memmove(sx.q(rbx_1) * 0x38 + *arg1, arg4, 0x30)
        sub_140afe9e0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141a45db5

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

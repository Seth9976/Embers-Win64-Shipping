// 函数: sub_140b4f700
// 地址: 0x140b4f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[0x282] - arg1[0x28b]
int64_t r12 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_140b4f847:
    
    if (sub_140b4e3b0(arg1, arg1[0x282] - arg1[0x28b], 0) == 0)
        void* r9_1 = &arg1[0x28c]
        int32_t rax_15 = (arg1[0x2ae] - 1) & r12.d
        arg4[9] = rax_15
        void* rdx_9 = *(r9_1 + 0x80)
        int64_t r8_2 = sx.q(rax_15)
        void* rax_16 = r9_1
        
        if (rdx_9 != 0)
            rax_16 = rdx_9
        
        arg4[8] = *(rax_16 + (((sx.q(arg1[0x2ae]) - 1) & r8_2) << 2))
        void* rax_18 = *(r9_1 + 0x80)
        
        if (rax_18 != 0)
            r9_1 = rax_18
        
        *(r9_1 + (((sx.q(arg1[0x2ae]) - 1) & r8_2) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[0x28c]
        void* rcx = *(arg1 + 0xab0)
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[0x2ae]) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140b4f7d3:
        rbx_1 = -1
    else
        int32_t* rax_2 = *(arg1 + 0xa00)
        int32_t* r8_1 = arg1
        
        if (rax_2 != 0)
            r8_1 = rax_2
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            void* rdx_3 = &r8_1[rcx_1 * 2]
            
            if (((*(rdx_3 + 4) ^ arg4[1]) | (r8_1[rcx_1 * 2 + 2] ^ arg4[2])
                    | (*(rdx_3 + 0xc) ^ arg4[3]) | (*arg4 ^ *rdx_3)) == 0)
                break
            
            rbx_1 = *(rdx_3 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_140b4f7d3
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        int32_t* rax_10 = *(arg1 + 0xa00)
        int32_t* rdx_4 = arg1
        
        if (rax_10 != 0)
            rdx_4 = rax_10
        
        memmove(&rdx_4[sx.q(rbx_1) * 0xa], arg4, 0x20)
        sub_140b525c0(arg1, arg5, 1)
        rdi_2 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140b4f847

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

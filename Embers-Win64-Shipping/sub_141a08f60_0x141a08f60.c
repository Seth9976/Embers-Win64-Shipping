// 函数: sub_141a08f60
// 地址: 0x141a08f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_141a090ae:
    
    if (sub_141a06510(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_15 = (arg1[9].d - 1) & r13.d
        arg4[0x19] = rax_15
        void* rdx_9 = *(r9 + 8)
        int64_t r8_1 = sx.q(rax_15)
        void* rax_16 = r9
        
        if (rdx_9 != 0)
            rax_16 = rdx_9
        
        arg4[0x18] = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2))
        void* rax_18 = *(r9 + 8)
        
        if (rax_18 != 0)
            r9 = rax_18
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_1) << 2)) = rdi_4
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141a0903a:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            void* r15_1 = sx.q(rbx_1) * 0x68
            int32_t* rdi_1 = r15_1 + rcx_1
            
            if (*(r15_1 + rcx_1 + 0x10) == arg4[4] && rdi_1[5] == arg4[5] && rdi_1[6] == arg4[6]
                    && rdi_1[7] == arg4[7] && sub_14077a170(rdi_1, arg4) != 0
                    && sub_14077a170(&rdi_1[2], &arg4[2]) != 0 && rdi_1[8] == arg4[8]
                    && rdi_1[9] == arg4[9])
                break
            
            rcx_1 = *arg1
            rbx_1 = *(r15_1 + rcx_1 + 0x60)
            
            if (rbx_1 == 0xffffffff)
                goto label_141a0903a
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = sx.q(rbx_1) * 0x68 + *arg1
        int64_t rcx_4 = *(rdi_3 + 0x38)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rdi_3, arg4, 0x60)
        sub_1408fa9b0(arg1, arg5, 1)
        rdi_4 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141a090ae

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

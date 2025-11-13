// 函数: sub_141452d30
// 地址: 0x141452d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* result = arg2
int64_t r12 = sx.q(arg3.d)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_141452e25:
    
    if (sub_14144aa10(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r12.d
        arg4[0xb] = rax_7
        void* rdx_6 = *(r9 + 8)
        int64_t r8 = sx.q(rax_7)
        void* rax_8 = r9
        
        if (rdx_6 != 0)
            rax_8 = rdx_6
        
        arg4[0xa] = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
        void* rax_10 = *(r9 + 8)
        
        if (rax_10 != 0)
            r9 = rax_10
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        arg3 = &arg1[7]
        void* rcx = arg1[8]
        arg2 = (sx.q(arg1[9].d) - 1) & r12
        
        if (rcx != 0)
            arg3 = rcx
        
        rbx_1 = *(arg3 + (arg2 << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141452db9:
        rbx_1 = -1
    else
        arg2 = *arg1
        arg3 = zx.q(*arg4)
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 6
            
            if (arg2[rcx_2 * 2] == arg3.d)
                break
            
            rbx_1 = arg2[rcx_2 * 2 + 0xa]
            
            if (rbx_1 == 0xffffffff)
                goto label_141452db9
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x30 + *arg1
        sub_1405d1550(rdi_2 + 0x10, arg2, arg3)
        memmove(rdi_2, arg4, 0x28)
        sub_1407c2ba0(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141452e25

*result = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return result

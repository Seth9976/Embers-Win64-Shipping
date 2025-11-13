// 函数: sub_141c9b7b0
// 地址: 0x141c9b7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int64_t r12 = sx.q(arg3)
int32_t rcx_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdi

if (rcx_1 == 1)
    rdi = arg5
label_141c9b897:
    
    if (sub_1405b6730(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_7 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x14) = rax_7
        void* rdx_6 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_7)
        void* rax_8 = r9_1
        
        if (rdx_6 != 0)
            rax_8 = rdx_6
        
        arg4[2].d = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_10 = *(r9_1 + 8)
        
        if (rax_10 != 0)
            r9_1 = rax_10
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rcx_1 != 0)
        void* rdx = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx != 0)
            r9 = rdx
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rcx_1 == 0 || rbx_1 == 0xffffffff)
    label_141c9b837:
        rbx_1 = -1
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rbx_1) * 3
            
            if (*(r8_3 + (rdx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(r8_3 + (rdx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_141c9b837
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove(*arg1 + sx.q(rbx_1) * 0x18, arg4, 0x10)
        sub_1405c3640(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_141c9b897

*arg2 = rdi

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

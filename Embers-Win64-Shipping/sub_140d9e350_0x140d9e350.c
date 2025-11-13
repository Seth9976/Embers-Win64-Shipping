// 函数: sub_140d9e350
// 地址: 0x140d9e350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_140d9e4a0:
    
    if (sub_140d9c190(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x8c) = rax_14
        void* rdx_8 = *(r9 + 8)
        int64_t r8_2 = sx.q(rax_14)
        void* rax_15 = r9
        
        if (rdx_8 != 0)
            rax_15 = rdx_8
        
        arg4[0x11].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_17 = *(r9 + 8)
        
        if (rax_17 != 0)
            r9 = rax_17
        
        *(r9 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140d9e433:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 0x12
            
            if (*(rdx_3 + (rcx_2 << 3)) == *arg4 && *(rdx_3 + (rcx_2 << 3) + 0x10) == arg4[2].d
                    && *(rdx_3 + (rcx_2 << 3) + 0x14) == *(arg4 + 0x14)
                    && *(rdx_3 + (rcx_2 << 3) + 0x30) == arg4[6]
                    && *(rdx_3 + (rcx_2 << 3) + 0x40) == arg4[8]
                    && *(rdx_3 + (rcx_2 << 3) + 0x48) == arg4[9].d
                    && *(rdx_3 + (rcx_2 << 3) + 0x50) == arg4[0xa].d
                    && *(rdx_3 + (rcx_2 << 3) + 0x54) == *(arg4 + 0x54)
                    && arg4[0xe].d f== *(rdx_3 + (rcx_2 << 3) + 0x70))
                break
            
            rbx_1 = *(rdx_3 + (rcx_2 << 3) + 0x88)
            
            if (rbx_1 == 0xffffffff)
                goto label_140d9e433
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        void* rdi_2 = sx.q(rbx_1) * 0x90 + *arg1
        sub_140d95250(rdi_2)
        memmove(rdi_2, arg4, 0x88)
        sub_140dbb160(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140d9e4a0

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = rbp.b

return arg2

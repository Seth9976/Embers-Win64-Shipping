// 函数: sub_140d94220
// 地址: 0x140d94220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = 0
arg1[1] = 0
arg1[2] = *(arg2 + 0x140)
void* rax_1 = *(arg2 + 0x148)
arg1[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

if (*(arg2 + 0x130) s> 0)
    int64_t r14_1 = 0
    
    do
        void* rax_2 = *(arg2 + 0x128)
        void* rcx = arg2 + 8
        
        if (rax_2 != 0)
            rcx = rax_2
        
        void* rdi_1 = *(rcx + r14_1 + 0x40)
        int64_t r12_1 = *(rcx + r14_1 + 0x38)
        
        if (rdi_1 != 0)
            *(rdi_1 + 0xc) += 1
        
        int64_t rsi_1 = sx.q(arg1[1].d)
        int32_t rax_3 = (rsi_1 + 1).d
        arg1[1].d = rax_3
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_1405a4f90(arg1)
        
        i += 1
        r14_1 += 0x48
        int64_t* rax_6 = (rsi_1 << 4) + *arg1
        *rax_6 = r12_1
        rax_6[1] = rdi_1
    while (i s< *(arg2 + 0x130))

return arg1

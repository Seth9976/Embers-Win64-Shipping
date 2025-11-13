// 函数: sub_1419a2570
// 地址: 0x1419a2570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(arg1 + 0x18)
int32_t rbx = 0

if (r15 == 0)
    return 

do
    int64_t rdi_1 = sx.q(rbx) << 3
    int64_t* rcx = *(rdi_1 + *(arg1 + 0x10))
    
    if (rcx != 0 && rcx[0x1c].b == 0 && rcx[0x11].d == 1)
        int32_t rax_3 = (*(*rcx + 0x20))()
        int64_t r12_1 = *(arg1 + 0x10)
        *(arg1 + 0x50) -= (rax_3 + 0x3ff) u>> 0xa
        int64_t rbp_1 = sx.q(*(arg1 + 0x28))
        int32_t rax_6 = (rbp_1 + 1).d
        *(arg1 + 0x28) = rax_6
        
        if (rax_6 s> *(arg1 + 0x2c))
            sub_1405a4d70(arg1 + 0x20)
        
        void* rax_8 = *(rdi_1 + r12_1)
        *(*(arg1 + 0x20) + (rbp_1 << 3)) = rax_8
        
        if (rax_8 != 0 && *(rax_8 + 0xe0) == 0)
            *(rax_8 + 0x88) += 1
        
        uint64_t rax = *(arg1 + 0x10)
        int64_t* rcx_2 = *(rdi_1 + rax)
        *(rdi_1 + rax) = 0
        
        if (rcx_2 != 0)
            sub_1419aa220(rcx_2)
    
    rbx += 1
while (rbx u< r15)

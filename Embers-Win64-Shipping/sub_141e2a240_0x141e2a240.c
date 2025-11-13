// 函数: sub_141e2a240
// 地址: 0x141e2a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i = 0
void* r12_1 = *(arg2 + 0x10)
int32_t rdx = *(arg1 + 0x18)
*(arg1 + 0x40) = 0
void* arg_18 = r12_1

if (rdx s> *(arg1 + 0x44))
    sub_1405c5570(arg1 + 0x38, rdx)

int32_t rdx_1 = *(arg1 + 0x18)
*(arg1 + 0x50) = 0

if (rdx_1 s> *(arg1 + 0x54))
    sub_1405c5570(arg1 + 0x48, rdx_1)

if (*(arg1 + 0x18) s<= 0)
    return 

do
    int64_t rdi_1 = *(arg1 + 0x20)
    int64_t rbx_1 = sx.q(i) << 3
    void* rax_2 = sub_140bd3220(r12_1, *(rbx_1 + *(arg1 + 0x10)))
    void* rax = sub_140bd3220(arg3, *(rbx_1 + rdi_1))
    
    if (rax_2 != 0 && rax != 0)
        int64_t rbx_2 = sx.q(*(arg1 + 0x40))
        int32_t rcx_4 = (rbx_2 + 1).d
        *(arg1 + 0x40) = rcx_4
        
        if (rcx_4 s> *(arg1 + 0x44))
            sub_1405a4d70(arg1 + 0x38)
        
        *(*(arg1 + 0x38) + (rbx_2 << 3)) = rax_2
        int64_t rbx_3 = sx.q(*(arg1 + 0x50))
        int32_t rax_4 = (rbx_3 + 1).d
        *(arg1 + 0x50) = rax_4
        
        if (rax_4 s> *(arg1 + 0x54))
            sub_1405a4d70(arg1 + 0x48)
        
        *(*(arg1 + 0x48) + (rbx_3 << 3)) = rax
    
    r12_1 = arg_18
    i += 1
while (i s< *(arg1 + 0x18))

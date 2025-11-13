// 函数: sub_14225d4c0
// 地址: 0x14225d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)

if (rcx == 0)
    return 

int64_t* rax = (*(*rcx + 0x30))(rcx)

if (rax == 0)
    return 

int64_t* i = *arg2
void* rsi_1 = &i[sx.q(arg2[1].d)]

if (*(arg1 + 0xb0) != 0)
    for (; i != rsi_1; i = &i[1])
        int64_t rdx_2 = *i
        
        if (rdx_2 != 0)
            (*(*rax + 0x50))(rax, rdx_2)
    
    return 

int64_t rdi_1 = 0
int64_t var_28 = 0
int32_t rcx_2 = 0
int32_t var_1c_1 = 0
int32_t r8_1 = 0

for (; i != rsi_1; i = &i[1])
    int64_t rbp_1 = *i
    
    if (rbp_1 != 0)
        int64_t r14_1 = sx.q(r8_1)
        r8_1 = (r14_1 + 1).d
        
        if (r8_1 s> rcx_2)
            sub_1405a4d70(&var_28)
            rcx_2 = var_1c_1
            rdi_1 = var_28
        
        *(rdi_1 + (r14_1 << 3)) = rbp_1

(*(*rax + 0x60))(rax, rdi_1)

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

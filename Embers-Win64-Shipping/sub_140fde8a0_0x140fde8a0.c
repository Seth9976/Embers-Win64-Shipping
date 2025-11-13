// 函数: sub_140fde8a0
// 地址: 0x140fde8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x38)

if (r9 == 0)
    int64_t rax
    rax.b = 0
    return rax

if (arg2 == 0)
    int32_t rcx = r9
    r9 = *(arg1 + 0x3c)
    
    if (rcx u>= r9)
        r9 = rcx
    
    *(arg1 + 0x3c) = r9
else
    *(arg1 + 0x3c) = r9

int32_t rax_1 = 1
uint32_t i = *(arg1 + 0x28) u>> 1

if (i u>= r9)
    int32_t rdx = *(arg1 + 0x4c)
    int32_t rcx_1 = 1
    
    do
        rax_1 = rcx_1
        
        if (rcx_1 u>= rdx)
            break
        
        rax_1 = rcx_1 + 1
        i u>>= 1
        rcx_1 = rax_1
        *(arg1 + 0x48) = rax_1
    while (i u>= *(arg1 + 0x3c))

uint32_t r8_1 = i * 2
void* rax_2 = *(arg1 + 0x20)
*(arg1 + 0x48) = rax_1 - 1
int64_t* rcx_2 = *(rax_2 + 0x150)
(*(*rcx_2 + 0x180))(rcx_2, *(*(arg1 + 0x40) + (zx.q(rax_1 - 1) << 3)), 0, 0, *(arg1 + 0x30), r8_1, 
    r8_1)
int64_t rax_4
rax_4.b = 1
*(arg1 + 0x38) = 0
return rax_4

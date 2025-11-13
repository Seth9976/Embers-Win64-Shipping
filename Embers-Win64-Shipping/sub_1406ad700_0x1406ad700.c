// 函数: sub_1406ad700
// 地址: 0x1406ad700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 8)
int32_t rdi

if (rax != 8)
    rdi = 0xc
    
    if (rax - 0xa u> 1)
        rdi = 0xe
else
    rdi = rax + 1

void*** rax_2 = j_sub_140a82f30(0x28)
void*** rdx = rax_2

if (rax_2 == 0)
    rdx = rax_2
else
    rax_2[1].d = rdi
    __builtin_memset(rdx + 0xc, 0, 0x14)
    *rdx = &data_142d8b5a0
    rdx[4] = arg2

rdx[3] = *(arg1 + 8)
void* result = *(arg1 + 8)
int64_t rcx = *(result + 0x10)

if (rcx != 0)
    rdx[2] = rcx
    *(*(*(arg1 + 8) + 0x10) + 0x18) = rdx
    result = *(arg1 + 8)

*(result + 0x10) = rdx
*(arg1 + 8) = rdx
return result

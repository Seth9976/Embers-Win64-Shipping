// 函数: sub_14152bed0
// 地址: 0x14152bed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x74) <<= 1
int64_t rdx = sx.q(*(arg1 + 0x74))
int64_t rax = 4 * rdx

if (mulu.dp.q(4, rdx) u>> 0x40 != zx.o(0))
    rax = -1

int32_t* rax_1 = j_sub_140a82f30(rax)
int64_t rcx_1 = *arg2
int32_t* rdi = rax_1
int64_t temp2 = *arg3

if (rcx_1 u> temp2)
    if (rcx_1 u< *(arg1 + 0x98))
        do
            *rdi = **arg2
            rdi = &rdi[1]
            *arg2 += 4
        while (*arg2 u< *(arg1 + 0x98))
    
    int64_t rax_5 = *(arg1 + 0x90)
    *arg2 = rax_5
    
    if (rax_5 u< *arg3)
        do
            *rdi = **arg2
            rdi = &rdi[1]
            *arg2 += 4
        while (*arg2 u< *arg3)
else if (rcx_1 u< temp2)
    do
        *rdi = **arg2
        rdi = &rdi[1]
        *arg2 += 4
    while (*arg2 u< *arg3)

j_sub_140a74f90(*(arg1 + 0x90))
*(arg1 + 0x90) = rax_1
*arg2 = rax_1
int64_t result = *(arg1 + 0x90)
*(arg1 + 0x98) = result + (sx.q(*(arg1 + 0x74)) << 2)
*arg3 = rdi
return result

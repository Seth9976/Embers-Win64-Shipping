// 函数: sub_141fe35e0
// 地址: 0x141fe35e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x18)

if (rdi == 0)
    *arg2 = rdi
    *arg3 = rdi
    return 

*arg2 = *(*(arg1 + 0x10) + 4)
*arg3 = *(*(arg1 + 0x10) + 4)

if (rdi == 1)
    return 

int32_t rbp_1 = rdi - 1

if (*(arg1 + 0x20) == 0)
    rdi = rbp_1

int32_t r9_1 = 0

if (rdi s<= 0)
    return 

int32_t rbx_1

do
    int64_t r8 = *(arg1 + 0x10)
    rbx_1 = r9_1 + 1
    int32_t rax_3 = 0
    
    if (r9_1 != rbp_1)
        rax_3 = rbx_1
    
    sub_140ad2a30(r8 + sx.q(r9_1) * 0x14, r8 + sx.q(rax_3) * 0x14, arg2, arg3)
    r9_1 = rbx_1
while (rbx_1 s< rdi)

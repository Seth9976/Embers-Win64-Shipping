// 函数: sub_141010720
// 地址: 0x141010720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp

if (arg5 == 0)
    rbp = 0
else
    rbp = arg1[1]

void* rdi = *arg1

if (arg3[1] u> 0)
    uint32_t r13_1 = zx.d(*arg3)
    void*** rcx_2 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x30)
        rcx_2 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(rdi + 0x30) = rax_1
    void**** rax_2 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_2 = rcx_2
    *(rdi + 8) = &rcx_2[1]
    rcx_2[1] = 0
    rcx_2[3].d = r13_1
    *rcx_2 = &data_142d99560
    rcx_2[2] = arg2
    rcx_2[4] = rbp

int64_t rsi_1

if (arg5 == 0)
    rsi_1 = 0
else
    rsi_1 = arg1[2]

void* rbx_1 = *arg1

if (arg4[1] u<= 0)
    return 

uint32_t rbp_1 = zx.d(*arg4)
void*** rcx_8 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_8[5]

if (rax_4 u> *(rbx_1 + 0x38))
    sub_140b0e3d0(rbx_1 + 0x30, 0x30)
    rcx_8 = (*(rbx_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_8[5]

*(rbx_1 + 0x30) = rax_4
void**** rax_5 = *(rbx_1 + 8)
*(rbx_1 + 0x14) += 1
*rax_5 = rcx_8
*(rbx_1 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142da77d8
rcx_8[2] = arg2
rcx_8[3].d = rbp_1
rcx_8[4] = rsi_1

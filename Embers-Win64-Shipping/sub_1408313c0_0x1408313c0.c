// 函数: sub_1408313c0
// 地址: 0x1408313c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
int64_t rsi = *(arg1 + 8)
char rax
int32_t rcx_1
rax, rcx_1 = sub_1422a6b20(arg4, arg3)
int32_t rax_2

if (rax != 0)
    rax_2 = 4

if (rax == 0 || (*(*arg3 + 0x2c) & 2) == 0)
    rax_2 = 0

arg2[1].d &= 0xfffffffb
arg2[1].d |= rax_2

if (rsi != 0)
    char rax_3
    rax_3, rcx_1 = sub_1422a69b0(arg4, arg3)
    
    if (rax_3 != 0)
        rdi = 8

arg2[1].d &= 0xfffffff7
arg2[1].d = ((rdi | arg2[1].d) & 0xfffffffd) | (sbb.d(rcx_1, rcx_1, rsi != 0) & 2)

if (rsi != 0)
    *(arg2 + 2) &= 0xfe
    int64_t arg_8 = *(*(arg1 + 8) + 8)
    sub_142131b60(&arg_8, arg2)

return arg2

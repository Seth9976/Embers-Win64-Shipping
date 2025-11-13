// 函数: sub_142ad6e50
// 地址: 0x142ad6e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
int32_t arg_8
int32_t arg_20
sub_142b552e0(arg2, (*(*arg1 + 0x188))(), &arg_8, &arg_20, &var_18)
int32_t rax_2 = arg_8
int32_t rcx_1
int32_t rdx_1

if (arg1[0x4d].d == 1 || rax_2 s<= 0)
    rdx_1 = rax_2 + 0x157c
    rcx_1 = 0
else
    rcx_1 = 1
    rdx_1 = rax_2

arg1[0xb].d = rax_2
int32_t rax_3 = arg_20
*(arg1 + 0xcc) = 1
*(arg1 + 0x7b) = 1
*(arg1 + 0xc) = rcx_1
int32_t rcx_2 = var_18
arg1[0x10].d = 1
arg1[0xd].w = 0x101
*(arg1 + 0x14) = rax_3
arg1[2].d = rdx_1
*(arg1 + 0x84) = 1
arg1[0x11].d = 1
*(arg1 + 0x6a) = 1
arg1[4].d = rcx_2
*(arg1 + 0x94) = 1
*(arg1 + 0x6d) = 0x101
arg1[0x13].d = 1
int32_t result = rax_3 * 0x1e + rcx_2
*(arg1 + 0x24) = result
return result

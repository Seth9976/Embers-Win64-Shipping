// 函数: sub_1418f2510
// 地址: 0x1418f2510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142ff18d0
arg1[2] = arg11
int32_t rsi = 1
arg1[4].d = arg5
*(arg1 + 0x24) = arg6
arg1[5].d = arg7
arg1[6].d = arg12
arg1[0xa].d = arg8
arg1[3] = 0
*(arg1 + 0x2c) = arg4
*(arg1 + 0x34) = 1
*(arg1 + 0x54) = 0x7fffffff
arg1[0xb].d = arg3
*(arg1 + 0x5c) = 0
arg1[0xc] = 0
int64_t rdi = sx.q(*(arg1 + 0x2c))
int32_t rdx = arg1[6].d
arg1[0xd].d = arg9
*(arg1 + 0x6c) = arg10
arg1[0xe] = 0
arg1[3].d = (&data_1439c85fc)[rdi * 0xa]
int32_t rcx_2 = rdi.d
*(arg1 + 0x1c) = sub_1418f0050(rdi.d, (rdx u>> 4).b & 1)
int32_t rax_10

if (rcx_2 == 0xb)
    rax_10 = 6
else if (rcx_2 == 0xc || rcx_2 == 0x14)
    rax_10 = 2
else if (rcx_2 == 0x2c)
    rax_10 = 4
else
    rax_10 = 1

arg1[0xe].d = rax_10

if (rdi.d == 0xb || rdi.d == 0xc || rdi.d == 0x14)
    rsi = 2
else if (rdi.d == 0x2c)
    rsi = rdi.d - 0x28

bool cond:1 = (arg1[6].d & 0x20000) == 0
*(arg1 + 0x74) = rsi

if (not(cond:1))
    int32_t rax_11 = *(arg1 + 0x54)
    
    if (rax_11 == 0x7fffffff)
        rax_11 = 0
    
    *(arg1 + 0x54) = rax_11

if (arg1[2] != 0)
    int64_t var_18
    sub_140a2e390(&var_18, u"(FVulkanSurface*)0x%p", arg1)
    arg1[2]
    int64_t rcx_8 = var_18
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int32_t rax_12 = arg1[6].d
    
    if ((rax_12.b & 5) != 0)
        sub_1418fb870(arg1, *(arg2 + 0x1a50), arg13 + 0x10, (rax_12 u>> 0x11).b & 1)

return arg1

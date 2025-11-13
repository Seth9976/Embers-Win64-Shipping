// 函数: sub_142a98d60
// 地址: 0x142a98d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2

if (arg2 + 1 u<= 1 || *(*(arg1 + 0x148) + 0x10) == 0)
    return zx.q(arg2)

int64_t* rcx = *(arg1 + 0x150)
int64_t rdx = *(arg1 + 0x158)
int32_t arg_10 = 0
*(arg1 + 0x158) = 0
int64_t rax_3 = (*(*rcx + 0x28))(rcx, rdx, &arg_10)
int32_t* rcx_1 = *(arg1 + 0x158)

if (rcx_1 != 0)
    arg3 = sub_142aea470(rcx_1)

bool cond:0 = arg_10 s<= 0
*(arg1 + 0x158) = rax_3

if (not(cond:0))
    return 0xffffffff

while (i != 0)
    int32_t rax_5
    rax_5, arg3 = sub_142a98190(arg1, i, arg3)
    
    if (rax_5 != 1)
        break
    
    int64_t* rcx_3 = *(arg1 + 0x150)
    int32_t i_1 = (*(*rcx_3 + 0x58))(rcx_3)
    i = i_1
    
    if (i_1 == 0xffffffff)
        break

return zx.q(i)

// 函数: sub_142c6a580
// 地址: 0x142c6a580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 1

if (*(arg2 + 0x20) == -1)
    int32_t rax_1
    rax_1.b = *(arg2 + 0x28) u< 0xffffffff
    
    if (rax_1 == 0)
        int64_t rcx = *(arg2 + 0x10)
        
        if (rcx == arg2)
            return 3
        
        *(*(arg2 + 0x18) + 0x10) = rcx
        *(*(arg2 + 0x10) + 0x18) = *(arg2 + 0x18)
        *(arg2 + 0x10) = arg2
        *arg3 = arg1
        return 0

int128_t var_18 = *(arg2 + 0x20)
int64_t* rax_6 = sub_142c6a240(&var_18, arg1)

if (rax_6 != arg2)
    return 2

int64_t* rdx_1 = rax_6[2]

if (rdx_1 != rax_6)
    *(rdx_1 + 0x20) = *(rax_6 + 0x20)
    rdx_1[1] = rax_6[1]
    *rdx_1 = *rax_6
    rdx_1[3] = rax_6[3]
    *(rax_6[3] + 0x10) = rdx_1
    *arg3 = rdx_1
    return 0

int64_t* rdx_2 = *rax_6

if (rdx_2 == 0)
    *arg3 = rax_6[1]
    return 0

var_18 = *(arg2 + 0x20)
int64_t* rax_14 = sub_142c6a240(&var_18, rdx_2)
rax_14[1] = rax_6[1]
*arg3 = rax_14
return 0

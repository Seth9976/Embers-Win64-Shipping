// 函数: sub_142c5f360
// 地址: 0x142c5f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
sub_142c6f300(rdi, 3)

if ((*(arg1[0x87] + 0x80) & 0x10) != 0)
    *arg2 = 1
    return 0

*arg2 = 0
*(arg1 + 0x40a) = 0

if (*(rdi + 0x740) != 0)
    data_143ccb8a0(arg1[0x8d])
    arg1[0x8d] = 0
    int64_t rax_2
    rax_2, arg3 = sub_142c563e0("User-Agent: %s\r\n", *(rdi + 0x740), arg3)
    arg1[0x8d] = rax_2
    
    if (rax_2 == 0)
        return 0x1b

*(rdi + 0x108) = 0
uint64_t var_18[0x2]
*(arg1 + 0x218) = *sub_142c59600(&var_18)

if (arg1[0x47] != -1)
    sub_142c6f300(rdi, 4)
    sub_142c6f300(rdi, 5)
    *(arg1 + 0x3fd) = 1
    *arg2 = 1
    sub_142c65ed0(arg1, arg1[0x47], arg3)
    sub_142c5f4c0(arg1)
else
    *(arg1 + 0x3fd) = 0
    int32_t result = sub_142c65390(arg1, arg1[0xd], arg3)
    
    if (result != 0)
        return result

*(arg1 + 0x218) = *sub_142c59600(&var_18)
return 0

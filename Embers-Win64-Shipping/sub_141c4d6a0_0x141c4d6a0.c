// 函数: sub_141c4d6a0
// 地址: 0x141c4d6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x20)
int64_t* result = arg1
arg1[6] = 0
arg1[7] = 0

if (*arg1 != u"Unknown")
    arg1[1].d = 0
    sub_1405947f0(arg1, 8)
    int32_t rax_1 = result[1].d + 8
    result[1].d = rax_1
    
    if (rax_1 s> *(result + 0xc))
        sub_140594770(result)
    
    **result = *u"Unknown"

if (result[2] != u"Unknown")
    int32_t rdx_2 = 0
    result[3].d = 0
    
    if (*(result + 0x1c) != 8)
        sub_1405947f0(&result[2], 8)
        rdx_2 = result[3].d
    
    result[3].d = rdx_2 + 8
    
    if (rdx_2 + 8 s> *(result + 0x1c))
        sub_140594770(&result[2])
    
    *result[2] = *u"Unknown"

result[4] = 0
result[5].d = 0
result[7].d = 0

if (*(result + 0x3c) s<= 0xffffffff)
    sub_1405dadb0(&result[6], 0)

result[8].b &= 0xfe
return result

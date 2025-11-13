// 函数: sub_142924d80
// 地址: 0x142924d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t arg_8 = 0x10
void* const r9_1

if (arg2 u<= arg3 + 0xf)
    r9_1 = nullptr

if (arg2 u> arg3 + 0xf || arg2 + 0xf u< arg3)
    *arg2 ^= *arg3
    r9_1 = 0x10

if (r9_1 u< 0x10)
    void* rax_1 = r9_1 + arg2
    void* i_1 = 0x10 - r9_1
    void* i
    
    do
        *rax_1 ^= *(arg3 - arg2 + rax_1)
        rax_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if (sub_1428927c0(*(arg1 + 8), arg2, &arg_8, arg2, 0x10) != 0 && arg_8 == 0x10)
    return 1

return 0

// 函数: sub_141b92950
// 地址: 0x141b92950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rax = (*(*(arg1 + 0x218) + 0x48))(arg1 + 0x218)

if (rax == 0)
    return 

int64_t r8_1 = *(arg1 + 0x218)
int32_t rax_2 = (*(r8_1 + 0x50))(arg1 + 0x218, arg3, r8_1)
int64_t arg_10 = arg2
int64_t rax_3 = sub_141bca720(rax, &arg_10)
rax[0xec].b = 1
rax[0xdd] = rax_3
rax[0xde].d = rax_2
sub_140f89930(rax)

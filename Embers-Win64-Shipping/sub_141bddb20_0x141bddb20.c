// 函数: sub_141bddb20
// 地址: 0x141bddb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x2f0))
    return 

int64_t rsi_1 = (*(arg1 + 0x2e8))[sx.q(arg2)]

if (rsi_1 == 0)
    return 

int64_t* rax = (*(*(arg1 + 0x218) + 0x48))(arg1 + 0x218)

if (rax == 0)
    return 

int64_t rdx_1 = *(arg1 + 0x218)
int32_t rax_2 = (*(rdx_1 + 0x50))(arg1 + 0x218, rdx_1)
rax[0xdd] = rsi_1
rax[0xde].d = rax_2
sub_140f89930(rax)

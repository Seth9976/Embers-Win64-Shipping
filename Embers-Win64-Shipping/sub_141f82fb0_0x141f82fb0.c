// 函数: sub_141f82fb0
// 地址: 0x141f82fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg1[0x49]

if (arg2 == rsi)
    return 

int32_t rcx
rcx.b = (rsi u>> 0x20).d == 0

if ((rcx.b & sub_140b5b8a0(rsi.d, 0x145)) != 0)
    (*(*arg1 + 0x758))(arg1)

arg1[0x49] = arg2
int32_t rcx_2
rcx_2.b = (arg2 u>> 0x20).d == 0

if ((rcx_2.b & sub_140b5b8a0(arg2.d, 0x145)) != 0)
    (*(*arg1 + 0x750))(arg1)

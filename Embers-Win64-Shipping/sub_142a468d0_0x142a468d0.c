// 函数: sub_142a468d0
// 地址: 0x142a468d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 

char* rax_1 = strchr(*(arg1 + 0x28), 0x40)
char* rax_2 = strchr(*(arg1 + 0x28), 0x3d)

if (rax_1 == 0 || rax_2 == 0 || rax_1 u>= rax_2)
    *(arg1 + 0xd0) = *(arg1 + 0x28)
    return 

int32_t _Count_1 = rax_1.d - *(arg1 + 0x28)
char* _Destination = sub_142a7dd00(sx.q(_Count_1 + 1))
*(arg1 + 0xd0) = _Destination

if (_Destination == 0)
    *arg2 = 7
    return 

int64_t _Count = sx.q(_Count_1)
strncpy(_Destination, *(arg1 + 0x28), _Count)
*(_Count + *(arg1 + 0xd0)) = 0

if (*(arg1 + 0x20) s> _Count_1)
    *(arg1 + 0x20) = _Count_1

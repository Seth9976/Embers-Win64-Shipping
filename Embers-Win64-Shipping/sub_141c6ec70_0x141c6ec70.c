// 函数: sub_141c6ec70
// 地址: 0x141c6ec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[8])
*(arg1 + 0x68) = *arg2
*(arg1 + 0x78) = arg2[1]
*(arg1 + 0x88) = arg2[2]
*(arg1 + 0x98) = arg2[3]
*(arg1 + 0xa8) = arg2[4]
sub_1423786e0(arg1)

if (arg1 != -0x40)
    LeaveCriticalSection(&arg1[8])

arg2[2].q
return sub_141c6dc40(arg1) __tailcall

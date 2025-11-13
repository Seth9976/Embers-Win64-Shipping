// 函数: sub_140b734c0
// 地址: 0x140b734c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HANDLE rcx_2 = *(arg1 + 0x48)

if (arg2 != 1)
    return ResumeThread(rcx_2) __tailcall

return SuspendThread(rcx_2) __tailcall

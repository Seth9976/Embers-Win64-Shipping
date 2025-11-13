// 函数: sub_140b72e30
// 地址: 0x140b72e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) = arg2
enum THREAD_PRIORITY rax = sub_140b73690(arg2)
return SetThreadPriority(*(arg1 + 0x48), rax) __tailcall

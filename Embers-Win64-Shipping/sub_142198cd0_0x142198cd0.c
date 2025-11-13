// 函数: sub_142198cd0
// 地址: 0x142198cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x43c) != 2)
    return 

if ((arg1[0x86].b & 1) == 0)
    int64_t rax_2 = *arg1
    *(arg1 + 0x43c) = 3
    jump(*(rax_2 + 0x270))

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

return sub_14221ef30(rax + 0x5f0, arg1) __tailcall

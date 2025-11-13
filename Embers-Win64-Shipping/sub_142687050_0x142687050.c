// 函数: sub_142687050
// 地址: 0x142687050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x4a8)

if (rax != 0)
    void* rcx = *(rax + 8)
    
    if (rcx != 0 && arg2 != 0)
        char r8 = (*(rcx + 0xa0)).b
        *arg4 = ((1 << (*(rcx + 0x9c)).b).d - 1) & (arg2 u>> r8).d
        uint32_t rax_2
        rax_2.b = 1
        *arg3 = ((1 << r8).d - 1) & arg2.d
        return rax_2

rax.b = 0
return rax

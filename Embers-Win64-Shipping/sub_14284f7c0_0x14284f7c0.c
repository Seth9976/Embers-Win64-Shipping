// 函数: sub_14284f7c0
// 地址: 0x14284f7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
void* rax = *(arg1 + 0xa8)

if (rax != 0)
    rax = *(rax + 0x3e0)
    *arg2 = rax
    
    if (rax != 0)
        void* rax_1 = *(arg1 + 0xa8)
        *arg3 = *(rax_1 + 0x3e8)
        return rax_1

*arg3 = 0
return rax

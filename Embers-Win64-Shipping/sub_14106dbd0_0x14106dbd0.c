// 函数: sub_14106dbd0
// 地址: 0x14106dbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = arg2

if (arg2 != 0)
    uint64_t rax = sub_140a846a0(arg2 << 4, 0) u>> 4
    
    if (rbx s> rax)
        rax = 0x7fffffffffffffff
    
    rbx = rax

if (rbx s<= arg3)
    arg1[2] = arg3
    return 

uint64_t rcx_2 = *arg1

if (rcx_2 != 0 || rbx != 0)
    *arg1 = sub_140a84c80(rcx_2, rbx << 4, 0)

arg1[2] = rbx

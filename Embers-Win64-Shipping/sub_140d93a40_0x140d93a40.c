// 函数: sub_140d93a40
// 地址: 0x140d93a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = 0
*(arg1 + 0x10) = *arg5
*(arg1 + 0x20) = arg5[1]
arg1[6] = 0
arg1[7] = 0
arg1[8] = *arg4
arg1[9].d = arg3
*(arg1 + 0x4c) = 3

if (arg2 != 0)
    void* rax_3 = sub_140d21950(arg2, sub_140e28110())
    
    if (rax_3 != 0)
        int64_t rdx_1 = *rax_3
        (*(rdx_1 + 0x10))(rax_3, rdx_1)

return arg1

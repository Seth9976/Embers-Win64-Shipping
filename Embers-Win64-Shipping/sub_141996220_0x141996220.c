// 函数: sub_141996220
// 地址: 0x141996220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)

if (rbp s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rbx_1 = *(*arg1 + (rsi_1 << 3))
        *(rbx_1 + 0x18) = 0
        sub_1405d16e0(rbx_1 + 8, nullptr)
        sub_1405d16e0(rbx_1 + 0x10, nullptr)
        rsi_1 += 1
    while (rsi_1 s< rbp)

DeleteCriticalSection(&arg1[3])
sub_140dde9c0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1

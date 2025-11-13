// 函数: sub_141ed8300
// 地址: 0x141ed8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = sub_141f34810(arg1)

if ((*(arg1 + 0x8a) & 1) != 0)
    int64_t* rcx = arg1[0x3e]
    
    if (rcx != 0 && sub_14236bbe0(rcx, zmm0) != 0)
        (*(*arg1 + 0x538))(arg1)

EnterCriticalSection(&data_143f3a990)
sub_1407c23d0(&data_143a2d6f0, arg1[0xe8])
return LeaveCriticalSection(&data_143f3a990) __tailcall

// 函数: sub_14125d090
// 地址: 0x14125d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f51e48
DeleteCriticalSection(&arg1[5])
int32_t i_1 = arg1[4].d
void* rcx_1 = arg1[3]

if (i_1 != 0)
    int64_t* rbx_1 = rcx_1 + 8
    int32_t i
    
    do
        sub_1405d1550(rbx_1)
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_1 = arg1[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return sub_1419948a0(arg1) __tailcall

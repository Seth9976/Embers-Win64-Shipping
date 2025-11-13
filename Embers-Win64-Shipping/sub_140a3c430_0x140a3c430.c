// 函数: sub_140a3c430
// 地址: 0x140a3c430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d250
int64_t* rcx = arg1[0x11]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)

sub_140a4fc50(arg1[0x10])
DeleteCriticalSection(&arg1[9])
DeleteCriticalSection(&arg1[2])
*arg1 = &data_142d565e8
return &data_142d565e8

// 函数: sub_140b509c0
// 地址: 0x140b509c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b508e0()
AcquireSRWLockShared(&data_143de8578)

if (data_143de8f98 == data_143de8fbc)
    sub_140b4c5b0(arg1, &data_143de8580)
    ReleaseSRWLockShared(&data_143de8578)
    return arg1

ReleaseSRWLockShared(&data_143de8578)
AcquireSRWLockExclusive(&data_143de8578)
sub_140b51e40(&data_143de8578)
sub_140b4c5b0(arg1, &data_143de8580)
ReleaseSRWLockExclusive(&data_143de8578)
return arg1

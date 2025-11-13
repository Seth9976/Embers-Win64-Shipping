// 函数: sub_141987030
// 地址: 0x141987030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141976740() == 0)
    return 0

AcquireSRWLockExclusive(&data_143f01fc8)
int64_t result = data_143f0f158
int64_t (* rdx)(int64_t arg1, int64_t arg2) = sub_14195b800
data_143f0f158 = arg1

if (arg2 != 0)
    rdx = arg2

data_1439c79f8 = rdx
ReleaseSRWLockExclusive(&data_143f01fc8)
return result

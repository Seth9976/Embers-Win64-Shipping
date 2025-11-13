// 函数: sub_142cc2d10
// 地址: 0x142cc2d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_1439aabd0 = &data_142ead7f8
AcquireSRWLockExclusive(&data_1439aabe8)
bool cond:0 = data_1439aabe0 s> 0
data_1439aabe0 = 0
int64_t rbx
rbx.b = cond:0

if (data_1439aabe4 != 0)
    sub_1405dadb0(&data_1439aabd8, 0)

if (rbx.b != 0)
    sub_140d2af80(&data_143e1d990, &data_1439aabd0)

ReleaseSRWLockExclusive(&data_1439aabe8)
int64_t rcx = data_1439aabd8

if (rcx != 0)
    sub_140a74f90(rcx)

data_1439aabd0 = &data_142d56fa0
return &data_142d56fa0

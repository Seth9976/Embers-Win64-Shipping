// 函数: sub_142cc3760
// 地址: 0x142cc3760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_1439aade0 = &data_142eb1080
AcquireSRWLockExclusive(&data_1439aae08)
void* i = data_1439aade8

for (void* rdi_2 = (sx.q(data_1439aadf0) << 4) + i; i != rdi_2; i += 0x10)
    j_sub_140a74f90(*(i + 8))

bool cond:0 = data_1439aadf4 == 0
data_1439aadf0 = 0

if (not(cond:0))
    sub_1405a5410(&data_1439aade8, 0)

data_1439aadf8 = 0
data_1439aae00 = 0
ReleaseSRWLockExclusive(&data_1439aae08)
int64_t rcx_2 = data_1439aade8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

data_1439aade0 = &data_142d56fa0
return &data_142d56fa0

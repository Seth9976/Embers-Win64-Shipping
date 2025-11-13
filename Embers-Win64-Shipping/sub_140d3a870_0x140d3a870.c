// 函数: sub_140d3a870
// 地址: 0x140d3a870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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
return ReleaseSRWLockExclusive(&data_1439aae08) __tailcall

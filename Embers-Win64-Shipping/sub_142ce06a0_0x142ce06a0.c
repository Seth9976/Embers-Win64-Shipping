// 函数: sub_142ce06a0
// 地址: 0x142ce06a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439b6c90
data_1439b6c98 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439b6c5c == 0
data_1439b6c58 = 0

if (not(cond:0))
    sub_1405a5410(&data_1439b6c50, 0)

data_1439b6c80 = 0xffffffff
data_1439b6c84 = 0
void* result = sub_14059a8e0(&data_1439b6c60, 0)
int64_t rcx_1 = data_1439b6c70

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439b6c50

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

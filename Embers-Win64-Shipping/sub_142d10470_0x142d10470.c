// 函数: sub_142d10470
// 地址: 0x142d10470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143a303f0
data_143a303f8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143a303bc == 0
data_143a303b8 = 0

if (not(cond:0))
    sub_1405a5410(&data_143a303b0, 0)

data_143a303e0 = 0xffffffff
data_143a303e4 = 0
void* result = sub_14059a8e0(&data_143a303c0, 0)
int64_t rcx_1 = data_143a303d0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143a303b0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

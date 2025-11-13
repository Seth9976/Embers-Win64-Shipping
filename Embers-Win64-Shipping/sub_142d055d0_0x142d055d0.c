// 函数: sub_142d055d0
// 地址: 0x142d055d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143a2e8b0
data_143a2e8b8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143a2e87c == 0
data_143a2e878 = 0

if (not(cond:0))
    sub_1405a5410(&data_143a2e870, 0)

data_143a2e8a0 = 0xffffffff
data_143a2e8a4 = 0
void* result = sub_14059a8e0(&data_143a2e880, 0)
int64_t rcx_1 = data_143a2e890

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143a2e870

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142d05360
// 地址: 0x142d05360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143a2e800
data_143a2e808 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143a2e7cc == 0
data_143a2e7c8 = 0

if (not(cond:0))
    sub_1405a51b0(&data_143a2e7c0, 0)

data_143a2e7f0 = 0xffffffff
data_143a2e7f4 = 0
void* result = sub_14059a8e0(&data_143a2e7d0, 0)
int64_t rcx_1 = data_143a2e7e0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143a2e7c0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

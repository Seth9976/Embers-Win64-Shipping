// 函数: sub_142d10ea0
// 地址: 0x142d10ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143a30610
data_143a30618 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143a305dc == 0
data_143a305d8 = 0

if (not(cond:0))
    sub_1405c55e0(&data_143a305d0, 0)

data_143a30600 = 0xffffffff
data_143a30604 = 0
void* result = sub_14059a8e0(&data_143a305e0, 0)
int64_t rcx_1 = data_143a305f0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143a305d0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

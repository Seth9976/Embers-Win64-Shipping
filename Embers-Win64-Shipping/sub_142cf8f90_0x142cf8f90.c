// 函数: sub_142cf8f90
// 地址: 0x142cf8f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143a2d040
data_143a2d048 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143a2d00c == 0
data_143a2d008 = 0

if (not(cond:0))
    sub_1405a5310(&data_143a2d000, 0)

data_143a2d030 = 0xffffffff
data_143a2d034 = 0
void* result = sub_14059a8e0(&data_143a2d010, 0)
int64_t rcx_1 = data_143a2d020

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143a2d000

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

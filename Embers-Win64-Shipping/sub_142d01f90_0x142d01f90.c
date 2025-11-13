// 函数: sub_142d01f90
// 地址: 0x142d01f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143a2e480
data_143a2e488 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143a2e44c == 0
data_143a2e448 = 0

if (not(cond:0))
    sub_1405a5130(&data_143a2e440, 0)

data_143a2e470 = 0xffffffff
data_143a2e474 = 0
void* result = sub_14059a8e0(&data_143a2e450, 0)
int64_t rcx_1 = data_143a2e460

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143a2e440

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

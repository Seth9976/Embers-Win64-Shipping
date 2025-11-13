// 函数: sub_142cfc980
// 地址: 0x142cfc980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143a2d800
data_143a2d808 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143a2d7cc == 0
data_143a2d7c8 = 0

if (not(cond:0))
    sub_1405a5130(&data_143a2d7c0, 0)

data_143a2d7f0 = 0xffffffff
data_143a2d7f4 = 0
void* result = sub_14059a8e0(&data_143a2d7d0, 0)
int64_t rcx_1 = data_143a2d7e0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143a2d7c0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

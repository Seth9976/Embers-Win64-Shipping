// 函数: sub_142cfdaf0
// 地址: 0x142cfdaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143a2dc10
data_143a2dc18 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143a2dbdc == 0
data_143a2dbd8 = 0

if (not(cond:0))
    sub_1405a5130(&data_143a2dbd0, 0)

data_143a2dc00 = 0xffffffff
data_143a2dc04 = 0
void* result = sub_14059a8e0(&data_143a2dbe0, 0)
int64_t rcx_1 = data_143a2dbf0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143a2dbd0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

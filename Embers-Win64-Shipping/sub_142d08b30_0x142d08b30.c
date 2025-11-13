// 函数: sub_142d08b30
// 地址: 0x142d08b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143a2f26c == 0
data_143a2f268 = 0

if (not(cond:0))
    sub_1405a5130(&data_143a2f260, 0)

data_143a2f290 = 0xffffffff
data_143a2f294 = 0
void* result = sub_14059a8e0(&data_143a2f270, 0)
int64_t rcx = data_143a2f280

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t rcx_1 = data_143a2f260

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1) __tailcall

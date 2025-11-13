// 函数: sub_142cba050
// 地址: 0x142cba050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143990e90
data_143990e98 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143990e5c == 0
data_143990e58 = 0

if (not(cond:0))
    sub_140638cc0(&data_143990e50, 0)

data_143990e80 = 0xffffffff
data_143990e84 = 0
void* result = sub_14059a8e0(&data_143990e60, 0)
int64_t rcx_1 = data_143990e70

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143990e50

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

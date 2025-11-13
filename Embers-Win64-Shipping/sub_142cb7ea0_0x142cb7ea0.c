// 函数: sub_142cb7ea0
// 地址: 0x142cb7ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143cee1b0
data_143cee1b8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143cee17c == 0
data_143cee178 = 0

if (not(cond:0))
    sub_140638cc0(&data_143cee170, 0)

data_143cee1a0 = 0xffffffff
data_143cee1a4 = 0
void* result = sub_14059a8e0(&data_143cee180, 0)
int64_t rcx_1 = data_143cee190

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143cee170

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

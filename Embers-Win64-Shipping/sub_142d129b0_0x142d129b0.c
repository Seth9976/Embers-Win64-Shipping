// 函数: sub_142d129b0
// 地址: 0x142d129b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143b581a0
data_143b581a8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143b5816c == 0
data_143b58168 = 0

if (not(cond:0))
    sub_1405a5130(&data_143b58160, 0)

data_143b58190 = 0xffffffff
data_143b58194 = 0
void* result = sub_14059a8e0(&data_143b58170, 0)
int64_t rcx_1 = data_143b58180

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143b58160

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142d01df0
// 地址: 0x142d01df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(&data_143f479b8)
bool cond:0 = data_143f47988:4.d == 0
data_143f47988.d = 0

if (not(cond:0))
    sub_1405c5570(&data_143f47980, 0)

data_143f479b0 = 0xffffffff
data_143f479b4 = 0
void* result = sub_14059a8e0(&data_143f47990, 0)
int64_t rcx = data_143f479a0

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t rcx_1 = data_143f47980

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1) __tailcall

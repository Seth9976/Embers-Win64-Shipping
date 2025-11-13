// 函数: sub_142cf0070
// 地址: 0x142cf0070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439c7f70
data_1439c7f78 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439c7f3c == 0
data_1439c7f38 = 0

if (not(cond:0))
    sub_1405a52a0(&data_1439c7f30, 0)

data_1439c7f60 = 0xffffffff
data_1439c7f64 = 0
void* result = sub_14059a8e0(&data_1439c7f40, 0)
int64_t rcx_1 = data_1439c7f50

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439c7f30

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

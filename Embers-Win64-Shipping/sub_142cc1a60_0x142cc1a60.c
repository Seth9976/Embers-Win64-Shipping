// 函数: sub_142cc1a60
// 地址: 0x142cc1a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_1439a9a5c == 0
data_1439a9a58 = 0

if (not(cond:0))
    sub_1405a5410(&data_1439a9a50, 0)

data_1439a9a80 = 0xffffffff
data_1439a9a84 = 0
void* result = sub_14059a8e0(&data_1439a9a60, 0)
int64_t rcx = data_1439a9a70

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t rcx_1 = data_1439a9a50

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1) __tailcall

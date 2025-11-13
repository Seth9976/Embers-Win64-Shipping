// 函数: sub_142cc1760
// 地址: 0x142cc1760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439a9840
data_1439a9848 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439a980c == 0
data_1439a9808 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439a9800, 0)

data_1439a9830 = 0xffffffff
data_1439a9834 = 0
void* result = sub_14059a8e0(&data_1439a9810, 0)
int64_t rcx_1 = data_1439a9820

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439a9800

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

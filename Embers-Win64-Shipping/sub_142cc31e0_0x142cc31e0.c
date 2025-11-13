// 函数: sub_142cc31e0
// 地址: 0x142cc31e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439aac80
data_1439aac88 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439aac4c == 0
data_1439aac48 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439aac40, 0)

data_1439aac70 = 0xffffffff
data_1439aac74 = 0
void* result = sub_14059a8e0(&data_1439aac50, 0)
int64_t rcx_1 = data_1439aac60

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439aac40

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

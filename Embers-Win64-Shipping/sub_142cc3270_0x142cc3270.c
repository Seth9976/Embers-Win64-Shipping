// 函数: sub_142cc3270
// 地址: 0x142cc3270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439aac30
data_1439aac38 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439aabfc == 0
data_1439aabf8 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439aabf0, 0)

data_1439aac20 = 0xffffffff
data_1439aac24 = 0
void* result = sub_14059a8e0(&data_1439aac00, 0)
int64_t rcx_1 = data_1439aac10

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439aabf0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142cc35f0
// 地址: 0x142cc35f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439aadd0
data_1439aadd8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439aad9c == 0
data_1439aad98 = 0

if (not(cond:0))
    sub_1405a5410(&data_1439aad90, 0)

data_1439aadc0 = 0xffffffff
data_1439aadc4 = 0
void* result = sub_14059a8e0(&data_1439aada0, 0)
int64_t rcx_1 = data_1439aadb0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439aad90

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

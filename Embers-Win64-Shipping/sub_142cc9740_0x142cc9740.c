// 函数: sub_142cc9740
// 地址: 0x142cc9740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439ae490
data_1439ae498 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439ae45c == 0
data_1439ae458 = 0

if (not(cond:0))
    sub_1405a5410(&data_1439ae450, 0)

data_1439ae480 = 0xffffffff
data_1439ae484 = 0
void* result = sub_14059a8e0(&data_1439ae460, 0)
int64_t rcx_1 = data_1439ae470

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439ae450

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

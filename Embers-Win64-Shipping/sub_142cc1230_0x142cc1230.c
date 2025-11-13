// 函数: sub_142cc1230
// 地址: 0x142cc1230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439a96d0
data_1439a96d8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439a969c == 0
data_1439a9698 = 0

if (not(cond:0))
    sub_1405a5410(&data_1439a9690, 0)

data_1439a96c0 = 0xffffffff
data_1439a96c4 = 0
void* result = sub_14059a8e0(&data_1439a96a0, 0)
int64_t rcx_1 = data_1439a96b0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439a9690

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

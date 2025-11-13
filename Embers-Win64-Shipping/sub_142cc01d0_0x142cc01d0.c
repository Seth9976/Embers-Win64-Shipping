// 函数: sub_142cc01d0
// 地址: 0x142cc01d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439a9340
data_1439a9348 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439a930c == 0
data_1439a9308 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439a9300, 0)

data_1439a9330 = 0xffffffff
data_1439a9334 = 0
void* result = sub_14059a8e0(&data_1439a9310, 0)
int64_t rcx_1 = data_1439a9320

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439a9300

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

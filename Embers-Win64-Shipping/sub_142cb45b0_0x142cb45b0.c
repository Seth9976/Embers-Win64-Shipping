// 函数: sub_142cb45b0
// 地址: 0x142cb45b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_14396f200
data_14396f208 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_14396f1cc == 0
data_14396f1c8 = 0

if (not(cond:0))
    sub_1405a5410(&data_14396f1c0, 0)

data_14396f1f0 = 0xffffffff
data_14396f1f4 = 0
void* result = sub_14059a8e0(&data_14396f1d0, 0)
int64_t rcx_1 = data_14396f1e0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_14396f1c0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

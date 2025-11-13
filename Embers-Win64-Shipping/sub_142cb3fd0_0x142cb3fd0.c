// 函数: sub_142cb3fd0
// 地址: 0x142cb3fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_14396f2a0
data_14396f2a8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_14396f26c == 0
data_14396f268 = 0

if (not(cond:0))
    sub_1405a5410(&data_14396f260, 0)

data_14396f290 = 0xffffffff
data_14396f294 = 0
void* result = sub_14059a8e0(&data_14396f270, 0)
int64_t rcx_1 = data_14396f280

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_14396f260

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

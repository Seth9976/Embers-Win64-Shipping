// 函数: sub_142cb3f40
// 地址: 0x142cb3f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_14396f250
data_14396f258 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_14396f21c == 0
data_14396f218 = 0

if (not(cond:0))
    sub_1405a5410(&data_14396f210, 0)

data_14396f240 = 0xffffffff
data_14396f244 = 0
void* result = sub_14059a8e0(&data_14396f220, 0)
int64_t rcx_1 = data_14396f230

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_14396f210

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

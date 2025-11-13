// 函数: sub_142cba1b0
// 地址: 0x142cba1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439910c0
data_1439910c8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_14399108c == 0
data_143991088 = 0

if (not(cond:0))
    sub_140638cc0(&data_143991080, 0)

data_1439910b0 = 0xffffffff
data_1439910b4 = 0
void* result = sub_14059a8e0(&data_143991090, 0)
int64_t rcx_1 = data_1439910a0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143991080

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142ccb3f0
// 地址: 0x142ccb3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439b3940
data_1439b3948 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439b390c == 0
data_1439b3908 = 0

if (not(cond:0))
    sub_1406106e0(&data_1439b3900, 0)

data_1439b3930 = 0xffffffff
data_1439b3934 = 0
void* result = sub_14059a8e0(&data_1439b3910, 0)
int64_t rcx_1 = data_1439b3920

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439b3900

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

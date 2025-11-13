// 函数: sub_142cb7930
// 地址: 0x142cb7930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439911b0
data_1439911b8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_14399117c == 0
data_143991178 = 0

if (not(cond:0))
    sub_1405a5390(&data_143991170, 0)

data_1439911a0 = 0xffffffff
data_1439911a4 = 0
void* result = sub_14059a8e0(&data_143991180, 0)
int64_t rcx_1 = data_143991190

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143991170

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

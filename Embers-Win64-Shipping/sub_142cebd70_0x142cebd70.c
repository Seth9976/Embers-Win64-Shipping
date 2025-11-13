// 函数: sub_142cebd70
// 地址: 0x142cebd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143efa070
data_143efa078 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143efa03c == 0
data_143efa038 = 0

if (not(cond:0))
    sub_1405a5410(&data_143efa030, 0)

data_143efa060 = 0xffffffff
data_143efa064 = 0
void* result = sub_14059a8e0(&data_143efa040, 0)
int64_t rcx_1 = data_143efa050

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143efa030

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

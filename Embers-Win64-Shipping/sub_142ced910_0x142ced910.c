// 函数: sub_142ced910
// 地址: 0x142ced910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439c73a0
data_1439c73a8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439c736c == 0
data_1439c7368 = 0

if (not(cond:0))
    sub_1405a51b0(&data_1439c7360, 0)

data_1439c7390 = 0xffffffff
data_1439c7394 = 0
void* result = sub_14059a8e0(&data_1439c7370, 0)
int64_t rcx_1 = data_1439c7380

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439c7360

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

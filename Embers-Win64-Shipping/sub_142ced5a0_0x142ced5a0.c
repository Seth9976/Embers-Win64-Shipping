// 函数: sub_142ced5a0
// 地址: 0x142ced5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439c7340
data_1439c7348 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439c730c == 0
data_1439c7308 = 0

if (not(cond:0))
    sub_140638cc0(&data_1439c7300, 0)

data_1439c7330 = 0xffffffff
data_1439c7334 = 0
void* result = sub_14059a8e0(&data_1439c7310, 0)
int64_t rcx_1 = data_1439c7320

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439c7300

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

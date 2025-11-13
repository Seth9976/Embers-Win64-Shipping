// 函数: sub_142cf3930
// 地址: 0x142cf3930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439cc0c0
data_1439cc0c8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439cc08c == 0
data_1439cc088 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439cc080, 0)

data_1439cc0b0 = 0xffffffff
data_1439cc0b4 = 0
void* result = sub_14059a8e0(&data_1439cc090, 0)
int64_t rcx_1 = data_1439cc0a0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439cc080

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

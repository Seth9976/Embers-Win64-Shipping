// 函数: sub_142cf4650
// 地址: 0x142cf4650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439cc070
data_1439cc078 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439cc03c == 0
data_1439cc038 = 0

if (not(cond:0))
    sub_1405c5660(&data_1439cc030, 0)

data_1439cc060 = 0xffffffff
data_1439cc064 = 0
void* result = sub_14059a8e0(&data_1439cc040, 0)
int64_t rcx_1 = data_1439cc050

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439cc030

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

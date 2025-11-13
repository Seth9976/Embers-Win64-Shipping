// 函数: sub_142cb5980
// 地址: 0x142cb5980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_14396ffb0
data_14396ffb8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_14396ff7c == 0
data_14396ff78 = 0

if (not(cond:0))
    sub_1405a5130(&data_14396ff70, 0)

data_14396ffa0 = 0xffffffff
data_14396ffa4 = 0
void* result = sub_14059a8e0(&data_14396ff80, 0)
int64_t rcx_1 = data_14396ff90

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_14396ff70

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

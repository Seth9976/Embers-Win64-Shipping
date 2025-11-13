// 函数: sub_142cf44a0
// 地址: 0x142cf44a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439cc130
data_1439cc138 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439cc0fc == 0
data_1439cc0f8 = 0

if (not(cond:0))
    sub_141846c50(&data_1439cc0f0, 0)

data_1439cc120 = 0xffffffff
data_1439cc124 = 0
void* result = sub_14059a8e0(&data_1439cc100, 0)
int64_t rcx_1 = data_1439cc110

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439cc0f0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

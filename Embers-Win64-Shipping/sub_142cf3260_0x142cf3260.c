// 函数: sub_142cf3260
// 地址: 0x142cf3260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439c9710
data_1439c9718 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439c96dc == 0
data_1439c96d8 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439c96d0, 0)

data_1439c9700 = 0xffffffff
data_1439c9704 = 0
void* result = sub_14059a8e0(&data_1439c96e0, 0)
int64_t rcx_1 = data_1439c96f0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439c96d0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

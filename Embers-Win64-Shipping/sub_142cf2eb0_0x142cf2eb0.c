// 函数: sub_142cf2eb0
// 地址: 0x142cf2eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439c96c0
data_1439c96c8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439c968c == 0
data_1439c9688 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439c9680, 0)

data_1439c96b0 = 0xffffffff
data_1439c96b4 = 0
void* result = sub_14059a8e0(&data_1439c9690, 0)
int64_t rcx_1 = data_1439c96a0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439c9680

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

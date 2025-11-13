// 函数: sub_142cf35b0
// 地址: 0x142cf35b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439c9780
data_1439c9788 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439c974c == 0
data_1439c9748 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439c9740, 0)

data_1439c9770 = 0xffffffff
data_1439c9774 = 0
void* result = sub_14059a8e0(&data_1439c9750, 0)
int64_t rcx_1 = data_1439c9760

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439c9740

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

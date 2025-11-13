// 函数: sub_142cee540
// 地址: 0x142cee540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439c7570
data_1439c7578 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439c7538:4.d == 0
data_1439c7538.d = 0

if (not(cond:0))
    sub_1407c4490(&data_1439c7530, 0)

data_1439c7560 = 0xffffffff
data_1439c7564 = 0
void* result = sub_14059a8e0(&data_1439c7540, 0)
int64_t rcx_1 = data_1439c7550

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439c7530

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142cca540
// 地址: 0x142cca540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439ae750
data_1439ae758 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439ae71c == 0
data_1439ae718 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439ae710, 0)

data_1439ae740 = 0xffffffff
data_1439ae744 = 0
void* result = sub_14059a8e0(&data_1439ae720, 0)
int64_t rcx_1 = data_1439ae730

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439ae710

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

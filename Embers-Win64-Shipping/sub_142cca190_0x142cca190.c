// 函数: sub_142cca190
// 地址: 0x142cca190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439ae690
data_1439ae698 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439ae65c == 0
data_1439ae658 = 0

if (not(cond:0))
    sub_1405a5410(&data_1439ae650, 0)

data_1439ae680 = 0xffffffff
data_1439ae684 = 0
void* result = sub_14059a8e0(&data_1439ae660, 0)
int64_t rcx_1 = data_1439ae670

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439ae650

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142cf37e0
// 地址: 0x142cf37e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439cbf40
data_1439cbf48 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439cbf0c == 0
data_1439cbf08 = 0

if (not(cond:0))
    sub_1405a51b0(&data_1439cbf00, 0)

data_1439cbf30 = 0xffffffff
data_1439cbf34 = 0
void* result = sub_14059a8e0(&data_1439cbf10, 0)
int64_t rcx_1 = data_1439cbf20

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439cbf00

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

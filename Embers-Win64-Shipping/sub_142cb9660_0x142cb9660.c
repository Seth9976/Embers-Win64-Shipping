// 函数: sub_142cb9660
// 地址: 0x142cb9660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143cee750
data_143cee758 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143cee71c == 0
data_143cee718 = 0

if (not(cond:0))
    sub_140638cc0(&data_143cee710, 0)

data_143cee740 = 0xffffffff
data_143cee744 = 0
void* result = sub_14059a8e0(&data_143cee720, 0)
int64_t rcx_1 = data_143cee730

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143cee710

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

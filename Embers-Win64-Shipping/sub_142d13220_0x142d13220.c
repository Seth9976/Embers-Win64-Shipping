// 函数: sub_142d13220
// 地址: 0x142d13220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143b71668
data_143b71620 = &data_1434ab858
data_143b71670 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143b71634 == 0
data_143b71630 = 0

if (not(cond:0))
    sub_1405a5410(&data_143b71628, 0)

data_143b71658 = 0xffffffff
data_143b7165c = 0
void* result = sub_14059a8e0(&data_143b71638, 0)
int64_t rcx_1 = data_143b71648

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143b71628

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

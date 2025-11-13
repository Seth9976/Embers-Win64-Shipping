// 函数: sub_142cc33d0
// 地址: 0x142cc33d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143e1d880
data_143e1d888 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143e1d848:4.d == 0
data_143e1d848.d = 0

if (not(cond:0))
    sub_1405a51b0(&data_143e1d840, 0)

data_143e1d870 = 0xffffffff
data_143e1d874 = 0
void* result = sub_14059a8e0(&data_143e1d850, 0)
int64_t rcx_1 = data_143e1d860

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143e1d840

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

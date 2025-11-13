// 函数: sub_142d0f630
// 地址: 0x142d0f630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143f5a830
data_143f5a838 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143f5a7f8:4.d == 0
data_143f5a7f8.d = 0

if (not(cond:0))
    sub_1405a5410(&data_143f5a7f0, 0)

data_143f5a820 = 0xffffffff
data_143f5a824 = 0
sub_14059a8e0(&data_143f5a800, 0)
int64_t rcx_1 = data_143f5a810

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143f5a7f0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

DeleteCriticalSection(&data_143f5a7c8)
int64_t rcx_3 = data_143f5a7b8

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return DeleteCriticalSection(&data_143f5a790) __tailcall

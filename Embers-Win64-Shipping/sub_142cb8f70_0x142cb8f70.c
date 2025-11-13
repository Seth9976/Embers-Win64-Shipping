// 函数: sub_142cb8f70
// 地址: 0x142cb8f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143990fd0
data_143990fd8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143990f9c == 0
data_143990f98 = 0

if (not(cond:0))
    sub_1405a5410(&data_143990f90, 0)

data_143990fc0 = 0xffffffff
data_143990fc4 = 0
void* result = sub_14059a8e0(&data_143990fa0, 0)
int64_t rcx_1 = data_143990fb0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143990f90

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

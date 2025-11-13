// 函数: sub_142cb87a0
// 地址: 0x142cb87a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143990f80
data_143990f88 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143990f4c == 0
data_143990f48 = 0

if (not(cond:0))
    sub_140638cc0(&data_143990f40, 0)

data_143990f70 = 0xffffffff
data_143990f74 = 0
void* result = sub_14059a8e0(&data_143990f50, 0)
int64_t rcx_1 = data_143990f60

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143990f40

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142cb63b0
// 地址: 0x142cb63b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143984ea0
data_143984ea8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143984e6c == 0
data_143984e68 = 0

if (not(cond:0))
    sub_1405a5130(&data_143984e60, 0)

data_143984e90 = 0xffffffff
data_143984e94 = 0
void* result = sub_14059a8e0(&data_143984e70, 0)
int64_t rcx_1 = data_143984e80

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143984e60

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

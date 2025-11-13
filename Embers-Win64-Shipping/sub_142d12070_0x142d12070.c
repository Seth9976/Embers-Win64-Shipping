// 函数: sub_142d12070
// 地址: 0x142d12070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143b51580
data_143b51588 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143b5154c == 0
data_143b51548 = 0

if (not(cond:0))
    sub_1405a5130(&data_143b51540, 0)

data_143b51570 = 0xffffffff
data_143b51574 = 0
void* result = sub_14059a8e0(&data_143b51550, 0)
int64_t rcx_1 = data_143b51560

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143b51540

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142cb8690
// 地址: 0x142cb8690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143991160
data_143991168 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_14399112c == 0
data_143991128 = 0

if (not(cond:0))
    sub_140638cc0(&data_143991120, 0)

data_143991150 = 0xffffffff
data_143991154 = 0
void* result = sub_14059a8e0(&data_143991130, 0)
int64_t rcx_1 = data_143991140

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143991120

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

// 函数: sub_142cbe3a0
// 地址: 0x142cbe3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_14399fab0
data_14399fab8 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_14399fa7c == 0
data_14399fa78 = 0

if (not(cond:0))
    sub_1405a5130(&data_14399fa70, 0)

data_14399faa0 = 0xffffffff
data_14399faa4 = 0
void* result = sub_14059a8e0(&data_14399fa80, 0)
int64_t rcx_1 = data_14399fa90

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_14399fa70

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

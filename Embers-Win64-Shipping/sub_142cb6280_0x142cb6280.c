// 函数: sub_142cb6280
// 地址: 0x142cb6280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143983c00
data_143983c08 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_143983bcc == 0
data_143983bc8 = 0

if (not(cond:0))
    sub_1405a5130(&data_143983bc0, 0)

data_143983bf0 = 0xffffffff
data_143983bf4 = 0
void* result = sub_14059a8e0(&data_143983bd0, 0)
int64_t rcx_1 = data_143983be0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_143983bc0

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

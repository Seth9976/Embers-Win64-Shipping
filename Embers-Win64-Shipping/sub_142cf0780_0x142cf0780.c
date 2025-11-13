// 函数: sub_142cf0780
// 地址: 0x142cf0780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_1439c8280
data_1439c8288 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0 = data_1439c824c == 0
data_1439c8248 = 0

if (not(cond:0))
    sub_1405a5130(&data_1439c8240, 0)

data_1439c8270 = 0xffffffff
data_1439c8274 = 0
void* result = sub_14059a8e0(&data_1439c8250, 0)
int64_t rcx_1 = data_1439c8260

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = data_1439c8240

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall

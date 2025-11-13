// 函数: sub_140b70da0
// 地址: 0x140b70da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143e18668

if (rax != 0)
    return rax

SYSTEM_INFO systemInfo
GetSystemInfo(&systemInfo)
data_143e18668 = systemInfo.dwNumberOfProcessors
int32_t arg_8 = 0x8000
sub_140af2b60()

if (sub_140b2ab20(&data_143dbb3f0, u"-corelimit=", &arg_8) == 0)
    return data_143e18668

int32_t rax_3 = arg_8

if (data_143e18668 s<= rax_3)
    rax_3 = data_143e18668

data_143e18668 = rax_3
return rax_3

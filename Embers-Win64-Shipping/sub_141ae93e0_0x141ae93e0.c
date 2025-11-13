// 函数: sub_141ae93e0
// 地址: 0x141ae93e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg2[0x11]

if (rcx != 0)
    sub_140a74f90(rcx)

arg2[3] = &data_142d6a040
int64_t rcx_1 = arg2[0xe]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

void* result = sub_1405ae180(&arg2[4])
int64_t rcx_3 = *arg2

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)

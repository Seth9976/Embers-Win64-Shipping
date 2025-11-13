// 函数: sub_1423a62f0
// 地址: 0x1423a62f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x3c]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x3a]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x38]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

WTI::~WTI(&arg1[0x2c])
int64_t result = sub_1423a61c0(&arg1[2])
int64_t rcx_5 = *arg1

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall

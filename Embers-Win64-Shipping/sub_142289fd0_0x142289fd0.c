// 函数: sub_142289fd0
// 地址: 0x142289fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143312d88
int64_t result = sub_1405d1550(&arg1[0x28])
int64_t rcx_1 = arg1[0xe]

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xc]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xa]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[4]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[2]

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall

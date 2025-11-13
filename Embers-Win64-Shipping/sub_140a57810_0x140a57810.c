// 函数: sub_140a57810
// 地址: 0x140a57810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e60498
int64_t rcx = arg1[2]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[1]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

*arg1 = &data_142e60450

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1

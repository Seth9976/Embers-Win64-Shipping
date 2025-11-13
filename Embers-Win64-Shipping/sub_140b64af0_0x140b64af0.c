// 函数: sub_140b64af0
// 地址: 0x140b64af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e7caf8
UnmapViewOfFile(arg1[7])
void* rax = arg1[6]
*(rax + 0x30) -= 1
*arg1 = &data_142e7ca58
int64_t rcx_1 = arg1[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1

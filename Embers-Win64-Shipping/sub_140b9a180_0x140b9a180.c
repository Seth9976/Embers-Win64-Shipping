// 函数: sub_140b9a180
// 地址: 0x140b9a180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x15].d = 0
int64_t rcx = arg1[0x14]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1408d6a20(&arg1[0xc])
arg1[0xb].d = 0
int64_t rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140b96920(&arg1[2])
*arg1 = &data_142d40478

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1

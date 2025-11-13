// 函数: sub_1408db330
// 地址: 0x1408db330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e0f4a0
arg1[7].d = 0

if (*(arg1 + 0x3c) != 0)
    sub_1405a52a0(&arg1[6], 0)

arg1[9].d = 0

if (*(arg1 + 0x4c) != 0)
    sub_1405dadb0(&arg1[8], 0)

int64_t rcx_2 = arg1[8]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[6]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return sub_140d163b0(arg1) __tailcall

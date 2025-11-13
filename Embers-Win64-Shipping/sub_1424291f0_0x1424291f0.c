// 函数: sub_1424291f0
// 地址: 0x1424291f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1b].d = 0
int64_t rcx = arg1[0x1a]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x13].d = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405a5410(&arg1[0x12], 0)

arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
sub_14059a8e0(&arg1[0x14], 0)
int64_t rcx_3 = arg1[0x16]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x12]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return sub_140b4cb40(arg1) __tailcall

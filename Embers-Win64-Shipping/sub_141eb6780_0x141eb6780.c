// 函数: sub_141eb6780
// 地址: 0x141eb6780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1e].d = 0
int64_t rcx = arg1[0x1d]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x16].d = 0

if (*(arg1 + 0xb4) != 0)
    sub_1405a5410(&arg1[0x15], 0)

arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
sub_14059a8e0(&arg1[0x17], 0)
int64_t rcx_3 = arg1[0x19]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x15]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return sub_140b4cb40(arg1) __tailcall

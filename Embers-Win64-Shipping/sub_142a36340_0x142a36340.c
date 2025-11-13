// 函数: sub_142a36340
// 地址: 0x142a36340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x1e]
*arg1 = &mkvparser::VideoTrack::`vftable'{for `mkvparser::Track'}

if (rdi != 0)
    sub_142a35d50(rdi)
    j_sub_140a74f90(rdi)

void* rdi_1 = arg1[0x1f]

if (rdi_1 != 0)
    j_sub_140a74f90(*(rdi_1 + 8))
    j_sub_140a74f90(rdi_1)

return sub_142a36210(arg1) __tailcall

// 函数: sub_1429d1f60
// 地址: 0x1429d1f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1[4] + 8) = *(arg1[2] + 8)
*(arg1[4] + 0xc) = *(arg1[2] + 0xc)
*(arg1[4] + 0xd) = *(arg1[2] + 0xd)
*(arg1[4] + 0xe) = *(arg1[2] + 0xe)
sub_1429d2010(arg1)
sub_1429d2720(arg1)
sub_1429d33b0(arg1)
sub_1429d2bc0(arg1)
sub_1429d2de0(arg1)

if (*(arg1[4] + 0xd) == 0)
    sub_1429d2c50(arg1)
    sub_1429d2fb0(arg1)

int64_t* rcx_8 = arg1[4]

if (rcx_8[2].d s<= *(arg1[3] + 8))
    return sub_1429d1860(rcx_8) __tailcall

return sub_1429d1890(rcx_8) __tailcall

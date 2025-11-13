// 函数: sub_1428f19f0
// 地址: 0x1428f19f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rdx = *arg2

if (rdx != 0)
    sub_1428f1f20(arg3, rdx, zx.q(arg4))

if (arg2[1].d s> 0)
    sub_1428b6f70(arg3, "%*sOnly User Certificates\n", zx.q(arg4))

if (*(arg2 + 0xc) s> 0)
    sub_1428b6f70(arg3, "%*sOnly CA Certificates\n", zx.q(arg4))

if (arg2[3].d s> 0)
    sub_1428b6f70(arg3, "%*sIndirect CRL\n", zx.q(arg4))

int32_t* r8_4 = arg2[2]

if (r8_4 != 0)
    sub_1428f2080(arg3, "Only Some Reasons", r8_4, arg4)

if (*(arg2 + 0x1c) s> 0)
    sub_1428b6f70(arg3, "%*sOnly Attribute Certificates\n", zx.q(arg4))

if (*arg2 == 0 && arg2[1].d s<= 0 && *(arg2 + 0xc) s<= 0 && arg2[3].d s<= 0 && arg2[2] == 0
        && *(arg2 + 0x1c) s<= 0)
    sub_1428b6f70(arg3, "%*s<EMPTY>\n", zx.q(arg4))

return 1

// 函数: sub_1428d26d0
// 地址: 0x1428d26d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
memset(arg1, 0, 0x1b8)
*(arg1 + 0x178) = arg3
*(arg1 + 0x180) = arg2
arg3(arg1 + 0x50, arg1 + 0x50, arg2)
uint64_t r8_15 = ((((
    ((zx.q(*(arg1 + 0x58)) << 8 | zx.q(*(arg1 + 0x59))) << 8 | zx.q(*(arg1 + 0x5a))) << 8
    | zx.q(*(arg1 + 0x5b))) << 8 | zx.q(*(arg1 + 0x5c))) << 8 | zx.q(*(arg1 + 0x5d))) << 8
    | zx.q(*(arg1 + 0x5e))) << 8 | zx.q(*(arg1 + 0x5f))
uint64_t rcx_15 = ((((
    ((zx.q(*(arg1 + 0x50)) << 8 | zx.q(*(arg1 + 0x51))) << 8 | zx.q(*(arg1 + 0x52))) << 8
    | zx.q(*(arg1 + 0x53))) << 8 | zx.q(*(arg1 + 0x54))) << 8 | zx.q(*(arg1 + 0x55))) << 8
    | zx.q(*(arg1 + 0x56))) << 8 | zx.q(*(arg1 + 0x57))
*(arg1 + 0x58) = r8_15
*(arg1 + 0x50) = rcx_15
return sub_1428d2df0(arg1 + 0x60, arg1 + 0x50) __tailcall

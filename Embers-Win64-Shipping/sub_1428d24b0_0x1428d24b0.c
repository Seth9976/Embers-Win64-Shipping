// 函数: sub_1428d24b0
// 地址: 0x1428d24b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t rsi = zx.q(*(arg1 + 0x170))
int64_t rbp_1 = *(arg1 + 0x30) << 3
int64_t r14_1 = *(arg1 + 0x38) << 3

if (rsi.d != 0)
    int32_t rbx_2 = (rsi + 0xf).d & 0xfffffff0
    memset(arg1 + 0x188 + rsi, 0, zx.q(rbx_2 - rsi.d))
    rsi = zx.q(rbx_2)
    
    if (rbx_2 == 0x30)
        sub_1428d2a90(arg1 + 0x40, arg1 + 0x60, arg1 + 0x188, zx.q(rbx_2))
        rsi = 0
else if (*(arg1 + 0x174) != 0)
    sub_1428d2c70(arg1 + 0x40, arg1 + 0x60)

*(arg1 + 0x30) = rbp_1
*(arg1 + 0x38) = r14_1
uint64_t var_20 = ((((
    ((zx.q((r14_1 u>> 8).b) | zx.q(r14_1.b) << 8) << 8 | zx.q((r14_1 u>> 0x10).b)) << 8
    | zx.q((r14_1 u>> 0x18).b)) << 8 | zx.q((r14_1 u>> 0x20).b)) << 8 | zx.q((r14_1 u>> 0x28).b)) << 8
    | zx.q((r14_1 u>> 0x30).b)) << 8 | r14_1 u>> 0x38
int128_t zmm0 = (((((
    ((zx.q((rbp_1 u>> 8).b) | zx.q(rbp_1.b) << 8) << 8 | zx.q((rbp_1 u>> 0x10).b)) << 8
    | zx.q((rbp_1 u>> 0x18).b)) << 8 | zx.q((rbp_1 u>> 0x20).b)) << 8 | zx.q((rbp_1 u>> 0x28).b)) << 8
    | zx.q((rbp_1 u>> 0x30).b)) << 8 | rbp_1 u>> 0x38).o
*(zx.q(rsi.d) + arg1 + 0x188) = zmm0
sub_1428d2a90(arg1 + 0x40, arg1 + 0x60, arg1 + 0x188, zx.q((rsi + 0x10).d))
*(arg1 + 0x40) ^= *(arg1 + 0x20)
*(arg1 + 0x48) ^= *(arg1 + 0x28)

if (arg2 != 0 && arg3 u<= 0x10)
    return sub_1428bc500(arg1 + 0x40, arg2, arg3)

return 0xffffffff

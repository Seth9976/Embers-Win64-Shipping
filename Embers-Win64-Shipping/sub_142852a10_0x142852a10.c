// 函数: sub_142852a10
// 地址: 0x142852a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)

if (*(arg1 + 0x30) == 0)
    sub_1428a5670(0x14, 0x20c, 0x114, "ssl\ssl_lib.c", 0x771)
    return 0xffffffff

if ((*(arg1 + 0x44) & 1) != 0)
    *(arg1 + 0x28) = 1
    sub_1428a5670(0x14, 0x20c, 0xcf, "ssl\ssl_lib.c", 0x777)
    return 0xffffffff

int32_t rax = *(arg1 + 0x84)

if (rax u<= 0xa && test_bit(0x502, rax))
    sub_1428a5670(0x14, 0x20c, 0x42, "ssl\ssl_lib.c", 0x77e)
    return 0

sub_1428564a0(arg1, 1)

if ((*(arg1 + 0x5c8) & 0x100) != 0 && sub_1428ac8c0() == 0)
    void* rax_2 = *(arg1 + 8)
    void* var_38 = arg1
    int64_t var_30_1 = arg2
    int64_t var_28_1 = arg3
    int32_t var_20_1 = 1
    int64_t var_18_1 = *(rax_2 + 0x48)
    uint64_t result = sub_142852530(arg1, &var_38, sub_142851f30)
    *arg4 = *(arg1 + 0x16d8)
    return result

return (*(*(arg1 + 8) + 0x48))(arg1, arg2, arg3, arg4)

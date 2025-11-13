// 函数: sub_142913010
// 地址: 0x142913010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rdi = *(arg1 + 0x28)

if (*rdi == 0)
    sub_1428a5670(0x10, 0xdb, 0x8b, "crypto\ec\ec_pmeth.c", 0x18d)
    return 0

int64_t* result = sub_1428c0d20()

if (result == 0)
    return result

int32_t rax_1 = sub_1428c1040(result, *rdi)
int32_t rdi_1 = rax_1
int32_t rax_2

if (rax_1 != 0)
    rax_2 = sub_142896310(arg2, 0x198, result)
    rdi_1 = rax_2

if (rax_1 == 0 || rax_2 == 0)
    sub_1428c0b90(result)

return zx.q(rdi_1)

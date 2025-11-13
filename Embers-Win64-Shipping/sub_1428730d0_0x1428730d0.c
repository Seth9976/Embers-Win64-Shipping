// 函数: sub_1428730d0
// 地址: 0x1428730d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
*(*(arg1 + 0xa8) + 0xfc) = 0
int64_t r8_1 = *(arg1 + 0xa8) + 0x100
int32_t var_20 = 0
int64_t arg_8 = 2
void arg_10
int32_t result = sub_14285b890(arg1, 0x15, r8_1, &arg_8, arg2, 1, 0, &arg_10)

if (result s<= 0)
    *(*(arg1 + 0xa8) + 0xfc) = 1
    return result

sub_142899cf0(*(arg1 + 0x18), 0xb, 0, 0)
int64_t r10 = *(arg1 + 0xb8)

if (r10 != 0)
    var_20.q = arg1
    r10(1, zx.q(*arg1), 0x15, *(arg1 + 0xa8) + 0x100, 2, var_20, *(arg1 + 0xc0))

int64_t r9_3 = *(arg1 + 0x568)
void* rax_3

if (r9_3 != 0)
    rax_3 = *(arg1 + 0xa8)
    r9_3(arg1, 0x4008, zx.q(zx.d(*(rax_3 + 0x100)) << 8) | zx.q(*(rax_3 + 0x101)))
else
    r9_3 = *(*(arg1 + 0x598) + 0x108)
    
    if (r9_3 != 0)
        rax_3 = *(arg1 + 0xa8)
        r9_3(arg1, 0x4008, zx.q(zx.d(*(rax_3 + 0x100)) << 8) | zx.q(*(rax_3 + 0x101)))
return zx.q(result)

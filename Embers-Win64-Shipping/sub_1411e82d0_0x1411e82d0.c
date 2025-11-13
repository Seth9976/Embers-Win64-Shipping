// 函数: sub_1411e82d0
// 地址: 0x1411e82d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 4)
uint64_t r8_1 = zx.q(rax) & 0x80000001

if (r8_1.d s< 0)
    r8_1 = zx.q(((r8_1.d - 1) | 0xfffffffe) + 1)

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q((temp3 - temp2) s>> 1)
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(divs.dp.d(temp4:temp5, 2))
sub_1410b3fe0(arg2, u"PERMUTATION_TRANSMITTANCE_TYPE", r8_1)
sub_1410b3fe0(arg2, u"PERMUTATION_GROUP_SIZE", zx.q(mods.dp.d(temp4:temp5, 2)))
sub_1410b3fe0(arg2, u"PERMUTATION_SUPERSAMPLING", zx.q(mods.dp.d(temp10:temp11, 2)))
int32_t rsi_1 = divs.dp.d(temp10:temp11, 2) & 0x80000001

if (rsi_1 s< 0)
    rsi_1 = ((rsi_1 - 1) | 0xfffffffe) + 1

return sub_1410b3fe0(arg2, u"PERMUTATION_TRAVERSAL", zx.q(rsi_1)) __tailcall

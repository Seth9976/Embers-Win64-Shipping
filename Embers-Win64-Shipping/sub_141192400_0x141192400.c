// 函数: sub_141192400
// 地址: 0x141192400
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
sub_1410b3fe0(arg2, u"PERMUTATION_HZBCULLING", r8_1)
sub_1410b3fe0(arg2, u"PERMUTATION_DEBUGAABBBUFFER", zx.q(mods.dp.d(temp4:temp5, 2)))
int32_t rdi_1 = divs.dp.d(temp4:temp5, 2) & 0x80000001

if (rdi_1 s< 0)
    rdi_1 = ((rdi_1 - 1) | 0xfffffffe) + 1

sub_1410b3fe0(arg2, u"PERMUTATION_LODDEBUG", zx.q(rdi_1))
return sub_1410b3fe0(arg2, u"SHADER_CLUSTERCULLING", 1) __tailcall

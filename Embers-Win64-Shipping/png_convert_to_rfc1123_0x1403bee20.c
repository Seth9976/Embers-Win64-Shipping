// 函数: png_convert_to_rfc1123
// 地址: 0x1403bee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

char* rcx = *(arg1 + 0x3e0)

if (rcx == 0)
    char* rax_1 = png_malloc(arg1, 0x1d)
    rcx = rax_1
    *(arg1 + 0x3e0) = rax_1

uint64_t rax_2 = zx.q(arg2[3].b)
uint8_t rsi_2 = ((rax_2 + (zx.q((rax_2 * 3).d) << 2)).d u>> 8).b
rax_2.b -= ((((rax_2.b - rsi_2) u>> 1) + rsi_2) u>> 5) * 0x3d
uint32_t rax_3 = zx.d(*(arg2 + 5))
rax_3.b -= ((rax_3 * 0x89) u>> 0xd).b * 0x3c
uint32_t rax_4 = zx.d(arg2[2].b)
rax_4.b -= ((zx.q((rax_4 * 0xab) u>> 9) & 0xfffffff8) * 3).b
uint32_t rdx_7 = zx.d(arg2[1].b)
int64_t rax_7 = sx.q(rdx_7 - 1) * 0x2aaaaaab
uint32_t var_40_1 = zx.d(*arg2)
uint32_t var_30_1 = zx.d(rax_3.b)
uint32_t var_38_1 = zx.d(rax_4.b)
void* var_48_1 = &data_1436ad390
    + (sx.q(rdx_7 + neg.d(((rax_7 u>> 0x21).d + (rax_7 u>> 0x3f).d) * 0xc) - 1) << 2)
uint32_t var_28_1 = zx.d(rax_2.b)
_snscanf(rcx, 0x1d, "%d %s %d %02d:%02d:%02d +0000", zx.q(*(arg2 + 3)) & 0x1f)
return *(arg1 + 0x3e0)

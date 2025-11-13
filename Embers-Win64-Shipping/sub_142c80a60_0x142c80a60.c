// 函数: sub_142c80a60
// 地址: 0x142c80a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x404) == 0 && *(arg1 + 0x3fb) != 0)
    *(arg1 + 0x404) = 1

int32_t rax
rax.b = *(arg1 + 0x404) == 0
uint64_t rsi = zx.q(rax)
int32_t result
int64_t r8_2
int512_t entry_zmm2
int512_t zmm2
result, r8_2, zmm2 = gzprintf(&arg1[0xd3], &data_1434ccff0, &"EPSV"[rsi], entry_zmm2)

if (result != 0)
    return result

*(arg1 + 0x744) = rsi.d
arg1[0xea].d = 0x1e
sub_142c64850(*arg1, "Connect data stream passively\n", r8_2, zmm2)
return 0

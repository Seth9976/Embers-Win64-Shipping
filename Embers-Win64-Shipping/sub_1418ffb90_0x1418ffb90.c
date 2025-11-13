// 函数: sub_1418ffb90
// 地址: 0x1418ffb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x118)
void*** rsi = rax

if (rax == 0)
    rsi = nullptr
else
    void* rdx = *(arg1 + 0x58)
    uint32_t r9 = zx.d(arg6)
    int64_t rbx_1 = *arg10
    *rsi = &data_142d3ff08
    rsi[1].d = 0
    *rsi = &data_142ef2948
    *(rsi + 0xc) = 0
    rsi[2].w = 0x100
    rsi[3] = 0
    int64_t var_50_1 = 0
    int32_t var_48_1 = 1
    *(rsi + 0x20) = *(arg10 + 0x10)
    rsi[6].d = arg10[4].d
    rsi[9] = &rsi[0xa]
    *(rsi + 0x34) = arg7
    rsi[7].d = arg8
    *(rsi + 0x3c) = r9
    rsi[8].d = arg9
    rsi[0xa] = -0x3810000020000000
    rsi[0xb] = 0
    *rsi = &data_142ef29f8
    rsi[0xd].d = arg5
    rsi[0xc].d = arg3
    *(rsi + 0x64) = arg4
    char var_30_1 = 0
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    int128_t var_44_1 = data_143dbb1e0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int64_t var_58 = rbx_1
    sub_1418f3130(&rsi[0xe], rdx, 5, r9, arg3, arg4, 1, arg5, arg7, arg8, arg9, &var_58)
    *rsi = &data_142ff19a0
    rsi[0xe] = &data_142ff19f8

*arg2 = rsi

if (rsi != 0)
    rsi[1].d += 1

return arg2

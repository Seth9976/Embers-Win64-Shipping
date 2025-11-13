// 函数: sub_1418ffd70
// 地址: 0x1418ffd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x118)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    void* rdx = *(arg1 + 0x58)
    uint32_t r9 = zx.d(arg6)
    int64_t rbx_1 = *arg9
    *rdi = &data_142d3ff08
    rdi[1].d = 0
    *rdi = &data_142ef2948
    *(rdi + 0xc) = 0
    rdi[2].w = 0x100
    rdi[3] = 0
    int64_t var_50_1 = 0
    int32_t var_48_1 = 1
    *(rdi + 0x20) = *(arg9 + 0x10)
    rdi[6].d = arg9[4].d
    rdi[9] = &rdi[0xa]
    *(rdi + 0x34) = arg7
    rdi[7].d = 1
    *(rdi + 0x3c) = r9
    rdi[8].d = arg8
    rdi[0xa] = -0x3810000020000000
    rdi[0xb] = 0
    *rdi = &data_142ef2a50
    rdi[0xd].d = arg5
    rdi[0xc].d = arg3
    *(rdi + 0x64) = arg4
    char var_30_1 = 0
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    int128_t var_44_1 = data_143dbb1e0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int64_t var_58 = rbx_1
    sub_1418f3130(&rdi[0xe], rdx, 2, r9, arg3, arg4, arg5, 1, arg7, 1, arg8, &var_58)
    *rdi = &data_142ff1a30
    rdi[0xe] = &data_142ff1a88

*arg2 = rdi

if (rdi != 0)
    rdi[1].d += 1

return arg2

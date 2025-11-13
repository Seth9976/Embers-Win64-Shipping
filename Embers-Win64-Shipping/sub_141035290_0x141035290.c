// 函数: sub_141035290
// 地址: 0x141035290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x18)

if (*(rcx + 0x1c8) == 0)
    int64_t result
    result.b = 0
    return result

int64_t rdi
rdi.b = 0
int64_t rsi = *(*(arg1 + 0x50) + 0x58)

if (*(arg1 + 0x40) != rsi)
    rdi.b = 1
    sub_141049de0(rcx + 0x250)

int64_t rbp = *(*(arg1 + 0x58) + 0x58)

if (*(arg1 + 0x48) == rbp)
    if (rdi.b != 0)
    label_141035331:
        void* rcx_4 = *(arg1 + 0x18)
        int64_t var_18 = rsi
        int64_t* rcx_5 = *(*(rcx_4 + 0x1c8) + 0x30)
        int64_t r9_1 = *rcx_5
        (*(r9_1 + 0xe0))(rcx_5, 2, &var_18, r9_1, var_18, rbp)
        *(arg1 + 0x40) = rsi
        *(arg1 + 0x48) = rbp
    
    return zx.q(rdi.b)

rdi.b = 1
sub_141049bd0(*(arg1 + 0x18) + 0x250)
int32_t i = 0

if (*(arg1 + 0x208) s> 0)
    int64_t rdx_1 = 0
    
    do
        rdx_1 += 0x30
        i += 1
        *(rdx_1 + *(arg1 + 0x200) - 0x30) = 0
    while (i s< *(arg1 + 0x208))

goto label_141035331

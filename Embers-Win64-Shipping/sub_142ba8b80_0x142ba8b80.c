// 函数: sub_142ba8b80
// 地址: 0x142ba8b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9 = *(arg1 + 0x1ce)

if (r9 != 0x4000)
    int16_t rax_1 = *(arg1 + 0x1d0)
    
    if (rax_1 != 0x4000)
        *(arg1 + 0x318) =
            (sx.d(*(arg1 + 0x1cc)) * sx.d(rax_1) + sx.d(*(arg1 + 0x1ca)) * sx.d(r9)) s>> 0xe
    else
        *(arg1 + 0x318) = sx.d(*(arg1 + 0x1cc))
else
    *(arg1 + 0x318) = sx.d(*(arg1 + 0x1ca))

if (*(arg1 + 0x1ca) != 0x4000)
    uint64_t (* rax_5)(void* arg1, int32_t arg2, int32_t arg3) = sub_142bac8a0
    
    if (*(arg1 + 0x1cc) == 0x4000)
        rax_5 = sub_142bac950
    
    *(arg1 + 0x328) = rax_5
else
    *(arg1 + 0x328) = sub_140bd26d0

if (*(arg1 + 0x1c6) != 0x4000)
    uint64_t (* rax_6)(void* arg1, int32_t arg2, int32_t arg3) = sub_142ba90e0
    
    if (*(arg1 + 0x1c8) == 0x4000)
        rax_6 = sub_142bac950
    
    *(arg1 + 0x330) = rax_6
else
    *(arg1 + 0x330) = sub_140bd26d0

int32_t rcx_2 = *(arg1 + 0x318)
*(arg1 + 0x340) = sub_142ba8e90
*(arg1 + 0x348) = sub_142ba8f90

if (rcx_2 == 0x4000)
    if (r9 == 0x4000)
        *(arg1 + 0x340) = sub_142ba9050
        *(arg1 + 0x348) = sub_142ba9030
    else if (*(arg1 + 0x1d0) == 0x4000)
        *(arg1 + 0x340) = sub_142ba9090
        *(arg1 + 0x348) = sub_142ba9040

if (rcx_2 s< 0)
    rcx_2 = neg.d(rcx_2)

int32_t result = *(arg1 + 0x318)
*(arg1 + 0x1a4) = 0

if (rcx_2 s< 0x400)
    result = 0x4000

*(arg1 + 0x318) = result
return result

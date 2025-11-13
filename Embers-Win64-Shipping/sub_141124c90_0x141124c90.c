// 函数: sub_141124c90
// 地址: 0x141124c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1

if (data_143f0f1c7 != 0)
    rdi_1 = 0x2000

if (data_143f0f1c7 == 0 || *(data_143ed2e18 + 4) == 0)
    rdi_1 = 0

int32_t rdi_3 = rdi_1 | data_143ed3430 | 1
sub_1407b4d10(arg1 + 0x10, 0x10, *(arg1 + 0xd0) * *(arg1 + 0xd4), 1, rdi_3, TileConeAxisAndCos", 0)
sub_1407b4d10(arg1 + 0x30, 0x10, *(arg1 + 0xd0) * *(arg1 + 0xd4), 1, rdi_3, TileConeDepthRanges", 0)
sub_1407b4d10(arg1 + 0x50, 4, *(arg1 + 0xd8), 0x1c, rdi_3, u"NumCulledTilesArray", 0)
sub_1407b4d10(arg1 + 0x70, 4, *(arg1 + 0xd8), 0x1c, rdi_3, u"CulledTilesStartOffsetArray", 0)
int32_t rcx_4
int32_t r8_6

if (*(arg1 + 0xdc) != 0 && *(arg1 + 0xd8) s< 0x10000)
    rcx_4 = *(arg1 + 0xd0)
    r8_6 = *(arg1 + 0xd4)

int32_t rdx
char r9

if (*(arg1 + 0xdc) == 0 || *(arg1 + 0xd8) s>= 0x10000 || rcx_4 * r8_6 s>= 0x10000)
    r8_6 = *(arg1 + 0xd4)
    rdx = 4
    rcx_4 = *(arg1 + 0xd0)
    r9 = 0x1c
else
    rdx = 2
    r9 = 0x20

sub_1407b4d10(arg1 + 0x90, rdx, r8_6 * rcx_4 * data_1439b5be0 * data_1439b5c48, r9, rdi_3, 
    CulledTileDataArray", 0)
return sub_1407b4d10(arg1 + 0xb0, 4, 3, 0x1c, 0x101, 0, 0)

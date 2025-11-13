// 函数: sub_142690d30
// 地址: 0x142690d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
int64_t r9
rax, r9 = sub_14262e900()
*(arg3 + 8) = rax

if (rax == 0)
    sub_14262d160(arg2, (rax + 3).d, "RecastBuildLayers: Out of memory 'LayerSet'.", r9)
    int64_t rax_1
    rax_1.b = 0
    return rax_1

int32_t rcx_1 = *(arg1 + 0x11c)
int32_t* rdx_1 = *(arg3 + 0x10)
char rax_2
int64_t r9_2

if (rcx_1 == 0)
    rax_2, r9_2 = sub_1426307b0(arg2, rdx_1, *(arg1 + 0xd4), *(arg1 + 0xfc), rax)
else if (rcx_1 != 1)
    rax_2, r9_2 = sub_142630630(arg2, rdx_1, *(arg1 + 0xd4), *(arg1 + 0xfc), *(arg1 + 0x118), rax)
else
    char rax_3
    int64_t r9_3
    int512_t zmm0_1
    rax_3, r9_3, zmm0_1 = sub_142638ac0(arg2, rdx_1)
    
    if (rax_3 == 0)
        sub_14262d160(arg2, 3, "RecastBuildLayers: Could not build distance field.", r9_3)
        int64_t rax_4
        rax_4.b = 0
        return rax_4
    
    rax_2, r9_2 =
        sub_14262f190(arg2, *(arg3 + 0x10), *(arg1 + 0xd4), *(arg1 + 0xfc), zmm0_1, *(arg3 + 8))

if (rax_2 != 0)
    return 1

sub_14262d160(arg2, 3, "RecastBuildLayers: Could not build heightfield layers.", r9_2)
int64_t rax_7
rax_7.b = 0
return rax_7

// 函数: sub_1413a0620
// 地址: 0x1413a0620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_1 = zx.q(*(arg1 + 4)) & 0x80000001

if (r8_1.d s< 0)
    r8_1 = zx.q(((r8_1.d - 1) | 0xfffffffe) + 1)

sub_1410b3fe0(arg2, u"READ_QUAD_OVERDRAW", r8_1)
sub_1405d3490(arg2 + 0x2a8, u"MAX_NUM_COMPLEXITY_COLORS", 0xb)
sub_1405d3490(arg2 + 0x2a8, u"CS_RAMP", 0)
sub_1405d3490(arg2 + 0x2a8, u"CS_LINEAR", 1)
sub_1405d3490(arg2 + 0x2a8, u"CS_STAIR", 2)
sub_1405d3490(arg2 + 0x2a8, u"DVSM_None", 0)
sub_1405d3490(arg2 + 0x2a8, u"DVSM_ShaderComplexity", 1)
sub_1405d3490(arg2 + 0x2a8, u"DVSM_ShaderComplexityContainedQuadOverhead", 2)
sub_1405d3490(arg2 + 0x2a8, u"DVSM_ShaderComplexityBleedingQuadOverhead", 3)
return sub_1405d3490(arg2 + 0x2a8, u"DVSM_QuadComplexity", 4) __tailcall

// 函数: sub_141133790
// 地址: 0x141133790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3fe0(arg2, u"SHADOW_TILE_ARRAY_DATA_STRIDE", zx.q(data_1439b5bd8))
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEX", 8)
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEY", 8)
sub_1405d3490(arg2 + 0x2a8, u"SCATTER_TILE_CULLING", 0)
sub_1405d3490(arg2 + 0x2a8, u"POINT_LIGHT", 0)
sub_1405d3490(arg2 + 0x2a8, u"DF_SHADOW_QUALITY", 3)
sub_1410b3fe0(arg2, u"DISTANCEFIELD_PRIMITIVE_TYPE", 0)
sub_1410b3fe0(arg2, u"HAS_PREVIOUS_OUTPUT", 0)
int64_t rax = sx.q(*arg1)
int64_t r8_1

if (rax.d u> 0x1f)
    if (*(&data_143f025f0 + rax * 0x14) == data_143f025b0
            || ((*(rax * 0x14 + &data_143f025fc) u>> 0x11).b & 1) != 0)
        r8_1 = 1
    else
        r8_1 = 0
else if (test_bit(0xc8451814, rax.d) || *(&data_143f025f0 + rax * 0x14) == data_143f025b0
        || ((*(rax * 0x14 + &data_143f025fc) u>> 0x11).b & 1) != 0)
    r8_1 = 1
else
    r8_1 = 0

sub_1410b3fe0(arg2, u"PLATFORM_SUPPORTS_TYPED_UAV_LOAD", r8_1)
int32_t* rdx_1 = *(arg2 + 0xb0)
int64_t r8_2 = sx.q(*(arg2 + 0xb8))
int32_t* rax_3 = rdx_1
void* rcx_12 = &rdx_1[r8_2]
int64_t result

if (rdx_1 != rcx_12)
    while (*rax_3 != 0x16)
        rax_3 = &rax_3[1]
        
        if (rax_3 == rcx_12)
            goto label_1411338e4
    
    result = (rax_3 - rdx_1) s>> 2

if (rdx_1 == rcx_12 || result.d == 0xffffffff)
label_1411338e4:
    int32_t rax_5 = (r8_2 + 1).d
    *(arg2 + 0xb8) = rax_5
    
    if (rax_5 s> *(arg2 + 0xbc))
        sub_1405a4cf0(arg2 + 0xb0)
    
    result = *(arg2 + 0xb0)
    *((r8_2 << 2) + result) = 0x16

return result

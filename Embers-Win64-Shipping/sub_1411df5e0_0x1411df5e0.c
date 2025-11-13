// 函数: sub_1411df5e0
// 地址: 0x1411df5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 1
wchar16 const* const var_38 = u"UnknownTexture"
int32_t var_54 = 0x10000
int16_t var_40 = 0
int32_t var_90 = 0
float zmm1[0x4] = 2.o
int16_t var_30 = 1
char var_2e = 0
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
temp0[0] = 0
int32_t var_64 = 1
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
int32_t var_98
var_98.o = temp0_1
int64_t var_60 = 1
float var_78[0x4] = temp0_1
int64_t var_4c = 0x1c
int16_t var_50 = 1
int32_t var_44 = 0x10008
int32_t var_88
int32_t var_68 = var_88
void*** rax_1 = sub_141188e50(arg1, &var_78, u"HairVisibilityPPLLNodeIndex", 0)
var_98.q = rax_1
var_90.w = 0
void*** rax_2 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1] = rax_1[1]
    rax_2[2] = 0
    *(rax_2 + 0x18) = var_98.o
    *rax_2 = &data_142f285c0

*(arg2 + 8) = rax_2
void*** rax_3 = sub_141188e50(arg1, &var_78, u"HairVisibilityPPLLNodeIndex", 0)
var_98.q = rax_3
var_90.w = 0
void*** rax_4 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1] = rax_3[1]
    rax_4[2] = 0
    *(rax_4 + 0x18) = var_98.o
    *rax_4 = &data_142f285c0

*(arg2 + 0x10) = rax_4
int32_t var_8c = 2
int32_t var_90_1 = 0x209
int32_t var_94 = 1
void*** rax_5 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
void*** rbx_2 = rax_5

if (rax_5 == 0)
    rbx_2 = nullptr
else
    rbx_2[2] = 0
    rbx_2[1] = u"DummyPPLLNodeData"
    rbx_2[3].b = 0
    *(rbx_2 + 0x1c) = 0
    rbx_2[4] = 0
    rbx_2[5].w = 0x200
    *rbx_2 = &data_142f285d0
    *(rbx_2 + 0x30) = 0x1c.o
    rbx_2[8] = 0

int32_t rax_6 = 0

if ((rbx_2[7].d & 0x100) != 0)
    rax_6 = 0x1c

int32_t var_98_1
var_98_1.q = rbx_2
var_8c.w = 0
int32_t var_90_2 = rax_6
void*** result = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (result == 0)
    *(arg2 + 0x18) = 0
else
    result[1] = rbx_2[1]
    *result = &data_142f285c0
    result[2] = 0
    *(result + 0x18) = var_98_1.o
    *(arg2 + 0x18) = result

return result

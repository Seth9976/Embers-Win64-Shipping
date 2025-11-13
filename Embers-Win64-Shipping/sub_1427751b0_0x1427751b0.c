// 函数: sub_1427751b0
// 地址: 0x1427751b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg2 + 0x348) + 0x358) = *(arg1 + 4)
*(*(arg2 + 0x348) + 0x66c) = *(arg1 + 0xc)
*(*(arg2 + 0x348) + 0x35c) = *(arg1 + 8)
*(*(arg2 + 0x358) + 0x18) = *(arg1 + 0x15)
char rcx = *(arg1 + 0x16)
*(*(arg2 + 0x358) + 0x19) = rcx
*(*(arg2 + 0x348) + 0x579) = rcx
*(*(arg2 + 0x358) + 0x1a) = *(arg1 + 0x17)
***(arg2 + 0x358) = *(arg1 + 0x18)
**(*(arg2 + 0x358) + 8) = *(arg1 + 0x28)
**(*(arg2 + 0x358) + 0x10) = *(arg1 + 0x38)
int64_t* rcx_6 = *(arg2 + 0x348) + 0x710
int64_t result = (*(*rcx_6 + 0x50))(rcx_6, zx.q(*(arg1 + 0x54)))
*(arg2 + 0x80) = 1

if (*(arg1 + 0x48) == 0)
    return result

int64_t* rax_11 = j_sub_140a82f30(0xd0)
int64_t* rbx_1 = rax_11

if (rax_11 == 0)
    rbx_1 = nullptr
else
    void* rcx_7 = &rbx_1[0xf]
    int32_t var_40_1 = 0
    *rbx_1 = &data_142fc6e10
    *(rbx_1 + 0x24) = 0xffffffff
    rbx_1[8] = 0
    rbx_1[9] = 0
    rbx_1[0xb] = 0
    rbx_1[0xc].d = 0
    *(rbx_1 + 0x64) = 1
    rbx_1[0xd] = 0
    rbx_1[0xe] = 0
    *(rcx_7 + 0x10) = 0
    *(rcx_7 + 0x18) = 0
    *(rcx_7 + 0x1c) = 0x80
    void* rax_12 = *(rcx_7 + 0x10)
    
    if (rax_12 != 0)
        rcx_7 = rax_12
    
    *rcx_7 = 0
    *(rcx_7 + 8) = 0
    rbx_1[0x13].d = 0xffffffff
    *(rbx_1 + 0x9c) = 0
    rbx_1[0x15] = 0
    rbx_1[0x16].d = 0
    rbx_1[0x18] = 0
    *(rbx_1 + 0xcc) = 0
    rbx_1[0x19].b = 0
    rbx_1[2] = 0
    sub_14177af60(rbx_1, 1, 1)
    rbx_1[3] = _mm_unpacklo_ps(zx.o(0), 0)
    rbx_1[4].d = 0
    int128_t zmm6 = data_14399f720
    sub_14177af60(rbx_1, 2, 1)
    *(rbx_1 + 0x30) = zmm6
    sub_14177af60(rbx_1, 0x2000000, 1)
    rbx_1[0x17].w = 0
    sub_14177af60(rbx_1, 0x40000000, 1)
    rbx_1[0x18] = 0

void*** rax_13 = j_sub_140a82f30(0x28)
void*** rdi_1 = rax_13
int32_t var_30

if (rax_13 == 0)
    rdi_1 = nullptr
else
    var_30 = 0x3f800000
    int32_t var_40_2 = 0
    sub_1417048d0(rax_13, 0, 2)
    *rdi_1 = &data_142fc47b8
    rdi_1[2] = _mm_unpacklo_ps(zx.o(0), 0)
    int64_t temp0_3 = _mm_unpacklo_ps(zx.o(0), 0)
    rdi_1[3].d = 0
    *(rdi_1 + 0x1c) = temp0_3
    *(rdi_1 + 0x24) = var_30

void*** var_38 = rdi_1
void*** rax_15 = j_sub_140a82f30(0x18)

if (rax_15 == 0)
    rax_15 = nullptr
else
    rax_15[1].d = 1
    *rax_15 = &data_142d42ea8
    *(rax_15 + 0xc) = 1
    rax_15[2] = rdi_1

var_30.q = rax_15
int64_t zmm7_1 = sub_14177f830(rbx_1, &var_38)
sub_14177f9e0(rbx_1, 3, 0)
int32_t zmm0_3 = *(arg1 + 0x4c)
sub_14177af60(rbx_1, 1, 1)
void* rcx_16 = &rbx_1[0xa]
rbx_1[3] = (_mm_unpacklo_ps(zx.o(0), zmm7_1)).q
rbx_1[4].d = zmm0_3
void* rax_17 = *(rcx_16 + 8)
var_38.d = 0

if (rax_17 != 0)
    rcx_16 = rax_17

var_38 = 0xffff
int32_t var_2c_1 = 0xffff
void* rax_18 = *rcx_16

if (*(rax_18 + 0x10) != 0 || *(rax_18 + 0x14) != 0xffff || *(rax_18 + 0x18) != 0
        || *(rax_18 + 0x1c) != 0xffff)
    *(rax_18 + 0x10) = var_38.o
    sub_14177af60(rbx_1, 0x20000000, 1)

return sub_141d40090(arg2, rbx_1)

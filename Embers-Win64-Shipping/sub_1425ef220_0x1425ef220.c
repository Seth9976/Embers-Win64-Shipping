// 函数: sub_1425ef220
// 地址: 0x1425ef220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a8 = 1
int64_t var_70
__builtin_memset(&var_70, 0, 0x14)
int64_t var_80 = 0
int64_t* rcx = *(arg2 + 0x28)
int64_t* pv_3 = nullptr
int32_t rax_2

if (rcx != 0)
    int32_t var_e8 = 0xb04b7248
    int32_t var_e4_1 = 0x4321b6f0
    int32_t var_e0_1 = 0xa4ba91b6
    int32_t var_dc_1 = 0xcb9f0f74
    rax_2 = (*(*rcx + 0x10))(rcx, &var_e8, &pv_3)

int64_t* pv_4

if (rcx == 0 || rax_2 != 0)
    pv_4 = nullptr
    pv_3 = nullptr
else
    pv_4 = pv_3

int64_t rax_4 = (*(*pv_4 + 0xc8))(pv_4)
int64_t rdx_1 = *pv_4
int64_t arg_18 = rax_4
uint32_t count = (*(rdx_1 + 0xc0))(pv_4, rdx_1)
int64_t r9 = *pv_4
int32_t var_c8 = 0
int64_t* pv
int64_t* pv_2

if ((*(r9 + 0x20))(pv_4, u"OutputDataType", &var_c8, r9) != 0)
    pv_2 = pv_3
else
    pv_2 = nullptr
    
    if (var_c8 != 0)
        if (var_c8 != 2)
            int32_t var_58 = 0
            sub_1425eabd0(&var_58, &var_c8, 2)
            int32_t rdx_3 = var_58
            int64_t* pv_1
            
            if (rdx_3 != 0)
                pv_2 = pv_1
            
            if (rdx_3 == 0xa || rdx_3 == 0xb)
                CoTaskMemFree(pv_1)
            else if (rdx_3 == 0xc && pv_1 != 0)
                (*(*pv_1 + 8))()
        else
            pv_2 = pv

int32_t rcx_6 = var_c8

if (rcx_6 == 0xa || rcx_6 == 0xb)
    CoTaskMemFree(pv)
else if (rcx_6 == 0xc && pv != 0)
    (*(*pv + 8))(pv)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] * 10000000.0
zmm0[0] = zmm0[0] + 0.5
int64_t rcx_12 = int.q(zmm0[0])

if (rcx_12 != -0x8000000000000000 && not(float.d(rcx_12) f== zmm0[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rcx_12 - (zx.q(temp0_2) & 1))

void* rcx_14 = *(arg2 + 8)
int64_t rax_10 = int.q(zmm0[0])
int64_t var_d8 = 0
int64_t r15 = 0
var_70.b = pv_2 == 0
*(arg2 + 0x58) = rax_10
int64_t var_a0 = *(arg2 + 0x10)
int64_t var_98 = *(arg2 + 0x18)
var_70:4.d = *(rcx_14 + 0x60)
int64_t var_68
var_68.d = *(rcx_14 + 0x64)
int32_t var_60 = *(arg1 + 0x70)
var_68:4.d = 0x14
int32_t r14

if (count != 0)
    sub_1405da9e0(&var_d8, count, 0)
    r15 = var_d8
    memcpy(r15, arg_18, count)
    int32_t var_cc
    r14 = var_cc
else
    r14 = 0
    int32_t var_cc_1 = 0

if (var_80 != 0)
    sub_140a74f90(var_80)

int64_t* rcx_18 = *(arg2 + 0x28)
int64_t var_90 = *(arg2 + 0x50)
int64_t var_88 = *(arg2 + 0x58)
uint32_t count_1 = count
int32_t var_74 = r14

if (rcx_18 != 0)
    *(arg2 + 0x28) = 0
    (*(*rcx_18 + 8))(rcx_18)

arg_18 = *(arg2 + 0x30)
*(arg2 + 0x30) = 0
sub_1425f0bb0(arg1, &var_a8, &arg_18)
*(arg2 + 4)
*(arg2 + 4) = 0
int64_t result = (*(*pv_4 + 8))(pv_4)

if (r15 == 0)
    return result

return sub_140a74f90(r15)

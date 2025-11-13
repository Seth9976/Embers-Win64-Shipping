// 函数: sub_1403ebd10
// 地址: 0x1403ebd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_778
int64_t rax_1 = __security_cookie ^ &var_778
int64_t rax_2 = sx.q(*(arg1 + 0x1208))
int32_t r9 = *(arg1 + 0x120c)
int32_t r15_2 = *(arg1 + 0x1200) + rax_2.d + r9
void* r12_1 = arg4 - (rax_2 << 2)
void* rdi = r12_1 + ((sx.q(r15_2) - sx.q(*(arg1 + 0x11dc))) << 2)
void var_648
sub_1403ed9e0(&var_648, rdi, 1, r9)
int64_t rcx_3 = sx.q(*(arg1 + 0x120c))
int64_t rax_5 = rcx_3 << 2
void* rbx = &var_648 + rax_5
void* rdi_1 = rdi + rax_5
memcpy(rbx, rdi_1, (*(arg1 + 0x11dc) - (rcx_3 * 2).d) << 2)
int32_t r9_1 = *(arg1 + 0x120c)
int64_t rax_8 = sx.q(*(arg1 + 0x11dc) - r9_1 * 2)
sub_1403ed9e0(rbx + (rax_8 << 2), rdi_1 + (rax_8 << 2), 2, r9_1)
float var_718
sub_1403ed590(&var_718, &var_648, *(arg1 + 0x11dc), *(arg1 + 0x1240) + 1)
int32_t r8_3 = *(arg1 + 0x1240)
float zmm1 = var_718
var_718 = zmm1 + zmm1 * 0.00100000005f + 1f
int32_t var_688[0x10]
float zmm1_1 = sub_1403edae0(&var_688, &var_718, r8_3)

if (not(zmm1_1 > 1f))
    zmm1_1 = 1f

*(arg2 + 0x364) = var_718 / zmm1_1
void var_6c8
sub_1403edd80(&var_6c8, &var_688, *(arg1 + 0x1240))
sub_1403ecf60(&var_6c8, *(arg1 + 0x1240), 0.99000001f)
sub_1403f0b10(arg3, &var_6c8, r12_1, r15_2, *(arg1 + 0x1240))
int32_t result

if (*(arg1 + 0x12cd) == 0 || *(arg1 + 0x1258) != 0)
    result = 0
    *(arg2 + 0xe4) = 0
    *(arg2 + 0xec) = 0
    *(arg1 + 0x12ca) = 0
    *(arg1 + 0x12cc) = 0
    *(arg1 + 0x2fe4) = 0
else
    uint128_t zmm1_2 = zx.o(*(arg1 + 0x11cc))
    char rax_10 = *(arg1 + 0x11d5) s>> 1
    uint128_t zmm0_2
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1240))).d f* 0.00400000019f
    zmm1_2.d = _mm_cvtepi32_ps(zmm1_2).d f* 0.100000001f
    float zmm3_1 = 0.600000024f f- zmm0_2.d
    zmm1_2.d = zmm1_2.d f* 0.00390625f
    int32_t rax_13 = *(arg1 + 0x11fc)
    zmm0_2 = _mm_cvtepi32_ps(zx.o(sx.d(rax_10)))
    zmm3_1 = zmm3_1 f- zmm1_2.d
    int32_t rax_14 = *(arg1 + 0x123c)
    zmm0_2.d = zmm0_2.d f* 0.150000006f
    zmm1_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1298)))
    int32_t rax_15 = *(arg1 + 0x11f8)
    zmm3_1 = zmm3_1 f- zmm0_2.d
    zmm1_2.d = zmm1_2.d f* 0.100000001f
    zmm1_2.d = zmm1_2.d f* 3.05175781e-05f
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1244))).d f* 1.52587891e-05f
    int32_t var_758
    var_758.q = arg1 + 0x2fe4
    result.b = sub_1403ee690(arg3, arg2 + 0xe4, arg1 + 0x12ca, arg1 + 0x12cc, var_758, 
        *(arg1 + 0x11d8), zmm0_2.d, zmm3_1 f- zmm1_2.d, rax_15, rax_14, rax_13, arg5) == 0
    result.b += 1
    *(arg1 + 0x12cd) = result.b

__security_check_cookie(rax_1 ^ &var_778)
return result

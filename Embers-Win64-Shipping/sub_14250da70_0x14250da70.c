// 函数: sub_14250da70
// 地址: 0x14250da70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint32_t zmm3[0x4] = data_143f67200
int128_t var_38 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f67210)
zmm3[0].q = zx.o(0) u>> 0x40
float var_48[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
uint32_t var_28[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

float (* rax_3)[0x4] = *(arg2 + 0x38)
float (* rdx_2)[0x4] = &var_48

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_4 != 0
*(arg2 + 0x20) = rcx_1 + rax_4
int64_t var_58
int64_t* result = sub_1420b8780(&var_58, rdx_2)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_4 = *arg3
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_6 = var_58

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

__security_check_cookie(rax_1 ^ &var_78)
return result

// 函数: sub_1425fd950
// 地址: 0x1425fd950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0xa8)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    __builtin_memset(&result_1[1], 0, 0x19)
    result_1[5] = arg1
    *result = &data_14344caf8
    result[6].d = 3
    __builtin_memset(&result[0x12], 0, 0x15)
    result[0xa] = 0
    result[0xb].d = 0
    result[0xe] = 0
    result[0xf].d = 0
    result[0x10] = 0
    result[0x11].d = 0

void arg_8

if (arg2[0x51] == 0)
    (*(*arg2 + 0x308))(arg2, *(*(*arg1 + 0x80))(arg1, &arg_8, arg2))
int64_t rax_3 = (*(*arg1 + 0xa0))(arg1, arg2)
result[0x12] = rax_3

if (rax_3 == 0)
    *(arg2 + 0x169) = 1
    *(arg2 + 0x204) = 0
    sub_142372ee0(arg2)
    return result

CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x30)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
    void*** rax_4 = j_sub_140a82f30(0x50)
    
    if (rax_4 == 0)
        lpCriticalSection_1->__offset(0x28).q = 0
    else
        *rax_4 = &data_14344d660
        rax_4[6].d &= 0xfffffff8
        rax_4[1] = result
        rax_4[2] = arg2
        __builtin_memset(&rax_4[3], 0, 0x15)
        rax_4[7].d = 0
        rax_4[8] = 0
        rax_4[9] = 0
        lpCriticalSection_1->__offset(0x28).q = rax_4

result[0x13] = lpCriticalSection_1
sub_142601840(lpCriticalSection_1)
result[0xa] = 0
result[7].w = 1
result[0xb].d = 0
*(result + 0x3a) = *(arg2 + 0x204)
int32_t rax_6 = (int.q(sub_142366f80(arg2))).d
*(result + 0x46) = 0x10
*(result + 0x3c) = rax_6
int32_t rax_7 = *(arg2 + 0x204)
*(result + 0xc) = rax_7
rax_7.w *= 2
*(result + 0x44) = rax_7.w
float zmm0_1 = sub_142366f80(arg2)
int64_t rcx_8 = sx.q(*(result + 0xc))
int32_t zmm1 = float.s(rcx_8 * 2)

if (rcx_8 * 2 s< 0)
    zmm1 = zmm1 f+ 1.84467441e+19f

result[8].d = (int.q(zmm0_1 f* zmm1)).d
return result

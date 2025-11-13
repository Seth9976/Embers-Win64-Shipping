// 函数: sub_1413569f0
// 地址: 0x1413569f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
uint128_t zmm1 = *(arg1 + 0x38)
int64_t* rdi = *(arg1 + 0x58)
uint64_t var_148 = *(arg1 + 0x48)
int64_t var_188 = *(arg1 + 0x60)
int32_t rax_3 = _mm_bsrli_si128(zmm1, 8).d
uint128_t var_158 = zmm1
void* rbx = *rdi
uint32_t var_194 = (var_148 u>> 0x20).d - (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
void* rcx_4 = *(zmm1.q + 0x10)
void* var_190 = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t var_178 = 0
void** const var_180 = &data_142f18ee0
void* var_170 = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t var_168 = (var_148.d - rax_3).q
sub_1405d1550(&var_190, &data_142f18ee0)
void var_138
int64_t r8 = sub_1423fa870(&var_138, &var_180, 0, *(rbx + 0x38), *(rbx + 0x30), *(rbx + 0x34), 
    rdi[0x2a9].d, 0x3f800000)
sub_142420170(&var_138, &var_158:8)
sub_141347ea0(&var_188, &var_138, r8)
sub_14240e4b0(&var_138, arg2, 0, 1)
sub_1423fef60(&var_138)
sub_1405d1550(&var_170)
var_180 = &data_142f18c08
int64_t result = sub_1405d1550(&var_178)
__security_check_cookie(rax_1 ^ &var_1d8)
return result

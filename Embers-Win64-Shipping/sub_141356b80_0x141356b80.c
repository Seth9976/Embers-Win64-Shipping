// 函数: sub_141356b80
// 地址: 0x141356b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
uint128_t zmm1 = *(arg1 + 0x38)
int64_t* rdi = *(arg1 + 0x58)
uint64_t var_148 = *(arg1 + 0x48)
int32_t rax_2 = _mm_bsrli_si128(zmm1, 8).d
uint128_t var_158 = zmm1
void* rbx = *rdi
uint32_t var_18c = (var_148 u>> 0x20).d - (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
void* rcx_4 = *(zmm1.q + 0x10)
void* var_188 = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t var_178 = 0
void** const var_180 = &data_142f18ee0
void* var_170 = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t var_168 = (var_148.d - rax_2).q
sub_1405d1550(&var_188, &data_142f18ee0)
void var_138
int64_t r8 = sub_1423fa870(&var_138, &var_180, 0, *(rbx + 0x38), *(rbx + 0x30), *(rbx + 0x34), 
    rdi[0x2a9].d, 0x3f800000)
sub_142420170(&var_138, &var_158:8)
void var_198
sub_141347d20(&var_198, &var_138, r8)
sub_14240e4b0(&var_138, arg2, 0, 1)
sub_1423fef60(&var_138)
sub_1405d1550(&var_170)
var_180 = &data_142f18c08
int64_t result = sub_1405d1550(&var_178)
__security_check_cookie(rax_1 ^ &var_1d8)
return result

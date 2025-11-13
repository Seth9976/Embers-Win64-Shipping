// 函数: sub_14139a9d0
// 地址: 0x14139a9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* rdi = *(arg1 + 0x58)
uint128_t zmm1 = *(arg1 + 0x70)
uint128_t var_168 = *(arg1 + 0x60)
uint64_t var_148 = *(arg1 + 0x80)
uint64_t var_178 = *(arg1 + 0x48)
uint128_t var_158 = zmm1
zmm1 = *(arg1 + 0x38)
uint128_t var_188 = zmm1
void* rbx = *rdi
int32_t rax_2 = _mm_bsrli_si128(zmm1, 8).d
uint32_t var_1b4 = (var_178 u>> 0x20).d - (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
void* rcx_4 = *(zmm1.q + 0x10)
void* var_1b0 = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t var_1a0 = 0
void** const var_1a8 = &data_142f18ee0
void* var_198 = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t var_190 = (var_178.d - rax_2).q
sub_1405d1550(&var_1b0, &data_142f18ee0)
void var_138
sub_1423fa870(&var_138, &var_1a8, 0, *(rbx + 0x38), *(rbx + 0x30), *(rbx + 0x34), rdi[0x2a9].d, 
    0x3f800000)
sub_142420170(&var_138, &var_188:8)
sub_141387a30(&var_168, &var_138)
sub_14240e4b0(&var_138, arg2, 0, 1)
sub_1423fef60(&var_138)
sub_1405d1550(&var_198)
var_1a8 = &data_142f18c08
int64_t result = sub_1405d1550(&var_1a0)
__security_check_cookie(rax_1 ^ &var_1f8)
return result

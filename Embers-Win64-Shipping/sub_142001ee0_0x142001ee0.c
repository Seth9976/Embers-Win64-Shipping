// 函数: sub_142001ee0
// 地址: 0x142001ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t var_260 = (*arg1).d
int32_t var_230 = (*(arg1 + 8)).d
int64_t var_258 = 0
int32_t var_25c = *(arg1 + 4)
int128_t var_240 = *arg3
char var_250 = 0
int32_t var_22c = *(arg1 + 0xc)
int64_t var_248 = 0
void** const var_268 = &data_143298ab8
int32_t var_228 = 0
int64_t var_220 = 0
int64_t var_218 = 0
sub_142409810(arg2, &var_268)
int64_t rax_2 = sub_1423de050()
void var_208
int64_t* rax_3 = sub_140aae2b0(&var_208, &arg1[1])
int128_t zmm2 = data_14399f5e0
int32_t var_1b0
int32_t var_1b0_1 = var_1b0 & 0xfffffffc
int32_t var_1ac
int32_t var_1ac_1 = var_1ac & 0xfffffffe
int32_t var_1e8 = (*arg1).d
int64_t var_1e0 = 0
int32_t var_1e4 = *(arg1 + 4)
uint128_t var_1c8 = data_14399f5c0
char var_1d8 = 0
int64_t var_1d0 = 0
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x20)
void** const var_1f0 = &data_14328aa28
uint128_t zmm0_1 = zx.o(data_143dbb1f0)
uint128_t var_178 = _mm_unpacklo_pd(zmm0_1, zmm0_1.q)
int32_t var_1b8 = 0
int32_t var_1b4 = 0x3f800000
int16_t var_168 = 0
int128_t var_188 = zmm2
char var_166 = 0
int128_t var_164 = zmm2
char var_154 = 1
void** var_148
sub_1423faad0(&var_148, arg1, &data_143dbb1f0, arg3)
int32_t var_150 = 0x3f800000
int32_t var_14c = 0x3f800000
int128_t var_1c8_1 = *arg3
var_1e0:4.d = 2
var_1f0 = &data_14328aa70
int64_t var_c0 = *rax_3
void* rax_5 = rax_3[1]
void* var_b8 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int32_t var_b0 = rax_3[2].d
int64_t var_a8 = rax_2
char var_50 = 0
var_1e0:4.d = 2
int64_t* var_200

if (var_200 != 0)
    var_200[1].d -= 1
    
    if (var_200[1].d == 1)
        (**var_200)(var_200)
        int32_t rdi_1 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_200 + 8))(var_200, zx.q(rdi_1))

sub_142409810(arg2, &var_1f0)
int64_t result = sub_141fa61e0(&var_1f0)

if (var_220 != 0)
    result = sub_140a74f90(var_220)

__security_check_cookie(rax_1 ^ &var_288)
return result

// 函数: sub_142341ea0
// 地址: 0x142341ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t var_54
int32_t var_54_1 = var_54 & 0xffffff00
int64_t var_100 = 0
int64_t var_f8 = 0
char var_e8 = 0
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x88)
char var_108 = 1
int32_t var_58 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_108)
sub_140597700(&var_108)
sub_140d96150(arg1 + 0x120, arg3)
int128_t zmm6 = sub_142348be0(arg1 - 0xd0, arg3, arg4)
int64_t* r12 = *(arg1 - 0x98)

if (r12 != 0)
    int64_t rax_2 = *(arg1 + 0x118)
    int32_t rbx_1 = *(arg4 + 0x54)
    int32_t rdi_1 = *(arg4 + 0x50)
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_2.d))
    int128_t var_38_1 = zmm6
    zmm6 = *(arg4 + 0x58)
    int32_t rsi_1 = *(arg4 + 0xc)
    int32_t var_118 = zmm0_1.d
    int32_t var_114_1 = _mm_cvtepi32_ps(zx.o((rax_2 u>> 0x20).d)).d
    void var_48
    int64_t* rax_4 = sub_140b21590(&var_48)
    void* rdx_3 = arg1 - 0xc8
    
    if (arg1 == 0xd0)
        rdx_3 = nullptr
    
    if ((*(*r12 + 0x60))(*(arg1 - 0x98), rdx_3, zx.q(rsi_1), zx.q(rdi_1), 1, &var_118, zmm6.d, 
            *rax_4, rbx_1) == 0)
        int32_t var_54_2 = var_54_1 & 0xffffff00
        var_108 = 0
        int64_t var_100_1 = 0
        int64_t var_f8_1 = 0
        char var_e8_1 = 0
        int64_t var_e0_1
        __builtin_memset(&var_e0_1, 0, 0x88)
        int32_t var_58_1 = 0x20702
        sub_1405979f0(arg1 + 0x10, &var_108)
        sub_140597700(&var_108)

sub_140596b00(arg2, arg1 + 0x10)
__security_check_cookie(rax_1 ^ &var_168)
return arg2

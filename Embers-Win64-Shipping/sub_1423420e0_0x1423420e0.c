// 函数: sub_1423420e0
// 地址: 0x1423420e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
char var_128 = 1
int64_t var_120 = 0
int64_t var_118 = 0
char var_108 = 0
int64_t var_100
__builtin_memset(&var_100, 0, 0x88)
int32_t var_78 = 0x20702
sub_140e54f20(arg1 + 0x10, &var_128)
sub_140597700(&var_128)
*(arg1 + 0x234) += 1
sub_140d96150(arg1 + 0x120, arg3)
int128_t zmm6 = sub_142348be0(arg1 - 0xd0, arg3, arg4)
int64_t* rax_5 = *(arg1 - 0x98)

if (rax_5 != 0)
    int64_t rax_6 = *(arg1 + 0x118)
    int32_t rbx_1 = *(arg4 + 0x54)
    int32_t rsi_1 = *(arg4 + 0xc)
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_6.d))
    int32_t rdi_1 = *(arg4 + 0x50)
    int128_t var_58_1 = zmm6
    zmm6 = *(arg4 + 0x58)
    int32_t var_140 = zmm0_1.d
    int32_t var_13c_1 = _mm_cvtepi32_ps(zx.o((rax_6 u>> 0x20).d)).d
    void* rdx_3 = arg1 - 0xc8
    void var_138
    int64_t rax_9 = *sub_140b21590(&var_138)
    
    if (arg1 == 0xd0)
        rdx_3 = nullptr
    
    if ((*(*rax_5 + 0x60))(*(arg1 - 0x98), rdx_3, zx.q(rsi_1), zx.q(rdi_1), 0, &var_140, zmm6.d, 
            rax_9, rbx_1) == 0)
        int32_t var_74
        int32_t var_74_2 = ((var_74 & 0xffffff40) | 0x40) & 0xffffff00
        var_128 = 0
        int64_t var_120_1 = 0
        int64_t var_118_1 = 0
        char var_108_1 = 0
        int64_t var_100_1
        __builtin_memset(&var_100_1, 0, 0x88)
        int32_t var_78_1 = 0x20702
        sub_1405979f0(arg1 + 0x10, &var_128)
        sub_140597700(&var_128)
    else
        int64_t* rcx_7 = *(arg1 - 0x98)
        
        if ((*(*rcx_7 + 0x180))(rcx_7) == 3)
            int64_t* var_148
            var_148.d = int.d(fconvert.t(*(arg4 + 0x18)))
            var_148:4.d = int.d(fconvert.t(*(arg4 + 0x1c)))
            sub_1405979f0(arg1 + 0x10, sub_14232f2c0(arg1 - 0xd0, &var_128, var_148, 0))
            sub_140597700(&var_128)

sub_140596b00(arg2, arg1 + 0x10)
__security_check_cookie(rax_1 ^ &var_198)
return arg2
